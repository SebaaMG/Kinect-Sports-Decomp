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
extern int fn_82A5D068();


longlong fn_82A4B328(int param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                      ulonglong param_5,undefined8 param_6,int *param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  uint *puVar3;
  int *piVar4;
  int aiStack_50 [20];
  
  piVar4 = (int *)(param_1 + 0x1c);
  (**(code **)(*(int *)(param_1 + 0x1c) + 8))(piVar4);
  puVar3 = *(uint **)(param_1 + 0x16c);
  do {
    if (puVar3 == (uint *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (ulonglong)*puVar3;
      puVar3 = (uint *)puVar3[1];
    }
  } while (uVar2 != (param_5 & 0xffffffff));
  lVar1 = param_3 + 4;
  if ((param_3 & 0xffffffff) == 0) {
    lVar1 = 0;
  }
  aiStack_50[0] = 0;
  lVar1 = fn_82A5D068(param_1 + 4,param_2,uVar2 + 4,lVar1,param_4,
                          *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x4c),aiStack_50
                         );
  if (-1 < lVar1) {
    *param_7 = aiStack_50[0];
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(aiStack_50[0] + 0x1c);
  }
  (**(code **)(*piVar4 + 0x14))(piVar4);
  return lVar1;
}

