#include "classes.h"

int main()
{
	StackList stack;
	for (int i = 0; i < 10; i++)
	{
		stack.push(10 - i);
	}
	cout << "Top element: " << stack.top() << endl;
	stack.pop();
	cout << endl;
	cout << "Stack after popping" << endl;
	stack.display();
	cout << endl;
	cout << "Size of stack: " << stack.size() << endl;
	cout << endl;
	bool variable = stack.isEmpty();
	cout << "It is " << boolalpha << variable << " that stack is empty" << endl;
	return 0;
}