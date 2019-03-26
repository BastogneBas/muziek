/* VADER_JACOB{{{ */
struct
{
  unsigned char mmIndex = 6;
  unsigned char unitsPerTick = 2;
} melody;

#ifdef sound1core
struct
{
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

