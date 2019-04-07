#include "pitches.h"

typedef struct {int note; char units; } a_tone;

#ifdef VADER_JACOB
#include "melodies/vader_jacob.h"
#endif
#ifdef BOER_WAT_ZEG_JE
#include "melodies/boer_wat_zeg_je.h"
#endif
#ifdef MEGALOVANIA
#include "melodies/megalovania.h"
#endif
#ifdef TETRIS_THEME_A
#include "melodies/tetris_theme_a.h"
#endif
#ifdef CRAB_RAVE
#include "melodies/Crab_Rave.h"
#endif
#ifdef TAKE_ON_ME
#include "melodies/Take_On_Me.h"
#endif
#ifdef WITCHCRAFT
#include "melodies/Witchcraft.h"
#endif
