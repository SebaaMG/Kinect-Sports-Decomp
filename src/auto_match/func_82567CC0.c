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
extern unsigned int *auStack_40;
extern unsigned int fStack_3c;
extern int fn_82536590();
extern int fn_82567088();
extern int fn_82569598();
extern int fn_82569740();
extern int fn_82577EE0();
extern int fn_825BC5E0();
extern unsigned int lbl_82195518;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8326B4D8;


undefined8
fn_82567CC0(double param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_r0;
  int *piVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float afStack_50 [4];
  undefined1 auStack_40 [4];
  float fStack_3c;
  
  fVar3 = lbl_821CC160;
  iVar7 = *(int *)(param_2 + 0x7c);
  fVar2 = (float)((double)*(float *)(param_2 + 0x28) * param_1);
  dVar11 = (double)fVar2;
  if (iVar7 != 0) {
    if (lbl_8326B4D8 == 0) {
      uVar8 = *(uint *)(*(int *)(iVar7 + 0x10) * 0x28 + iVar7 + 0x14) & 0x8000;
    }
    else {
      uVar8 = 0;
    }
    if (uVar8 != 0) {
      if ((*(uint *)(param_2 + 0x118) & 0x40) == 0) {
        return 1;
      }
      if (param_3 != 0) {
        *(uint *)(param_3 + 0xa8) = *(uint *)(param_3 + 0xa8) & 0xffffff7f;
      }
      piVar6 = (int *)(param_2 + 0x80);
      if (piVar6 == (int *)0x0) {
        bVar9 = false;
      }
      else {
        bVar9 = *piVar6 != 0;
      }
      if (bVar9) {
        fn_82536590(piVar6,0);
      }
      *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_2 + 0x94);
      return 1;
    }
  }
  dVar13 = (double)lbl_821CC160;
  if (*(int *)(param_2 + 0x10c) == 0) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x88) + dVar11);
    dVar10 = (double)fVar1;
    dVar12 = (double)*(float *)(param_2 + 0x94);
    *(float *)(param_2 + 0x98) = fVar2;
    *(float *)(param_2 + 0x8c) = *(float *)(param_2 + 0x88);
    *(float *)(param_2 + 0x88) = fVar1;
    if (dVar10 <= dVar12) {
      if (dVar10 < dVar13) {
        *(float *)(param_2 + 0x88) = fVar3;
      }
    }
    else if (*(int *)(param_2 + 0x11c) == 0) {
      *(float *)(param_2 + 0x88) = *(float *)(param_2 + 0x94);
    }
    else {
      *(float *)(param_2 + 0x88) = (float)(dVar10 - dVar12);
    }
  }
  if (dVar13 < (double)*(float *)(param_2 + 0x50)) {
    *(float *)(param_2 + 0x50) = (float)((double)*(float *)(param_2 + 0x50) - dVar11);
  }
  if (((*(int *)(param_2 + 0x70) != 0) && (*(int *)(param_2 + 0x10c) == 0)) && (dVar11 != dVar13)) {
    fn_825BC5E0((double)*(float *)(param_2 + 0x88),(double)*(float *)(param_2 + 0x8c),param_2,
                      param_2 + 0xe4,*(int *)(param_2 + 0x70),0,param_6,param_7,0,0);
  }
  *(float *)(param_2 + 0x90) = (float)dVar13;
  *(undefined4 *)(param_2 + 0x78) = 0;
  if ((*(char *)(*(int *)(param_2 + 0xd0) + 2) != '\0') && (param_3 != 0)) {
    fn_82567088(param_2,param_3);
  }
  fVar2 = lbl_821CA460 / *(float *)(param_2 + 0x94);
  if (*(int *)(param_2 + 0x78) == 0) {
    fVar3 = *(float *)(param_2 + 0x88);
  }
  else {
    fVar3 = *(float *)(param_2 + 0x90);
  }
  dVar11 = (double)(fVar3 * fVar2 - *(float *)(param_2 + 0x98) * fVar2);
  if (dVar11 < 0.0) {
    dVar11 = lbl_82195518;
  }
  fn_82569598((double)(float)dVar11,param_2,**(undefined4 **)(param_2 + 0x60));
  if (*(int *)(param_2 + 0x78) == 0) {
    fVar2 = *(float *)(param_2 + 0x88);
  }
  else {
    fVar2 = *(float *)(param_2 + 0x90);
  }
  if (*(int *)(param_2 + 0xdc) != 0) {
    fn_82569740((double)(fVar2 / *(float *)(param_2 + 0x94)),param_2);
  }
  if (param_3 != 0) {
    piVar6 = *(int **)(param_2 + 0x60);
    if (piVar6 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar6;
    }
    if (iVar7 != 0) {
      iVar7 = *(int *)(*piVar6 + 0x8c4);
      puVar4 = (undefined4 *)(param_3 + 0x10U & 0xfffffff0);
      uVar14 = puVar4[1];
      uVar15 = puVar4[2];
      uVar16 = puVar4[3];
      puVar5 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar14;
      puVar5[2] = uVar15;
      puVar5[3] = uVar16;
      if (((iVar7 == 0) || (iVar7 = fn_82577EE0(iVar7,auStack_40,afStack_50,0), iVar7 == 0))
         || (afStack_50[0] <= fStack_3c)) {
        uVar8 = *(uint *)(param_3 + 0xa8) & 0xffffffdf;
      }
      else {
        uVar8 = *(uint *)(param_3 + 0xa8) | 0x20;
      }
      *(uint *)(param_3 + 0xa8) = uVar8;
    }
    if (*(int *)(param_2 + 300) != 0) {
      *(uint *)(param_3 + 0xa8) = *(uint *)(param_3 + 0xa8) | 0x80;
    }
  }
  if ((*(int *)(param_2 + 0x11c) == 0) && (*(float *)(param_2 + 0x94) <= *(float *)(param_2 + 0x88))
     ) {
    if (param_3 != 0) {
      *(uint *)(param_3 + 0xa8) = *(uint *)(param_3 + 0xa8) & 0xffffff7f;
      *(undefined4 *)(param_2 + 300) = 0;
    }
    return 1;
  }
  return 0;
}

