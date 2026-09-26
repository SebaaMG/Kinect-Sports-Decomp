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
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_826A6A38();
extern int fn_826A9280();
extern int fn_826DF558();
extern int fn_826DF848();
extern int fn_826DFA28();
extern int fn_826E20C0();
extern int fn_826E7998();
extern int fn_826E7B08();
extern int fn_826F4A18();
extern unsigned int lbl_831E7E64;


void fn_826E24D0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar10;
  longlong lVar9;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  uint auStack_50 [20];
  
  uVar10 = fn_826A6A38();
  iVar15 = *(int *)(param_1 + 0x314);
  if (iVar15 == 0) {
    iVar15 = param_1 + 0x28;
  }
  fn_826A9280(param_1 + 0x14,0xffffffff8200d010,uVar10 & 0xffff,
                    ((ulonglong)*(uint *)(iVar15 + 0x34) - (ulonglong)*(uint *)(iVar15 + 0x30)) +
                    (ulonglong)*(uint *)(iVar15 + 0x2c));
  lVar9 = fn_826DF558(param_1);
  iVar15 = *(int *)(param_1 + 0x314);
  iVar12 = param_1 + 0x28;
  if (iVar15 != 0) {
    iVar12 = iVar15;
  }
  uVar1 = *(uint *)(iVar12 + 0x34);
  iVar11 = 0;
  uVar2 = *(uint *)(iVar12 + 0x30);
  uVar3 = *(uint *)(iVar12 + 0x2c);
  piVar4 = *(int **)(*(int *)(param_1 + 0x10) + 0x28);
  if (piVar4 == (int *)0x0) {
    uVar13 = 0xffffffff8200cfd0;
  }
  else {
    piVar5 = *(int **)(*(int *)(param_1 + 0x10) + 0x24);
    if (piVar5 != (int *)0x0) {
      if (iVar15 == 0) {
        iVar15 = param_1 + 0x28;
      }
      fn_826E7998(iVar15);
      *(undefined1 *)(iVar15 + 0x38) = 1;
      iVar12 = *piVar5;
      uVar6 = *(undefined4 *)(iVar15 + 0x10);
      uVar13 = fn_826DF848(param_1);
      iVar11 = (**(code **)(iVar12 + 0x14))(piVar5,uVar6,uVar13);
      iVar15 = *(int *)(param_1 + 0x314);
      if (iVar15 == 0) {
        iVar15 = param_1 + 0x28;
      }
      fn_826E7B08(iVar15,((ulonglong)uVar1 - (ulonglong)uVar2) + (ulonglong)uVar3 + lVar9);
      lVar9 = (longlong)*(int *)(iVar11 + 0x10) * (longlong)*(int *)(iVar11 + 0xc);
      iVar12 = fn_8267B890(lbl_831E7E64,lVar9,0);
      iVar15 = *(int *)(param_1 + 0x314);
      if (iVar15 == 0) {
        iVar15 = param_1 + 0x28;
      }
      (**(code **)(*piVar4 + 8))(piVar4,iVar15,iVar12,lVar9);
      iVar15 = 0;
      if (0 < (int)lVar9) {
        iVar14 = 0;
        do {
          puVar7 = (undefined1 *)(iVar15 + iVar12);
          iVar15 = iVar15 + 1;
          iVar8 = *(int *)(iVar11 + 0x18) + iVar14;
          iVar14 = iVar14 + 4;
          *(undefined1 *)(iVar8 + 3) = *puVar7;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      fn_826E20C0(iVar11);
      fn_8267BE38(iVar12);
      goto LAB_826e2690;
    }
    uVar13 = 0xffffffff8200c940;
  }
  fn_826DFA28(param_1 + 0x14,uVar13);
LAB_826e2690:
  auStack_50[0] = uVar10 & 0xffff;
  fn_826F4A18(param_1,auStack_50,iVar11);
  if (iVar11 != 0) {
    fn_8267C498(iVar11);
  }
  return;
}

