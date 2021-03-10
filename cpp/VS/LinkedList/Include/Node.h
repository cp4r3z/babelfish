#pragma once

namespace Nodes {
	struct Node
	{
		int data;
		Node *link;
		// maybe use Next & Prev instead?
	};

	typedef Node *pNode; // Node Pointer

	void NodeInsertAtHead(pNode &head, int data);
}
