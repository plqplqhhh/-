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
BTNode* BuyNode(BTDataType x)
{
    BTNode* node = (BTNode*)malloc(sizeof(BTNode));
    assert(node);

    node->data = x;
    node->left = NULL;
    node->right = NULL;

    return node;
}

BTNode* CreateTree(char* str, int* pi)
{
    if (str[*pi] == '#')
    {
        (*pi)++;
        return NULL;
    }
    BTNode* root = BuyNode(str[(*pi)++]);
    root->left = CreateTree(str, pi);
    root->right = CreateTree(str, pi);
    return root;
}
void InOrder(BTNode* root)
{
    if (root == NULL)
        return;
    InOrder(root->left);
    printf("%c ", root->data);
    InOrder(root->right);
}

int main()
{
    char str[100] = { "abc##de#g##f###" };
    //scanf("%s", str);
    int i = 0;
    BTNode* root = CreateTree(str, &i);
    InOrder(root);
    return 0;
}