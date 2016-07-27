//
//  LinkedList_Cursor.c
//  Algorithm
//
//  Created by 刘锋 on 16/7/20.
//  Copyright © 2016年 PractiseMakesPerfect. All rights reserved.
//

#include "LinkedList_Cursor.h"
#include <stdlib.h>

#define SpaceSize 10

struct Node
{
    ElementType Element;
    Position    Next;
};

struct Node CursorSpace[ SpaceSize ];

void InitializeCursorSpace( void );

static Position CursorAlloc( void )
{
    Position p;
    
    p = CursorSpace[0].Next;
    CursorSpace[0].Next = CursorSpace[p].Next;
    
    return p;
}

static void CursorFree( Position p )
{
    CursorSpace[p].Next = CursorSpace[0].Next;
    CursorSpace[0].Next = p;
}

List MakeEmpty( List L )
{
    Position p;
    p = L;
    while (CursorSpace[p].Next != 0) {
        Position temp = CursorSpace[p].Next;
        CursorFree(p);
        p = temp;
    }
    return L;
}

int IsEmpty( List L )
{
    return CursorSpace[L].Next == 0;
}

int IsLast( Position p, List L )
{
    return CursorSpace[p].Next == 0;
}

Position Find( ElementType X, List L )
{
    Position p;
    
    p = CursorSpace[ L ].Next;
    while (p && CursorSpace[p].Element != X) {
        p = CursorSpace[p].Next;
    }
    
    return p;
}

Position FindPrevious( ElementType X, List L )
{
    Position p;
    
    p = L;
    while (CursorSpace[p].Next != 0 && CursorSpace[CursorSpace[p].Next].Element != X) {
        p = CursorSpace[p].Next;
    }
    
    return p;
}

void Delete( ElementType X, List L )
{
    Position p, temp;
    
    p = FindPrevious(X, L);
    
    if (!IsLast(p, L)) {
        temp = CursorSpace[p].Next;
        CursorSpace[p].Next = CursorSpace[temp].Next;
        CursorFree(p);
    }
}
void Insert( ElementType X, List L, Position p )
{
    Position temp = CursorAlloc();
    if (temp) {
        CursorSpace[temp].Element = X;
        CursorSpace[temp].Next = CursorSpace[p].Next;
        CursorSpace[p].Next = temp;
    }
}

void DeleteList( List L )
{
    Position p, temp;
    p = CursorSpace[L].Next;
    CursorSpace[L].Next = 0;
    if (p != 0) {
        temp = CursorSpace[p].Next;
        CursorFree(p);
        p = temp;
    }
}

Position Header( List L )
{
    return L;
}

Position First( List L )
{
    return CursorSpace[L].Next;
}

Position Advance( Position P )
{
    return CursorSpace[P].Next;
}

ElementType Retrive( Position P )
{
    return CursorSpace[P].Element;
}