#include "BinaryTree.h"
#include <queue>

using namespace std;

void Add(node* t)
{
	
}

void linkSameLevel(node* t)
{
	std::queue<node*> _queTree;
	_queTree.push(t);

	std::queue<node*> _queTreeTemp;
	while (_queTree.empty())
	{
		while (_queTree.empty())
		{
			node* _temp = _queTree.front();
			_queTree.pop();

			if (_temp->left)
			{
				_queTreeTemp.push(_temp->left);
			}
			if (_temp->right)
			{
				_queTreeTemp.push(_temp->right);
			}
		}

		int _count = _queTreeTemp.size();
		for (int i = 0; i < _count; i++)
		{
			_queTree.push(_queTreeTemp.front() + i);
		}

		while (_queTreeTemp.size() > 1)
		{
			node* _temp = _queTreeTemp.front();
			_queTreeTemp.pop();
			_temp->level = _queTreeTemp.front()->level;
		}
		_queTreeTemp.pop();
	}
}