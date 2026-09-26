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
extern unsigned int *auStack_5c;
extern unsigned int *auStack_60;
extern unsigned int *auStack_64;
extern unsigned int *auStack_68;
extern unsigned int *auStack_6c;
extern int fn_822315A0();
extern int fn_82246A40();
extern int fn_822471C8();
extern int fn_824C1AD8();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_82517A50();
extern int fn_8251A108();
extern int fn_82521120();
extern int fn_82522588();
extern int fn_8288B760();
extern int fn_8289F020();
extern int fn_8289F0B8();
extern int fn_828A1B60();
extern int fn_828A1B70();
extern int fn_828A1B80();
extern int fn_828AAF70();
extern int fn_828AD740();
extern int fn_828B62F0();
extern int fn_828B6380();
extern int fn_828B6720();
extern int fn_828B6758();
extern int fn_828B6768();
extern int fn_828B8F58();
extern int fn_828B8F60();
extern int fn_828B8F68();
extern int fn_828C3D70();
extern int fn_828C4360();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int lbl_83297810;


void fn_824C15D0(double param_1,uint *param_2)

{
  float fVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  char cVar12;
  int iVar10;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 *puVar11;
  ulonglong uVar13;
  bool bVar14;
  undefined4 *puStack_70;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  
  uVar13 = (ulonglong)lbl_83297810;
  uVar2 = *(undefined4 *)(param_2[1] + 8);
  if (uVar13 == 0) {
    uVar13 = fn_82511928();
  }
  fn_825138E0(&iStack_58,uVar13,uVar2);
  fn_82522588(&iStack_50,&iStack_58);
  *(uint *)(iStack_50 + 0x4c) = param_2[2];
  cVar12 = fn_828AD740(*(undefined4 *)(iStack_58 + 8));
  if (cVar12 == '\0') goto LAB_824c1900;
  iVar10 = fn_8289F0B8(*(undefined4 *)(iStack_58 + 8));
  if ((iVar10 == 2) && (cVar12 = fn_82246A40(iStack_50), cVar12 != '\0')) {
    fn_822471C8(*(undefined4 *)(iStack_50 + 0x38),1);
    if ((*(int *)(iStack_50 + 0x38) != 0) && (cVar12 = fn_8288B760(), cVar12 != '\0')) {
      lVar8 = (**(code **)(**(int **)(iStack_50 + 0x38) + 8))();
      fn_828AAF70(lVar8 + 0x198,1);
    }
    goto LAB_824c1900;
  }
  iVar10 = fn_8289F020(*(undefined4 *)(iStack_58 + 8));
  if (((iVar10 != 1) ||
      (fVar1 = (float)param_2[10], param_2[10] = (uint)(float)(param_1 + (double)fVar1),
      (float)(param_1 + (double)fVar1) < (float)param_2[0xb])) ||
     (cVar12 = (**(code **)(**(int **)(iStack_58 + 0x18) + 0xc))(), cVar12 != '\0'))
  goto LAB_824c1900;
  bVar6 = true;
  bVar14 = false;
  fn_828C3D70(auStack_64,*(undefined4 *)(*(int *)(*(int *)(iStack_58 + 0x18) + 4) + 8));
  cVar12 = fn_828B62F0(auStack_64);
  if (cVar12 == '\0') {
LAB_824c1750:
    bVar7 = false;
  }
  else {
    bVar14 = true;
    fn_828C3D70(auStack_68,*(undefined4 *)(*(int *)(*(int *)(iStack_58 + 0x18) + 4) + 8));
    fn_828C4360(auStack_68);
    iVar10 = fn_828B6720();
    bVar7 = true;
    if (iVar10 == 0) goto LAB_824c1750;
  }
  if (bVar14) {
    fn_828B6380(auStack_68);
  }
  fn_828B6380(auStack_64);
  if (bVar7) {
    fn_828C3D70(auStack_60,*(undefined4 *)(*(int *)(*(int *)(iStack_58 + 0x18) + 4) + 8));
    uVar9 = fn_828C4360(auStack_60);
    fn_828B6758(&puStack_70,uVar9);
    fn_828B6380(auStack_60);
    while( true ) {
      fn_828C3D70(auStack_6c,*(undefined4 *)(*(int *)(*(int *)(iStack_58 + 0x18) + 4) + 8));
      uVar9 = fn_828C4360(auStack_6c);
      puVar11 = (undefined4 *)fn_828B6768(auStack_5c,uVar9);
      bVar14 = (undefined4 *)*puVar11 == puStack_70;
      fn_828B6380(auStack_6c);
      puVar11 = puStack_70;
      if (bVar14) break;
      uVar2 = *puStack_70;
      uVar9 = fn_828A1B60(*(undefined4 *)(iStack_58 + 8));
      cVar12 = fn_828B8F60(uVar2,uVar9);
      if (cVar12 == '\0') {
        uVar2 = *puVar11;
        uVar9 = fn_828A1B80(*(undefined4 *)(iStack_58 + 8));
        cVar12 = fn_828B8F68(uVar2,uVar9);
        if (cVar12 == '\0') {
          uVar2 = *puVar11;
          uVar9 = fn_828A1B70(*(undefined4 *)(iStack_58 + 8));
          cVar12 = fn_828B8F58(uVar2,uVar9);
          if (cVar12 == '\0') {
            *(undefined4 *)*param_2 = 3;
            fn_82517A50((ulonglong)*param_2 + 0x34,puVar11);
            puVar3 = (uint *)param_2[1];
            uVar4 = *param_2;
            uVar5 = param_2[3];
            fn_82521120(puVar3);
            *puVar3 = uVar5;
            *(undefined1 *)(puVar3 + 0x15) = 1;
            *(undefined1 *)(puVar3 + 1) = 1;
            *(undefined1 *)((int)puVar3 + 0x4d) = 0;
            puVar3[0x14] = 0;
            if (uVar4 == 0) {
              *(undefined1 *)(puVar3 + 0x13) = 0;
            }
            else {
              *(undefined1 *)(puVar3 + 0x13) = 1;
              fn_8251A108(puVar3 + 3,uVar4);
            }
            bVar6 = false;
            param_2[5] = param_2[5] + 1;
            break;
          }
        }
      }
      puStack_70 = puStack_70 + 2;
    }
  }
  if (bVar6) {
    fn_824C1AD8(param_2);
  }
LAB_824c1900:
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  if (iStack_54 != 0) {
    fn_822315A0();
  }
  return;
}

