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
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern unsigned int *auStack_a0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822C72E0();
extern int fn_822E5340();
extern int fn_822E53F8();
extern int fn_822E5640();
extern int fn_822E5710();
extern int fn_822E5FA8();
extern int fn_822F53E8();
extern int fn_822F5490();
extern int fn_822F58E0();
extern int fn_822F5E88();
extern int fn_822F67E8();
extern int fn_822F6AA8();
extern int fn_822F6BD0();
extern int fn_82397ED8();
extern int fn_82397F88();
extern unsigned int iStack_8c;
extern unsigned int iStack_94;
extern unsigned int iStack_9c;
extern unsigned int lbl_821CC160;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern V16 vectorSubtractFloatingPoint();


undefined8 fn_822F3B50(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  int iVar5;
  int iVar6;
  int *piVar7;
  byte bVar8;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 in_vr12 [16];
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined1 auStack_98 [4];
  int iStack_94;
  undefined1 auStack_90 [4];
  int iStack_8c;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [80];
  
  if (*(int *)(*(int *)(param_2 + 0xc) + 0x24) == 0) {
    iVar5 = *(int *)(*(int *)(param_2 + 0x10) + 0x1e4);
    if (iVar5 == 0) {
      return 0;
    }
    piVar7 = *(int **)(*(int *)(param_2 + 0x10) + 0x2e0);
    iVar6 = (**(code **)(*piVar7 + 0x84))(piVar7,iVar5);
    if (iVar6 == 0) {
      return 0;
    }
    if (*(float *)(iVar5 + 0x140) < *(float *)(param_2 + 200)) {
      piVar7 = *(int **)(*(int *)(param_2 + 0x10) + 0x2e0);
      if (piVar7 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (**(code **)(*piVar7 + 0x3c))();
      }
      if (iVar6 == 0) {
        return 0;
      }
    }
    iVar6 = fn_822F53E8(param_2,iVar5);
    if (iVar6 != 0) {
      fn_822F5490(param_2,iVar5);
      piVar7 = (int *)fn_822E5FA8(auStack_a0,*(undefined4 *)(param_2 + 0xc));
      iVar5 = *piVar7;
      if (iStack_9c != 0) {
        fn_822315A0(iStack_9c);
      }
      if (iVar5 != 0) {
        fn_822F5E88(param_2);
      }
      piVar7 = (int *)fn_822E5FA8(auStack_98,*(undefined4 *)(param_2 + 0xc));
      iVar5 = *piVar7;
      bVar8 = (iStack_94 == 0) << 1;
      if (iStack_94 != 0) {
        fn_822315A0(iStack_94);
      }
      if (iVar5 == 0) {
        iVar6 = fn_822F6BD0(auStack_80,param_2);
        iVar5 = *(int *)(param_2 + 0xc);
        puVar3 = (undefined4 *)(in_r0 + iVar6 & 0xfffffff0);
        uVar9 = puVar3[1];
        uVar10 = puVar3[2];
        uVar11 = puVar3[3];
        vectorSubtractFloatingPoint(in_vs45,in_vs32);
        loadVectorLeftIndexed128(0xffffffff82192950,0x60);
        vectorRotateLeftImmediateMaskInsert128
                  (*(undefined1 (*) [16])(in_r0 + iVar5 + 0x290 & 0xfffffff0),in_vr12,1,0);
        if (!(bool)(bVar8 >> 1 & 1)) {
          puVar4 = (undefined4 *)(in_r0 + iVar5 + 0x290 & 0xfffffff0);
          *puVar4 = *puVar3;
          puVar4[1] = uVar9;
          puVar4[2] = uVar10;
          puVar4[3] = uVar11;
          *(undefined4 *)(iVar5 + 0x2a4) = 0;
          *(undefined4 *)(iVar5 + 0x2a8) = 0;
        }
        fn_82230110(auStack_70,0xffffffff821aded8);
        fn_822E5340(*(undefined4 *)(param_2 + 0xc),auStack_70);
        fn_82230300(auStack_70,1,0);
        fn_82230110(auStack_50,0xffffffff821adec4);
        fn_822E53F8(*(undefined4 *)(param_2 + 0xc),auStack_50);
        fn_82230300(auStack_50,1,0);
      }
    }
    if (*(int *)(param_2 + 0x24) == 0) {
      return 0;
    }
    if (*(int *)(param_2 + 0xb8) != 0) {
      fVar2 = *(float *)(param_2 + 0xbc);
      fVar1 = (float)((double)fVar2 - param_1);
      *(float *)(param_2 + 0xbc) = fVar1;
      if ((double)lbl_821CC160 <= (double)fVar1) {
        return 0;
      }
      if ((double)fVar2 < (double)lbl_821CC160) {
        return 0;
      }
      fn_822C72E0(*(undefined4 *)(*(int *)(*(int *)(param_2 + 0xc) + 0x114) + 0x20),
                        *(undefined4 *)(param_2 + 0xc0));
      return 0;
    }
    piVar7 = (int *)fn_822E5FA8(auStack_90,*(undefined4 *)(param_2 + 0xc));
    iVar5 = *piVar7;
    if (iStack_8c != 0) {
      fn_822315A0(iStack_8c);
    }
    if (iVar5 != 0) {
      fn_822F67E8(param_1,param_2);
      return 0;
    }
  }
  else {
    iVar5 = fn_82397F88(*(undefined4 *)(param_2 + 0x10));
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = *(int *)(param_2 + 0x10);
    iVar6 = fn_82397ED8(iVar5);
    if (iVar6 != 0) {
      return 0;
    }
    iVar6 = *(int *)(iVar5 + 0x1e4);
    bVar8 = (iVar6 == 0) << 1;
    if (iVar6 == 0) {
      return 0;
    }
    iVar5 = (**(code **)(**(int **)(iVar5 + 0x2e0) + 0x84))(*(int **)(iVar5 + 0x2e0),iVar6);
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = fn_822F53E8(param_2,iVar6);
    if (iVar5 != 0) {
      iVar5 = fn_822F58E0(param_2,iVar6);
      if (iVar5 == 0) {
        iVar5 = fn_822F6BD0(auStack_80);
      }
      else {
        iVar5 = fn_822F6AA8(auStack_80,param_2);
      }
      iVar6 = *(int *)(param_2 + 0xc);
      puVar3 = (undefined4 *)(in_r0 + iVar5 & 0xfffffff0);
      uVar9 = *puVar3;
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      vectorSubtractFloatingPoint(in_vs45,in_vs32);
      loadVectorLeftIndexed128(0xffffffff82192950,0x60);
      vectorRotateLeftImmediateMaskInsert128
                (*(undefined1 (*) [16])(in_r0 + iVar6 + 0x290 & 0xfffffff0),in_vr12,1,0);
      if (!(bool)(bVar8 >> 1 & 1)) {
        *(undefined4 *)(iVar6 + 0x2a8) = 0;
        *(undefined4 *)(iVar6 + 0x2a4) = 0;
        puVar3 = (undefined4 *)(in_r0 + iVar6 + 0x290 & 0xfffffff0);
        *puVar3 = uVar9;
        puVar3[1] = uVar10;
        puVar3[2] = uVar11;
        puVar3[3] = uVar12;
      }
      *(undefined4 *)(param_2 + 0x24) = 1;
    }
  }
  fn_822E5640(*(undefined4 *)(param_2 + 0xc));
  fn_822E5710(*(undefined4 *)(param_2 + 0xc));
  return 0;
}

