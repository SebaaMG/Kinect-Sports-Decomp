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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82230110();
extern int fn_822315A0();
extern int fn_8234D730();
extern int fn_8234D8D0();
extern int fn_82359C18();
extern int fn_82365BD8();
extern int fn_823AAD88();
extern int fn_824C5B78();
extern int fn_824C6760();
extern int fn_824C6A00();
extern int fn_824C6AB0();
extern int fn_824C6B80();
extern int fn_824C6C98();
extern int fn_824C6D68();
extern int fn_824C6E80();
extern int fn_824C73C0();
extern int fn_824C9480();
extern int fn_824C9908();
extern int fn_824C9D48();
extern int fn_824C9FB8();
extern int fn_824CA800();
extern int fn_825113E0();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82529508();
extern int fn_825296E8();
extern int fn_82529A38();
extern int fn_82587AC0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F56790();
extern unsigned int iStack_674;
extern unsigned int lbl_821C0A0C;
extern unsigned int lbl_821C0A5C;
extern unsigned int lbl_821C2404;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;
extern unsigned int stack0x00000000;
extern unsigned int uStack_58c;
extern unsigned int uStack_5b0;
extern unsigned int uStack_5dc;
extern unsigned int uStack_6ac;
extern unsigned int uStack_6d0;
extern U64 storeVectorElementWordIndexed();


