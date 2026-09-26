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
extern unsigned int *auStack_60;
extern unsigned int *auStack_90;
extern int fn_8248A9A8();
extern int fn_824BE400();
extern int fn_824BE598();
extern int fn_82A1EFC0();


void fn_824BEFB0(int *param_1)

{
  int iVar2;
  longlong lVar1;
  undefined8 uVar3;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [96];
  
  if ((param_1[0x144] != 0) && (*(int *)(*(int *)(*param_1 + 0x14) + 0x20) != 0)) {
    uVar3 = fn_8248A9A8(param_1 + 0x44);
    iVar2 = fn_824BE400(param_1);
    if ((iVar2 != 0) && (lVar1 = (**(code **)(*(int *)*param_1 + 0x10))(), -1 < lVar1)) {
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(auStack_60,0,0x28);
    }
    iVar2 = fn_824BE598(uVar3,param_1,0);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(auStack_90,0,0x28);
    }
  }
  return;
}

