#include "tree.h"
#define SIZE 7

int main()
{
	int tree[SIZE] = {9, 3, 2, 24, 1, 19, 8};

	cout << endl
		 << "Root: " << endl;
	root(tree, SIZE - 1);

	cout << endl
		 << endl
		 << "Leaves: " << endl;
	leaf(tree, 0, SIZE - 1);

	cout << endl
		 << endl
		 << "Level: " << endl
		 << level(tree, SIZE);

	cout << endl
		 << endl
		 << "Height: " << endl
		 << height(tree, SIZE);

		 cout << endl
		 << endl
		 << "Left Child: " << endl;
	left_child(tree, 0, SIZE - 1);

		cout << endl
		 << endl
		 << "Right Child: " << endl;
	right_child(tree, 0, SIZE - 1);

	cout << endl
		 << endl
		 << "Ancestor: " << endl;
	ancestor(tree, 6, SIZE - 1);

	cout << endl
		 << endl
		 << "Descendant: " << endl;
	descendant(tree, 0, SIZE - 1);

	cout << endl
		 << endl
		 << "Sibling: " << endl;
	sibling(tree, 0, SIZE - 1);

	cout << endl
		 << endl
		 << "Parent: " << endl;
	parent(tree, 4, SIZE - 1);


	cout << endl
		 << endl
		 << "Preorder: " << endl;
	preorder(tree, 0, SIZE - 1);

	cout << endl
		 << endl
		 << "Inorder: " << endl;
	inorder(tree, 0, SIZE - 1);

	cout << endl
		 << endl
		 << "Postorder: " << endl;
	postorder(tree, 0, SIZE - 1);

	return 0;
}
