//
//  LinkedList_Cursor.h
//  Algorithm
//
//  Created by 刘锋 on 16/7/20.
//  Copyright © 2016年 com.weidian. All rights reserved.
//

#ifndef LinkedList_Cursor_h
#define LinkedList_Cursor_h

#define List _List
#define Node _Node
#define PtrToNode _PtrToNode
#define Position _Position
#define ElementType _ElementType

#define MakeEmpty _MakeEmpty
#define IsEmpty _IsEmpty
#define IsLast _IsLast
#define Find _Find
#define Delete _Delete
#define FindPrevious _FindPrevious
#define Insert _Insert
#define DeleteList _DeleteList
#define Header _Header
#define First _First
#define Advance _Advance
#define Retrive _Retrive

#include <stdio.h>

struct _Node;
typedef int _PtrToNode;
typedef _PtrToNode _List;
typedef _PtrToNode _Position;
typedef int _ElementType;

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

#endif /* LinkedList_Cursor_h */
