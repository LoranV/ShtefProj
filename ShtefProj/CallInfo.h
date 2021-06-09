#pragma once

namespace ShtefProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CallInfo
	/// </summary>
	public ref class CallInfo : public System::Windows::Forms::Form
	{
	public:
		CallInfo(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~CallInfo()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ забронюватиНомерToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ інформаціяПроНомерToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ довідкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ довідкаToolStripMenuItem1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CallInfo::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->забронюватиНомерToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->інформаціяПроНомерToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->довідкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->довідкаToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(171, 120);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(473, 262);
			this->panel1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(177, 160);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 51);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Тиць";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(52, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(383, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Забронювати номер ";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Bisque;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->забронюватиНомерToolStripMenuItem,
					this->інформаціяПроНомерToolStripMenuItem, this->довідкаToolStripMenuItem, this->довідкаToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(819, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// забронюватиНомерToolStripMenuItem
			// 
			this->забронюватиНомерToolStripMenuItem->Name = L"забронюватиНомерToolStripMenuItem";
			this->забронюватиНомерToolStripMenuItem->Size = System::Drawing::Size(133, 20);
			this->забронюватиНомерToolStripMenuItem->Text = L"Забронювати номер";
			// 
			// інформаціяПроНомерToolStripMenuItem
			// 
			this->інформаціяПроНомерToolStripMenuItem->Name = L"інформаціяПроНомерToolStripMenuItem";
			this->інформаціяПроНомерToolStripMenuItem->Size = System::Drawing::Size(146, 20);
			this->інформаціяПроНомерToolStripMenuItem->Text = L"Інформація про номер";
			// 
			// довідкаToolStripMenuItem
			// 
			this->довідкаToolStripMenuItem->Name = L"довідкаToolStripMenuItem";
			this->довідкаToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->довідкаToolStripMenuItem->Text = L"Контакти";
			// 
			// довідкаToolStripMenuItem1
			// 
			this->довідкаToolStripMenuItem1->Name = L"довідкаToolStripMenuItem1";
			this->довідкаToolStripMenuItem1->Size = System::Drawing::Size(61, 20);
			this->довідкаToolStripMenuItem1->Text = L"Довідка";
			// 
			// CallInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(819, 466);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->panel1);
			this->Name = L"CallInfo";
			this->Text = L"CallInfo";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
