// Floyd's Cycle algorithm, also known as Floyd's Tortoise and Hare algorithm.
// Used for 1) detecting presence of cycle in linked list 2) finding the starting point of linked list
// 1) Finding presence of linked list


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode *head) {
    // Edge case: if LL is empty
    if (head == nullptr) return false;
    
    ListNode *slow = head;
    ListNode *fast = head;
    do {
        // check that the end of LL hasn't been reached yet, if yes, the ll has no cycle
        if (slow != nullptr && fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        } else return false;
    } while (slow != fast);
    return true;
}

ListNode* startOfCycle(ListNode *head) {
    if (hasCycle(head)) {
        ListNode *slow = head;
        ListNode *fast = head;
        do {
            if (slow != nullptr && fast != nullptr && fast->next != nullptr) {
                slow = slow->next;
                fast = fast->next->next;
            } else return fast;
        } while (slow != fast);
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
}
