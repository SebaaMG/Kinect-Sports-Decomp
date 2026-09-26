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
extern unsigned int *auStack_48;
extern int fn_82E5D7B8();


/* WARNING: Type propagation algorithm not settling */

longlong fn_82E5FEE8(int *param_1,ulonglong param_2,int *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int *piVar3;
  int *piStack_50;
  int *piStack_4c;
  uint auStack_48 [18];
  
  if (((param_1 == (int *)0x0) || ((param_2 & 0xffffffff) == 0)) || (param_3 == (int *)0x0)) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    auStack_48[0] = 0;
    piVar3 = (int *)0x0;
    piStack_50 = (int *)0x0;
    piStack_4c = (int *)0x0;
    lVar1 = (**(code **)(*param_1 + 0x9c))(param_1,auStack_48);
    if (-1 < lVar1) {
      auStack_48[1] = 0;
      lVar1 = (**(code **)(*param_3 + 0xc))(param_3,0xffffffff82154a68,auStack_48 + 1);
      if ((-1 < lVar1) && (uVar2 = 0, auStack_48[0] != 0)) {
        while( true ) {
          if (piStack_50 != (int *)0x0) {
            (**(code **)(*piStack_50 + 8))();
            piStack_50 = (int *)0x0;
          }
          lVar1 = (**(code **)(*param_1 + 0xa0))(param_1,uVar2,&piStack_50);
          if (lVar1 < 0) break;
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))(piVar3);
            piStack_4c = (int *)0x0;
          }
          lVar1 = fn_82E5D7B8(piStack_50,param_2,&piStack_4c);
          piVar3 = piStack_4c;
          if (((lVar1 < 0) ||
              (lVar1 = (**(code **)(*param_3 + 0x14))(param_3,piStack_4c,0), lVar1 < 0)) ||
             (uVar2 = uVar2 + 1, (ulonglong)auStack_48[0] <= (uVar2 & 0xffffffff))) break;
        }
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
      }
    }
    if (piStack_50 != (int *)0x0) {
      (**(code **)(*piStack_50 + 8))();
    }
  }
  return lVar1;
}

