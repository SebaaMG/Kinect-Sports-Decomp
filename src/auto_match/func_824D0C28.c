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
extern int fn_82809868();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_824D0C28(int param_1,int param_2)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  iVar5 = param_2 * 0x1c10 + param_1;
  iVar6 = 1;
  dVar7 = (double)lbl_821CC160;
  dVar11 = (double)*(float *)(iVar5 + 0x348);
  dVar10 = dVar7;
  dVar9 = (double)fn_82809868((double)*(float *)(*(int *)(param_1 + 0x3a00) + 600));
  dVar8 = (double)lbl_821CA460;
  while (dVar11 < -(double)(float)(dVar8 - dVar9)) {
    iVar4 = ((uint)(*(int *)(iVar5 + 0x1d90) - iVar6) % 100) * 0x40 + param_2 * 0x1c10 + param_1;
    if (99 < iVar6) break;
    fVar1 = *(float *)(iVar4 + 0x4c0);
    dVar10 = (double)(float)(dVar7 + dVar10);
    iVar6 = iVar6 + 1;
    puVar2 = (undefined4 *)(iVar4 + 0x4b0U & 0xfffffff0);
    uVar12 = puVar2[1];
    uVar13 = puVar2[2];
    uVar14 = puVar2[3];
    puVar3 = (undefined4 *)(iVar5 + 0x360U & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar12;
    puVar3[2] = uVar13;
    puVar3[3] = uVar14;
    puVar2 = (undefined4 *)(iVar4 + 0x4a0U & 0xfffffff0);
    uVar12 = puVar2[1];
    uVar13 = puVar2[2];
    uVar14 = puVar2[3];
    puVar3 = (undefined4 *)(iVar5 + 0x370U & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar12;
    puVar3[2] = uVar13;
    puVar3[3] = uVar14;
    dVar7 = (double)*(float *)(iVar4 + 0x490);
    dVar11 = (double)fVar1;
  }
  *(float *)(iVar5 + 0x35c) = (float)dVar11;
  *(int *)(iVar5 + 900) = iVar6;
  *(float *)(iVar5 + 0x380) = (float)dVar10;
  return;
}

