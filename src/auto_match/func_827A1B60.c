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
extern int fn_82755588();
extern int fn_827555D8();
extern int fn_82756488();
extern int fn_82756F70();
extern int fn_827912D8();
extern int fn_827A0BD0();
extern int fn_827A9228();
extern unsigned int iStack_60;
extern unsigned int iStack_64;
extern unsigned int lbl_820153EC;
extern float lbl_82015BE0;
extern unsigned int lbl_820885C8;
extern unsigned int uStack_c8;


undefined8 fn_827A1B60(int param_1,float *param_2,ulonglong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  int *piVar6;
  float fVar7;
  bool bVar8;
  float fVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  double dVar16;
  int * apiStack_d0;
  uint uStack_c8;
  ushort *puStack_b0;
  ushort *puStack_ac;
  int iStack_64;
  int iStack_60;
  
  uVar10 = fn_827912D8(*(undefined4 *)(param_1 + 8));
  if ((param_2 == (float *)0x0) || ((uVar10 & 0xffffffff) < (param_3 & 0xffffffff))) {
    uVar12 = 0;
  }
  else {
    fn_827A0BD0(param_1);
    fn_827A9228(&apiStack_d0,param_1 + 0x24,param_3);
    uVar12 = 0;
    if (((apiStack_d0 == (int *)0x0) || ((uint)apiStack_d0[1] <= uStack_c8)) ||
       (bVar8 = false, (int)uStack_c8 < 0)) {
      bVar8 = true;
    }
    if (!bVar8) {
      piVar6 = *(int **)(uStack_c8 * 4 + *apiStack_d0);
      uVar10 = (ulonglong)(uint)piVar6[2];
      if ((*piVar6 < 0) && (uVar10 = (ulonglong)(uint)piVar6[2] & 0xffffff, uVar10 == 0xffffff)) {
        uVar10 = 0xffffffffffffffff;
      }
      fn_82756F70(&puStack_b0,piVar6);
      iVar13 = 0;
      uVar14 = 0;
      while( true ) {
        if ((puStack_b0 == (ushort *)0x0) || (bVar8 = false, puStack_ac <= puStack_b0)) {
          bVar8 = true;
        }
        if (bVar8) goto LAB_827a1ef0;
        if ((uVar14 & 0xffffffff) == (param_3 - uVar10 & 0xffffffff)) break;
        uVar11 = (uint)puStack_b0[1];
        if ((puStack_b0[3] >> 6 & 1) != 0) {
          uVar11 = -uVar11;
        }
        iVar13 = uVar11 + iVar13;
        fn_827555D8(&puStack_b0);
        uVar14 = uVar14 + 1;
      }
      uVar12 = 1;
      if ((puStack_b0[3] >> 0xb & 1) == 0) {
        if (iStack_64 == 0) {
          iVar15 = 0;
        }
        else {
          iVar15 = *(int *)(iStack_64 + 0x14);
        }
        dVar16 = (double)fn_82755588(puStack_b0);
        uVar10 = (ulonglong)*puStack_b0;
        dVar16 = (double)(float)(dVar16 * (double)lbl_820153EC);
        if (0xfffe < uVar10) {
          uVar10 = 0xffffffffffffffff;
        }
        (**(code **)(**(int **)(iVar15 + 0xc) + 0x30))(*(int **)(iVar15 + 0xc),uVar10,param_2);
        if ((puStack_b0[3] & 0x100) != 0) {
          param_2[2] = (param_2[2] - *param_2) * lbl_82015BE0 + *param_2;
        }
        fVar1 = *param_2;
        fVar2 = param_2[2];
        fVar3 = *(float *)(*(int *)(iVar15 + 0xc) + 8);
        fVar4 = *(float *)(*(int *)(iVar15 + 0xc) + 0xc);
        *param_2 = (float)((double)fVar1 * dVar16);
        param_2[2] = (float)((double)fVar2 * dVar16);
        fVar9 = lbl_820885C8;
        if (*piVar6 < 0) {
          uVar5 = *(ushort *)((int)piVar6 + 0x1a);
        }
        else {
          uVar5 = *(ushort *)((int)piVar6 + 0x26);
        }
        fVar7 = -(float)((double)*(float *)(*(int *)(iVar15 + 0xc) + 8) * dVar16 - (double)uVar5) +
                lbl_820885C8;
        param_2[1] = fVar7;
        param_2[3] = fVar7 + (float)((double)(fVar4 + fVar3) * dVar16);
        iVar15 = piVar6[4];
        *param_2 = (float)(longlong)iVar13 + fVar9 + (float)((double)fVar1 * dVar16);
        param_2[2] = (float)(longlong)iVar13 + fVar9 + (float)((double)fVar2 * dVar16);
        fVar7 = fVar7 + (float)(longlong)iVar15;
        fVar1 = param_2[3] + (float)(longlong)iVar15;
      }
      else {
        fVar7 = -(float)(longlong)*(int *)(iStack_60 + 0x10);
        *param_2 = fVar7;
        param_2[1] = -(float)(longlong)*(int *)(iStack_60 + 0x14);
        param_2[2] = (float)*(uint *)(iStack_60 + 0x18) + fVar7;
        param_2[3] = (float)*(uint *)(iStack_60 + 0x1c) + param_2[1];
        fVar2 = (float)(longlong)iVar13 + lbl_820885C8;
        fVar1 = (float)(longlong)piVar6[4] + lbl_820885C8;
        *param_2 = fVar2 + fVar7;
        param_2[2] = param_2[2] + fVar2;
        fVar7 = param_2[1] + fVar1;
        fVar1 = param_2[3] + fVar1;
      }
      param_2[3] = fVar1;
      param_2[1] = fVar7;
LAB_827a1ef0:
      fn_82756488(&puStack_b0);
    }
  }
  return uVar12;
}

