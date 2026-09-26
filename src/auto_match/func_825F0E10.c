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
extern unsigned int *auStack_70;
extern unsigned int *auStack_7c;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8240D930();
extern int fn_82522ED8();
extern int fn_8258DF98();
extern int fn_8258E3A8();
extern int fn_82648D40();
extern int fn_8265C990();
extern int fn_8265CA20();
extern int fn_8265CAA0();
extern int fn_82F63CA0();
extern unsigned int iStack_80;


void fn_825F0E10(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iStack_80;
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [112];
  
  piVar10 = (int *)(param_1 + 0x1c);
  uVar7 = 0;
  if (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2 != 0) {
    iVar8 = 0;
    do {
      if (*(int *)(param_1 + 0xb8) != 0) {
        iVar3 = *(int *)(iVar8 + *(int *)(param_1 + 0xb8));
        if (iVar3 != 0) {
          fn_82522ED8(iVar3);
          uVar1 = *(undefined4 *)(param_1 + 0xb4);
          uVar5 = fn_8240D930(*(undefined4 *)(iVar8 + *piVar10));
          uVar5 = fn_82230110(auStack_70,uVar5);
          uVar2 = *(undefined4 *)(param_1 + 0xc0);
          fn_8258E3A8(&iStack_80,uVar2,uVar5);
          iVar3 = iStack_80;
          lVar6 = (ulonglong)*(uint *)(iStack_80 + 0x2c) - 1;
          *(int *)(iStack_80 + 0x2c) = (int)lVar6;
          if (lVar6 == 0) {
            fn_8265C990(*(undefined4 *)(iStack_80 + 0x28),uVar1);
            *(undefined4 *)(iVar3 + 0x28) = 0;
            fn_8258DF98(auStack_7c,uVar2,iVar3);
          }
          fn_82230300(uVar5,1,0);
        }
      }
      if (*(int *)(param_1 + 0xb0) != 0) {
        iVar3 = *(int *)(iVar8 + *(int *)(param_1 + 0xb0));
        if (iVar3 != 0) {
          fn_8265CA20(iVar3);
        }
      }
      puVar4 = *(undefined4 **)(iVar8 + *piVar10);
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar7 < (uint)(*(int *)(param_1 + 0x20) - *piVar10 >> 2));
  }
  piVar9 = (int *)(param_1 + 0x2c);
  uVar7 = 0;
  if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 2 != 0) {
    iVar8 = 0;
    do {
      fn_8265CA20(*(undefined4 *)(iVar8 + *piVar9));
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar7 < (uint)(*(int *)(param_1 + 0x30) - *piVar9 >> 2));
  }
  iVar8 = *piVar10;
  if (iVar8 != *(int *)(param_1 + 0x20)) {
    fn_82F63CA0(iVar8,*(int *)(param_1 + 0x20),0);
    *(int *)(param_1 + 0x20) = iVar8;
  }
  iVar8 = *piVar9;
  if (iVar8 != *(int *)(param_1 + 0x30)) {
    fn_82F63CA0(iVar8,*(int *)(param_1 + 0x30),0);
    *(int *)(param_1 + 0x30) = iVar8;
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    fn_8265CAA0();
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    fn_8265CAA0();
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  piVar10 = (int *)(param_1 + 0x10c);
  lVar6 = 4;
  do {
    if (*piVar10 != 0) {
      fn_82648D40();
      *piVar10 = 0;
    }
    lVar6 = lVar6 + -1;
    piVar10 = piVar10 + 0x38;
  } while (lVar6 != 0);
  return;
}

