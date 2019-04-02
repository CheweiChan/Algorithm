    
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

static struct ListNode *insertionSortList(struct ListNode *head)
{
    if (head == NULL) 
        return NULL;

    if (head->next == NULL) 
        return head;

    struct ListNode temp;
    struct ListNode *p0, *p, *p1;
    temp.next = head;

    for (p0 = head, p = head->next; p != NULL; p0 = p, p = p->next)
	 {
        if (p->val < p0->val) 
		{
            p0->next = p->next;
            for (p1 = &temp; p1 != p0; p1 = p1->next) 
			{
                if (p1->next->val >= p->val) 
				{
                    p->next = p1->next;
                    p1->next = p;
                    break;
                }
            }
            p = p0;
        }
    }

    return temp.next;
}

int main(int argc, char **argv)
{
    int i, count = 8;
    struct ListNode *head = NULL, *p, *prev;
    for (i = 0; i < count; i++) 
	{
        p = malloc(sizeof(*p));
        p->val = count-i;
        p->next = NULL;
        if (head == NULL) 
            head = p;
        else 
            prev->next = p;
        
        prev = p;
    }
    for (p = head; p != NULL; p = p->next) 
        printf("%d ", p->val);
    printf("\n");
    
    for (p = insertionSortList(head); p != NULL; p = p->next) 
        printf("%d ", p->val);    
    printf("\n");
    
    return 0;
}
