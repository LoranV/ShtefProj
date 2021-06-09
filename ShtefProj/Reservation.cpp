#include "Reservation.h"

namespace ShtefProj {
	System::Void Reservation::button1_Click(System::Object^ sender, System::EventArgs^ e){
		parentForm = gcnew MainWindow();
		parentForm->Show();
		this->Hide();
	};
}