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
extern int fn_82248C08();


undefined8 fn_822477C0(int *param_1,uint param_2,uint *param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar4;
  uint uVar5;
  longlong lVar3;
  undefined4 uVar6;
  
  uVar2 = 0xffffffffffffffff;
  if (param_2 < 0xf) {
    iVar4 = (**(code **)(*param_1 + 4))(param_1);
    iVar4 = iVar4 + param_2 * 0x54;
    uVar5 = (**(code **)(*(int *)(iVar4 + 0x780) + 0x3c))(iVar4 + 0x780);
    pcVar1 = *(code **)(*param_1 + 4);
    *param_3 = (uint)LZCOUNT((uVar5 & 0xff) - 1) >> 5;
    lVar3 = (*pcVar1)(param_1);
    uVar6 = fn_82248C08(lVar3 + 0x240);
    *param_4 = uVar6;
    iVar4 = (**(code **)(*param_1 + 4))(param_1);
    iVar4 = iVar4 + param_2 * 0x54;
    uVar2 = (**(code **)(*(int *)(iVar4 + 0x294) + 0x3c))(iVar4 + 0x294);
  }
  else {
    *param_3 = 0;
    *param_4 = 1;
  }
  return uVar2;
}

