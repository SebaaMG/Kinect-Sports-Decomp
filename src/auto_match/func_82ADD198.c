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
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong fn_82ADD198(int param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  longlong lStack00000030;
  longlong lStack00000038;
  ulonglong uStack00000040;
  ulonglong uStack00000048;
  
  uVar1 = *(uint *)(param_1 + 0x2a8);
  lStack00000038 = (param_2 & 0x3fffffff) << 2;
  uVar2 = *(uint *)(uVar1 + (int)lStack00000038);
  uStack00000040 = (ulonglong)uVar2;
  if ((uStack00000040 != 0) && (uStack00000040 < 0xffff)) {
    if (uStack00000040 != (param_2 & 0xffffffff)) {
      uVar2 = *(uint *)(uVar2 * 4 + uVar1);
      while( true ) {
        uVar3 = (ulonglong)uVar2;
        uStack00000048 = (ulonglong)uVar1;
        if ((uVar3 == 0) || (0xfffe < uVar3)) break;
        if (uVar3 == uStack00000040) {
          uStack00000020 = param_3;
          uStack00000028 = param_4;
          lStack00000030 = param_5;
                    /* WARNING: Subroutine does not return */
          fn_82AA64F8(param_1,0x12c0,&stack0x00000020);
        }
        *(uint *)(uVar1 + (int)lStack00000038) = uVar2;
        param_5 = ((ulonglong)uVar2 & 0x3fffffff) << 2;
        uVar1 = *(uint *)(param_1 + 0x2a8);
        uVar2 = *(uint *)((int)param_5 + uVar1);
        uStack00000040 = uVar3;
      }
    }
    return uStack00000040;
  }
  return param_2;
}

