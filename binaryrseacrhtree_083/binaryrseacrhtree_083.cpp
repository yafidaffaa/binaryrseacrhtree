#include<iostream>
#include<string>
using namespace std;

class Node {
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	//constructor for  the node class
	Node(string i, Node* l, Node* r) {
		info = i;
		leftchild = l;
		rightchild = r;
	}
};

class BinaryTree
{
public:
	Node* ROOT;

	BinaryTree() {
		ROOT = NULL;//initializing ROOT to NULL
	}

	void insert(string element)//insert a node in the binary search tree
	{
		Node* newNode = new Node(element, NULL, NULL);//Alocate memory for the new node
		newNode->info = element;//Assign value to the data field of the new node point to NULL
		newNode->leftchild = NULL;//make the left child of the new node point to NULL
		newNode->rightchild = NULL;//make the right child of the new node point to null

		Node* parent = NULL;
		Node* currentNode = NULL;
		search(element, parent, currentNode);//locate the node which will be the parent of the node to be interested

		if (parent == NULL)//if the parent is NULL(tree is empty)
		{
			ROOT = newNode;//mark the new node as ROOT
			return;//exit
		}
	}
};