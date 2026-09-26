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
extern int fn_82605258();
extern int fn_82605798();
extern int fn_82605AF8();
extern int fn_82605B90();
extern int fn_82608638();
extern int fn_82608788();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_821CE8A0;
extern unsigned int lbl_831BF6F0;
extern unsigned int lbl_831BF6F4;
extern unsigned int lbl_831BF6F8;
extern unsigned int lbl_831BF70C;
extern unsigned int lbl_831BF714;


void fn_82607D68(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulonglong param_7,uint *param_8)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  int in_r0;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  uVar7 = 0;
  if (lbl_831BF6F0 == 0) {
LAB_82607db8:
    bVar2 = false;
  }
  else {
    bVar2 = true;
    if ((param_7 & 2) == 0) goto LAB_82607db8;
  }
  if (lbl_831BF6F4 != 0) {
    bVar3 = true;
    if ((param_7 & 4) != 0) goto LAB_82607dd8;
  }
  bVar3 = false;
LAB_82607dd8:
  if ((lbl_831BF6F8 == 0) || (bVar4 = true, (param_7 & 1) == 0)) {
    bVar4 = false;
  }
  if ((bVar2) || (bVar2 = false, bVar3)) {
    bVar2 = true;
  }
  iVar9 = *(int *)(param_2 + 0xa0);
  iVar6 = param_2 + 0xa0;
  if ((iVar9 == 0) || (*(short *)(param_2 + 0xb0) == 0)) {
    *param_8 = 0;
    param_8[2] = 0;
    param_8[4] = 0;
    param_8[6] = 0;
    param_8[8] = 0;
  }
  else {
    *(undefined2 *)(iVar9 + 0x46) = 0;
    *(undefined2 *)(iVar9 + 0x48) = 0;
    *(undefined4 *)(param_2 + 0x264) = *(undefined4 *)(param_2 + 0x260);
    *(undefined2 *)(param_2 + 0x270) = 0;
    fVar5 = lbl_821CC160;
    puVar8 = (undefined4 *)((uint)(&lbl_821CE8A0 + in_r0) & 0xfffffff0);
    uVar11 = *puVar8;
    uVar12 = puVar8[1];
    uVar13 = puVar8[2];
    uVar14 = puVar8[3];
    dVar10 = (double)lbl_821CC160;
    *(undefined4 *)(param_2 + 0x278) = *(undefined4 *)(param_2 + 0x274);
    *(undefined2 *)(param_2 + 0x284) = 0;
    *(undefined4 *)(param_2 + 0x28c) = *(undefined4 *)(param_2 + 0x288);
    *(undefined2 *)(param_2 + 0x298) = 0;
    *(undefined4 *)(param_2 + 0x2a0) = *(undefined4 *)(param_2 + 0x29c);
    *(undefined2 *)(param_2 + 0x2ac) = 0;
    *(undefined4 *)(param_2 + 0x2b4) = *(undefined4 *)(param_2 + 0x2b0);
    *(undefined2 *)(param_2 + 0x2c0) = 0;
    puVar8 = (undefined4 *)(param_2 + 0x100U & 0xfffffff0);
    *puVar8 = uVar11;
    puVar8[1] = uVar12;
    puVar8[2] = uVar13;
    puVar8[3] = uVar14;
    *(undefined4 *)(param_2 + 0x110) = 0;
    if (bVar4) {
      *(float *)(param_2 + 0x118) = fVar5;
      *(float *)(param_2 + 0x11c) = fVar5;
      fn_82605798(param_2,param_4,iVar6,param_3,0);
      fn_82605AF8(iVar6,param_2 + 0x274,param_5);
    }
    if (bVar2) {
      fn_82605258(param_2,param_3,param_4,iVar6,param_2 + 0x260);
      fn_82605B90(param_2,param_2 + 0x260,param_2 + 0x288,param_2 + 0x29c);
    }
    *(float *)(param_2 + 0x124) = (float)dVar10;
    *(int *)(param_2 + 0x40) = (int)*(short *)(iVar9 + 0x48);
    *(byte *)(iVar9 + 0x45) = *(byte *)(iVar9 + 0x45) & 0xfe;
    *(undefined2 *)(iVar9 + 0x4a) = *(undefined2 *)(iVar9 + 0x48);
    if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
      fn_82608638(param_2,param_3);
    }
    if (lbl_831BF70C != 0) {
      iVar9 = 0;
      if (0 < *(int *)(param_2 + 0xb4)) {
        puVar8 = (undefined4 *)(param_2 + 0xb4);
        do {
          puVar8 = puVar8 + 1;
          (*(code *)**(undefined4 **)*puVar8)(param_1,(undefined4 *)*puVar8,param_3,param_4,param_2)
          ;
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(param_2 + 0xb4));
      }
    }
    fn_82608788(param_1,param_2,param_3);
    *param_8 = (uint)*(ushort *)(param_2 + 0x270);
    param_8[2] = (uint)*(ushort *)(param_2 + 0x284);
    param_8[4] = (uint)*(ushort *)(param_2 + 0x298);
    param_8[6] = (uint)*(ushort *)(param_2 + 0x2ac);
    param_8[8] = (uint)*(ushort *)(param_2 + 0x2c0);
  }
  param_8[1] = *(uint *)(param_2 + 0x260);
  param_8[3] = *(uint *)(param_2 + 0x274);
  param_8[5] = *(uint *)(param_2 + 0x288);
  param_8[7] = *(uint *)(param_2 + 0x29c);
  param_8[9] = *(uint *)(param_2 + 0x2b0);
  if ((*(int *)(param_2 + 0x110) != 0) && (lbl_831BF714 != 0)) {
    uVar7 = 1;
  }
  param_8[10] = uVar7;
  puVar8 = (undefined4 *)(param_2 + 0x100U & 0xfffffff0);
  uVar11 = puVar8[1];
  uVar12 = puVar8[2];
  uVar13 = puVar8[3];
  puVar1 = (undefined4 *)((uint)(param_8 + 0xc) & 0xfffffff0);
  *puVar1 = *puVar8;
  puVar1[1] = uVar11;
  puVar1[2] = uVar12;
  puVar1[3] = uVar13;
  return;
}

