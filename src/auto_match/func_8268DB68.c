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


longlong fn_8268DB68(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar3 = ((param_2 >> 4) + 6) * 2;
  uVar1 = param_3 + 7U & 0xfffffff8;
  uVar5 = (uint)*(ushort *)(iVar3 + (int)param_1);
  if (uVar5 == 0xffff) {
    if (param_1[1] < param_1[2] + 0x20) {
      return 0;
    }
    uVar2 = param_1[2] >> 3;
    uVar5 = uVar2 & 0xffff;
    *(short *)(iVar3 + (int)param_1) = (short)uVar2;
    lVar6 = 0x10;
    puVar4 = (undefined2 *)(param_1[2] + *param_1 + -2);
    do {
      puVar4 = puVar4 + 1;
      *puVar4 = 0xffff;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    param_1[2] = param_1[2] + 0x20;
  }
  if (param_1[1] < param_1[2] + uVar1) {
    return 0;
  }
  *(short *)((uVar5 * 4 + (param_2 & 0xf)) * 2 + *param_1) = (short)(param_1[2] >> 3);
  uVar5 = param_1[2];
  param_1[2] = uVar5 + uVar1;
  return (ulonglong)uVar5 + (ulonglong)*param_1;
}

