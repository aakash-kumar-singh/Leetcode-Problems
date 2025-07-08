class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};
class MyLinkedList {
public:
    Node* head;
    Node* tail;
    int size;
    MyLinkedList() {
       head=NULL;
       tail=NULL;
       size=0;
        
    }
    
    int get(int index) {
        if(index<0 || index>=size) return -1;
        Node* temp=head;
        for(int i=0;i<index;i++){
            temp=temp->next;
        }
        return temp->data;
    }
    
    void addAtHead(int val) {
        Node* n=new Node(val);
        n->next=head;
        head=n;
        if(size==0){
            tail=n;
        }
        size++;
    }
    
    void addAtTail(int val) {
        Node* n=new Node(val);
        if(tail==NULL){
            head=tail=n;
        }
        else{
            tail->next=n;
            tail=n;

        }
        size++;
    }

    
    void addAtIndex(int index, int val) {
        if(index<0 || index>size) return;
        if(index==0){
            addAtHead(val);
            return;
        }
        if(index==size){
            addAtTail(val);
            return;
        }
        Node* n=new Node(val);
        Node* temp=head;
        for(int i=0;i<index-1;i++){
            temp=temp->next;
        }
        n->next=temp->next;
        temp->next=n;
        size++;
    }
    
    void deleteAtIndex(int index) {
       if(index<0 || index>=size) return;
       if(index==0){
        Node* toDel=head;
        head=head->next;
        delete toDel;
        size--;
        if(size==0) tail=NULL;
        return;
       } 
       Node* temp=head;
       for(int i=0;i<index-1;i++){
        temp=temp->next;
       }
       Node* toDel=temp->next;
       temp->next=toDel->next;
       if(toDel==tail) tail=temp;
       delete toDel;
       size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */