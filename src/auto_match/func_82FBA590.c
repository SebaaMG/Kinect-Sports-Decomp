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
extern unsigned int lbl_821AAD20;


undefined8 fn_82FBA590(int param_1,short param_2,float *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != (float *)0x0) {
    uVar2 = 1;
    uVar1 = (int)param_2 / 5;
    lVar3 = (longlong)(int)uVar1;
    switch(param_2) {
    case 0:
    case 5:
    case 10:
      *(int *)((int)((lVar3 + ((ulonglong)uVar1 & 0x3fffffff) * 4 & 0xffffffff) << 2) + param_1 + 4)
           = (int)*param_3;
      *(undefined1 *)(uVar1 + param_1 + 0x48) = 1;
      return uVar2;
    case 1:
    case 6:
    case 0xb:
      *(float *)((int)((lVar3 + ((ulonglong)uVar1 & 0x3fffffff) * 4 & 0xffffffff) << 2) + param_1 +
                8) = *param_3;
      *(undefined1 *)(uVar1 + param_1 + 0x48) = 1;
      return uVar2;
    case 2:
    case 7:
    case 0xc:
      *(float *)((int)((lVar3 + ((ulonglong)uVar1 & 0x3fffffff) * 4 & 0xffffffff) << 2) + param_1 +
                0xc) = *param_3;
      *(undefined1 *)(uVar1 + param_1 + 0x48) = 1;
      return uVar2;
    case 3:
    case 8:
    case 0xd:
      *(float *)((int)((lVar3 + ((ulonglong)uVar1 & 0x3fffffff) * 4 & 0xffffffff) << 2) + param_1 +
                0x10) = *param_3;
      *(undefined1 *)(uVar1 + param_1 + 0x48) = 1;
      return uVar2;
    case 4:
    case 9:
    case 0xe:
      *(bool *)((int)((lVar3 + 1U + (lVar3 + 1U & 0x3fffffff) * 4 & 0xffffffff) << 2) + param_1) =
           *param_3 != lbl_821AAD20;
      *(undefined1 *)(uVar1 + param_1 + 0x48) = 1;
      return uVar2;
    case 0xf:
      *(float *)(param_1 + 0x40) = *param_3;
      return uVar2;
    case 0x10:
      *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)param_3;
      return uVar2;
    }
  }
  return 0x1f;
}

