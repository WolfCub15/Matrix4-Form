#pragma once
#include<istream>
#include<ostream>
template<class T>
class TVector {
private:
	T *mem;
	int size;//размер вектора
	int start; // индекс первого первого элемента
public:
	TVector<T>(int _size = 0, int _start = 0);
	~TVector<T>();
	TVector<T>(const TVector<T> & tmp);
	TVector<T> &operator=(const TVector<T> & tmp);
	TVector<T> operator +(const TVector<T> &tmp);
	TVector<T> operator -(const TVector<T> &tmp);
	TVector<T> operator *(const T k);
	T operator *(const TVector<T> & tmp);
	int get_start() {
		return this->start;
	}
	T & operator[](const int k) {
		if ((k - start) < 0 || (k - start) >= size) throw - 1;
		return mem[k - this->start];
	}
	friend std::istream & operator >> (std::istream & in, const TVector<T> & tmp) {
		for (int i = 0; i < tmp.size; i++) {
			in >> tmp.mem[i];
		}
		return in;
	}
	friend std::ostream &operator<<(std::ostream & out, const TVector<T> &tmp) {
		for (int i = 0; i < tmp.size; i++) {
			out << T(tmp.mem[i]) << ' ';
		}
		return out;
	}
};

template<class T>
inline TVector<T>::TVector(int _size, int _start) {
	size = _size;
	start = _start;
	mem = new T[size];
	for (int i = 0; i < size; i++) {
		mem[i] = T(0);
	}
}

template<class T>
inline TVector<T>::~TVector() {
	delete[]mem;
}

template<class T>
inline TVector<T>::TVector(const TVector<T>& tmp) {
	size = tmp.size;
	start = tmp.start;
	mem = new T[size];
	for (int i = 0; i < size; i++) {
		mem[i] = tmp.mem[i];
	}
}

template<class T>
inline TVector<T>& TVector<T>::operator=(const TVector<T>& tmp) {
	if (this == &tmp) return *this;
	if (size != tmp.size) {
		if (size) {
			delete[] mem;
			size = 0;
		}
		size = tmp.size;
	}
	mem = new T[size];
	start = tmp.start;
	for (int i = 0; i < size; i++) {
		mem[i] = tmp.mem[i];
	}
	return *this;
}

template<class T>
inline TVector<T> TVector<T>::operator+(const TVector<T>& tmp) {
	if (this->size != tmp.size || this->start != tmp.start) throw - 1;
	TVector<T> res(this->size, this->start);
	for (int i = 0; i < tmp.size; i++) {
		res.mem[i] = this->mem[i] + tmp.mem[i];
	}
	return res;
}

template<class T>
inline TVector<T> TVector<T>::operator-(const TVector<T>& tmp) {
	if (this->size != tmp.size || this->start != tmp.start) throw - 1;
	TVector<T> res(this->size, this->start);
	for (int i = 0; i < tmp.size; i++) {
		res.mem[i] = this->mem[i] - tmp.mem[i];
	}
	return res;
}

template<class T>
inline TVector<T> TVector<T>::operator*(const T k) {
	TVector<T> res(*this);
	for (int i = 0; i < size; i++) {
		res.mem[i] *= k;
	}
	return res;
}

template<class T>
inline T TVector<T>::operator*(const TVector<T>& tmp) {
	if (this->size != tmp.size || this->start != tmp.start) throw - 1;
	T res = 0;
	for (int i = 0; i < tmp.size; i++) {
		res += T(mem[i] * tmp.mem[i]);
	}
	return res;
}
