#include<stdio.h>
#include<stdlib.h>
struct list
{
    int info;
    struct list *next;
};
typedef struct list node;
node *insertatend(node *,int);
void display(node *);
main()
{
    node *s = NULL;
    int n;
    char ano = 'y';
    while (ano == 'y' || ano == 'Y')
    {
        printf("Enter the number:");
        scanf("%d",&n);
        s = insertatend(s,n);
        printf("Continue[y/n]?");
        fflush(stdin);
        scanf("%c",&ano);
    }
    display(s);

}
node *insertatend(node *s,int n)
{
    node *nn,*t;
    nn = (node *)malloc(sizeof(node));
    nn ->info = n;
    nn ->next = NULL;
    if(s == NULL)
    {
        s = nn;
    }
    else{
        t = s;
        while(t->next!=NULL)
        {
            t = t->next;
        }
        t -> next = nn;
    }
    return(s);
}
void display(node *s)
{
    node *t;
    t = s;
    while(t!=NULL)
    {
        printf("%d\n",t->info);
        t = t->next;
    }

}
