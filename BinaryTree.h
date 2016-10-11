#pragma once

#include <iostream>

using namespace std;

struct node
{
	node* left;
	node* right;
	node* level;
	int n;

	node()
	{
		level		= NULL;
		left		= NULL;
		right		= NULL;
		n			= 0;
	}

};

class BinaryTree
{
public:
	BinaryTree();
	~BinaryTree();

	void linkSameLevel(node* node);
	void Add(node& node);
	void OutputTree();

private:
	node* m_nodeRoot;
	node* m_nodeHide;
};

