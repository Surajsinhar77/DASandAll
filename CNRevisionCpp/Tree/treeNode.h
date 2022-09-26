#include <vector>
using namespace std;

template <typename T>
class treeNode{
    public:
    T data;
    vector <treeNode <T> * > children;  

    treeNode(int data){
        this->data = data;
    }
};