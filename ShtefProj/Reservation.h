#pragma once
#include "MainWindow.h"
namespace ShtefProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class MainWindow;

	/// <summary>
	/// Сводка для Reservation
	/// </summary>
	public ref class Reservation : public System::Windows::Forms::Form
	{
	public:
		Reservation(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::Label^ label7;
	public:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button4;

	public:MainWindow^ parentForm;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Reservation()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Reservation::typeid));
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label7->Location = System::Drawing::Point(32, 230);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 20);
			this->label7->TabIndex = 44;
			this->label7->Text = L"Ціна";
			this->textBox1->Location = System::Drawing::Point(78, 232);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 20);
			this->textBox1->TabIndex = 43;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(218, 215);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 51);
			this->button2->TabIndex = 42;
			this->button2->Text = L"Дізнатись ціну";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Reservation::button2_Click);
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(11, 11);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 51);
			this->button1->TabIndex = 41;
			this->button1->Text = L"Назад";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Reservation::button1_Click);
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"1", L"2", L"3", L"4", L"5", L"6" });
			this->comboBox3->Location = System::Drawing::Point(162, 160);
			this->comboBox3->Margin = System::Windows::Forms::Padding(2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(194, 21);
			this->comboBox3->TabIndex = 40;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Location = System::Drawing::Point(31, 120);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 20);
			this->label5->TabIndex = 39;
			this->label5->Text = L"Тип номеру";
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Одномісний номер «Економ» - 600грн/добу", L"Одномісний номер «Комфорт» - 880грн/добу",
					L"Двомісний номер «Комфорт» - 1050грн/добу", L"Тримісний номер «Стандарт» - 1150грн/добу", L"Тримісний номер «Сімейний» - 1480грн/добу",
					L"Однокімнатний номер «Люкс» - 1890грн/добу", L"Двокімнатний номер «Люкс» - 1980грн/добу"
			});
			this->comboBox1->Location = System::Drawing::Point(162, 119);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(194, 21);
			this->comboBox1->TabIndex = 37;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Location = System::Drawing::Point(31, 161);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(123, 20);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Кількість дітей";
			this->dateTimePicker2->Location = System::Drawing::Point(162, 80);
			this->dateTimePicker2->Margin = System::Windows::Forms::Padding(2);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(194, 20);
			this->dateTimePicker2->TabIndex = 34;
			this->dateTimePicker2->Value = System::DateTime(2021, 6, 8, 18, 24, 12, 0);
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(31, 80);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 20);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Дата виїзду";
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(31, 35);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 20);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Дата заїзду";
			this->dateTimePicker1->Location = System::Drawing::Point(162, 35);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(194, 20);
			this->dateTimePicker1->TabIndex = 31;
			this->dateTimePicker1->Value = System::DateTime(2021, 6, 8, 18, 24, 12, 0);
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(323, 372);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(157, 46);
			this->button3->TabIndex = 45;
			this->button3->Text = L"Забронювати";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Reservation::button3_Click);
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->dateTimePicker1);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->dateTimePicker2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->comboBox3);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(202, 58);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(402, 287);
			this->panel1->TabIndex = 46;
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Location = System::Drawing::Point(202, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(402, 429);
			this->panel2->TabIndex = 45;
			this->panel2->Visible = false;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(12, 11);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 51);
			this->button5->TabIndex = 47;
			this->button5->Text = L"Назад";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Reservation::button5_Click);
			this->textBox5->Location = System::Drawing::Point(162, 242);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(140, 20);
			this->textBox5->TabIndex = 54;
			this->textBox4->Location = System::Drawing::Point(150, 206);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(152, 20);
			this->textBox4->TabIndex = 53;
			this->textBox3->Location = System::Drawing::Point(178, 165);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(124, 20);
			this->textBox3->TabIndex = 52;
			this->textBox2->Location = System::Drawing::Point(78, 126);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(224, 20);
			this->textBox2->TabIndex = 51;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label10->Location = System::Drawing::Point(17, 240);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(132, 20);
			this->label10->TabIndex = 50;
			this->label10->Text = L"Номер паспорту";
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label9->Location = System::Drawing::Point(17, 204);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(115, 20);
			this->label9->TabIndex = 49;
			this->label9->Text = L"Номер картки";
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label6->Location = System::Drawing::Point(17, 166);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(140, 20);
			this->label6->TabIndex = 48;
			this->label6->Text = L"Номер Телефону";
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(19, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 20);
			this->label3->TabIndex = 47;
			this->label3->Text = L"ПІБ";
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(121, 370);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(157, 46);
			this->button4->TabIndex = 46;
			this->button4->Text = L"Забронювати";
			this->button4->UseVisualStyleBackColor = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(819, 466);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Name = L"Reservation";
			this->Text = L"Reservation";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int^ days = dateTimePicker2->Value.Day - dateTimePicker1->Value.Day;
	switch (comboBox1->SelectedIndex)
	{
	case 0: {
		int^ price = 600*System::Convert::ToInt32(days);
		textBox1->Text = System::Convert::ToString(price);
		break;
	}
	case 1: {
		int^ price = 880 * System::Convert::ToInt32(days);
		textBox1->Text = System::Convert::ToString(price);
		break;
	}
	case 2: {
		int^ price = 1050 * System::Convert::ToInt32(days);
		textBox1->Text = System::Convert::ToString(price);
		break;
	}
	case 3: {
		int^ price = 1150 * System::Convert::ToInt32(days);
		textBox1->Text = System::Convert::ToString(price);
		break;
	}
	case 4: {
		int^ price = 1480 * System::Convert::ToInt32(days);
		textBox1->Text = System::Convert::ToString(price);
		break;
	}
	case 5: {
		int^ price = 1890 * System::Convert::ToInt32(days);
		textBox1->Text = System::Convert::ToString(price);
		break;
	}
	case 6: {
		int^ price = 1980 * System::Convert::ToInt32(days);
		textBox1->Text = System::Convert::ToString(price);
		break;
	}
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel2->Visible = true;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = true;
	panel2->Visible = false;
}
};
}
