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
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_bc;
extern unsigned int fStack_128;
extern int fn_822315A0();
extern int fn_822CEEC8();
extern int fn_822DFB90();
extern int fn_82365BD8();
extern int fn_82370008();
extern int fn_82370F38();
extern int fn_824CD030();
extern int fn_824D2AE8();
extern int fn_82508078();
extern int fn_82F68CC0();
extern unsigned int iStack_13c;
extern unsigned int iStack_140;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CC160;


void fn_822DF998(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  int in_r0;
  int iVar7;
  undefined8 uVar6;
  int iVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iStack_140;
  int iStack_13c;
  undefined1 auStack_130 [8];
  float fStack_128;
  undefined1 auStack_120 [100];
  undefined1 auStack_bc [188];
  
  fn_824D2AE8(&iStack_140,param_1 + 0x44);
  if ((iStack_140 == 0) || (*(int *)(iStack_140 + 0xa0) != 0)) goto LAB_822dfb70;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  puVar3 = (undefined4 *)(iStack_140 + 0x20U & 0xfffffff0);
  uVar11 = puVar3[1];
  uVar12 = puVar3[2];
  uVar13 = puVar3[3];
  puVar4 = (undefined4 *)((uint)(auStack_130 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar11;
  puVar4[2] = uVar12;
  puVar4[3] = uVar13;
  iVar7 = fn_822CEEC8(uVar1);
  if (iVar7 == 0) {
    if (fStack_128 <= lbl_821CC160) goto LAB_822dfb70;
  }
  else if (lbl_821CC160 <= fStack_128) goto LAB_822dfb70;
  bVar5 = false;
  if (param_2 != 0xff) {
    *(int *)(param_1 + 0x4c) = param_2;
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar7 = *(int *)(param_1 + 0x4c);
    if (iVar7 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x50);
      uVar6 = fn_82365BD8(auStack_130,&iStack_140);
      fn_822DFB90(param_1,uVar6,iVar7,uVar1);
      goto LAB_822dfa64;
    }
  }
  else {
LAB_822dfa64:
    bVar5 = true;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  dVar10 = (double)*(float *)(param_1 + 0x34);
  uVar11 = *(undefined4 *)(param_1 + 0x40);
  dVar9 = (double)*(float *)(param_1 + 0x38);
  uVar12 = *(undefined4 *)(param_1 + 0x10);
  uVar13 = *(undefined4 *)(param_1 + 0x3c);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  uVar6 = fn_82365BD8(auStack_130,&iStack_140);
  fn_82370F38(dVar9,dVar10,uVar12,uVar6,uVar1,uVar13,uVar2,uVar11);
  iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x24);
  if (bVar5) {
LAB_822dfaf8:
    if (iVar7 != 0) {
      iStack_140 = *(int *)(param_1 + 0x30) * 0x148 + iStack_140;
      iVar7 = iStack_140 + 0x1dc;
      if (lbl_8218E8E8 <= *(float *)(param_1 + 0x38)) {
        iVar7 = iStack_140 + 0x280;
      }
      fn_82F68CC0(auStack_120,iVar7,0xa4);
      if (*(int *)(*(int *)(param_1 + 0x10) + 0x204) == 0) {
        fn_82508078(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xa4),auStack_bc,0);
      }
    }
  }
  else if (iVar7 != 0) {
    iVar8 = fn_824CD030(iVar7);
    if (iVar8 != 0) {
      fn_82370008(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x30));
    }
    goto LAB_822dfaf8;
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x18;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24c) = 0;
LAB_822dfb70:
  if (iStack_13c != 0) {
    fn_822315A0();
  }
  return;
}

