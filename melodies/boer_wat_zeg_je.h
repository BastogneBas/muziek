/* BOER_WAT_ZEG_JE{{{*/

struct
{
  unsigned char mmIndex = 10;
  unsigned char unitsPerTick = 6;
} melody;

#ifdef sound1core
struct
{
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
} melody_part1;
#endif

#ifdef sound2core
struct
{
	int length = 0;
	a_tone tones[0] = {};
} melody_part2;
#endif
/* }}}*/

