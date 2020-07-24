#include<stdio.h>
#include<stdlib.h>




typedef struct TreeNode *Tree;
struct  TreeNode
{
    int v;
    Tree Left,Right;
    int flag;
};

Tree NewNode(int V)
{
    Tree T=(Tree)malloc(sizeof(struct TreeNode));
    T->v=V;
    T->Left=T->Right=NULL;
    T->flag=0;
    return T;
}




Tree Insert(Tree T,int V)
{
    if(V>T->v) {
        if(T->Right==NULL)  T->Right = NewNode(V);
        else Insert(T->Right,V);
    }
    else{
        if(T->Left==NULL) T->Left = NewNode(V);
        else Insert(T->Left,V);
    }
    return 0;
}














Tree MakeTree(int N)
{
    Tree T;
    int i,V;

    scanf("%d",&V);
    T=NewNode(V);
    for(i=1;i<N;i++){
        scanf("%d",&V);
        T=Insert(T,V);
    }
    return T;
}





void PrintTree(Tree T)
{
    if(T->Left)
    PrintTree(T->Left);
    printf("%d",T->v);
    if(T->Rightz)
    PrintTree(T->Right); 
}




int main()
{
    Tree T;
    int N;
    scanf("%d",&N);
    T=MakeTree(N);
    PrintTree(T);
    return 0;
}


