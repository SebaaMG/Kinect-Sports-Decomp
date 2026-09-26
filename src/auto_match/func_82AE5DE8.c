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
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82AE5DE8(undefined4 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uStack00000020;
  undefined8 uStack00000028;
  ulonglong uStack00000030;
  ulonglong uStack00000038;
  longlong lStack00000040;
  ulonglong uStack00000048;
  
  uStack00000020 = (param_2 & 0xffffffff) >> 4;
  uVar2 = uStack00000020 & 0x3f;
  lStack00000040 = (((param_2 & 0xffffffff) >> 10) + 1) * 8;
  iVar1 = (int)lStack00000040;
  uStack00000030 = *(ulonglong *)(iVar1 + (int)param_1);
  uStack00000048 = param_2 & 0xf;
  uStack00000038 = ((2L << uVar2) - 1U & -1L << uVar2 & uStack00000030) >> uVar2 & uStack00000048;
  if (uStack00000038 != 0) {
    uStack00000028 = param_4;
                    /* WARNING: Subroutine does not return */
    fn_82AA64F8(*param_1,0xdc6,&stack0x00000020);
  }
  *(ulonglong *)(iVar1 + (int)param_1) =
       uStack00000048 << uVar2 | *(ulonglong *)(iVar1 + (int)param_1);
  return;
}

