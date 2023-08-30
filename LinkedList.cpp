#include <iostream>
#include <memory>
using namespace  std;

struct linkedlist{
    int val;
    linkedlist* next;
    linkedlist(int v,linkedlist* n = nullptr){
        val = v;
        next = n;
    }
};

// 删除倒数第k个节点
linkedlist* dele_k(linkedlist* head, int k){
    if(!head) return nullptr;
    linkedlist* pre = nullptr;
    linkedlist* slow = head;
    linkedlist* fast = head;

    for(int i = 0; i < k ; i++){
        fast = fast->next;
        if (!fast){
            cout<<"超出限制"<<endl;
            return head;
        }
    }
    while( fast ){
        pre = slow;
        slow = slow->next;
        fast = fast->next;
    }
    pre->next = slow->next;
    return head;

}
// 生成有序节点序列
linkedlist* generate_k(int start, int number){
    linkedlist * head = new linkedlist(start + number -1);
    for (auto i = 0; i < number - 1 ; i++){
        head = new linkedlist(start + number - i -2,head);
    }
    return head;
}
// 合并有序链表
linkedlist* merge_order(linkedlist* h1, linkedlist* h2){
    if (!h1) return h2;
    if (!h2) return h1;
    linkedlist* dummy = new linkedlist(-1);
    linkedlist* head = dummy;
    while( h1 && h2){
        if ( h1->val < h2->val){
            dummy->next = h1;
            h1 = h1->next;
        }
        else{
            dummy->next = h2;
            h2 = h2->next;
        }
        dummy = dummy->next;
    }
    while(h1){
        dummy->next = h1;
        h1 = h1->next;
        dummy = dummy->next;
    }
    while(h2){
        dummy->next = h2;
        h2 = h2->next;
        dummy = dummy->next;
    }
    return head->next;
}
// 打印链表
void print_linked_list(linkedlist* head){
    cout<<"---Print LinkedList---"<<endl;
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl<<"---End---"<<endl;
}

int main(){
    linkedlist * head1 = generate_k(1,5);
    linkedlist * head2 = generate_k(10,6);

    linkedlist * h = merge_order(head1,head2);

    print_linked_list(h);

    return 0;
}

