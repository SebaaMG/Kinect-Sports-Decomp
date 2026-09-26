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


void fn_82DEDDB0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar6 = 0;
  piVar3 = (int *)(param_2 * 0xc + *(int *)(param_1 + 8));
  if (0 < piVar3[1]) {
    do {
      puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      iVar4 = *piVar3 + iVar6;
      iVar6 = iVar6 + 1;
      piVar5 = (int *)(iVar4 * 8 + *(int *)(param_1 + 0x14));
      puVar2 = (undefined4 *)(piVar5[1] * 0x50 + *(int *)(*piVar5 + 0x18) + 0x20U & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
    } while (iVar6 < piVar3[1]);
    return;
  }
  return;
}

