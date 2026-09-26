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
extern int fn_82AA64F8();
extern unsigned int lbl_83160F20;
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong fn_82B463F8(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,ulonglong param_8)

{
  char cVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined **ppuVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  ulonglong uStack00000048;
  
  iVar3 = *(int *)(param_2 + 0x10);
  if (((iVar3 == 0) || (param_8 = (ulonglong)*(uint *)(iVar3 + 4), *(uint *)(iVar3 + 4) != 3)) ||
     (param_8 = (ulonglong)*(uint *)(iVar3 + 0x10), *(uint *)(iVar3 + 0x10) != 9)) {
    uStack00000020 = param_3;
    uStack00000028 = param_4;
    uStack00000030 = param_5;
    uStack00000038 = param_6;
    uStack00000040 = param_7;
    uStack00000048 = param_8;
                    /* WARNING: Subroutine does not return */
    fn_82AA64F8(param_1,0x12c1,&stack0x00000020);
  }
  uVar4 = 0;
  ppuVar5 = &lbl_83160F20;
  do {
    pcVar7 = *ppuVar5;
    pcVar6 = *(char **)(iVar3 + 0x18);
    do {
      cVar1 = *pcVar7;
      cVar2 = *pcVar6;
      if (cVar1 == '\0') break;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) break;
    uVar4 = uVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while ((uVar4 & 0xffffffff) < 0x17);
  if ((uVar4 & 0xffffffff) != 0x17) {
    return uVar4 + 1;
  }
  return 0;
}

