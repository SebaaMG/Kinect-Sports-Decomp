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
extern int fn_82A1EFC0();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_821CE8A0;
extern unsigned int lbl_831BF6F0;
extern unsigned int lbl_831BF6F4;
extern unsigned int lbl_831BF6F8;
extern unsigned int lbl_831BF70C;
extern unsigned int lbl_831BF714;


void fn_82608A28(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulonglong param_7,uint *param_8)

{
  undefined4 *puVar1;
  bool bVar2;
  float fVar3;
  undefined8 in_r0;
  bool bVar5;
  uint uVar4;
  bool bVar7;
  undefined2 *puVar6;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  if (lbl_831BF6F0 == 0) {
LAB_82608a7c:
    bVar5 = false;
  }
  else {
    bVar5 = true;
    if ((param_7 & 2) == 0) goto LAB_82608a7c;
  }
  if (lbl_831BF6F4 == 0) {
LAB_82608a98:
    bVar7 = false;
  }
  else {
    bVar7 = true;
    if ((param_7 & 4) == 0) goto LAB_82608a98;
  }
  if (lbl_831BF6F8 != 0) {
    bVar2 = true;
    if ((param_7 & 1) != 0) goto LAB_82608ab8;
  }
  bVar2 = false;
LAB_82608ab8:
  if ((bVar5) || (bVar5 = false, bVar7)) {
    bVar5 = true;
  }
  fn_82A1EFC0(param_2 + 0x160,0,0x100);
  uVar9 = *(uint *)(param_2 + 0xa0);
  puVar12 = (uint *)(param_2 + 0xa0);
  if (uVar9 < *(uint *)(param_2 + 0xa4)) {
    puVar6 = (undefined2 *)(uVar9 - 0x518);
    iVar8 = ((*(uint *)(param_2 + 0xa4) - uVar9) - 1) / 0x560 + 1;
    do {
      puVar6[0x2af] = 0;
      puVar6 = puVar6 + 0x2b0;
      *puVar6 = 0;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  *(undefined2 *)(param_2 + 0x270) = 0;
  puVar11 = (uint *)(param_2 + 0x260);
  *(undefined4 *)(param_2 + 0x264) = *(undefined4 *)(param_2 + 0x260);
  *(undefined4 *)(param_2 + 0x278) = *(undefined4 *)(param_2 + 0x274);
  puVar10 = (undefined4 *)((uint)(&lbl_821CE8A0 + (int)in_r0) & 0xfffffff0);
  uVar15 = *puVar10;
  uVar16 = puVar10[1];
  uVar17 = puVar10[2];
  uVar18 = puVar10[3];
  *(undefined2 *)(param_2 + 0x284) = 0;
  fVar3 = lbl_821CC160;
  dVar14 = (double)lbl_821CC160;
  *(undefined4 *)(param_2 + 0x28c) = *(undefined4 *)(param_2 + 0x288);
  *(undefined2 *)(param_2 + 0x298) = 0;
  *(undefined4 *)(param_2 + 0x2a0) = *(undefined4 *)(param_2 + 0x29c);
  *(undefined2 *)(param_2 + 0x2ac) = 0;
  *(undefined4 *)(param_2 + 0x2b4) = *(undefined4 *)(param_2 + 0x2b0);
  *(undefined2 *)(param_2 + 0x2c0) = 0;
  puVar10 = (undefined4 *)((int)in_r0 + param_2 + 0x100 & 0xfffffff0);
  *puVar10 = uVar15;
  puVar10[1] = uVar16;
  puVar10[2] = uVar17;
  puVar10[3] = uVar18;
  *(undefined4 *)(param_2 + 0x110) = 0;
  if (bVar2) {
    *(float *)(param_2 + 0x118) = fVar3;
    *(float *)(param_2 + 0x11c) = fVar3;
    fn_82605798(param_2,param_4,puVar12,param_3,1);
    fn_82605AF8(puVar12,(uint *)(param_2 + 0x274),param_5);
  }
  if (bVar5) {
    fn_82605258(param_2,param_3,param_4,puVar12,puVar11);
    fn_82605B90(param_2,puVar11,(uint *)(param_2 + 0x288),(uint *)(param_2 + 0x29c));
  }
  iVar8 = (int)in_r0;
  uVar9 = *puVar12;
  *(float *)(param_2 + 0x124) = (float)dVar14;
  uVar4 = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  if (uVar9 < *(uint *)(param_2 + 0xa4)) {
    iVar13 = ((*(uint *)(param_2 + 0xa4) - uVar9) - 1) / 0x560 + 1;
    uVar4 = 0;
    do {
      uVar4 = *(ushort *)(uVar9 + 0x48) | uVar4;
      *(ushort *)(uVar9 + 0x4a) = *(ushort *)(uVar9 + 0x48);
      *(byte *)(uVar9 + 0x45) = *(byte *)(uVar9 + 0x45) & 0xfe;
      uVar9 = uVar9 + 0x560;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  *(uint *)(param_2 + 0x40) = uVar4;
  if ((lbl_831BF70C != 0) && ((param_7 & 8) != 0)) {
    iVar13 = 0;
    if (0 < *(int *)(param_2 + 0xb4)) {
      puVar10 = (undefined4 *)(param_2 + 0xb4);
      do {
        puVar10 = puVar10 + 1;
        (*(code *)**(undefined4 **)*puVar10)(param_1,(undefined4 *)*puVar10,param_3,param_4,param_2)
        ;
        iVar8 = (int)in_r0;
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)(param_2 + 0xb4));
    }
  }
  *param_8 = (uint)*(ushort *)(param_2 + 0x270);
  param_8[1] = *puVar11;
  param_8[2] = (uint)*(ushort *)(param_2 + 0x284);
  param_8[3] = *(uint *)(param_2 + 0x274);
  param_8[4] = (uint)*(ushort *)(param_2 + 0x298);
  param_8[5] = *(uint *)(param_2 + 0x288);
  param_8[6] = (uint)*(ushort *)(param_2 + 0x2ac);
  param_8[7] = *(uint *)(param_2 + 0x29c);
  param_8[8] = (uint)*(ushort *)(param_2 + 0x2c0);
  param_8[9] = *(uint *)(param_2 + 0x2b0);
  if ((*(int *)(param_2 + 0x110) == 0) || (uVar9 = 1, lbl_831BF714 == 0)) {
    uVar9 = 0;
  }
  param_8[10] = uVar9;
  puVar10 = (undefined4 *)(iVar8 + param_2 + 0x100 & 0xfffffff0);
  uVar15 = puVar10[1];
  uVar16 = puVar10[2];
  uVar17 = puVar10[3];
  puVar1 = (undefined4 *)((uint)(param_8 + 0xc) & 0xfffffff0);
  *puVar1 = *puVar10;
  puVar1[1] = uVar15;
  puVar1[2] = uVar16;
  puVar1[3] = uVar17;
  return;
}

