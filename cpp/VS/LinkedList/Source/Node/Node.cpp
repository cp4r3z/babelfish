#include "Node.h"

using namespace Nodes;

void Nodes::NodeInsertAtHead(pNode &head, int data)
{
	pNode pNew = new Node;
	pNew->data = data;
	pNew->link = head;
	head = pNew;
}