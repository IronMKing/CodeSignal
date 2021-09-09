// Singly-linked lists are already defined with this interface:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };
//
ListNode<int> * removeKFromList(ListNode<int> * l, int k) {
    if(l == nullptr){
        return l;
    }
    ListNode<int>* pos = l;
    while(pos->next != nullptr){
        if(pos->next->value == k){
            ListNode<int>* cur_pos = pos->next;
            pos->next=cur_pos->next;
            delete cur_pos;
        }
        else{
            pos = pos->next;
        }
    }
    if(l->value == k){
        pos = l;
        l=l->next;
        delete pos;
    }
    return l;
}