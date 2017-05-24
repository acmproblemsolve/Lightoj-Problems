#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

struct trie
{
    struct trie *next[5];
    int cnt;
} *p;

trie* newtrie()
{
    trie *q = new trie();
    for (int i = 0; i < 4; i++)
        q->next[i] = NULL;
    q->cnt = 0;
    return q;
};
void insert(char *str, trie *root)
{
    p = root;
    while (*str)
    {
        int pos;
        if (*str == 'A')
            pos = 0;
        else if (*str == 'C')
            pos = 1;
        else if (*str == 'G')
            pos = 2;
        else
            pos = 3;
        if (!p->next[pos])
        {
            p->next[pos] = newtrie();
            p = p->next[pos];
            p->cnt++;
        }
        else
        {
            p = p->next[pos];
            p->cnt++;
        }
        str++;
    }
}

int maxnum(struct trie *q, int d)
{
    int maxn = d * q->cnt;
    for (int i = 0; i < 4; i++)
    {
        if (q->next[i])
        {
            maxn = max(maxn, maxnum(q->next[i], d+1));
        }
    }
    return maxn;
}
void moveit(trie *root)
{
    if (root == NULL)
        return;
    for (int i = 0; i < 4;i++)
    {
        moveit(root->next[i]);
    }
    free(root);
}

int main()
{
    int t, n;
    char s[55];
    scanf("%d",&t);
    for(int k = 1; k <= t; k++)
    {
        trie *root = newtrie();
        scanf("%d",&n);
        while (n--)
        {
            scanf("%s",s);
            insert(s, root);
        }
        printf("Case %d: %s\n", k, maxnum(root, 0));
        moveit(root);
    }
    return 0;
}
