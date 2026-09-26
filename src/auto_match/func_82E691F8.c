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
extern int fn_82F655D8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8209A970;
extern unsigned int lbl_8209A978;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82E691F8(void)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pfVar4 = (float *)0x83240200;
  iVar2 = 0;
  uVar1 = lbl_82002AE0 & 0x7f800000;
  uVar6 = lbl_8209A978;
  do {
    dVar5 = (double)fn_82F655D8((double)(float)(iVar2 * 0x800 + uVar1),uVar6);
    *pfVar4 = (float)dVar5;
    pfVar4 = pfVar4 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)pfVar4 < -0x7cdbbdfc);
  iVar2 = 0;
  pfVar4 = (float *)0x83248610;
  pfVar3 = (float *)0x83244608;
  uVar7 = lbl_8209A970;
  do {
    dVar5 = (double)fn_82F655D8((double)(float)(iVar2 * 0x800 + uVar1),uVar7);
    *pfVar3 = (float)dVar5;
    pfVar3 = pfVar3 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)pfVar3 < -0x7cdb79f4);
  iVar2 = 0;
  do {
    dVar5 = (double)fn_82F655D8((double)(float)(iVar2 << 0x17),uVar6);
    *pfVar4 = (float)dVar5;
    pfVar4 = pfVar4 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)pfVar4 < -0x7cdb75f0);
  pfVar4 = (float *)0x83244208;
  iVar2 = 0;
  do {
    dVar5 = (double)fn_82F655D8((double)(float)(iVar2 << 0x17),uVar7);
    *pfVar4 = (float)dVar5;
    pfVar4 = pfVar4 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)pfVar4 < -0x7cdbb9f8);
  return;
}

