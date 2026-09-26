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

longlong fn_82B81860(int param_1,int param_2,undefined8 param_3,ulonglong param_4,
                      undefined8 param_5,undefined8 param_6,ulonglong param_7)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uStack00000020;
  ulonglong uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  ulonglong uStack00000040;
  longlong lStack00000048;
  
  lStack00000048 = 0;
  uVar1 = *(uint *)(param_1 + 0x30) & 0xffff0000;
  if (uVar1 != 0xffff0000) {
    puVar2 = (uint *)param_3;
    param_7 = (ulonglong)*puVar2 & 0x1f;
    if (param_7 == 0x11) {
      lStack00000048 = 0xde6;
    }
    else if (param_7 == 0x12) {
      lStack00000048 = 0xde7;
    }
    if (uVar1 != 0xffff0000) {
      if ((puVar2[1] & 0x10000000) != 0) {
        uVar1 = puVar2[2];
        param_7 = (ulonglong)uVar1 & 1;
        if ((uVar1 & 1) == 0) {
          if ((*(uint *)(param_2 + 0x14) & 1) == 0) {
            lStack00000048 = ((ulonglong)(uVar1 >> 0xe) & 3) + 0xe2e;
          }
          else {
            lStack00000048 = 0xde5;
          }
        }
      }
      *puVar2 = *puVar2 | 0x80000;
    }
  }
  if (((int)lStack00000048 != 0) && ((param_4 & 0xff) != 0)) {
    uStack00000038 = 0xffffffffffff0000;
    uStack00000020 = param_3;
    uStack00000028 = param_4;
    uStack00000030 = param_5;
    uStack00000040 = param_7;
                    /* WARNING: Subroutine does not return */
    fn_82AA64F8(param_1,lStack00000048,&stack0x00000020);
  }
  return lStack00000048;
}

