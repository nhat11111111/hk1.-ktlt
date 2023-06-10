/**************************************************************
* Express polynomial by Single Link List
* Author : VNCODING
* Date : 14/02/2016
***************************************************************/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 
// polynomial
typedef struct Node 
{
    float a;
    int n;
    Node *pNext;
}NODE;
 
struct POLY
{
    Node *pHead, *pTail;
};
 
void initSLL(POLY*);
bool isSLLEmpty(POLY);
NODE* createNode(float, int);
bool insertHead(POLY*, NODE*);
void delTail(POLY*);
void delList(POLY*);
void importPoly(POLY*);
void sortPoly(POLY*);
void sum2Poly(POLY, POLY, POLY*);
void displayPoly(POLY);
 
 
int main()
{
    int sel;
    char c;
    POLY p1, p2, p3;
 
    initSLL(&p1);
    initSLL(&p2);
    initSLL(&p3);
 
    printf("\n*************Da thuc***********");
    importPoly(&p1);
    importPoly(&p2);
    sortPoly(&p1);
    sortPoly(&p2);
 
    printf("\n1. Cong 2 da thuc");
    printf("\n2. Hien thi da thuc");
    while(1)
    {
        printf("\nBan chon: ");
        scanf("%d", &sel);
        switch(sel)
        {
        case 1:
            sum2Poly(p1, p2, &p3);
            break;
        case 2:
            displayPoly(p1);
            displayPoly(p2);
            displayPoly(p3);
            break;
       default:
            break;
       }
       printf("\nBan co muon thuc hien cac cong viec khac (Y/N)? ");
       fflush(stdin);
       c = getchar();
       if (c != 'y' && c != 'Y')
       {
           break;
       }
    }
    delList(&p1);
    delList(&p2);
    delList(&p3);
    getch();
}
 
/***************************************************
Function : initSLL()
Description: initialize linked list
Return : void
****************************************************/
void initSLL(POLY *list)
{
    list->pHead = list->pTail = NULL;
}
 
/***************************************************
Function : isSLLEmpty()
Description: check linked list is empty or not
Return : true: empty, false: not empty
****************************************************/
bool isSLLEmpty(POLY list)
{
    if (!list.pHead)
    {
        return true;
    }
    return false;
}
 
/*************************************************************
Function : createNode()
Description: create new node to store (a, n)
Parameter : a: factor, n: exponent
Return : pointer points to new node 
*************************************************************/
NODE* createNode(float a, int n)
{
    NODE* pNode = NULL;
    if(a == 0)
    {
        return NULL;
    }
    pNode = (NODE*)malloc(sizeof(NODE));
    if(!pNode)
    {
        return NULL;
    }
    else
    {
        pNode->a = a;
        pNode->n = n;
        pNode->pNext = NULL;
        return pNode;
    }
}
 
/*************************************************************
Function : insertHead()
Description: insert node to list
Parameter : list: pointer points to linked list
 node: pointer points to linked list
Return : true: success, false: fail 
*************************************************************/
bool insertHead(POLY *list, Node *node)
{
    if (!node)
    {
        return false;
    }
    node->pNext = list->pHead;
    list->pHead = node;
    if (!list->pTail)
    {
        list->pTail = node;
    }
    return true;
}
 
/*************************************************************
Function : delTail()
Description: delete last node in linked list
Parameter : list: pointer points to linked list
Return : void
*************************************************************/
void delTail(POLY* list)
{
    Node *pNode;
    pNode = list->pHead;
    if (!pNode)
    {
        return;
    }
    if (list->pHead == list->pTail)
    {
        list->pHead = list->pTail = NULL;
        free(pNode);
        return;
    }
    while (pNode->pNext != list->pTail)
    {
        pNode = pNode->pNext;
    }
    pNode->pNext = NULL;
    free(list->pTail);
    list->pTail = pNode;
}
 
/*************************************************************
Function : delList()
Description: delete list
Parameter : list: pointer points to linked list
Return : void
*************************************************************/
void delList(POLY* list)
{
    while (!isSLLEmpty(*list))
    {
        delTail(list);
    }
}
 
/*************************************************************
Function   : importPoly()
Description: 
Parameter  : list: pointer points to linked list
Return     : void
*************************************************************/
void importPoly(POLY* p)
{
    float a;
    int n;
    char sel;
    NODE* pNode = NULL;
    while(1)
    {
        printf("\nNhap he so: ");
        scanf("%f", &a);
        printf("\nNhap so mu: ");
        scanf("%d", &n);
        pNode = createNode(a, n);
        insertHead(p, pNode);
        printf("\nBan co muon tiep tuc: (Y/N)? ");
        fflush(stdin);
        sel = getchar();
        //Exit
        if (sel != 'y' && sel != 'Y')
        {
            break;
        }
    }
}
 
/*************************************************************
Function : sortPoly()
Description: sort polynomial according to exponent
Parameter : list: pointer points to linked list
Return : void
*************************************************************/
void sortPoly(POLY* list)
{
    NODE* p, *q;
    float a;
    int n;
    for (p = list->pHead; p != NULL; p = p->pNext)
    {
        for (q = p->pNext; q != NULL; q = q->pNext)
        {
            if (p->n > q->n)
            {
                n = p->n;
                a = p->a;
 
                p->n = q->n;
                p->a = q->a;
 
                q->n = n;
                q->a = a;
            }
        }
    }
}
 
/****************************************************************************
Function : sum2Poly()
Parameter : 
Description : 
Return : void 
*****************************************************************************/
void sum2Poly(POLY list1, POLY list2, POLY* pList3)
{
    NODE* p1 = list1.pHead;
    NODE* p2 = list2.pHead;
    NODE* p3;
    while(p1 != NULL || p2 != NULL)
    {
        if(p1 == NULL && p2 != NULL)
        { 
            p3 = createNode(p2->a, p2->n);
            insertHead(pList3, p3);
            p2 = p2->pNext;
            continue;
        }
        if(p1 != NULL && p2 == NULL)
        {
            p3 = createNode(p1->a, p1->n);
            insertHead(pList3, p3);
            p1 = p1->pNext;
            continue;
        }
        // so mu p1 = so mu p2
        if(p1->n == p2->n)
        {
            p3 = createNode(p1->a + p2->a, p1->n);
            insertHead(pList3, p3);
            p2 = p2->pNext;
        }
        // so mu p1 > so mu p2
        else if(p1->n > p2->n)
        {
            p3 = createNode(p2->a, p2->n);
            insertHead(pList3, p3);
            p2 = p2->pNext;
            continue;
        }
        // so mu p1 < so mu p2
        else
        {
            p3 = createNode(p1->a, p1->n);
            insertHead(pList3, p3);
        }
        p1 = p1->pNext;
    }
}
 
/****************************************************************************
Description: - Hien thi da thuc
Return : - void
*****************************************************************************/
void displayPoly(POLY pList)
{
    NODE* p;
    printf("\nP(x) = ");
    for(p = pList.pHead; p != NULL; p = p->pNext)
    {
        if(p->a == 0)
            continue;
        else if(p->a < 0)
            printf(" - %.2fx^%d", (-1)*(p->a), p->n);
        else
            printf(" + %.2fx^%d", p->a, p->n);
    }
}
