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
extern unsigned int *auStack_f0;
extern int fn_822ABA88();
extern int fn_822ACB68();
extern int fn_822AF138();
extern int fn_822C6880();
extern int fn_823D2A18();
extern int fn_82526C70();


void fn_823E8210(int *param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int *piVar11;
  int *piVar12;
  undefined1 auStack_f0 [240];
  
  iVar1 = *param_1;
  iVar9 = (uint)(iVar1 == 0) * 4;
  piVar12 = *(int **)(*param_2 + iVar1 * 4);
  piVar2 = *(int **)(iVar9 + *param_2);
  fn_822AF138(*(undefined4 *)(iVar1 * 4 + *param_3),0xb);
  uVar4 = fn_823D2A18(param_1[8]);
  fn_82526C70(auStack_f0,0x80,0xffffffff821b6ba4,uVar4);
  fn_822ACB68(*(undefined4 *)(*(int *)(piVar12[4] * 4 + *piVar12) + 0x48),auStack_f0);
  uVar10 = 0;
  iVar5 = *(int *)(piVar12[4] * 4 + *piVar12);
  if (*(int *)(iVar5 + 8) != 0) {
    piVar11 = param_1 + 9;
    do {
      iVar5 = fn_822ABA88(iVar5,uVar10);
      *(int *)((iVar1 * 7 + (int)uVar10) * 0x30 + param_4 + 0x20) = *piVar11;
      if ((ulonglong)(uint)param_1[1] == (uVar10 & 0xffffffff)) {
        lVar8 = ((ulonglong)(param_1[2] == 0) ^ 1) + 0xe;
      }
      else {
        uVar3 = -(ulonglong)(*(int *)(iVar5 + 0x1ec) != 0);
        lVar8 = ((uVar3 & 0xfffffffe) << 0x20 | uVar3 & 0xfffffff2) + 0x16;
      }
      fn_822AF138(*(undefined4 *)(iVar5 + 0x110),lVar8);
      if ((int)lVar8 == 0xe) {
        fn_822C6880(*(undefined4 *)(*(int *)(iVar5 + 0x114) + 0x48));
      }
      uVar10 = uVar10 + 1;
      piVar11 = piVar11 + 1;
      iVar5 = *(int *)(piVar12[4] * 4 + *piVar12);
    } while ((uVar10 & 0xffffffff) < (ulonglong)*(uint *)(iVar5 + 8));
  }
  fn_822AF138(*(undefined4 *)(iVar9 + *param_3),0xc);
  uVar4 = fn_823D2A18(param_1[0x10]);
  fn_82526C70(auStack_f0,0x80,0xffffffff821b6ba4,uVar4);
  fn_822ACB68(*(undefined4 *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x48),auStack_f0);
  iVar5 = -1;
  if (param_1[4] != -1) {
    iVar5 = param_1[param_1[4] + 9];
  }
  iVar9 = -1;
  if (param_1[6] != -1) {
    iVar9 = param_1[param_1[6] + 9];
  }
  uVar10 = 0;
  iVar7 = *(int *)(piVar2[4] * 4 + *piVar2);
  if (*(int *)(iVar7 + 8) != 0) {
    piVar12 = param_1 + 0x11;
    do {
      iVar6 = fn_822ABA88(iVar7,uVar10);
      iVar7 = *piVar12;
      uVar4 = 0;
      *(int *)(((uint)(iVar1 == 0) * 7 + (int)uVar10) * 0x30 + param_4 + 0x20) = iVar7;
      if (*(int *)(iVar6 + 0x1ec) == 0) {
        if (iVar7 == iVar5) {
          iVar7 = param_1[5];
        }
        else {
          if (iVar7 != iVar9) {
            uVar4 = 10;
            goto LAB_823e84a8;
          }
          iVar7 = param_1[7];
        }
        if (iVar7 == 1) {
          uVar4 = 3;
        }
        else if (iVar7 == 2) {
          uVar4 = 0x15;
        }
        else if (iVar7 == 3) {
          uVar4 = 0x13;
        }
        else if (iVar7 == 4) {
          uVar4 = 0x1f;
        }
      }
      else {
        uVar4 = 8;
      }
LAB_823e84a8:
      fn_822AF138(*(undefined4 *)(iVar6 + 0x110),uVar4);
      uVar10 = uVar10 + 1;
      piVar12 = piVar12 + 1;
      iVar7 = *(int *)(piVar2[4] * 4 + *piVar2);
    } while ((uVar10 & 0xffffffff) < (ulonglong)*(uint *)(iVar7 + 8));
  }
  return;
}

