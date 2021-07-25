struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int getNthNodeFromEnd(struct Node *head, int n)
{
    struct Node *last = head;
    int t = 1;
    while (last->next)
    {
        last = last->next;
        t++;
    }
    int f = t - n;
    last = head;
    int i = 0;
    while (last)
    {
        if (i == f)
        {
            return last->data;
        }
        last = last->next;
        i++;
    }
}