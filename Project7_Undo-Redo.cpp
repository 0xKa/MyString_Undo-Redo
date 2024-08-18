// Project7_Undo-Redo 
#include <iostream>
#include "clsMyString.h";

int main()
{
	clsMyString s1;

	cout << "s1 Value: " << endl;
	
	s1.Value = "Reda";
	cout << s1.Value << endl;
	
	s1.Value = "Bassam";
	cout << s1.Value << endl;
	
	s1.Value = "Bader";
	cout << s1.Value << endl;
	
	s1.Value = "Suliman";
	cout << s1.Value << endl;
	
	s1.Value = "Hilal";
	cout << s1.Value << endl;
	
	s1.Value = "000---000";
	cout << s1.Value << endl << endl;

	cout << "\n-------------------------------------\n\n";

	cout << "Current s1 Value: " << s1.Value << endl;

	s1.Undo();
	s1.Undo();
	s1.Undo();
	s1.Undo();
	s1.Undo();
	cout << "value after Undo 5 times: " << s1.Value << endl;

	s1.Redo();
	s1.Redo();
	cout << "value after Redo 2 times: " << s1.Value << endl;

	s1.Undo();
	s1.Undo();
	cout << "value after Undo  times: " << s1.Value << endl;

	system("pause>0");
	return 0;
}
