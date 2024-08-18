#pragma once
#include <iostream>
#include <stack>
using namespace std;

class clsMyString
{
private:
	string _value = "";
	stack <string> _UndoStack;
	stack <string> _RedoStack;

public:

	void SetValue(string value)
	{
		_UndoStack.push(_value);
		_value = value;
	}
	string GetValue()
	{
		return _value;
	}
	__declspec(property(get = GetValue, put = SetValue)) string Value;

	void Undo()
	{
		if (_UndoStack.empty()) return;

		_RedoStack.push(_value);
		_value = _UndoStack.top();
		_UndoStack.pop();

	}

	void Redo()
	{
		if (_RedoStack.empty()) return;

		_UndoStack.push(_value);
		_value = _RedoStack.top();
		_RedoStack.pop();

	}


};

