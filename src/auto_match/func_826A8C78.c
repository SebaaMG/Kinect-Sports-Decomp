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
extern int fn_826944C8();
extern int fn_82694610();
extern int fn_82F66570();


undefined8 fn_826A8C78(uint *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)*param_1;
  if (uVar6 < param_1[1]) {
    do {
      iVar2 = fn_82F66570(param_1[2],*(undefined1 *)*param_1);
      if (iVar2 != 0) break;
      uVar3 = *param_1;
      *param_1 = uVar3 + 1;
    } while (uVar3 + 1 < param_1[1]);
    *param_2 = *(undefined1 *)*param_1;
    uVar4 = (ulonglong)*param_1;
    if ((uVar6 == uVar4) || (param_1[1] < uVar4)) {
      uVar3 = *(uint *)(*(int *)(param_1[3] & 0xfffffc00) + 0x18);
    }
    else {
      uVar3 = fn_82694610(*(undefined4 *)(param_1[3] & 0xfffffc00),uVar6,uVar4 - uVar6);
    }
    *(int *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 2;
    lVar5 = (ulonglong)*(uint *)(param_1[3] + 8) - 1;
    *(int *)(param_1[3] + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8();
    }
    param_1[3] = uVar3;
    lVar5 = (ulonglong)*(uint *)(uVar3 + 8) - 1;
    *(int *)(uVar3 + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(uVar3);
    }
    uVar1 = 1;
    *param_1 = *param_1 + 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

