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
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8268ACE8();
extern int fn_82696958();
extern int fn_826F5A10();
extern int fn_826F5A88();
extern int fn_826FC7A0();
extern int fn_826FECE0();
extern int fn_826FEF00();
extern int fn_826FF0E8();
extern int fn_826FF2E8();


void fn_826FF580(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar6;
  int iVar7;
  undefined8 uVar5;
  int iVar8;
  int *piVar9;
  
  uVar2 = *(uint *)(param_2 + 4);
  if ((uVar2 & 4) == 0) {
    if ((uVar2 & 8) == 0) {
      if ((uVar2 & 0x10) == 0) {
        uVar4 = fn_8267B890(*(undefined4 *)(param_1 + 0x14),0x34,0);
        if ((uVar4 & 0xffffffff) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = fn_826FECE0(uVar4,param_2,param_1);
        }
        if (iVar6 == 0) goto LAB_826ff7bc;
        for (iVar7 = *(int *)(param_1 + 0xb28); iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
          iVar8 = *(int *)(iVar7 + 0x10);
          iVar3 = *(int *)(*(int *)(iVar6 + 0x10) + 0x14);
          if (iVar3 == 0) {
            if (*(int *)(iVar8 + 0x10) != -1) {
              bVar1 = *(int *)(iVar8 + 0x10) == *(int *)(*(int *)(iVar6 + 0x10) + 0x10);
              goto LAB_826ff7a0;
            }
          }
          else if (*(int *)(iVar8 + 0x14) != 0) {
            bVar1 = *(int *)(*(int *)(iVar8 + 0x14) + 0xc) == *(int *)(iVar3 + 0xc);
LAB_826ff7a0:
            if (bVar1) {
              *(undefined1 *)(iVar8 + 0x78) = 1;
            }
          }
        }
      }
      else {
        iVar6 = fn_8268ACE8(param_2 + 0xc);
        if (iVar6 == 0) goto LAB_826ff7bc;
        uVar4 = fn_8267B890(*(undefined4 *)(param_1 + 0x14),0x1c,0);
        if ((uVar4 & 0xffffffff) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = fn_826FF2E8(uVar4,param_2,param_1);
        }
        if (iVar6 == 0) goto LAB_826ff7bc;
        iVar7 = fn_82696958((ulonglong)*(uint *)(iVar6 + 0x10) + 0x60,0);
        if (iVar7 != 0) {
          uVar5 = fn_82696958((ulonglong)*(uint *)(iVar6 + 0x10) + 0x60,0);
          for (iVar7 = *(int *)(param_1 + 0xb28); iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
            fn_826F5A88(*(undefined4 *)(iVar7 + 0x10),uVar5);
          }
        }
      }
    }
    else {
      iVar6 = fn_8268ACE8(param_2 + 0xc);
      if (iVar6 == 0) goto LAB_826ff7bc;
      uVar4 = fn_8267B890(*(undefined4 *)(param_1 + 0x14),0x1c,0);
      if ((uVar4 & 0xffffffff) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = fn_826FF0E8(uVar4,param_2,param_1);
      }
      if (iVar6 == 0) goto LAB_826ff7bc;
      iVar7 = fn_82696958((ulonglong)*(uint *)(iVar6 + 0x10) + 0x48,0);
      if (iVar7 != 0) {
        uVar5 = fn_82696958((ulonglong)*(uint *)(iVar6 + 0x10) + 0x48,0);
        for (iVar7 = *(int *)(param_1 + 0xb28); iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
          fn_826F5A10(*(undefined4 *)(iVar7 + 0x10),uVar5);
        }
      }
    }
  }
  else {
    uVar4 = fn_8267B890(*(undefined4 *)(param_1 + 0x14),0x1c,0);
    if ((uVar4 & 0xffffffff) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = fn_826FEF00(uVar4,param_2,param_1);
    }
  }
  if (iVar6 != 0) {
    iVar7 = *(int *)(param_1 + 0xb24) + 1;
    *(int *)(param_1 + 0xb24) = iVar7;
    *(int *)(param_2 + 0x40) = iVar7;
    iVar7 = *(int *)(param_1 + 0xb28);
    if (iVar7 == 0) {
      *(int *)(param_1 + 0xb28) = iVar6;
      return;
    }
    piVar9 = (int *)(iVar7 + 4);
    iVar8 = *piVar9;
    while (iVar8 != 0) {
      iVar7 = *piVar9;
      piVar9 = (int *)(iVar7 + 4);
      iVar8 = *(int *)(iVar7 + 4);
    }
    *piVar9 = iVar6;
    *(int *)(iVar6 + 8) = iVar7;
    return;
  }
LAB_826ff7bc:
  fn_826FC7A0(param_2);
  fn_8267BE38(param_2);
  return;
}

