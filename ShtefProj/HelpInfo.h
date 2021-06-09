#pragma once

namespace ShtefProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для HelpInfo
	/// </summary>
	public ref class HelpInfo : public System::Windows::Forms::Form
	{
	public:
		HelpInfo(void)
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
		~HelpInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->забронюватиНомерToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->інформаціяПроНомерToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->довідкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->довідкаToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(702, 24);
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
			// HelpInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(702, 420);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"HelpInfo";
			this->Text = L"HelpInfo";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
