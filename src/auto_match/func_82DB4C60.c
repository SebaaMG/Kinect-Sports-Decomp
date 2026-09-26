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
extern int fn_82CE50D8();


void fn_82DB4C60(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 in_r0;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  iVar7 = 0;
  if (0 < param_2[1]) {
    iVar6 = 0;
    do {
      iVar1 = *(int *)(iVar6 + *param_2);
      lVar5 = (ulonglong)*(uint *)(param_1 + 0xc) + (ulonglong)*(uint *)(iVar1 + 0xa4);
      puVar2 = (undefined4 *)(iVar1 + 0x1b0U & 0xfffffff0);
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar3 = (undefined4 *)((int)lVar5 + 0x10U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      iVar4 = (int)(lVar5 + 0x50);
      puVar2 = (undefined4 *)((int)in_r0 + iVar4 & 0xfffffff0);
      uVar11 = *puVar2;
      uVar12 = puVar2[1];
      uVar13 = puVar2[2];
      uVar14 = puVar2[3];
      puVar2 = (undefined4 *)
               ((*(uint *)(iVar1 + 0xa4) >> 2 & 0x3fffffe0) + *(int *)(param_1 + 0x18) + 0x10 &
               0xfffffff0);
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar3 = (undefined4 *)((int)in_r0 + iVar4 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      fn_82CE50D8(lVar5 + 0x20,lVar5 + 0x50,iVar1 + 0x1c0);
      iVar7 = iVar7 + 1;
      puVar2 = (undefined4 *)((int)in_r0 + iVar4 & 0xfffffff0);
      *puVar2 = uVar11;
      puVar2[1] = uVar12;
      puVar2[2] = uVar13;
      puVar2[3] = uVar14;
      iVar6 = iVar6 + 4;
    } while (iVar7 < param_2[1]);
  }
  return;
}

