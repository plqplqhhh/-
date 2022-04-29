#define _CRT_SECURE_NO_WARNINGS 1
struct ListNode* FindKthToTail(struct ListNode* pListHead, int k)
{
    if (pListHead == NULL)
        return NULL;
    struct ListNode* fast = pListHead;
    struct ListNode* slow = pListHead;
    while (k--)
    {
        if (fast == NULL)
            return NULL;
        fast = fast->next;
    }
    while (fast)
    {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}
struct ListNode* middleNode(struct ListNode* head)
{
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while (fast->next)
    {
        fast = fast->next;
        if (fast->next != NULL)
            fast = fast->next;
        slow = slow->next;
    }
    return slow;
}

struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* cur = head;
    struct ListNode* prev = head;
    struct ListNode* n1 = NULL;
    while (cur)
    {
        cur = cur->next;
        prev->next = n1;
        n1 = prev;
        if (cur != NULL)
            prev = cur;
    }
    return prev;
}