/*
	name: tetri.c
	purpose: Contains starting values for each tetrimino;
			 both dropping tetriminoes and next tetriminoes
			 (next tetriminoes are arranged differently to look
			  more centered).	
			 Also contains the 16x16 bit bitmap for each mino.
*/
#ifndef _TETRI_C
#define _TETRI_C

/* Includes */
#include "gm_cnsts.h"

/* Main Tetrimino maps for dropping on the board. */
const static UINT16 iStartingMaps[ ][ T_HEIGHT ] =
{
	/* O-Tetrimino */
	{0x0000, 0x0018, 0x0018, 0x0000},
	
	/* S-Tetrimino */
	{0x0000, 0x0000, 0x0018, 0x0030},
	
	/* Z-Tetrimino */
	{0x0000, 0x0000, 0x0030, 0x0018},
	
	/* I-Tetrimino */
	{0x0020, 0x0020, 0x0020, 0x0020},
	
	/* J-Tetrimino */
	{0x0000, 0x0010, 0x0010, 0x0030},
	
	/* L-Tetrimino */
	{0x0000, 0x0020, 0x0020, 0x0030},
	
	/* T-Tetrimino */
	{0x0038, 0x0010, 0x0000, 0x0000}
};

/* 8-bit maps to display the next Tetrimino.*/
const static UINT8 iNextMaps[ ][ T_HEIGHT ] =
{
	/* O-Tetrimino */
	{0x00, 0x06, 0x06, 0x00},
	
	/* S-Tetrimino */
	{0x00, 0x06, 0x0c, 0x00},
	
	/* Z-Tetrimino */
	{0x00, 0x06, 0x03, 0x00},
	
	/* I-Tetrimino */
	{0x00, 0x0f, 0x00, 0x00},
	
	/* J-Tetrimino */
	{0x00, 0x02, 0x02, 0x06},
	
	/* L-Tetrimino */
	{0x00, 0x04, 0x04, 0x06},
	
	/* T-Tetrimino */
	{0x00, 0x0e, 0x04, 0x00}
};

/* 16x16 Bitmap for a Mino */
const static UINT16 iMinoBitmap[ BMP_HEIGHT ] =
{
	0x0000,
	0x7ffe,
	0x7ffe,
	0x7ffe,
	0x7ffe,
	0x7ffe,
	0x7ffe,
	0x7e7e,
	0x7e7e,
	0x7ffe,
	0x7ffe,
	0x7ffe,
	0x7ffe,
	0x7ffe,
	0x7ffe,
	0x0000
};

#endif