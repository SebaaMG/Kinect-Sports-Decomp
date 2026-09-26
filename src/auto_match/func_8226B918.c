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
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern int fn_8265CA60();
extern int fn_8280ACD8();
extern int fn_8280CED8();
extern int fn_8280D140();
extern int fn_8280D160();
extern int fn_8280D180();
extern int fn_8280DD50();
extern int fn_8280DF98();
extern int fn_82F63F40();
extern int fn_82F691F0();
extern unsigned int lbl_821954C8;
extern unsigned int lbl_82195648;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8226B918(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined8 in_r0;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [144];
  
  uVar4 = (**(code **)**(undefined4 **)(param_2 + 0x1b4))();
  *(int *)(param_1 + 0x50) = (int)uVar4;
  lVar5 = (uVar4 & 0x3fffffff) << 2;
  if (0x3fffffff < (uVar4 & 0xffffffff)) {
    lVar5 = -1;
  }
  uVar6 = fn_8265CA60(lVar5);
  *(int *)(param_1 + 0x58) = (int)uVar6;
  fn_82F691F0(uVar6,0xffffffffffffffff,*(int *)(param_1 + 0x50) << 2);
  lVar5 = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  do {
    lVar11 = 0;
    do {
      fn_82F63F40(auStack_b0,0xffffffff821a7e88,lVar11,lVar5);
      piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x1b4);
      iVar7 = (**(code **)(*piVar1 + 0x10))(piVar1,auStack_b0);
      if (-1 < iVar7) {
        if (*(int *)(param_1 + 0x4c) < (int)lVar5) {
          *(int *)(param_1 + 0x4c) = (int)lVar5;
        }
        if (*(int *)(param_1 + 0x48) < (int)lVar11) {
          *(int *)(param_1 + 0x48) = (int)lVar11;
        }
      }
      lVar11 = lVar11 + 1;
    } while ((int)lVar11 < 0x4b);
    lVar5 = lVar5 + 1;
  } while ((int)lVar5 < 0x4b);
  iVar9 = *(int *)(param_1 + 0x4c) + 1;
  iVar7 = *(int *)(param_1 + 0x48) + 1;
  *(int *)(param_1 + 0x4c) = iVar9;
  lVar5 = (longlong)iVar7 * (longlong)iVar9;
  *(int *)(param_1 + 0x48) = iVar7;
  *(int *)(param_1 + 0x44) = (int)lVar5;
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  lVar5 = (ulonglong)*(uint *)(param_1 + 0x44) * 0xf0;
  if (0x1111111 < (ulonglong)*(uint *)(param_1 + 0x44)) {
    lVar5 = -1;
  }
  uVar8 = fn_8265CA60(lVar5);
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x40) = uVar8;
  dVar14 = (double)lbl_821CC160;
  if (0 < *(int *)(param_1 + 0x44)) {
    iVar9 = 0;
    dVar13 = (double)lbl_821CA460;
    do {
      iVar10 = *(int *)(param_1 + 0x40) + iVar9;
      *(float *)(iVar10 + 0x84) = (float)dVar14;
      *(float *)(iVar10 + 0x80) = (float)dVar14;
      puVar3 = (undefined4 *)((int)in_r0 + *(int *)(param_1 + 0x40) + iVar9 + 0x90 & 0xfffffff0);
      *puVar3 = in_register_000104d0;
      puVar3[1] = in_register_000104d4;
      puVar3[2] = in_register_000104d8;
      puVar3[3] = in_vr77;
      puVar3 = (undefined4 *)((int)in_r0 + *(int *)(param_1 + 0x40) + iVar9 + 0xa0 & 0xfffffff0);
      *puVar3 = in_register_000104d0;
      puVar3[1] = in_register_000104d4;
      puVar3[2] = in_register_000104d8;
      puVar3[3] = in_vr77;
      fn_8280DD50(*(int *)(param_1 + 0x40) + iVar9 + 0xb0);
      iVar7 = iVar7 + 1;
      *(float *)(*(int *)(param_1 + 0x40) + iVar9 + 0xc0) = (float)dVar14;
      puVar3 = (undefined4 *)((int)in_r0 + *(int *)(param_1 + 0x40) + iVar9 + 0xd0 & 0xfffffff0);
      *puVar3 = in_register_000104d0;
      puVar3[1] = in_register_000104d4;
      puVar3[2] = in_register_000104d8;
      puVar3[3] = in_vr77;
      *(float *)(*(int *)(param_1 + 0x40) + iVar9 + 0xd4) = (float)dVar13;
      *(undefined4 *)(*(int *)(param_1 + 0x40) + iVar9 + 0xe4) = 0x80000000;
      *(undefined1 *)(*(int *)(param_1 + 0x40) + iVar9 + 0xe0) = 0;
      *(float *)(*(int *)(param_1 + 0x40) + iVar9 + 0xc4) = (float)dVar14;
      *(float *)(*(int *)(param_1 + 0x40) + iVar9 + 200) = (float)dVar13;
      *(float *)(*(int *)(param_1 + 0x40) + iVar9 + 0xe8) = (float)dVar14;
      iVar9 = iVar9 + 0xf0;
    } while (iVar7 < *(int *)(param_1 + 0x44));
  }
  lVar5 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      iVar7 = 0;
      if (0 < *(int *)(param_1 + 0x48)) {
        do {
          iVar9 = (int)lVar5 * *(int *)(param_1 + 0x48) + iVar7;
          fn_82F63F40(auStack_90,0xffffffff821a7e88,iVar7,lVar5);
          uVar4 = (**(code **)(**(int **)(param_2 + 0x1b4) + 0x10))
                            (*(int **)(param_2 + 0x1b4),auStack_90);
          if ((-1 < (longlong)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x50))) {
            *(int *)((int)((uVar4 & 0xffffffff) << 2) + *(int *)(param_1 + 0x58)) = iVar9;
          }
          if ((-1 < iVar9) && (iVar9 < *(int *)(param_1 + 0x44))) {
            iVar12 = iVar9 * 0xf0 + *(int *)(param_1 + 0x40);
            iVar9 = **(int **)(param_2 + 0x1b4);
            *(float *)(iVar12 + 0x84) = (float)(longlong)(int)lVar5;
            pcVar2 = *(code **)(iVar9 + 0xc);
            *(float *)(iVar12 + 0x80) = (float)(longlong)iVar7;
            iVar9 = (*pcVar2)();
            iVar10 = iVar9 + 0x18;
            fn_8280DF98(iVar10,0xffffffff831d76f0,auStack_d0);
            fn_8280DF98(iVar10,0xffffffff831d76fc,auStack_c0);
            fn_8280DF98(iVar10,0xffffffff831d7708,auStack_e0);
            fn_8280ACD8(iVar12);
            fn_8280D140(iVar12,auStack_e0);
            fn_8280D160(iVar12,auStack_d0);
            fn_8280D180(iVar12,auStack_c0);
            *(undefined4 *)(iVar12 + 0x30) = *(undefined4 *)(iVar9 + 0xc);
            *(undefined4 *)(iVar12 + 0x34) = *(undefined4 *)(iVar9 + 0x10);
            *(undefined4 *)(iVar12 + 0x38) = *(undefined4 *)(iVar9 + 0x14);
            fn_8280CED8(iVar12,iVar12 + 0x40);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(param_1 + 0x48));
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < *(int *)(param_1 + 0x4c));
  }
  *(float *)(param_1 + 0x20) = (float)dVar14;
  *(float *)(param_1 + 0x24) = (float)dVar14;
  *(undefined4 *)(param_1 + 0x38) = lbl_821954C8;
  *(undefined4 *)(param_1 + 0x28) = lbl_82195648;
  *(float *)(param_1 + 0x34) = (float)(longlong)*(int *)(param_1 + 0x4c);
  *(float *)(param_1 + 0x30) = (float)(longlong)*(int *)(param_1 + 0x48);
  return;
}

