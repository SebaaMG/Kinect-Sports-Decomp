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
extern unsigned int *auStack_60;
extern int fn_822ABA88();
extern int fn_8233E6F8();
extern int fn_8233E7C0();
extern int fn_8242C410();
extern int fn_82436648();
extern int fn_8243E578();
extern int fn_8288B760();
extern unsigned int lbl_8328D41C;


undefined8 fn_824369C0(int *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar2;
  ulonglong uVar7;
  int iVar9;
  undefined8 uVar8;
  undefined8 uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_60 [96];
  
  uVar10 = 1;
  lVar11 = 0;
  uVar7 = (ulonglong)*(uint *)param_1[0x10];
  iVar3 = fn_8242C410(uVar7);
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      iVar9 = (int)uVar7;
      iVar4 = fn_8243E578(param_2,lVar11);
      if (iVar4 == 0) {
        piVar1 = *(int **)(**(int **)(iVar9 + 8) + iVar3);
        iVar4 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),0);
        piVar1 = *(int **)(iVar4 + 0x168);
        uVar7 = (ulonglong)lbl_8328D41C;
        bVar12 = true;
        if (piVar1 == (int *)0x0) {
          uVar5 = *(uint *)(iVar4 + 0x16c);
        }
        else {
          uVar5 = fn_8288B760(piVar1);
          uVar5 = uVar5 & 0xff;
        }
        if (uVar5 == 0) {
          if (piVar1 != (int *)0x0) {
            lVar2 = (**(code **)(*piVar1 + 8))(piVar1);
            uVar7 = fn_8233E6F8(lVar2 + 0x48c,0);
            lVar2 = fn_8233E6F8(lVar2 + 0x48c,1);
            bVar12 = lVar2 != 0;
          }
        }
        else {
          if (*(int *)(iVar4 + 0x24) == 0) {
            puVar6 = (uint *)(**(code **)(*param_1 + 0x38))(auStack_60,param_1,iVar4);
            uVar7 = (ulonglong)*puVar6;
          }
          else {
            uVar7 = 0xffffffffffffffff;
          }
          if (piVar1 != (int *)0x0) {
            lVar2 = (**(code **)(*piVar1 + 8))(piVar1);
            fn_8233E7C0(lVar2 + 0x48c,uVar7,0);
            fn_8233E7C0(lVar2 + 0x48c,1,1);
          }
        }
        if (bVar12) {
          if ((int)(uint)uVar7 < (int)lbl_8328D41C) {
            uVar7 = (ulonglong)lbl_8328D41C;
            uVar8 = 2;
          }
          else if ((uint)uVar7 == lbl_8328D41C) {
            uVar7 = (ulonglong)lbl_8328D41C;
            uVar8 = 0;
          }
          else {
            uVar8 = 1;
          }
          fn_82436648(param_1,lVar11,iVar4 + 0x30,uVar8,uVar7,0,0);
        }
        else {
          uVar10 = 0;
        }
      }
      lVar11 = lVar11 + 1;
      iVar3 = iVar3 + 4;
      uVar7 = (ulonglong)*(uint *)param_1[0x10];
      iVar4 = fn_8242C410(uVar7);
    } while ((int)lVar11 < iVar4);
  }
  return uVar10;
}

