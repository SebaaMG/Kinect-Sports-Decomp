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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_50;
extern int fn_82FA9C60();
extern int fn_82FAD0A8();
extern unsigned int uStack_40;
extern unsigned int uStack_48;


void fn_82FAA228(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint auStack_50 [2];
  ulonglong uStack_48;
  undefined8 uStack_40;
  
  uVar1 = (*(int **)(param_1 + 8))[5];
  if ((uVar1 & 0xff00) != 0) {
    uStack_48 = ((((U64)(uStack_48)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((**(code **)(**(int **)(param_1 + 8) + 0x18))())) & ((U64)0xFFFFFFFF)) << 0));
    if ((((U64)(uStack_48) >> 0) & 0xFFFFFFFF) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_82FAD0A8();
    }
    uStack_48 = uVar2 & 0xffffffff;
    uVar4 = 0x400;
    if ((uVar2 & 0xffffffff) != 0) {
      while( true ) {
        uStack_40 = uStack_48;
        uVar3 = (**(code **)(*(int *)uVar2 + 0xc))
                          (uVar2,*(undefined4 *)(param_1 + 8),&uStack_40,auStack_50);
        uStack_40 = CONCAT44((((U64)(uStack_40) >> 0) & 0xFFFFFFFF),uVar3);
        uVar5 = (ulonglong)auStack_50[0];
        if ((int)uVar4 < (int)auStack_50[0]) {
          uVar5 = uVar4;
        }
        if ((((int *)uVar2)[0x10] != 0) && ((uVar5 & 0xffffffff) != 0)) {
          fn_82FA9C60(uVar2,uVar5,uVar1 & 0xff00,*(undefined4 *)(param_1 + 0x20));
        }
        uVar4 = uVar4 - uVar5;
        if (uVar4 == 0) break;
        uStack_48 = uStack_40;
        if ((((U64)(uStack_40) >> 32) & 0xFFFFFFFF) == 0) {
          return;
        }
        uVar2 = uStack_40 & 0xffffffff;
      }
    }
  }
  return;
}

