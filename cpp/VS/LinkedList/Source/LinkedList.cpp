// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include <string>

#include "Node.h"

using namespace std;
using namespace Nodes;

int main(int argc, const char *argv[])
{
	pNode pHead = new Node; // head pointer
	pHead->data = 20;
	pHead->link = NULL;

	NodeInsertAtHead(pHead, 30);
	pNode tmp;
	tmp = pHead;

	while (tmp != NULL)
	{
		cout << tmp->data << endl;
		tmp = tmp->link;
	}
	return 0;
}