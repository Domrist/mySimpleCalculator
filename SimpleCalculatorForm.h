#pragma once

namespace ProjectCalculator2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class SimpleCalculatorForm : public System::Windows::Forms::Form
	{
	public:
		SimpleCalculatorForm(void)
		{
			InitializeComponent();
		}

	protected:
		~SimpleCalculatorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(23, 68);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(161, 68);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Playbill", 50.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(36, 118);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 70);
			this->button1->TabIndex = 2;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SimpleCalculatorForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(127, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"label1";
			// 
			// SimpleCalculatorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"SimpleCalculatorForm";
			this->Text = L"SimpleCalculatorForm";
			this->Load += gcnew System::EventHandler(this, &SimpleCalculatorForm::SimpleCalculatorForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SimpleCalculatorForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//1) —читываем значени€ с полей ввода
		
		double firstDigit = System::Convert::ToDouble(this->textBox1->Text);
		double secondDigit = System::Convert::ToDouble(this->textBox2->Text);
		
		double finalSumm = firstDigit + secondDigit;

		System::String^ resultString = System::Convert::ToString(finalSumm);
		this->label1->Text = resultString;
	}
	};
}
