#include <stdbool.h>
#ifdef __cplusplus
extern "C" {
    #include "types.h"
}
#else
#include "types.h"
#endif

#define SM64AP_ID_OFFSET 3626000
#define SM64AP_ITEMID_STAR SM64AP_ID_OFFSET
#define SM64AP_ID_KEY1 (SM64AP_ID_OFFSET+178)
#define SM64AP_ID_KEY2 (SM64AP_ID_KEY1+1)
#define SM64AP_ID_KEYPROG (SM64AP_ID_KEY2+1)
#define SM64AP_ID_WINGCAP (SM64AP_ID_KEYPROG+1)
#define SM64AP_ID_METALCAP (SM64AP_ID_WINGCAP+1)
#define SM64AP_ID_VANISHCAP (SM64AP_ID_METALCAP+1)
#define SM64AP_ITEMID_1UP (SM64AP_ID_VANISHCAP+1)
#define SM64AP_ID_TRIPLEJUMP (SM64AP_ID_OFFSET+185)
#define SM64AP_ID_LONGJUMP (SM64AP_ID_TRIPLEJUMP+2)
#define SM64AP_ID_BACKFLIP (SM64AP_ID_TRIPLEJUMP+3)
#define SM64AP_ID_SIDEFLIP (SM64AP_ID_TRIPLEJUMP+4)
#define SM64AP_ID_WALLKICK (SM64AP_ID_TRIPLEJUMP+5)
#define SM64AP_ID_DIVE (SM64AP_ID_TRIPLEJUMP+6)
#define SM64AP_ID_GROUNDPOUND (SM64AP_ID_TRIPLEJUMP+7)
#define SM64AP_ID_KICK (SM64AP_ID_TRIPLEJUMP+8)
#define SM64AP_ID_CLIMB (SM64AP_ID_TRIPLEJUMP+9)
#define SM64AP_ID_LEDGEGRAB (SM64AP_ID_TRIPLEJUMP+10)

#define SM64AP_ID_CANNONUNLOCK(x) (SM64AP_ID_OFFSET+200+x)

#define SM64AP_NUM_LOCS 244

#ifdef __cplusplus
//Init
extern "C" void SM64AP_InitMW(const char*, const char*, const char*);
extern "C" void SM64AP_InitSP(const char*);

// Local Stars, Keys and Caps
extern "C" int SM64AP_GetStars();
extern "C" int SM64AP_GetRequiredStars(int);
extern "C" u32 SM64AP_CourseStarFlags(s32);
extern "C" void SM64AP_RedirectWarp(s16*,s16*,s8*,s16*,s16*,bool,int);
extern "C" int SM64AP_CourseToTTC();
extern "C" void SM64AP_SetClockToTTCAction(int* action);
extern "C" void SM64AP_SetClockToTTCState();
extern "C" bool SM64AP_CheckedLoc(int);
extern "C" bool SM64AP_HaveKey1();
extern "C" bool SM64AP_HaveKey2();
extern "C" bool SM64AP_HaveCap(int);
extern "C" bool SM64AP_HaveCannon(int);
extern "C" bool SM64AP_DeathLinkPending();
extern "C" void SM64AP_DeathLinkClear();
extern "C" void SM64AP_DeathLinkSend();

// Local Moves
extern "C" bool SM64AP_MoveRandomizerActive();
extern "C" bool SM64AP_CanDoubleJump();
extern "C" bool SM64AP_CanTripleJump();
extern "C" bool SM64AP_CanLongJump();
extern "C" bool SM64AP_CanBackflip();
extern "C" bool SM64AP_CanSideFlip();
extern "C" bool SM64AP_CanWallKick();
extern "C" bool SM64AP_CanDive();
extern "C" bool SM64AP_CanGroundPound();
extern "C" bool SM64AP_CanPunch();
extern "C" bool SM64AP_CanKick();
extern "C" bool SM64AP_CanClimb();
extern "C" bool SM64AP_CanLedgeGrab();

// Send Item
extern "C" void SM64AP_SendByBoxID(int);
extern "C" void SM64AP_SendItem(int);

// Print Next Message to Screen
extern "C" void SM64AP_PrintNext();

// Called on each Bowser stage completion, i is bowser index. Will send StoryComplete depending on completion option.
extern "C" void SM64AP_FinishBowser(int i);

#else
void SM64AP_InitMW(const char*, const char*, const char*);
void SM64AP_InitSP(const char*);
int SM64AP_GetStars();
int SM64AP_GetRequiredStars(int);
u32 SM64AP_CourseStarFlags(s32);
void SM64AP_RedirectWarp(s16*,s16*,s8*,s16*,s16*,bool,int);
int SM64AP_CourseToTTC();
void SM64AP_SetClockToTTCAction(int* action);
void SM64AP_SetClockToTTCState();
bool SM64AP_CheckedLoc(int);
bool SM64AP_HaveKey1();
bool SM64AP_HaveKey2();
bool SM64AP_HaveCap(int);
bool SM64AP_HaveCannon(int);
bool SM64AP_DeathLinkPending();
void SM64AP_DeathLinkClear();
void SM64AP_DeathLinkSend();
bool SM64AP_MoveRandomizerActive();
bool SM64AP_CanDoubleJump();
bool SM64AP_CanTripleJump();
bool SM64AP_CanLongJump();
bool SM64AP_CanBackflip();
bool SM64AP_CanSideFlip();
bool SM64AP_CanWallKick();
bool SM64AP_CanDive();
bool SM64AP_CanGroundPound();
bool SM64AP_CanPunch();
bool SM64AP_CanKick();
bool SM64AP_CanClimb();
bool SM64AP_CanLedgeGrab();
void SM64AP_SendByBoxID(int);
void SM64AP_SendItem(int);
void SM64AP_PrintNext();
void SM64AP_FinishBowser(int);
#endif
