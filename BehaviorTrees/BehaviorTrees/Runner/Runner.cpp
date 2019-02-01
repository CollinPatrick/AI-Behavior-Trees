#include <iostream>
using std::cout; using std::endl;

//Add to files using behavior tree
#include "BTLibrary.h"
using BehaviorTrees::CompositeNode; using BehaviorTrees::BehaviorTree;


int main()
{
	BehaviorTree tree = BehaviorTree();
	{
		CompositeNode *node = new CompositeNode;
		{
			tree.root = node;
			CompositeNode *comp1;
			node->branches.push_back(comp1 = new CompositeNode);
			{

			}
			node->branches.push_back(comp1 = new CompositeNode);
			{

			}
			node->branches.push_back(comp1 = new CompositeNode);
			{

			}
		}
	}
	tree.StartBehaviorTree();
	//tree.Action();

    return 0;
}

