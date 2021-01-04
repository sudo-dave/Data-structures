
#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
};

class LinkedLIst{
private:
    Node *head;
    Node *tail;
    
public:

LinkedLIst(){
    head = NULL;
    tail = NULL;
}
bool isEmpty(){
    return head == NULL;
}

void printAll(){
    Node *temp =new Node();
    temp = head;
    
    while( temp != NULL ){
        cout << temp ->data << endl;
        temp = temp-> next;
    }
    
}

void insert(int val){
    Node *temp = new Node();
    temp->data = val;
    temp->next = NULL;
    
    if (this -> isEmpty()){
        head = temp;
        tail = temp;
    }
    else{
        tail -> next = temp;
        tail = temp;
    }

}

int getTotal(){
Node *temp = new Node();
temp = head;
int total =0;

if (this->isEmpty()){
    return total;
}


while(temp!= NULL){
    total = total + temp->data;
    temp = temp->next;
}
return total;
}



};

    

int main()
{
    cout<<"Hello World" << endl;
    LinkedLIst list = LinkedLIst();
    list.insert(12);
    list.printAll();
    cout << list.getTotal();

    return 0;
}
