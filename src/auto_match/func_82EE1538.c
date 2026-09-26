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
extern unsigned int *auStack_40;
extern int fn_82EE1048();


undefined8 fn_82EE1538(int *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint auStack_40 [16];
  
  if (param_1[3] == 0) {
    uVar1 = 0xffffffffc00d36b6;
  }
  else {
    lVar4 = 0x1a;
    uVar5 = 0;
    if (param_1[0x95] != 0) {
      do {
        uVar2 = fn_82EE1048(param_1 + 0x12,uVar5,auStack_40);
        lVar3 = (**(code **)(*param_1 + 0x30))
                          (param_1,((uVar2 & 0xffffffff) >> 0x1f) - 1 & (ulonglong)auStack_40[0]);
        uVar5 = uVar5 + 1;
        lVar4 = lVar3 + lVar4;
      } while ((uVar5 & 0xffffffff) < (ulonglong)(uint)param_1[0x95]);
    }
    if (param_2 != (longlong *)0x0) {
      *param_2 = lVar4;
    }
    if (param_3 != (longlong *)0x0) {
      *param_3 = lVar4;
    }
    *(longlong *)(param_1 + 8) = lVar4;
    uVar1 = 0;
  }
  return uVar1;
}

