#ifndef _SONGS_C
#define _SONGS_C

#include "music.h"
#include "snd_cnst.h"

#define TETRIS_LOW_RES_SIZE_INDEX 0
#define TETRIS_HIGH_RES_SIZE_INDEX 1

const int iSongSizes[ TOTAL_NUMBER_OF_SONGS ] =
{
	TETRIS_LOW_RES_NOTE_COUNT,
	TETRIS_HIGH_RES_NOTE_COUNT
};

const Note TetrisTheme_LowRes[] =
{
	{ E, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ B, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ C, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ D, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ C, 		EIGHTH_MINUS_PAUSE },
	{ REST,		PAUSE_EIGHTH },
	{ B, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ A_LOW, 	QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ A_LOW, 	EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ C, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ E, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ D,	 	EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ C, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ B, 		ONEFIVE_MINUS_PAUSE },
	{ REST, 	PAUSE_ONEFIVE },
	{ C, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ D, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ E, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ C, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ A_LOW, 	QUARTER_MINUS_PAUSE},
	{ REST, 	PAUSE_QUART },
	{ A_LOW, 	EIGHTH_MINUS_PAUSE},
	{ REST, 	PAUSE_EIGHTH },
	{ A_LOW, 	EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ B, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ C, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ D, 		ONEFIVE_MINUS_PAUSE },
	{ REST, 	PAUSE_ONEFIVE },
	{ F, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ A, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ G, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ F, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ E, 		ONEFIVE_MINUS_PAUSE },
	{ REST, 	PAUSE_ONEFIVE },
	{ C, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ E, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ D, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ C, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ B, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ B, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ C, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ D, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ E, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ C, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ A_LOW, 	QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ A_LOW, 	QUARTER_MINUS_PAUSE },
	{ REST, 	QUARTER_MINUS_PAUSE },
	/* Repeat */
	{ E, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ B, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ C, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ D, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ C, 		EIGHTH_MINUS_PAUSE },
	{ REST,		PAUSE_EIGHTH },
	{ B, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ A_LOW, 	QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ A_LOW, 	EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ C, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ E, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ D,	 	EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ C, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ B, 		ONEFIVE_MINUS_PAUSE },
	{ REST, 	PAUSE_ONEFIVE },
	{ C, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ D, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ E, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ C, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ A_LOW, 	QUARTER_MINUS_PAUSE},
	{ REST, 	PAUSE_QUART },
	{ A_LOW, 	EIGHTH_MINUS_PAUSE},
	{ REST, 	PAUSE_EIGHTH },
	{ A_LOW, 	EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ B, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ C, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ D, 		ONEFIVE_MINUS_PAUSE },
	{ REST, 	PAUSE_ONEFIVE },
	{ F, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ A, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ G, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ F, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ E, 		ONEFIVE_MINUS_PAUSE },
	{ REST, 	PAUSE_ONEFIVE },
	{ C, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ E, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ D, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ C, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ B, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ B, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ C, 		EIGHTH_MINUS_PAUSE },
	{ REST, 	PAUSE_EIGHTH },
	{ D, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ E, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ C, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ A_LOW, 	QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ A_LOW, 	QUARTER_MINUS_PAUSE },
	{ REST, 	QUARTER_MINUS_PAUSE },
	/* Break */
	{ E, 		DOUBLE_QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ C, 		DOUBLE_QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ D, 		DOUBLE_QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ B, 		DOUBLE_QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ C, 		DOUBLE_QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ A, 		DOUBLE_QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ G_SHARP, 	DOUBLE_QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ B, 		QUARTER_MINUS_PAUSE },
	{ REST, 	QUARTER },
	{ E, 		DOUBLE_QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ C, 		DOUBLE_QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ D, 		DOUBLE_QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ B, 		DOUBLE_QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ C, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ E, 		QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ D_HIGH, 	DOUBLE_QUARTER_MINUS_PAUSE },
	{ REST, 	PAUSE_QUART },
	{ G_SHARP, 	DOUBLE_QUARTER_MINUS_PAUSE },
	{ REST, 	DOUBLE_QUARTER }
};

