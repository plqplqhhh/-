#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef char BTDataType;

typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

BTNode* CreatBinaryTree();

void PreOrder(BTNode* root);		//前序遍历
void InOrder(BTNode* root);			//中序遍历
void PostOrder(BTNode* root);		//后序遍历

int BTSize(BTNode* root);			// 二叉树节点个数
int BTLeafSize(BTNode* root);		// 二叉树叶子节点个数

int BinaryTreeLevelKSize(BTNode* root, int k);//求k层

BTNode* BTFind(BTNode* root, BTDataType x);//查找

void Destory(BTNode** root);		//销毁


//// 层序遍历
//void BinaryTreeLevelOrder(BTNode* root);
//// 判断二叉树是否是完全二叉树
//int BinaryTreeComplete(BTNode* root);