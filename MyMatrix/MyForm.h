#pragma once
#include "TMatrix.h"
TMatrix<int> aM;
TMatrix<int> bM;
TMatrix<int> resultM;
namespace MyMatrix {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridViewA;
	protected:


	private: System::Windows::Forms::Button^  result;
	private: System::Windows::Forms::Button^  sum;
	private: System::Windows::Forms::Button^  subtraction;
	private: System::Windows::Forms::Button^  multiplication;
	private: System::Windows::Forms::Button^  multiplication2;
	private: System::Windows::Forms::TextBox^  sizeMatrix;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  sizeGo;
	private: System::Windows::Forms::Button^  exit;
	private: System::Windows::Forms::DataGridView^  dataGridViewB;
	private: System::Windows::Forms::DataGridView^  dataGridViewRes;
	private: System::Windows::Forms::TextBox^  k;



	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridViewA = (gcnew System::Windows::Forms::DataGridView());
			this->result = (gcnew System::Windows::Forms::Button());
			this->sum = (gcnew System::Windows::Forms::Button());
			this->subtraction = (gcnew System::Windows::Forms::Button());
			this->multiplication = (gcnew System::Windows::Forms::Button());
			this->multiplication2 = (gcnew System::Windows::Forms::Button());
			this->sizeMatrix = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->sizeGo = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->dataGridViewB = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewRes = (gcnew System::Windows::Forms::DataGridView());
			this->k = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewRes))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridViewA
			// 
			this->dataGridViewA->AllowUserToAddRows = false;
			this->dataGridViewA->AllowUserToDeleteRows = false;
			this->dataGridViewA->AllowUserToResizeColumns = false;
			this->dataGridViewA->AllowUserToResizeRows = false;
			this->dataGridViewA->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridViewA->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridViewA->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->dataGridViewA->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewA->ColumnHeadersVisible = false;
			this->dataGridViewA->Location = System::Drawing::Point(12, 84);
			this->dataGridViewA->MultiSelect = false;
			this->dataGridViewA->Name = L"dataGridViewA";
			this->dataGridViewA->RowHeadersVisible = false;
			this->dataGridViewA->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridViewA->RowTemplate->Height = 24;
			this->dataGridViewA->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridViewA->Size = System::Drawing::Size(312, 322);
			this->dataGridViewA->TabIndex = 0;
			this->dataGridViewA->UseWaitCursor = true;
			// 
			// result
			// 
			this->result->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result->Location = System::Drawing::Point(777, 213);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(75, 73);
			this->result->TabIndex = 3;
			this->result->Text = L"=";
			this->result->UseVisualStyleBackColor = false;
			this->result->Click += gcnew System::EventHandler(this, &MyForm::result_Click);
			// 
			// sum
			// 
			this->sum->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->sum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sum->Location = System::Drawing::Point(348, 95);
			this->sum->Name = L"sum";
			this->sum->Size = System::Drawing::Size(75, 73);
			this->sum->TabIndex = 4;
			this->sum->Text = L"+";
			this->sum->UseVisualStyleBackColor = false;
			this->sum->Click += gcnew System::EventHandler(this, &MyForm::sum_Click);
			// 
			// subtraction
			// 
			this->subtraction->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->subtraction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->subtraction->Location = System::Drawing::Point(348, 174);
			this->subtraction->Name = L"subtraction";
			this->subtraction->Size = System::Drawing::Size(75, 73);
			this->subtraction->TabIndex = 5;
			this->subtraction->Text = L"-";
			this->subtraction->UseVisualStyleBackColor = false;
			this->subtraction->Click += gcnew System::EventHandler(this, &MyForm::subtraction_Click);
			// 
			// multiplication
			// 
			this->multiplication->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->multiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->multiplication->Location = System::Drawing::Point(348, 253);
			this->multiplication->Name = L"multiplication";
			this->multiplication->Size = System::Drawing::Size(75, 73);
			this->multiplication->TabIndex = 6;
			this->multiplication->Text = L"*";
			this->multiplication->UseVisualStyleBackColor = false;
			this->multiplication->Click += gcnew System::EventHandler(this, &MyForm::multiplication_Click);
			// 
			// multiplication2
			// 
			this->multiplication2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->multiplication2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->multiplication2->Location = System::Drawing::Point(348, 333);
			this->multiplication2->Name = L"multiplication2";
			this->multiplication2->Size = System::Drawing::Size(75, 73);
			this->multiplication2->TabIndex = 7;
			this->multiplication2->Text = L"*k";
			this->multiplication2->UseVisualStyleBackColor = false;
			this->multiplication2->Click += gcnew System::EventHandler(this, &MyForm::multiplication2_Click);
			// 
			// sizeMatrix
			// 
			this->sizeMatrix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sizeMatrix->Location = System::Drawing::Point(858, 12);
			this->sizeMatrix->Multiline = true;
			this->sizeMatrix->Name = L"sizeMatrix";
			this->sizeMatrix->Size = System::Drawing::Size(178, 48);
			this->sizeMatrix->TabIndex = 8;
			this->sizeMatrix->TextChanged += gcnew System::EventHandler(this, &MyForm::sizeMatrix_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(794, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 25);
			this->label1->TabIndex = 9;
			this->label1->Text = L"size:";
			// 
			// sizeGo
			// 
			this->sizeGo->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->sizeGo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sizeGo->Location = System::Drawing::Point(1062, 12);
			this->sizeGo->Name = L"sizeGo";
			this->sizeGo->Size = System::Drawing::Size(49, 48);
			this->sizeGo->TabIndex = 10;
			this->sizeGo->Text = L"go";
			this->sizeGo->UseVisualStyleBackColor = false;
			this->sizeGo->Click += gcnew System::EventHandler(this, &MyForm::sizeGo_Click);
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit->Location = System::Drawing::Point(1098, 427);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(72, 46);
			this->exit->TabIndex = 11;
			this->exit->Text = L"exit";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &MyForm::exit_Click);
			// 
			// dataGridViewB
			// 
			this->dataGridViewB->AllowUserToAddRows = false;
			this->dataGridViewB->AllowUserToDeleteRows = false;
			this->dataGridViewB->AllowUserToResizeColumns = false;
			this->dataGridViewB->AllowUserToResizeRows = false;
			this->dataGridViewB->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridViewB->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridViewB->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->dataGridViewB->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewB->ColumnHeadersVisible = false;
			this->dataGridViewB->Location = System::Drawing::Point(436, 85);
			this->dataGridViewB->MultiSelect = false;
			this->dataGridViewB->Name = L"dataGridViewB";
			this->dataGridViewB->RowHeadersVisible = false;
			this->dataGridViewB->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridViewB->RowTemplate->Height = 24;
			this->dataGridViewB->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridViewB->Size = System::Drawing::Size(312, 322);
			this->dataGridViewB->TabIndex = 12;
			this->dataGridViewB->UseWaitCursor = true;
			// 
			// dataGridViewRes
			// 
			this->dataGridViewRes->AllowUserToAddRows = false;
			this->dataGridViewRes->AllowUserToDeleteRows = false;
			this->dataGridViewRes->AllowUserToResizeColumns = false;
			this->dataGridViewRes->AllowUserToResizeRows = false;
			this->dataGridViewRes->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridViewRes->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridViewRes->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->dataGridViewRes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewRes->ColumnHeadersVisible = false;
			this->dataGridViewRes->Location = System::Drawing::Point(860, 85);
			this->dataGridViewRes->MultiSelect = false;
			this->dataGridViewRes->Name = L"dataGridViewRes";
			this->dataGridViewRes->ReadOnly = true;
			this->dataGridViewRes->RowHeadersVisible = false;
			this->dataGridViewRes->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridViewRes->RowTemplate->Height = 24;
			this->dataGridViewRes->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridViewRes->Size = System::Drawing::Size(312, 322);
			this->dataGridViewRes->TabIndex = 13;
			this->dataGridViewRes->UseWaitCursor = true;
			// 
			// k
			// 
			this->k->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->k->Location = System::Drawing::Point(348, 425);
			this->k->Multiline = true;
			this->k->Name = L"k";
			this->k->Size = System::Drawing::Size(75, 30);
			this->k->TabIndex = 14;
			this->k->TextChanged += gcnew System::EventHandler(this, &MyForm::k_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1184, 492);
			this->Controls->Add(this->k);
			this->Controls->Add(this->dataGridViewRes);
			this->Controls->Add(this->dataGridViewB);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->sizeGo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->sizeMatrix);
			this->Controls->Add(this->multiplication2);
			this->Controls->Add(this->multiplication);
			this->Controls->Add(this->subtraction);
			this->Controls->Add(this->sum);
			this->Controls->Add(this->result);
			this->Controls->Add(this->dataGridViewA);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewRes))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		int n;
	private: System::Void dataGridViewA_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void dataGridViewB_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void dataGridViewRes_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void sizeMatrix_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void sizeGo_Click(System::Object^  sender, System::EventArgs^  e) {
		n = Convert::ToInt32(sizeMatrix->Text);
		//sizeMatrix->Enabled = false;
		dataGridViewA->Rows->Clear();
		dataGridViewA->Columns->Clear();
		dataGridViewB->Rows->Clear();
		dataGridViewB->Columns->Clear();
		dataGridViewRes->Rows->Clear();
		dataGridViewRes->Columns->Clear();
		aM = TMatrix<int>(n);
		bM = TMatrix<int>(n);
		resultM = TMatrix<int>(n);
		dataGridViewA->ColumnCount = n;
		dataGridViewA->RowCount = n;
		dataGridViewB->ColumnCount = n;
		dataGridViewB->RowCount = n;
		dataGridViewRes->ColumnCount = n;
		dataGridViewRes->RowCount = n;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				dataGridViewA->Rows[i]->Cells[j]->Value = "0";
				dataGridViewRes->Rows[i]->Cells[j]->Value = "0";
				dataGridViewA->Rows[i]->Cells[j]->ReadOnly = true;
				dataGridViewB->Rows[i]->Cells[j]->Value = "0";
				dataGridViewB->Rows[i]->Cells[j]->ReadOnly = true;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				int m = Convert::ToInt32(dataGridViewA->Rows[i]->Cells[j]->Value);
				aM[i][j] = m;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				int m = Convert::ToInt32(dataGridViewB->Rows[i]->Cells[j]->Value);
				bM[i][j] = m;
			}
		}
	}
	private: System::Void sum_Click(System::Object^  sender, System::EventArgs^  e) {
		resultM = aM + bM;
	}
	private: System::Void subtraction_Click(System::Object^  sender, System::EventArgs^  e) {
		//resultM = aM - bM;
	}
	private: System::Void multiplication_Click(System::Object^  sender, System::EventArgs^  e) {
		//resultM = aM * bM;
	}
	private: System::Void multiplication2_Click(System::Object^  sender, System::EventArgs^  e) {
		//int count = Convert::ToInt32(k->Text);
		//resultM = aM * count;
	}
	private: System::Void result_Click(System::Object^  sender, System::EventArgs^  e) {
		TMatrix<int> RES(resultM);
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
					dataGridViewRes->Rows[i]->Cells[j]->Value = Convert::ToInt32(RES[i][j]);
				}
		}
	}
	private: System::Void exit_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}

	private: System::Void k_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
