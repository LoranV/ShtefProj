#pragma once
#include "Reservation.h"
#include "RoomInfo.h"
#include "CallInfo.h"
#include "HelpInfo.h"
namespace ShtefProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class MainWindow;
	ref class Reservation;
	ref class RoomInfo;
	ref class CallInfo;
	ref class HelpInfo;
	/// <summary>
	/// ������ ��� MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	public: Reservation^ reservation;
	public: RoomInfo^ roomInfo;
	public: CallInfo^ callInfo;
	public: HelpInfo^ helpInfo;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem1;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(173, 102);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(473, 262);
			this->panel1->TabIndex = 3;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(177, 160);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 51);
			this->button1->TabIndex = 1;
			this->button1->Text = L"����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(52, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(383, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"����������� ����� ";
			this->menuStrip1->BackColor = System::Drawing::Color::Bisque;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->����������������ToolStripMenuItem,
					this->������������������ToolStripMenuItem, this->������ToolStripMenuItem, this->������ToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(819, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(133, 20);
			this->����������������ToolStripMenuItem->Text = L"����������� �����";
			this->����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::����������������ToolStripMenuItem_Click);
			this->������������������ToolStripMenuItem->Name = L"������������������ToolStripMenuItem";
			this->������������������ToolStripMenuItem->Size = System::Drawing::Size(146, 20);
			this->������������������ToolStripMenuItem->Text = L"���������� ��� �����";
			this->������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::������������������ToolStripMenuItem_Click);
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->������ToolStripMenuItem->Text = L"��������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::������ToolStripMenuItem_Click);
			this->������ToolStripMenuItem1->Name = L"������ToolStripMenuItem1";
			this->������ToolStripMenuItem1->Size = System::Drawing::Size(61, 20);
			this->������ToolStripMenuItem1->Text = L"������";
			this->������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainWindow::������ToolStripMenuItem1_Click);
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(819, 466);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->panel1);
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MainWindow::button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
};
}
