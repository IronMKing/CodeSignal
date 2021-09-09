// Singly-linked lists are already defined with this interface:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };
//
bool isListPalindrome(ListNode<int> * l) {
    vector<int> test;
    ListNode<int> *pos = l;
    while(pos != nullptr){
        test.push_back(pos->value);
        pos = pos -> next;
    }
    vector<int> test2 = test;
    reverse(test2.begin(),test2.end());
    if(test == test2){
        return true;
    }
    return false;
}