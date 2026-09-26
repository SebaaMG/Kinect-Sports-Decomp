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


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82AE5CC8(undefined4 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uStack00000020;
  undefined8 uStack00000028;
  ulonglong uStack00000030;
  ulonglong uStack00000038;
  ulonglong uStack00000040;
  longlong lStack00000048;
  
  uVar2 = param_2 >> 4 & 0x1f;
  lStack00000048 = ((ulonglong)(param_2 >> 9) + 1) * 4;
  iVar1 = (int)lStack00000048;
  uStack00000030 = (ulonglong)*(uint *)(iVar1 + (int)param_1);
  uStack00000040 = (ulonglong)param_2 & 0xf;
  uStack00000020 = (ulonglong)(param_2 >> 4);
  uStack00000038 =
       uStack00000040 & ((2 << uVar2) - 1U & -1 << uVar2 & *(uint *)(iVar1 + (int)param_1)) >> uVar2
  ;
  if (uStack00000038 != 0) {
    uStack00000028 = param_4;
                    /* WARNING: Subroutine does not return */
    fn_82AA64F8(*param_1,0xdc6,&stack0x00000020);
  }
  *(uint *)(iVar1 + (int)param_1) = (int)uStack00000040 << uVar2 | *(uint *)(iVar1 + (int)param_1);
  return;
}

