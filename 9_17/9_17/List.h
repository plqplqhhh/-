#pragma once
#include<iostream>
#include<assert.h>
using namespace std;
namespace PanLQ
{
	template<class T>//单个节点
	struct list_node
	{
		T _data;
		list_node<T>* _next;
		list_node<T>* _prev;

		list_node(const T& x=T())
			:_data(x)
			,_next(nullptr)
			,_prev(nullptr)
		{}
	};

	template<class T,class Ref,class Ptr>
	struct __list_iterator
	{
		typedef list_node<T> Node;
		typedef __list_iterator<T, Ref, Ptr> iterator;
		Node* _node;
		__list_iterator(Node* node)
			:_node(node)
		{}

		//运算符重载
		Ref operator*() { return _node->_data; }
		Ptr operator->() { return &(operator*()); }

		bool operator !=(const iterator& it)const { return _node != it._node; }
		bool operator ==(const iterator& it)const { return _node == it._node; }

		iterator& operator++() 
		{ 
			_node = _node->_next;
			return *this; 
		}
		iterator& operator++(int) 
		{
			iterator tmp(*this);
			_node = _node->_next;
			return tmp; 
		}
		iterator& operator--()
		{
			_node = _node->_prev;
			return *this; 
		}
		iterator& operator--(int)
		{ 
			iterator tmp;
			_node = _node->_prev; 
			return tmp;
		}

	};

	template<class T>//链表
	class list
	{
		typedef list_node<T> Node;
	public:
		typedef __list_iterator<T, T&, T*> iterator;
		typedef __list_iterator<T, const T&, const T*> const_iterator;
		//迭代器
		iterator begin() { return iterator(_head->_next);}
		iterator end() { return iterator(_head);}
		const_iterator begin()const { return iterator(_head->_next);}
		const_iterator end()const { return iterator(_head);}
		//初始化
		list()
		{
			_head = new Node;
			_head->_next = _head;
			_head->_prev = _head;
		}
		//中间插入
		iterator insert(iterator pos, const T& x)
		{
			Node* cur = pos->_node;
			Node* prev = cur->_prev;
			Node* newnode = new Node(x);
			prev->_next = newnode;
			newnode->_prev = prev;
			newnode->_next =newnode;
			return iterator(newnode);
		}
		//删除
		iterator erase(iterator pos)
		{
			assert(pos != end());
			Node* cur = pos._node;
			Node* prev = cur->_prev;
			Node* next = cur->_next;
			prev->_next = next;
			next->_prev = prev;
			delete cur;
		}
		void push_back(const T& x)
		{
			Node* tail = _head->_prev;
			Node *nownode= new Node(x);
			tail->_next = nownode;
			nownode->_prev = tail;
			nownode->_next = _head;			
			_head->_prev = nownode;
		}
		void push_front(const T& x) { insert(begin(), x); }
		void pop_back() { erase(--end); }
		void pop_front() { erase(begin); }
	private:
		Node* _head; 
	};

	void test()
	{
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);
		lt.push_back(5);
		list<int>::iterator it = lt.begin();
		while (it != lt.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;

		for (auto e : lt)
		{
			cout << e << " ";
		}
		cout << endl;
	}
}