#define _CRT_SECURE_NO_WARNINGS 1
#include"BianryTreeNode.h"

BTNode* BuyNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	assert(node);

	node->data = x;
	node->left = NULL;
	node->right = NULL;

	return node;
}
BTNode* CreatBinaryTree()
{
	BTNode* nodeA = BuyNode('A');
	BTNode* nodeB = BuyNode('B');
	BTNode* nodeC = BuyNode('C');
	BTNode* nodeD = BuyNode('D');
	BTNode* nodeE = BuyNode('E');
	BTNode* nodeF = BuyNode('F');
	BTNode* nodeG = BuyNode('G');
	BTNode* nodeH = BuyNode('H');

	nodeA->left = nodeB;
	nodeA->right = nodeC;
	nodeB->left = nodeD;
	nodeB->right = nodeE;
	nodeE->right = nodeH;
	nodeC->left = nodeF;	
	nodeC->right = nodeG;

	return nodeA;
}

void PreOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("# ");
		return;
	}

	printf("%c ",root->data);
	PreOrder(root->left);
	PreOrder(root->right);
}

int BTSize(BTNode* root)
{
	return root == NULL ? 0 :
		BTSize(root->left) + BTSize(root->right) + 1;
}

int BTLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
		return 1;
	return BTLeafSize(root->left) + BTLeafSize(root->right)+1;
}

BTNode* BTFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
		return NULL;

	BTNode* ret1=BTFind(root->left, x);
	if (ret1)
		return ret1;
	BTNode* ret2=BTFind(root->right, x);
	if (ret2)
		return ret2;
	return NULL;
}

int BinaryTreeLevelKSize(BTNode* root, int k)
{
	assert(k >= 1);
	if (root == NULL)
		return 0;
	if (k == 1)
	{
		return 1;
	}


	return 	BinaryTreeLevelKSize(root->right, k - 1)
		  + BinaryTreeLevelKSize(root->left, k - 1);
}