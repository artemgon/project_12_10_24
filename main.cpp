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
	list.AddAtPos(100, 5);
	cout << "List after adding 100 at position 5: " << endl;
	list.Show();
	cout << endl;
	int result = list.FindNodePos(100);
	cout << "Position of 100: " << result << endl;
	cout << endl;
	list.ChangeNodesByValues(100, 200);
	cout << "List after changing 100 to 200: " << endl;
	list.Show();
	cout << endl;
	list.DeleteAtPos(5);
	list.ReverseList();
	list.Show();
	return 0;
}