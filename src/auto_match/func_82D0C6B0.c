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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D0C6B0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int in_r0;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = *(uint *)(iVar1 + 0x28);
  if (param_2 == 0) {
    iVar9 = fn_82CE5410();
    uVar3 = param_3[1];
    lVar10 = (ulonglong)uVar3 + (ulonglong)uVar2;
    iVar11 = (int)lVar10;
    if ((int)(param_3[2] & 0x3fffffffU) < iVar11) {
      lVar8 = ((ulonglong)(uint)param_3[2] & 0x3fffffff) << 1;
      if (iVar11 < (int)lVar8) {
        lVar10 = lVar8;
      }
      fn_82CE6310(*(undefined4 *)(iVar9 + 0x10),param_3,lVar10,0x10);
    }
    param_3[1] = param_3[1] + uVar2;
    puVar4 = *(undefined4 **)(iVar1 + 0x24);
    iVar1 = uVar3 * 0x10 + *param_3;
    for (; puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)*puVar4) {
      puVar6 = (undefined4 *)((uint)(puVar4 + 4) & 0xfffffff0);
      uVar12 = puVar6[1];
      uVar13 = puVar6[2];
      uVar14 = puVar6[3];
      puVar7 = (undefined4 *)(in_r0 + iVar1 & 0xfffffff0);
      *puVar7 = *puVar6;
      puVar7[1] = uVar12;
      puVar7[2] = uVar13;
      puVar7[3] = uVar14;
      iVar1 = iVar1 + 0x10;
    }
  }
  else {
    iVar9 = fn_82CE5410();
    uVar3 = param_3[1];
    lVar10 = (ulonglong)uVar3 + (ulonglong)uVar2;
    iVar11 = (int)lVar10;
    if ((int)(param_3[2] & 0x3fffffffU) < iVar11) {
      lVar8 = ((ulonglong)(uint)param_3[2] & 0x3fffffff) << 1;
      if (iVar11 < (int)lVar8) {
        lVar10 = lVar8;
      }
      fn_82CE6310(*(undefined4 *)(iVar9 + 0x10),param_3,lVar10,0x10);
    }
    param_3[1] = param_3[1] + uVar2;
    piVar5 = *(int **)(iVar1 + 0x24);
    if (piVar5 != (int *)0x0) {
      iVar9 = uVar3 * 0x10 + *param_3;
      do {
        puVar4 = (undefined4 *)(in_r0 + iVar1 + 0x110 & 0xfffffff0);
        uVar12 = puVar4[1];
        uVar13 = puVar4[2];
        uVar14 = puVar4[3];{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs44,in_vs32,in_vs45); memcpy(in_vs32, &_vt0, 16); }
        puVar6 = (undefined4 *)(in_r0 + iVar9 & 0xfffffff0);
        *puVar6 = *puVar4;
        puVar6[1] = uVar12;
        puVar6[2] = uVar13;
        puVar6[3] = uVar14;
        piVar5 = (int *)*piVar5;
        iVar9 = iVar9 + 0x10;
      } while (piVar5 != (int *)0x0);
    }
  }
  return;
}

