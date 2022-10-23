#pragma once
#include<iostream>
using namespace std;

namespace PanLQ
{
	template<class K>
	struct BSTreeNode
	{
	
		BSTreeNode* _right;
		BSTreeNode* _left;
		K _key;

		BSTreeNode(const K& key)
			:_right(nullptr)
			, _left(nullptr)
			, _key(key)
		{}
	};

	template<class K>
	class BSTree
	{
		typedef BSTreeNode<K> Node;
	public:
		bool insert(const K& key)
		{
			if (_root == nullptr)
			{
				_root = new Node(key);
				return true;
			}
			else
			{
				Node* parent = nullptr;
				Node* cur = _root;
				while (cur)
				{
					if (key > cur->_key)
					{
						parent = cur;
						cur = cur->_right;
					}
					else if (key < cur->_key)
					{
							parent = cur;
							cur = cur->_left;
					}
					else { return false; }
				}
				cur = new Node(key);
				if (parent->_left == nullptr)
				{
					parent->_left = cur;
				}
				else
				{
					parent->_right = cur;
				}
				return true;
			}
		}

		
		void Inorder()
		{
			_InOrder(_root);
		}
		bool Destory(const K& key)
		{
			return _Destory(_root,key);
		}
	private:
		void _InOrder(Node* _root)
		{
			if (_root == nullptr)
			{
				return;
			}
			_InOrder(_root->_left);
			cout << _root->_key << " ";
			_InOrder(_root->_right);
		}
	private:
		Node* _root = nullptr;
	};
}