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
extern int fn_82755510();
extern int fn_82755588();
extern int fn_827555D8();
extern int fn_82756488();
extern int fn_82756F70();
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_da;


void fn_827AB770(double param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ushort *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ushort uVar10;
  double dVar11;
  undefined2 uStack_da;
  uint uStack_90;
  uint uStack_8c;
  
  uVar9 = 0;
  iVar8 = 0;
  while( true ) {
    if (((param_2 == (int *)0x0) || ((uint)param_2[1] <= uVar9)) || (bVar4 = false, (int)uVar9 < 0))
    {
      bVar4 = true;
    }
    if (bVar4) break;
    piVar2 = *(int **)(*param_2 + iVar8);
    iVar1 = *piVar2;
    if (iVar1 < 0) {
      iVar5 = (int)*(char *)((int)piVar2 + 0x1d);
    }
    else {
      iVar5 = (int)*(short *)(piVar2 + 10);
    }
    if (iVar1 < 0) {
      uVar6 = (uint)*(ushort *)(piVar2 + 5);
    }
    else {
      uVar6 = piVar2[5];
    }
    if (iVar1 < 0) {
      uVar7 = (uint)*(ushort *)((int)piVar2 + 0x16);
    }
    else {
      uVar7 = piVar2[6];
    }
    if (iVar1 < 0) {
      *(char *)((int)piVar2 + 0x1d) = (char)(int)((double)(longlong)iVar5 * param_1);
    }
    else {
      *(short *)(piVar2 + 10) = (short)(int)((double)(longlong)iVar5 * param_1);
    }
    if (iVar1 < 0) {
      *(short *)(piVar2 + 5) = (short)(int)((double)(longlong)(int)uVar6 * param_1);
      *(short *)((int)piVar2 + 0x16) = (short)(int)((double)(longlong)(int)uVar7 * param_1);
    }
    else {
      piVar2[5] = (int)((double)(longlong)(int)uVar6 * param_1);
      piVar2[6] = (int)((double)(longlong)(int)uVar7 * param_1);
    }
    if (*piVar2 < 0) {
      uVar10 = *(ushort *)((int)piVar2 + 0x1a);
    }
    else {
      uVar10 = *(ushort *)((int)piVar2 + 0x26);
    }
    uStack_da = (undefined2)(longlong)((double)uVar10 * param_1);
    if (*piVar2 < 0) {
      *(undefined2 *)((int)piVar2 + 0x1a) = uStack_da;
    }
    else {
      *(undefined2 *)((int)piVar2 + 0x26) = uStack_da;
    }
    piVar2[3] = (int)((double)(longlong)piVar2[3] * param_1);
    piVar2[4] = (int)((double)(longlong)piVar2[4] * param_1);
    fn_82756F70(&uStack_90);
    while( true ) {
      uVar6 = uStack_90;
      if ((uStack_90 == 0) || (bVar4 = false, uStack_8c <= uStack_90)) {
        bVar4 = true;
      }
      if (bVar4) break;
      puVar3 = (ushort *)(uStack_90 + 6);
      uVar10 = *(ushort *)(uStack_90 + 2);
      uVar7 = (uint)uVar10;
      if ((*(ushort *)(uStack_90 + 6) >> 6 & 1) != 0) {
        uVar7 = -(uint)uVar10;
      }
      uVar7 = (uint)((double)(longlong)(int)uVar7 * param_1);
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f);
        *puVar3 = *puVar3 | 0x40;
      }
      else {
        *puVar3 = *puVar3 & 0xffbf;
      }
      *(ushort *)(uStack_90 + 2) = (ushort)uVar7;
      dVar11 = (double)fn_82755588(uStack_90);
      fn_82755510((double)(float)(dVar11 * param_1),uVar6);
      fn_827555D8(&uStack_90);
    }
    fn_82756488(&uStack_90);
    if (uVar9 < (uint)param_2[1]) {
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + 4;
    }
  }
  *(byte *)(param_2 + 0x1d) = *(byte *)(param_2 + 0x1d) | 1;
  return;
}

