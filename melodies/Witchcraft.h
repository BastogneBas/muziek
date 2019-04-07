//Witchcraft by Pendulum
struct
{
  uint8_t mmIndex = 12;
  uint8_t unitsPerTick = 8;
} melody;

#ifdef sound1core
struct
{
  int length = 34;
  a_tone tones[34] = { 
	{ NOTE_F4, 4},
	{ NOTE_GS4, 4}, 
	{ NOTE_DS5, 2},
	{ NOTE_C5, 6}, 
	{ NOTE_GS4, 4},
	{ NOTE_G4, 4}, 
	{ NOTE_F4, 2},
	{ NOTE_AS4, 6}, 
	{ NOTE_GS4, 4}, 
	{ NOTE_AS4, 4},
	{ NOTE_C5, 2}, 
	{ NOTE_F4, 8}, 
	{ NOTE_DS5, 1},
	{0, 1},
	{ NOTE_DS5, 2}, 					  
	{ NOTE_F5, 4}, 
	{0, 4},
	{ NOTE_F4, 4},
	{ NOTE_GS4, 4}, 
	{ NOTE_DS5, 2},
	{ NOTE_C5, 6}, 
	{ NOTE_GS4, 4},
	{ NOTE_G4, 4}, 
	{ NOTE_F4, 2},
	{ NOTE_AS4, 6},
	{ NOTE_GS4, 4}, 
	{ NOTE_G4, 4},
	{ NOTE_DS4, 2}, 
	{ NOTE_F4, 8}, 
	{ NOTE_DS5, 1},
	{0, 1},
	{ NOTE_DS5, 2}, 					  
	{ NOTE_F5, 4},
	{0, 4},			
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
