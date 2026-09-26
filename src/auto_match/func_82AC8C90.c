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
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82AC8C90(undefined4 *param_1,uint *param_2,undefined8 param_3,ulonglong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uStack00000020;
  ulonglong uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  ulonglong uStack00000048;
  
  uVar1 = *param_2;
  if ((uVar1 & 0x40000000) != 0) {
    bVar2 = true;
    if ((uVar1 & 0xe000000) == 0) goto code_r0x82ac8cac;
  }
  bVar2 = false;
code_r0x82ac8cac:
  if (!bVar2) {
    return;
  }
  iVar3 = (uVar1 >> 0xd & 0xfff) + 1;
  uStack00000048 = (ulonglong)(uint)param_1[iVar3];
  if (uStack00000048 != 0) {
    if (uStack00000048 == (param_4 & 0xffffffff)) {
      return;
    }
    uStack00000020 = param_3;
    uStack00000028 = param_4;
    uStack00000030 = param_5;
    uStack00000038 = param_6;
    uStack00000040 = param_7;
                    /* WARNING: Subroutine does not return */
    fn_82AA64F8(*param_1,0x12c0,&stack0x00000020);
  }
  param_1[iVar3] = (int)param_4;
  return;
}

