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
extern int fn_8224FD10();
extern int fn_8225F160();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_82517A50();
extern int fn_8251A108();
extern int fn_82521120();
extern int fn_82522588();
extern int fn_8289F020();
extern int fn_8289F0B8();
extern int fn_828A1B60();
extern int fn_828A1B70();
extern int fn_828A1B80();
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


void fn_8224F838(double param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar6;
  char cVar8;
  undefined8 uVar5;
  undefined4 *puVar7;
  ulonglong uVar9;
  bool bVar10;
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
  
  uVar9 = (ulonglong)lbl_83297810;
  uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x2c) + 8);
  if (uVar9 == 0) {
    uVar9 = fn_82511928();
  }
  fn_825138E0(&iStack_58,uVar9,uVar2);
  fn_82522588(&iStack_50,&iStack_58);
  bVar3 = true;
  *(undefined4 *)(iStack_50 + 0x4c) = *(undefined4 *)(param_2 + 0x30);
  *(undefined1 *)(iStack_50 + 0x51) = 1;
  iVar6 = fn_8225F160();
  if (iVar6 != 0) {
    *(undefined4 *)(iVar6 + 100) = 2;
  }
  cVar8 = fn_828AD740(*(undefined4 *)(iStack_58 + 8));
  if (cVar8 == '\0') goto LAB_8224fb48;
  iVar6 = fn_8289F0B8(*(undefined4 *)(iStack_58 + 8));
  if ((iVar6 == 2) && (cVar8 = fn_82246A40(iStack_50), cVar8 != '\0')) {
    fn_822471C8(*(undefined4 *)(iStack_50 + 0x38),1);
    goto LAB_8224fb48;
  }
  iVar6 = fn_8289F020(*(undefined4 *)(iStack_58 + 8));
  if (((iVar6 != 1) ||
      (fVar1 = (float)((double)*(float *)(param_2 + 0x4c) + param_1),
      *(float *)(param_2 + 0x4c) = fVar1, fVar1 < *(float *)(param_2 + 0x50))) ||
     (cVar8 = (**(code **)(**(int **)(iStack_58 + 0x18) + 0xc))(), cVar8 != '\0'))
  goto LAB_8224fb48;
  bVar10 = false;
  fn_828C3D70(auStack_64,*(undefined4 *)(*(int *)(*(int *)(iStack_58 + 0x18) + 4) + 8));
  cVar8 = fn_828B62F0(auStack_64);
  if (cVar8 == '\0') {
LAB_8224f998:
    bVar4 = false;
  }
  else {
    bVar10 = true;
    fn_828C3D70(auStack_68,*(undefined4 *)(*(int *)(*(int *)(iStack_58 + 0x18) + 4) + 8));
    fn_828C4360(auStack_68);
    iVar6 = fn_828B6720();
    bVar4 = true;
    if (iVar6 == 0) goto LAB_8224f998;
  }
  if (bVar10) {
    fn_828B6380(auStack_68);
  }
  fn_828B6380(auStack_64);
  if (bVar4) {
    fn_828C3D70(auStack_60,*(undefined4 *)(*(int *)(*(int *)(iStack_58 + 0x18) + 4) + 8));
    uVar5 = fn_828C4360(auStack_60);
    fn_828B6758(&puStack_70,uVar5);
    fn_828B6380(auStack_60);
    while( true ) {
      fn_828C3D70(auStack_6c,*(undefined4 *)(*(int *)(*(int *)(iStack_58 + 0x18) + 4) + 8));
      uVar5 = fn_828C4360(auStack_6c);
      puVar7 = (undefined4 *)fn_828B6768(auStack_5c,uVar5);
      bVar10 = (undefined4 *)*puVar7 == puStack_70;
      fn_828B6380(auStack_6c);
      puVar7 = puStack_70;
      if (bVar10) break;
      uVar2 = *puStack_70;
      uVar5 = fn_828A1B60(*(undefined4 *)(iStack_58 + 8));
      cVar8 = fn_828B8F60(uVar2,uVar5);
      if (cVar8 == '\0') {
        uVar2 = *puVar7;
        uVar5 = fn_828A1B80(*(undefined4 *)(iStack_58 + 8));
        cVar8 = fn_828B8F68(uVar2,uVar5);
        if (cVar8 == '\0') {
          uVar2 = *puVar7;
          uVar5 = fn_828A1B70(*(undefined4 *)(iStack_58 + 8));
          cVar8 = fn_828B8F58(uVar2,uVar5);
          if (cVar8 == '\0') {
            **(undefined4 **)(param_2 + 0x28) = 3;
            fn_82517A50((ulonglong)*(uint *)(param_2 + 0x28) + 0x34,puVar7);
            puVar7 = *(undefined4 **)(param_2 + 0x2c);
            iVar6 = *(int *)(param_2 + 0x28);
            uVar2 = *(undefined4 *)(param_2 + 0x34);
            fn_82521120(puVar7);
            *puVar7 = uVar2;
            *(undefined1 *)(puVar7 + 0x15) = 1;
            *(undefined1 *)(puVar7 + 1) = 1;
            *(undefined1 *)((int)puVar7 + 0x4d) = 0;
            puVar7[0x14] = 0;
            if (iVar6 == 0) {
              *(undefined1 *)(puVar7 + 0x13) = 0;
            }
            else {
              *(undefined1 *)(puVar7 + 0x13) = 1;
              fn_8251A108(puVar7 + 3,iVar6);
            }
            bVar3 = false;
            *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
            break;
          }
        }
      }
      puStack_70 = puStack_70 + 2;
    }
  }
  if (bVar3) {
    fn_8224FD10(param_2);
  }
LAB_8224fb48:
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  if (iStack_54 != 0) {
    fn_822315A0();
  }
  return;
}

