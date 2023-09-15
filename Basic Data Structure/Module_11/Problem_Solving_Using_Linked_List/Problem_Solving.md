#### Linked List Problem No. 01
[Problem link](https://leetcode.com/problems/middle-of-the-linked-list/)
```

class Solution {
public:
    int size(ListNode * head)
    {   
        int cnt = 0;
        ListNode * tmp = head;
        while(tmp != NULL)
        {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }
    ListNode* middleNode(ListNode* head) {
        int n = size(head);
        ListNode* tmp = head;
        for(int i=1; i<= n/2; i++)
        {
            tmp = tmp->next;
        }
        return tmp;
    }
};

```