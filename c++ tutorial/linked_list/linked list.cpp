#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;

    node(int data){
        this->data = data;
        this->next = Null;
    }

};

int main(){
    node* a1,a2,a3;
    a1->data = 1;
    a1->next = a2;
    a2->data = 2;
    a2->next = a3;
    a3->data = 3;
    a2->next = null;
    
void traverseLinkedList(node* head)
{
node* current = head;
while (!current==null) {
    cout << current->data << " ";
    current = current->next;
}
 cout << ;

}
}