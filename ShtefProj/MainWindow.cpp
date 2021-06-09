#include "MainWindow.h"
#include "Reservation.h"
#include "RoomInfo.h"
#include "CallInfo.h"
#include "HelpInfo.h"

using namespace System;
using namespace System::Windows::Forms;
namespace ShtefProj {
    System::Void MainWindow::button1_Click(System::Object^ sender, System::EventArgs^ e) {
        reservation = gcnew Reservation();
        reservation->Show();
        this->Hide();
    };
    System::Void MainWindow::çàáðîíþâàòèÍîìåðToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        reservation = gcnew Reservation();
        reservation->Show();
        this->Hide();
    }
    System::Void MainWindow::³íôîðìàö³ÿÏðîÍîìåðToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        roomInfo = gcnew RoomInfo();
        roomInfo->Show();
        this->Hide();
    }
    System::Void MainWindow::äîâ³äêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        callInfo = gcnew CallInfo;
        callInfo->Show();
        this->Hide();
    }
    System::Void MainWindow::äîâ³äêàToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
        helpInfo = gcnew HelpInfo;
        helpInfo->Show();
        this->Hide();
    }
}

[STAThreadAttribute]
void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ShtefProj::MainWindow form;
    Application::Run(% form);
}