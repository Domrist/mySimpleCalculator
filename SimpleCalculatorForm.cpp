#include "SimpleCalculatorForm.h"
#include <Windows.h>

using namespace ProjectCalculator2;

void main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	SimpleCalculatorForm myForm;

	Application::Run(% myForm);
}