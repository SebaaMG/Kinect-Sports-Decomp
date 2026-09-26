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
#define TBLr 0
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82DA6A58();
extern int fn_82DA6BA8();
extern int fn_82DBA1E0();
extern int fn_82F69148();
extern int fn_83088518();
extern unsigned int iStack_88;
extern unsigned int iStack_8c;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_90;
extern V16 vectorAddFloatingPoint();


void fn_82D87B28(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 in_r0;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int *piVar12;
  ulonglong uVar13;
  int iVar14;
  bool bVar15;
  undefined1 in_vs32 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs45 [16];
  undefined4 in_register_00010090;
  undefined4 in_register_00010094;
  undefined4 in_register_00010098;
  undefined4 in_vr9;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  uint uStack_90;
  int iStack_8c;
  int iStack_88;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = "TtBroadphase Shift";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0x80000000;
  (**(code **)(**(int **)(param_1 + 0x58) + 0x54))
            (*(int **)(param_1 + 0x58),param_2,param_3,&uStack_78);
  (**(code **)(**(int **)(param_1 + 0x58) + 0x58))
            (*(int **)(param_1 + 0x58),(ulonglong)*(uint *)(param_1 + 0x78) + 0x20,
             (ulonglong)*(uint *)(param_1 + 0x78) + 0x30);
  vectorAddFloatingPoint(in_vs32,in_vs45);
  puVar1 = (undefined4 *)((int)in_r0 + param_1 + 0x310 & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  vectorAddFloatingPoint(in_vs43,in_vs42);
  puVar1 = (undefined4 *)((int)in_r0 + param_1 + 800 & 0xfffffff0);
  *puVar1 = in_register_00010090;
  puVar1[1] = in_register_00010094;
  puVar1[2] = in_register_00010098;
  puVar1[3] = in_vr9;
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  lVar9 = (ulonglong)*(uint *)(param_1 + 0x7c) + 8;
  if ((ulonglong)*(uint *)(param_1 + 0x7c) == 0) {
    lVar9 = 0;
  }
  fn_83088518(*(undefined4 *)(param_1 + 100),uStack_78,uStack_74,lVar9);
  if (*(int *)(param_1 + 0x1bc) != 0) {
    piVar7 = (int *)(*(int *)(param_1 + 0x1bc) + 0x18);
    lVar9 = 6;
    do {
      piVar12 = (int *)*piVar7;
      uVar5 = (**(code **)(*piVar12 + 0x14))(piVar12);
      iVar4 = (int)in_r0;
      if (uVar5 == 0) {
        vectorAddFloatingPoint(in_vs45,in_vs32);
        puVar1 = (undefined4 *)((int)piVar12 + iVar4 + 0xb0 & 0xfffffff0);
        *puVar1 = in_register_000100c0;
        puVar1[1] = in_register_000100c4;
        puVar1[2] = in_register_000100c8;
        puVar1[3] = in_vr12;
        vectorAddFloatingPoint(in_vs42,in_vs43);
        puVar1 = (undefined4 *)((int)piVar12 + iVar4 + 0xc0 & 0xfffffff0);
        *puVar1 = in_register_00010090;
        puVar1[1] = in_register_00010094;
        puVar1[2] = in_register_00010098;
        puVar1[3] = in_vr9;
      }
      else if (uVar5 < 3) {
        vectorAddFloatingPoint(in_vs45,in_vs32);
        puVar1 = (undefined4 *)((int)piVar12 + iVar4 + 0xe0 & 0xfffffff0);
        *puVar1 = in_register_000100c0;
        puVar1[1] = in_register_000100c4;
        puVar1[2] = in_register_000100c8;
        puVar1[3] = in_vr12;
      }
      lVar9 = lVar9 + -1;
      piVar7 = piVar7 + 1;
    } while (lVar9 != 0);
  }
  if (param_4 != 0) goto LAB_82d87ee0;
  iVar4 = *(int *)(param_1 + 0x20);
  iStack_88 = 0;
  uStack_84 = 0;
  lVar9 = (ulonglong)*(uint *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x2c) + 1;
  uStack_80 = 0x80000000;
  uStack_90 = (uint)lVar9;
  iStack_8c = iVar4;
  if (lVar9 == 0) {
    piVar7 = (int *)0x0;
    uVar11 = 0;
LAB_82d87d20:
    uVar13 = 0xffffffff80000000;
  }
  else {
    iVar6 = fn_82CE5410();
    piVar7 = (int *)(**(code **)(**(int **)(iVar6 + 0x10) + 0xc))
                              (*(int **)(iVar6 + 0x10),&uStack_90,4);
    uVar11 = (ulonglong)uStack_90;
    uVar13 = uVar11;
    if (uStack_90 == 0) goto LAB_82d87d20;
  }
  bVar15 = iVar4 != 0;
  if (bVar15) {
    fn_82F69148(piVar7,-(uint)(iVar4 != 0) & (uint)&iStack_8c,4);
  }
  uVar10 = (ulonglong)*(uint *)(param_1 + 0x2c);
  piVar12 = piVar7 + bVar15;
  if (0 < (int)*(uint *)(param_1 + 0x2c)) {
    iVar4 = *(int *)(param_1 + 0x28) - (int)piVar12;
    do {
      *piVar12 = *(int *)(iVar4 + (int)piVar12);
      piVar12 = piVar12 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = (ulonglong)*(uint *)(param_1 + 0x38);
  piVar12 = piVar7 + (uint)bVar15 + *(int *)(param_1 + 0x2c);
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    iVar4 = *(int *)(param_1 + 0x34) - (int)piVar12;
    do {
      *piVar12 = *(int *)(iVar4 + (int)piVar12);
      piVar12 = piVar12 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  piVar12 = piVar7;
  if (0 < (int)uVar11) {
    do {
      iVar4 = *piVar12;
      iVar6 = 0;
      if (0 < *(int *)(iVar4 + 0x4c)) {
        iVar14 = 0;
        do {
          iVar2 = *(int *)(iVar4 + 0x48);
          if (*(int *)(*(int *)(iVar2 + iVar14) + 0x10) != 0) {
            iVar8 = fn_82CE5410();
            if (uStack_84 == (uStack_80 & 0x3fffffff)) {
              fn_82CE63B0(*(undefined4 *)(iVar8 + 0x10),&iStack_88,4);
            }
            *(undefined4 *)(uStack_84 * 4 + iStack_88) = *(undefined4 *)(iVar2 + iVar14);
            uStack_84 = uStack_84 + 1;
          }
          iVar6 = iVar6 + 1;
          iVar14 = iVar14 + 4;
        } while (iVar6 < *(int *)(iVar4 + 0x4c));
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 1;
    } while (uVar11 != 0);
  }
  fn_82DBA1E0(*(undefined4 *)(param_1 + 0x78),iStack_88,uStack_84);
  iVar4 = fn_82CE5410();
  if ((uVar13 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),piVar7,uVar13 & 0x3fffffff,4);
  }
  iVar4 = fn_82CE5410();
  uStack_84 = 0;
  if ((uStack_80 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),iStack_88,uStack_80 & 0x3fffffff,4);
  }
  iStack_88 = 0;
  uStack_80 = 0x80000000;
LAB_82d87ee0:
  lVar9 = (ulonglong)*(uint *)(param_1 + 0x94) - 1;
  *(int *)(param_1 + 0x94) = (int)lVar9;
  if ((lVar9 == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
    if (*(int *)(param_1 + 0x8c) != 0) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      fn_82DA6BA8(*(undefined4 *)(param_1 + 0x88));
    }
    if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0x90) != 0)) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      fn_82DA6A58(*(undefined4 *)(param_1 + 0x88));
    }
  }
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  iVar4 = fn_82CE5410();
  uStack_74 = 0;
  if ((uStack_70 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),uStack_78,uStack_70 & 0x3fffffff,8);
  }
  return;
}

