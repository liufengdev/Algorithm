//
//  LinkedList.c
//  Algorithm
//
//  Created by 刘锋 on 16/7/20.
//  Copyright © 2016年 com.weidian. All rights reserved.
//

#include "LinkedList.h"
#include <stdlib.h>

struct Node
{
    ElementType Element;
    Position Next;
};

List MakeEmpty( List L )
{
    Position p = L->Next;
    while (p != NULL) {
        Position temp = p->Next;
        p = temp->Next;
        free(temp);
    }
    return L;
}

int IsEmpty( List L )
{
    return L->Next == NULL;
}

int IsLast( Position p, List L )
{
    return p->Next == NULL;
}

Position Find( ElementType X, List L )
{
    Position p = L->Next;
    while (p != NULL && p->Element != X) {
        p = p->Next;
    }
    return p;
}

Position FindPrevious( ElementType X, List L )
{
    Position p;
    p = L;
    while (p->Next != NULL && p->Next->Element != X) {
        p = p->Next;
    }
    return p;
}

void Delete( ElementType X, List L )
{
    Position p, temp;
    p = FindPrevious(X, L);
    
    if (!IsLast(p, L)) {
        temp = p->Next;
        p->Next = temp->Next;
        free(temp);
    }
}

void Insert( ElementType X, List L, Position p )
{
    Position temp;
    temp = malloc(sizeof(struct Node));
    temp->Element = X;
    temp->Next = p->Next;
    p->Next = temp;
}

void DeleteList( List L )
{
    Position p, tmp;
    p = L->Next;
    L->Next = NULL;
    while (p != NULL) {
        tmp = p->Next;
        free(p);
        p = tmp;
    }
}

Position Header( List L )
{
    return L;
}

Position First( List L )
{
    return L->Next;
}

Position Advance( Position P )
{
    return P->Next;
}

ElementType Retrive( Position P )
{
    return P->Element;
}