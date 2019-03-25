#include "pitches.h"

typedef struct {int note; char units; } a_tone;

/* VADER_JACOB{{{ */
#ifdef VADER_JACOB

struct
{
  uint8_t mmIndex = 6;
  uint8_t unitsPerTick = 2;
  int length = 42;
  a_tone tones[42] = { { NOTE_C5, 2},
                      { NOTE_D5, 2}, 
                      { NOTE_E5, 2}, 
                      { NOTE_C5, 1},
                      { 0, 1},
                      { NOTE_C5, 2},
                      { NOTE_D5, 2}, 
                      { NOTE_E5, 2}, 
                      { NOTE_C5, 1},
                      { 0, 1},
                      { NOTE_E5, 2},
                      { NOTE_F5, 2}, 
                      { NOTE_G5, 3}, 
                      { 0, 1},
                      { NOTE_E5, 2},
                      { NOTE_F5, 2}, 
                      { NOTE_G5, 3}, 
                      { 0, 1},       
                      { NOTE_G5, 1}, 
                      { NOTE_A5, 1},
                      { NOTE_G5, 1},
                      { NOTE_F5, 1},
                      { NOTE_E5, 2 },
                      { NOTE_C5,  1},
                      { 0, 1},            
                      { NOTE_G5, 1}, 
                      { NOTE_A5, 1},
                      { NOTE_G5, 1},
                      { NOTE_F5, 1},
                      { NOTE_E5, 2 },
                      { NOTE_C5,  1},
                      { 0, 1},
                      { NOTE_C5, 2},            
                      { NOTE_G4, 2},            
                      { NOTE_C5, 3},            
                      { 0, 1},
                      { NOTE_C5, 2},            
                      { NOTE_G4, 2},            
                      { NOTE_C5, 3},            
                      { 0, 1}
                      };
} melody;

#endif
/* }}}*/
/* BOER_WAT_ZEG_JE{{{*/
#ifdef BOER_WAT_ZEG_JE

struct
{
  uint8_t mmIndex = 10;
  uint8_t unitsPerTick = 6;
  int length = 37;
  a_tone tones[37] = { 
                      { NOTE_A5, 4},
                      { NOTE_FS5, 2}, 
                      { NOTE_A5, 4},
                      { NOTE_FS5, 2}, 
                      { NOTE_E5, 2},
                      { NOTE_FS5, 2}, 
                      { NOTE_G5, 2},
                      { NOTE_FS5, 4}, 
                      { NOTE_D5, 2}, 
                      { NOTE_A5, 4},
                      { NOTE_FS5, 2}, 
                      { NOTE_A5, 4},
                      { NOTE_FS5, 2}, 
                      { NOTE_E5, 2},
                      { NOTE_FS5, 2}, 
                      { NOTE_E5, 2},
                      { NOTE_D5, 5},
                      {0, 1}, 
                      { NOTE_D5, 2},
                      { NOTE_CS5, 2}, 
                      { NOTE_D5, 2},
                      { NOTE_B4, 3},
                      { 0, 1},
                      { NOTE_B4, 2},
                      { NOTE_E5, 4},
                      { NOTE_D5, 2}, 
                      { NOTE_CS5, 4},
                      { NOTE_A4, 2}, 
                      { NOTE_D5, 3},
                      { 0, 1},
                      { NOTE_D5, 2}, 
                      { NOTE_B4, 3},
                      { 0, 1},
                      { NOTE_B4, 2}, 
                      { NOTE_E5, 4},
                      { NOTE_D5, 2}, 
                      { NOTE_CS5, 6}                      
                      };
} melody;

#endif
/* }}}*/
/* MEGALOVANIA{{{*/
#ifdef MEGALOVANIA

struct
{
	uint8_t mmIndex = 22;
	uint8_t unitsPerTick = 4;
	int length = 44;
	a_tone tones[44] = {
		{ NOTE_D4, 1 },
		{ NOTE_D4, 1 },
		{ NOTE_D5, 2 }, // TODO: staccato
		{ NOTE_A4, 3 }, // TODO: staccato
		{ NOTE_GS4, 1 },
		{ 0, 1 },
		{ NOTE_G4, 2 },
		{ NOTE_F4, 2 },
		{ NOTE_D4, 1 },
		{ NOTE_F4, 1 },
		{ NOTE_G4, 1 },

		{ NOTE_C4, 1 },
		{ NOTE_C4, 1 },
		{ NOTE_D5, 2 }, // TODO: staccato
		{ NOTE_A4, 3 }, // TODO: staccato
		{ NOTE_GS4, 1 },
		{ 0, 1 },
		{ NOTE_G4, 2 },
		{ NOTE_F4, 2 },
		{ NOTE_D4, 1 },
		{ NOTE_F4, 1 },
		{ NOTE_G4, 1 },

		{ NOTE_B3, 1 },
		{ NOTE_B3, 1 },
		{ NOTE_D5, 2 }, // TODO: staccato
		{ NOTE_A4, 3 }, // TODO: staccato
		{ NOTE_GS4, 1 },
		{ 0, 1 },
		{ NOTE_G4, 2 },
		{ NOTE_F4, 2 },
		{ NOTE_D4, 1 },
		{ NOTE_F4, 1 },
		{ NOTE_G4, 1 },

		{ NOTE_AS3, 1 },
		{ NOTE_AS3, 1 },
		{ NOTE_D5, 2 }, // TODO: staccato
		{ NOTE_A4, 3 }, // TODO: staccato
		{ NOTE_GS4, 1 },
		{ 0, 1 },
		{ NOTE_G4, 2 },
		{ NOTE_F4, 2 },
		{ NOTE_D4, 1 },
		{ NOTE_F4, 1 },
		{ NOTE_G4, 1 }
	};
} melody;

