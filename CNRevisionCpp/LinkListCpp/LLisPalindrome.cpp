#include<iostream>
using namespace std;
#include "LinkedListClass.cpp"

Node * midOfList(Node * slow ,Node * fast){
    if(fast == NULL || fast->next == NULL || fast->next->next == NULL){
        return slow;
    }
    return  midOfList(slow->next,fast->next->next);
}

Node * inputData(Node * head2, int  data){

    Node * ptr = head2;
    // Node * tail = NULL;
    
		Node *newnode = new Node(data);
		if (ptr == NULL){
			ptr = newnode;
			// tail = newnode;
            head2 = ptr;
		}else{
			while(ptr->next!=NULL){
                ptr = ptr->next;
            }
            ptr->next = newnode;
		}
	return head2;
}

Node * reverseLinkList(Node * head , Node * head2){
    if(head == NULL){
        return head;
    }

    head2 = reverseLinkList(head->next, head2);
    return head2 = inputData(head2,head->data);
}

bool LLisPalindrome(Node * head){
    if(head==NULL){
        return true;
    }

    Node * slow = head;
    Node * fast = head;
    Node * midNode = midOfList(slow,fast);
    Node * head2 = NULL;
    head2 = reverseLinkList(midNode->next, head2);
    midNode->next = NULL;

    while( head != NULL && head2 != NULL){
        if(head->data != head2->data){
            return false;
        }
        head = head->next;
        head2 = head2->next;
    }
    return true;
}


int main(){
    Node * head = NULL;
    head = LinkListCreation();
    bool ans = LLisPalindrome(head);
    if(ans == true){
        cout<<"yes "<<endl;
    }else{
        cout<<"no"<<endl;
    }
    // display(head);
    return 0;
}