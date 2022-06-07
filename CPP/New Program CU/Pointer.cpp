#include<iostream>
using namespace std;


struct linkList
{
    /* data */
    int Data;
    int* address; 
};

int main(){

    // NODE1
    struct linkList node1;
    struct linkList node2;

    node1.Data = 2;
    node1.address = &node2.Data;

    // NODE 2
    node2.Data = 2;
    node2.address = NULL;

    return 0;
}