#pragma once
#include <stdio.h>
#define BOARD_SIZE 8

typedef struct _checkersPos
{
	char row, col;
}chekersPos;

typedef unsigned char Board[BOARD_SIZE][BOARD_SIZE];

typedef unsigned char Player;

typedef struct _SingleSourceMovesTreeNode
{
	Board board;
	chekersPos* pos;
	unsigned short total_captures_so_far; // number of caputres
	struct _SingleSourceMovesTreeNode* next_move[2]; // target moves
}SingleSourceMoves;

typedef struct _SingleSourceMovesTree
{
	_SingleSourceMovesTreeNode* source;

}SingleSourceMovesTree;

