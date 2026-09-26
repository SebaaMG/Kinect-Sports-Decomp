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


int fn_82D6F6F0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar3 = param_2;
  iVar5 = 0;
  if (*(int *)(param_1 + 0x1c) < 1) {
    return iVar3;
  }
  iVar4 = 0;
  do {
    iVar5 = iVar5 + 1;
    puVar1 = (undefined4 *)(iVar4 + *(int *)(param_1 + 0x18) & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    iVar4 = iVar4 + 0x10;
    puVar2 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x10);
    param_2 = param_2 + 0x10;
  } while (iVar5 < *(int *)(param_1 + 0x1c));
  return iVar3;
}

