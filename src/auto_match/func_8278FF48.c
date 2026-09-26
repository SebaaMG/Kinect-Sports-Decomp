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
extern int fn_82F66A80();


undefined8 fn_8278FF48(int *param_1,short *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar3 = 0;
  iVar2 = 1;
  if (*param_2 == 0x2d) {
    iVar1 = -1;
  }
  else {
    iVar1 = 1;
    if (*param_2 != 0x2b) goto LAB_8278ff9c;
  }
  iVar2 = iVar1;
  param_3 = param_3 - 1;
  param_2 = param_2 + 1;
LAB_8278ff9c:
  uVar5 = 0;
  if (param_3 != 0) {
    puVar4 = (ushort *)(param_2 + -1);
    iVar3 = 0;
    do {
      iVar1 = fn_82F66A80(puVar4[1]);
      if (iVar1 == 0) {
        return 0;
      }
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 * 10 + (uint)*puVar4 + -0x30;
    } while (uVar5 < param_3);
  }
  *param_1 = iVar2 * iVar3;
  return 1;
}

