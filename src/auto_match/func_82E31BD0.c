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
extern unsigned int *auStack_30;
extern int fn_82E31128();
extern int fn_82E31708();
extern int fn_82E50BE8();


ulonglong fn_82E31BD0(ulonglong param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  int *piVar2;
  ulonglong uVar3;
  uint auStack_30 [12];
  
  uVar3 = 0;
  auStack_30[0] = 0;
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    *param_2 = 0;
    uVar1 = fn_82E50BE8(0x1e8,0,0,0,0);
    if ((uVar1 & 0xffffffff) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)fn_82E31128(uVar1,auStack_30);
      uVar3 = (ulonglong)auStack_30[0];
    }
    if (piVar2 == (int *)0x0) {
      uVar3 = 0xffffffff8007000e;
    }
    else if (((int)uVar3 < 0) ||
            ((((param_1 & 0xffffffff) != 0 &&
              (uVar3 = fn_82E31708(piVar2,param_1), (longlong)uVar3 < 0)) ||
             (uVar3 = (**(code **)*piVar2)(piVar2,0xffffffff8215465c,param_2), (longlong)uVar3 < 0))
            )) {
      (**(code **)(*piVar2 + 0xc4))(piVar2,1);
    }
  }
  return uVar3;
}

