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


void fn_828342A8(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  uVar3 = param_2 - 1;
  bVar5 = (int)uVar3 < 0 && (uVar3 & 1) != 0;
  while ((iVar4 = ((int)uVar3 >> 1) + (uint)bVar5, param_3 < param_2 &&
         (puVar2 = (undefined4 *)(iVar4 * 0xc + param_1), (uint)puVar2[1] < (uint)param_4[1]))) {
    *(undefined4 *)(param_2 * 0xc + param_1) = *puVar2;
    iVar1 = param_2 * 0xc + param_1;
    uVar3 = iVar4 - 1;
    bVar5 = (int)uVar3 < 0 && (uVar3 & 1) != 0;
    *(undefined4 *)(iVar1 + 4) = puVar2[1];
    *(undefined4 *)(iVar1 + 8) = puVar2[2];
    param_2 = iVar4;
  }
  *(undefined4 *)(param_2 * 0xc + param_1) = *param_4;
  param_1 = param_2 * 0xc + param_1;
  *(undefined4 *)(param_1 + 4) = param_4[1];
  *(undefined4 *)(param_1 + 8) = param_4[2];
  return;
}