const Note TetrisTheme_HighRes[] =
{
	{ E, 		QUARTER },
	{ B, 		EIGHTH },
	{ C, 		EIGHTH },
	{ D, 		QUARTER },
	{ C, 		EIGHTH },
	{ B, 		EIGHTH },
	{ A_LOW, 	QUARTER },
	{ A_LOW, 	EIGHTH },
	{ C, 		EIGHTH },
	{ E, 		QUARTER },
	{ D, 		EIGHTH },
	{ C, 		EIGHTH },
	{ B, 		ONEFIVE },
	{ C, 		EIGHTH },
	{ D, 		QUARTER },
	{ E, 		QUARTER },
	{ C, 		QUARTER },
	{ A_LOW, 	QUARTER },
	{ A_LOW, 	EIGHTH },
	{ A_LOW, 	EIGHTH },
	{ B, 		EIGHTH },
	{ C, 		EIGHTH },
	{ D, 		ONEFIVE },
	{ F, 		EIGHTH },
	{ A, 		QUARTER },
	{ G, 		EIGHTH },
	{ F, 		EIGHTH },
	{ E, 		ONEFIVE },
	{ C, 		EIGHTH },
	{ E, 		QUARTER },
	{ D, 		EIGHTH },
	{ C, 		EIGHTH },
	{ B, 		QUARTER },
	{ B, 		EIGHTH },
	{ C, 		EIGHTH },
	{ D, 		QUARTER },
	{ E, 		QUARTER },
	{ C, 		QUARTER },
	{ A_LOW, 	QUARTER },
	{ A_LOW, 	QUARTER },
	{ REST, 	QUARTER },
	/* Repeat */
	{ E, 		QUARTER },
	{ B, 		EIGHTH },
	{ C, 		EIGHTH },
	{ D, 		QUARTER },
	{ C, 		EIGHTH },
	{ B, 		EIGHTH },
	{ A_LOW, 	QUARTER },
	{ A_LOW, 	EIGHTH },
	{ C, 		EIGHTH },
	{ E, 		QUARTER },
	{ D, 		EIGHTH },
	{ C, 		EIGHTH },
	{ B, 		ONEFIVE },
	{ C, 		EIGHTH },
	{ D, 		QUARTER },
	{ E, 		QUARTER },
	{ C, 		QUARTER },
	{ A_LOW, 	QUARTER },
	{ A_LOW, 	EIGHTH },
	{ A_LOW, 	EIGHTH },
	{ B, 		EIGHTH },
	{ C, 		EIGHTH },
	{ D, 		ONEFIVE },
	{ F, 		EIGHTH },
	{ A, 		QUARTER },
	{ G, 		EIGHTH },
	{ F, 		EIGHTH },
	{ E, 		ONEFIVE },
	{ C, 		EIGHTH },
	{ E, 		QUARTER },
	{ D, 		EIGHTH },
	{ C, 		EIGHTH },
	{ B, 		QUARTER },
	{ B, 		EIGHTH },
	{ C, 		EIGHTH },
	{ D, 		QUARTER },
	{ E, 		QUARTER },
	{ C, 		QUARTER },
	{ A_LOW, 	QUARTER },
	{ A_LOW, 	QUARTER },
	{ REST, 	QUARTER },
	/* Break */
	{ E, 		DOUBLE_QUARTER },
	{ C, 		DOUBLE_QUARTER },
	{ D, 		DOUBLE_QUARTER },
	{ B, 		DOUBLE_QUARTER },
	{ C, 		DOUBLE_QUARTER },
	{ A, 		DOUBLE_QUARTER },
	{ G_SHARP, 	DOUBLE_QUARTER },
	{ B, 		QUARTER },
	{ REST, 	QUARTER },
	{ E, 		DOUBLE_QUARTER },
	{ C, 		DOUBLE_QUARTER },
	{ D, 		DOUBLE_QUARTER },
	{ B, 		DOUBLE_QUARTER },
	{ C, 		QUARTER },
	{ E, 		QUARTER },
	{ D_HIGH, 	DOUBLE_QUARTER },
	{ G_SHARP, 	DOUBLE_QUARTER },
	{ REST, 	DOUBLE_QUARTER }
};


#endif