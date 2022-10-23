#include"BinarySearchTree.h"
using namespace PanLQ;

int main()
{
	BSTree<int> A;
	A.insert(3);
	A.insert(5);
	A.insert(6);
	A.insert(2);
	A.insert(6);


	A.Inorder();
	return 0;
}