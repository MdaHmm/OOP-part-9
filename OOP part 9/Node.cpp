#include "Node.h"

Node::Node(int data) : _data(data), next(nullptr), prev(nullptr){}

Node::~Node()
{
    //printf("Node deleted")
    std::cout << "Node deleted.\n";
}

int Node::GetData()
{
    return _data;
}
