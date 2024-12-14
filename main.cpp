#include "classes.h"

int main()
{
	LinkedList<int> list;
	for (int i = 0; i < 10; i++)
	{
		if (i <= 4)
			list.AddToHead(5 - i);
		else if (i > 4)
			list.AddToTail(i + 1);
	}
	cout << "List: " << endl;
	list.Show();
	cout << endl;
	list.DeleteFromTail();
	list.DeleteAll();
	cout << "Empty list: " << endl;
	list.Show();
	cout << "Void..." << endl;
	return 0;
}