int * fn_824C5CB8(int *param_1,int param_2,undefined4 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar10;
  undefined4 *puVar11;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  uint *puVar16;
  int *piVar17;
  longlong lVar18;
  double dVar19;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined8 uStack_6d0;
  undefined **ppuStack_6b0;
  undefined8 uStack_6ac;
  undefined ***pppuStack_6a0;
  int iStack_674;
  undefined4 uStack_5dc;
  undefined4 uStack_5b0;
  undefined4 uStack_58c;
  
  uVar9 = ZEXT48(&stack0x00000000);
  iVar12 = 0;
  *param_1 = 0;
  iVar10 = lbl_821CC160;
  puVar16 = (uint *)(param_1 + 7);
  param_1[1] = (uint)(*(char *)(param_2 + 0x3c) == '\0');
  piVar15 = param_1 + 0xb;
  param_1[2] = (uint)*(byte *)(param_2 + 0x40);
  param_1[3] = (int)(float)*(ushort *)(param_2 + 0x3e);
  bVar1 = *(byte *)(param_2 + 0x3d);
  param_1[5] = iVar10;
  param_1[4] = (uint)bVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  piVar17 = param_1 + 9;
  param_1[0xc] = 0;
  piVar14 = param_1 + 10;
  param_1[0xd] = 0;
  fn_82230110(param_1 + 0xe);
  fn_824C6760(uVar9 - 0x6c0,param_2 + 0x20);
  if (*(int *)(param_2 + 0x24) != 0) {
    fn_824C6760(uVar9 - 0x6c0,param_2 + 0x24);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    fn_824C6760(uVar9 - 0x6c0,param_2 + 0x28);
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar4 = *(undefined4 *)
           ((int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * 0.0) * 4);
  fn_824C5B78(uVar9 - 0x6c0);
  fn_82529508(uVar9 - 0x660);
  uVar5 = storeVectorElementWordIndexed(in_vs32,0,uVar9 - 0x5c8);
  *(undefined4 *)(uVar9 - 0x5c8) = uVar5;
  storeVectorElementWordIndexed(in_vs45,uVar9 - 0x5c8,4);
  storeVectorElementWordIndexed(in_vs44,uVar9 - 0x5c8,8);
  uStack_58c = uVar4;
  fn_825296E8(uVar9 - 0x660,uVar9 + 0x40);
  uStack_5b0 = *(undefined4 *)(param_2 + 0x38);
  uStack_5dc = param_3;
  uVar6 = fn_82587AC0(uVar9 - 0x615);
  iVar10 = fn_82529A38(uVar6,uVar9 - 0x660,0);
  *param_1 = iVar10;
  dVar19 = (double)(**(code **)(**(int **)(*(int *)(iVar10 + 0x8c0) + 0x1b0) + 8))();
  param_1[5] = (int)(float)(dVar19 * (double)*(float *)(param_2 + 0x38));
  uStack_6d0 = CONCAT44(fn_823AAD88,param_3);
  uVar4 = *(undefined4 *)(*param_1 + 0x8c0);
  puVar11 = (undefined4 *)fn_8265C9E0(0x210);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    puVar11[1] = 1;
    puVar11[2] = 1;
    *puVar11 = &lbl_821C0A0C;
    if (puVar11 + 4 != (undefined4 *)0x0) {
      pppuStack_6a0 = &ppuStack_6b0;
      ppuStack_6b0 = &lbl_821C0A5C;
      uStack_6ac = uStack_6d0;
      fn_824C73C0(puVar11 + 4,uVar4,param_2 + 0x34,uVar9 - 0x6b0,param_1[4]);
      fn_82359C18(uVar9 - 0x6b0);
    }
  }
  iVar10 = param_1[8];
  param_1[8] = (int)puVar11;
  *puVar16 = (uint)(puVar11 + 4);
  if (iVar10 != 0) {
    fn_822315A0();
  }
  puVar11 = (undefined4 *)fn_8265C9E0(8);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    iVar10 = *param_1;
    *puVar11 = &lbl_821C2404;
    puVar11[1] = iVar10;
  }
  puVar2 = (undefined4 *)*piVar17;
  if (puVar11 != puVar2) {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *piVar17 = (int)puVar11;
  }
  lVar18 = (ulonglong)*puVar16 + 0x1b8;
  fn_825113E0(lVar18,0x2f,*piVar17);
  fn_825113E0(lVar18,0x30,*piVar17);
  fn_825113E0(lVar18,0x26,*piVar17);
  fn_825113E0(lVar18,0x1c,*piVar17);
  fn_825113E0(lVar18,0x1e,*piVar17);
  fn_825113E0(lVar18,0x1a,*piVar17);
  fn_825113E0(lVar18,0x1f,*piVar17);
  uVar7 = fn_8251F720(param_2 + 0x2c,0);
  uVar8 = fn_8265C9E0(0xb0);
  if ((uVar8 & 0xffffffff) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = fn_824C9480(uVar8,uVar7,puVar16,param_4);
  }
  if (iVar10 != *piVar14) {
    if (*piVar14 != 0) {
      fn_824C6A00();
    }
    *piVar14 = iVar10;
  }
  iVar10 = fn_824C9908(*piVar14);
  if (iVar10 != 0) {
    uVar8 = fn_824C6AB0(uVar9 - 0x678,*param_1,puVar16,uVar9 - 0x6d0,param_5);
    iVar13 = 0;
    iVar10 = 0;
    if ((uVar9 - 0x6d0 & 0xffffffff) != (uVar8 & 0xffffffff)) {
      piVar17 = (int *)uVar8;
      iVar10 = piVar17[1];
      piVar17[1] = 0;
      iVar13 = *piVar17;
      *piVar17 = 0;
    }
    iVar3 = param_1[0xc];
    param_1[0xc] = iVar10;
    *piVar15 = iVar13;
    if (iVar3 != 0) {
      fn_822315A0();
    }
    if (iStack_674 != 0) {
      fn_822315A0();
    }
    uVar6 = fn_82365BD8(uVar9 - 0x6d0,piVar15);
    uVar6 = fn_824C6B80(uVar9 - 0x6c0,uVar6);
    fn_824C6C98(uVar9 - 0x690,uVar6);
    lVar18 = fn_824C9FB8(*piVar14,0xffffffff821c0a04);
    fn_824CA800(lVar18 + 0x58,uVar9 - 0x690);
    fn_82359C18(uVar9 - 0x690);
    uVar6 = fn_82365BD8(uVar9 - 0x6d0,piVar15);
    uVar6 = fn_824C6D68(uVar9 - 0x6c0,uVar6);
    fn_824C6E80(uVar9 - 0x690,uVar6);
    lVar18 = fn_824C9FB8(*piVar14,0xffffffff821c0a04);
    fn_82F56790(lVar18 + 0x70,uVar9 - 0x690);
    fn_82359C18(uVar9 - 0x690);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    uVar9 = fn_8265C9E0(0xe0);
    if ((uVar9 & 0xffffffff) != 0) {
      iVar12 = fn_8234D730(uVar9,*param_1,*(undefined4 *)*puVar16,
                                 (undefined4 *)*puVar16 + 0x6e,(int *)(param_2 + 0x30));
    }
    iVar10 = param_1[0xd];
    if (iVar12 != iVar10) {
      if (iVar10 != 0) {
        fn_8234D8D0(iVar10);
        fn_8265CA20(iVar10);
      }
      param_1[0xd] = iVar12;
    }
  }
  fn_824C9D48(*piVar14,0xffffffff821ac494);
  *(undefined4 *)(*param_1 + 0xb50) = 1;
  if ((uVar7 & 0xffffffff) != 0) {
    fn_8251FA58(uVar7);
  }
  return param_1;
}

