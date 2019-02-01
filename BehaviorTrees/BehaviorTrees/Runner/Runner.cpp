#include <iostream>
using std::cout; using std::endl;

//Add to files using behavior tree
#include "BTLibrary.h"


int main()
{
	BehaviorTrees::BehaviorTree tree = BehaviorTrees::BehaviorTree();
	tree.root = new CompositeNode;
	tree.root->status = tree.root->RUNNING;
	tree.StartBehaviorTree();

    return 0;
}

