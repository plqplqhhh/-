#define _CRT_SECURE_NO_WARNINGS 1
/*
                   _ooOoo_
                  o8888888o
                  88" . "88
                  (| -_- |)
                  O\  =  /O
               ____/`---'\____
             .'  \\|     |//  `.
            /  \\|||  :  |||//  \
           /  _||||| -:- |||||-  \
           |   | \\\  -  /// |   |
           | \_|  ''\---/''  |   |
           \  .-\__  `-`  ___/-. /
         ___`. .'  /--.--\  `. . __
      ."" '<  `.___\_<|>_/___.'  >'"".
     | | :  `- \`.;`\ _ /`;.`/ - ` : | |
     \  \ `-.   \_ __\ /__ _/   .-` /  /
======`-.____`-.___\_____/___.-`____.-'======
                   `=---='
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
            佛祖保佑       永无BUG
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val)
{
    struct ListNode* prev = NULL;
    struct ListNode* cur = head;
    while (cur)
    {
        if (cur->val == val)
        {
            if (cur == head)
            {
                head = cur->next;
                free(cur);
                cur = head;
            }
            else
            {
                prev->next = cur->next;
                free(cur);
                cur = prev->next;
            }

        }
        else
        {
            prev = cur;
            cur = cur->next;
        }
    }
    return head;
}