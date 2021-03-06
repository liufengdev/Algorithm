//
//  LinkedList.h
//  Algorithm
//
//  Created by 刘锋 on 16/7/20.
//  Copyright © 2016年 PractiseMakesPerfect. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

#include <stdio.h>

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
typedef int ElementType;

List MakeEmpty( List L );
int IsEmpty( List L );
int IsLast( Position p, List L );
Position Find( ElementType X, List L );
void Delete( ElementType X, List L );
Position FindPrevious( ElementType X, List L );
void Insert( ElementType X, List L, Position p );
void DeleteList( List L );
Position Header( List L );
Position First( List L );
Position Advance( Position P );
ElementType Retrive( Position P );

#endif /* LinkedList_h */
