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
extern int fn_82E50BE8();
extern unsigned int lbl_82155130;


undefined8 fn_82E65D40(int param_1,int param_2,int param_3,ulonglong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  
  if ((param_4 & 0xffffffff) == 0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    piVar1 = (int *)fn_82E50BE8(0x18,0,0,0,0);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1[3] = param_1;
      piVar1[4] = param_2;
      piVar1[5] = param_3;
      piVar1[1] = 1;
      *piVar1 = (int)&lbl_82155130;
      piVar1[2] = 0;
    }
    if (piVar1 == (int *)0x0) {
      uVar2 = 0xffffffff8007000e;
    }
    else {
      uVar2 = (**(code **)*piVar1)(piVar1,0xffffffff821550bc,param_4);
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  return uVar2;
}

