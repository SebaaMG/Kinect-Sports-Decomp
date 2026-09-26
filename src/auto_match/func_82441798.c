typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82441298();
extern int fn_824BF8A8();
extern unsigned int iStack_6c;


void fn_82441798(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  char *pcStack_70;
  int iStack_6c;
  
  uVar1 = *param_1;
  uVar2 = uVar1 >> 10 & 1;
  if ((uVar2 == 0) || (bVar4 = true, param_1[0xb] != 0)) {
    bVar4 = false;
  }
  if ((uVar2 != 0) || (bVar6 = true, param_1[0xb] == 0)) {
    bVar6 = false;
  }
  uVar3 = uVar1 >> 0xb & 1;
  param_1[0xb] = uVar2;
  if ((uVar3 == 0) || (bVar5 = true, param_1[0xc] != 0)) {
    bVar5 = false;
  }
  if ((uVar3 != 0) || (bVar7 = true, param_1[0xc] == 0)) {
    bVar7 = false;
  }
  param_1[0xc] = uVar3;
  if ((uVar1 & 0x100000) != 0) {
    iStack_6c = 7;
    pcStack_70 = "hurdles_video";
    fn_824BF8A8(param_2,&pcStack_70);
  }
  if ((*param_1 & 8) != 0) {
    iStack_6c = 7;
    pcStack_70 = "hurdles_getready";
    fn_824BF8A8(param_2,&pcStack_70);
    pcStack_70 = "hurdles_jumping";
    iStack_6c = 7;
    fn_824BF8A8(param_2,&pcStack_70);
  }
  if ((*param_1 & 0x4000) != 0) {
    param_1[7] = 1;
  }
  fn_82441298(param_1,0xffffffff821b975c,param_2);
  if ((bVar4) || (bVar5)) {
    pcStack_70 = "hurdles_running";
    iStack_6c = 4;
    fn_824BF8A8(param_2,&pcStack_70);
  }
  if ((bVar6) || (bVar7)) {
    pcStack_70 = "hurdles_running";
    iStack_6c = 5;
    fn_824BF8A8(param_2,&pcStack_70);
  }
  if ((*param_1 & 0x10000) != 0) {
    param_1[8] = 1;
  }
  if ((*param_1 & 0x40000) != 0) {
    param_1[9] = 1;
  }
  if (bVar4) {
    pcStack_70 = "hurdles_clearing_instant_p1";
    iStack_6c = 7;
    fn_824BF8A8(param_2,&pcStack_70);
  }
  if (bVar5) {
    pcStack_70 = "hurdles_clearing_instant_p2";
    iStack_6c = 7;
    fn_824BF8A8(param_2,&pcStack_70);
  }
  if ((*param_1 & 0x8000) != 0) {
    pcStack_70 = "hurdles_jumping";
    iVar8 = ((uint)LZCOUNT(param_1[8]) >> 5 ^ 1) + 8;
    iStack_6c = iVar8;
    fn_824BF8A8(param_2,&pcStack_70);
    pcStack_70 = "hurdles_clearing_instant_p1";
    iStack_6c = iVar8;
    fn_824BF8A8(param_2,&pcStack_70);
    param_1[8] = 0;
  }
  if ((*param_1 & 0x20000) != 0) {
    pcStack_70 = "hurdles_jumping";
    iVar8 = ((uint)LZCOUNT(param_1[9]) >> 5 ^ 1) + 8;
    iStack_6c = iVar8;
    fn_824BF8A8(param_2,&pcStack_70);
    pcStack_70 = "hurdles_clearing_instant_p2";
    iStack_6c = iVar8;
    fn_824BF8A8(param_2,&pcStack_70);
    param_1[9] = 0;
  }
  return;
}

