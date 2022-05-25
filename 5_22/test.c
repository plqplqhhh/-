#define _CRT_SECURE_NO_WARNINGS 1
#include"BianryTreeNode.h"

void BTtest()
{
	BTNode* root = CreatBinaryTree();
	PreOrder(root);
	printf("\n");
	printf("size=%d\n", BTLeafSize(root));
	printf("levelsize=%d\n", BinaryTreeLevelKSize(root, 5));
}

int main()
{
	BTtest();
	return 0;
}