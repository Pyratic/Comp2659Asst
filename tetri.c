#ifndef _TETRI_C
#define _TETRI_C

/* Includes */
#include "gm_cnsts.h"

const UINT16 iStartingMaps[ ][ T_HEIGHT ] =
{
	/* O-Tetrimino */
	{0x0000, 0x0030, 0x0030, 0x0000},
	
	/* S-Tetrimino */
	{0x0000, 0x0000, 0x0018, 0x0030},
	
	/* Z-Tetrimino */
	{0x0000, 0x0000, 0x0030, 0x0018},
	
	/* I-Tetrimino */
	{0x0040, 0x0040, 0x0040, 0x0040},
	
	/* J-Tetrimino */
	{0x0000, 0x0010, 0x0010, 0x0030},
	
	/* L-Tetrimino */
	{0x0000, 0x0020, 0x0020, 0x0030},
	
	/* T-Tetrimino */
	{0x0038, 0x0010, 0x0000, 0x0000}
};

#endif