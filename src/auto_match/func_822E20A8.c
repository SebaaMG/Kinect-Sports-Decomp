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
extern unsigned int fStack_4c;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_822315A0();
extern int fn_822D13D0();
extern int fn_822E23F0();
extern int fn_822E26D0();
extern int fn_822E2A28();
extern int fn_822E2AD0();
extern int fn_822E2BE8();
extern int fn_822E2D18();
extern int fn_82370008();
extern int fn_823830A0();
extern int fn_824D2AE8();
extern int fn_824D6498();
extern int fn_8288B760();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831CD484;
extern unsigned int lbl_831D4268;


void fn_822E20A8(double param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  float fVar5;
  int in_r0;
  uint uVar7;
  int iVar8;
  undefined8 uVar6;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fStack_70;
  float fStack_6c;
  int iStack_58;
  int iStack_54;
  undefined1 auStack_50 [4];
  float fStack_4c;
  
  if (*(int *)(*(int *)(param_2 + 0x14) + 0x168) == 0) {
    uVar7 = *(uint *)(*(int *)(param_2 + 0x14) + 0x16c);
  }
  else {
    uVar7 = fn_8288B760();
    uVar7 = uVar7 & 0xff;
  }
  if (uVar7 == 0) {
    return;
  }
  if (((*(int *)(*(int *)(param_2 + 0x10) + 0x84) != 0) && (iVar8 = fn_823830A0(), iVar8 == 0)
      ) && (*(int *)(param_2 + 0x34) != 1)) {
    return;
  }
  iVar8 = *(int *)(param_2 + 0x34);
  iVar1 = *(int *)(*(int *)(param_2 + 0x14) + 0x24);
  *(float *)(param_2 + 0x3c) = (float)((double)*(float *)(param_2 + 0x3c) + param_1);
  if (iVar8 == 1) {
    fn_822E26D0(param_2);
    return;
  }
  if (iVar8 == 2) {
    bVar4 = false;
    *(undefined4 *)(param_2 + 0x74) = 0;
    *(undefined4 *)(param_2 + 0x78) = 0;
    dVar11 = (double)lbl_821CC160;
    if (((*(int *)(iVar1 + 0xf0) != 0) && (lbl_831D4268 <= *(float *)(iVar1 + 0x160))) &&
       (dVar10 = (double)(**(code **)(**(int **)(iVar1 + 0xf0) + 0x14))(),
       (double)lbl_8218EC10 < dVar10)) {
      bVar4 = true;
      dVar11 = dVar10;
    }
    iVar8 = fn_822E2A28(param_1,param_2);
    if (iVar8 != 0) {
      return;
    }
    if (!bVar4) {
      return;
    }
    fn_822E2AD0(dVar11,param_2);
    fn_822E2D18(param_2,3);
    return;
  }
  if (iVar8 != 3) {
    return;
  }
  fn_824D2AE8(&iStack_58,param_2 + 0x58);
  iVar8 = fn_822E2A28(param_1,param_2);
  if ((iVar8 != 0) || (iStack_58 == 0)) goto LAB_822e231c;
  if (*(int *)(iStack_58 + 0xa0) != 0) {
    *(undefined4 *)(iStack_58 + 0xd4) = 1;
    fVar5 = lbl_821CC160;
    *(float *)(iStack_58 + 0xe0) = lbl_821CC160;
    *(float *)(iStack_58 + 0xe4) = fVar5;
    fn_822E23F0(param_2);
    fn_822E2D18(param_2,2);
    goto LAB_822e231c;
  }
  puVar2 = (undefined4 *)(iStack_58 + 0x30U & 0xfffffff0);
  uVar12 = puVar2[1];
  uVar13 = puVar2[2];
  uVar14 = puVar2[3];
  puVar3 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar12;
  puVar3[2] = uVar13;
  puVar3[3] = uVar14;
  if (lbl_821CC160 <= fStack_4c) goto LAB_822e231c;
  uVar12 = *(undefined4 *)(*(int *)(param_2 + 0x14) + 0x24);
  if (*(int *)(*(int *)(param_2 + 0x14) + 0x274) == 0) {
    iVar8 = fn_824D6498((double)lbl_831CD484,uVar12,1);
    if (iVar8 == 0) {
      iVar8 = fn_824D6498((double)lbl_831CD484,
                                *(undefined4 *)(*(int *)(param_2 + 0x14) + 0x24),2);
      if (iVar8 == 0) goto LAB_822e231c;
      uVar9 = 2;
      goto LAB_822e22cc;
    }
    iVar8 = *(int *)(param_2 + 0x14);
    uVar9 = 1;
    *(undefined4 *)(iVar8 + 0x1ec) = 0;
  }
  else {
    iVar8 = fn_824D6498((double)lbl_831CD484,uVar12,0);
    if (iVar8 == 0) goto LAB_822e231c;
    uVar9 = 0;
LAB_822e22cc:
    iVar8 = *(int *)(param_2 + 0x14);
    *(undefined4 *)(iVar8 + 0x1ec) = 0;
  }
  *(undefined4 *)(iVar8 + 0x1e8) = 0;
  uVar6 = fn_822D13D0((double)fStack_70,(double)fStack_6c,param_2);
  fn_822E2BE8(param_2,uVar6);
  fn_822E2D18(param_2,4);
  fn_82370008(*(undefined4 *)(param_2 + 0x10),uVar9);
LAB_822e231c:
  if (iStack_54 != 0) {
    fn_822315A0();
  }
  return;
}

