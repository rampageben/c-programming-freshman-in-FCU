#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    char data;
    struct node *left;
    struct node *right;
};

int search(char arr[], int strt, int end, char value);
struct node *newNode(char data);

struct node *buildTree(char in[], char pre[], int inStrt, int inEnd)
{
    static int preIndex = 0;
    if (inStrt > inEnd)
    {
        return NULL;
    }
    struct node *tNode = newNode(pre[preIndex++]);
    if (inStrt == inEnd)
    {
        return tNode;
    }
    int inIndex = search(in, inStrt, inEnd, tNode->data);

    tNode->left = buildTree(in, pre, inStrt, inIndex - 1);
    tNode->right = buildTree(in, pre, inIndex + 1, inEnd);

    return tNode;
}

int search(char arr[], int strt, int end, char value)
{
    int i;
    for (i = strt; i <= end; i++)
    {
        if (arr[i] == value)
            return i;
    }
}

struct node *newNode(char data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

void printpost(struct node *node)
{
    if (node != NULL)
    {
        printpost(node->left);
        printpost(node->right);
        printf("%c ", node->data);
    }
}

int main()
{
    char pre[100];
    char in[100];
    gets(pre);
    gets(in);
    int i, k = 0;
    for (int i = 0; i < strlen(pre); i++)
    {
        if (pre[i] != ' ')
        {
            pre[k] = pre[i];
            k++;
        }
    }
    k = 0;
    for (int i = 0; i < strlen(in); i++)
    {
        if (in[i] != ' ')
        {
            in[k] = in[i];
            k++;
        }
    }
    struct node *root = buildTree(in, pre, 0, k - 1);
    printpost(root);
}