#endif
/* }}}*/
/* TETRIS_THEME_A{{{*/
#ifdef TETRIS_THEME_A

struct
{
	unsigned char mmIndex = 24;
	uint8_t unitsPerTick = 4;
} melody;

#ifdef sound1core
struct
{
	int length = 44;
	a_tone tones[44] = {
		{ NOTE_E5, 4 },
		{ NOTE_B4, 2 },
		{ NOTE_C5, 2 },
		{ NOTE_D5, 2 },
		{ NOTE_E5, 1 },
		{ NOTE_D5, 1 },
		{ NOTE_C5, 2 },
		{ NOTE_B4, 2 },
		{ NOTE_A4, 4 },
		{ NOTE_A4, 2 },
		{ NOTE_C5, 2 },
		{ NOTE_E5, 4 },
		{ NOTE_D5, 2 },
		{ NOTE_C5, 2 },
		{ NOTE_B4, 4 },
		{ NOTE_B4, 1 },
		{ NOTE_B4, 1 },
		{ NOTE_C5, 2 },
		{ NOTE_D5, 4 },
		{ NOTE_E5, 4 },
		{ NOTE_C5, 4 },
		{ NOTE_A4, 4 },
		{ NOTE_A4, 8 },

		{ NOTE_D5, 4 },
		{ NOTE_D5, 2 },
		{ NOTE_F5, 2 },
		{ NOTE_A5, 4 },
		{ NOTE_G5, 2 },
		{ NOTE_F5, 2 },
		{ NOTE_E5, 4 },
		{ NOTE_E5, 2 },
		{ NOTE_C5, 2 },
		{ NOTE_E5, 4 },
		{ NOTE_D5, 2 },
		{ NOTE_C5, 2 },
		{ NOTE_B4, 4 },
		{ NOTE_B4, 1 },
		{ NOTE_B4, 1 },
		{ NOTE_C5, 2 },
		{ NOTE_D5, 4 },
		{ NOTE_E5, 4 },
		{ NOTE_C5, 4 },
		{ NOTE_A4, 4 },
		{ NOTE_A4, 8 }
	};
} melody_part1;
#endif

#ifdef sound2core
struct
{
	int length = 63;
	a_tone tones[63] = {
		{ NOTE_E3, 2 },
		{ NOTE_E4, 2 },
		{ NOTE_E3, 2 },
		{ NOTE_E4, 2 },
		{ NOTE_E3, 2 },
		{ NOTE_E4, 2 },
		{ NOTE_E3, 2 },
		{ NOTE_E4, 2 },
		{ NOTE_A3, 2 },
		{ NOTE_A4, 2 },
		{ NOTE_A3, 2 },
		{ NOTE_A4, 2 },
		{ NOTE_A3, 2 },
		{ NOTE_A4, 2 },
		{ NOTE_A3, 2 },
		{ NOTE_A4, 2 },
		{ NOTE_GS3, 2 },
		{ NOTE_GS4, 2 },
		{ NOTE_GS3, 2 },
		{ NOTE_GS4, 2 },
		{ NOTE_E3, 2 },
		{ NOTE_E4, 2 },
		{ NOTE_E3, 2 },
		{ NOTE_E4, 2 },
		{ NOTE_A3, 2 },
		{ NOTE_A4, 2 },
		{ NOTE_A3, 2 },
		{ NOTE_A4, 2 },
		{ NOTE_A3, 2 },
		{ NOTE_B3, 2 },
		{ NOTE_C4, 2 },
		{ NOTE_D4, 2 },

		{ NOTE_D3, 2 },
		{ NOTE_D4, 2 },
		{ NOTE_D3, 2 },
		{ NOTE_D4, 2 },
		{ NOTE_D3, 2 },
		{ NOTE_D4, 2 },
		{ NOTE_D3, 2 },
		{ NOTE_D4, 2 },
		{ NOTE_C3, 2 },
		{ NOTE_C4, 2 },
		{ NOTE_C3, 2 },
		{ NOTE_C4, 2 },
		{ NOTE_C3, 2 },
		{ NOTE_C4, 2 },
		{ NOTE_C3, 2 },
		{ NOTE_C4, 2 },
		{ NOTE_G2, 2 },
		{ NOTE_G3, 2 },
		{ NOTE_G2, 2 },
		{ NOTE_G3, 2 },
		{ NOTE_E3, 2 },
		{ NOTE_E4, 2 },
		{ NOTE_E3, 2 },
		{ NOTE_E4, 2 },
		{ NOTE_A3, 2 },
		{ NOTE_A4, 2 },
		{ NOTE_A3, 2 },
		{ NOTE_A4, 2 },
		{ NOTE_A3, 2 },
		{ NOTE_A4, 2 },
		{ NOTE_A3, 4 }
	};
} melody_part2;
#endif

#endif
/* }}}*/
