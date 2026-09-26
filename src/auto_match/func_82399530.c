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
extern int fn_822607F8();
extern int fn_822ABA88();
extern unsigned int lbl_831C996C;


void fn_82399530(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  int iVar9;
  undefined8 uVar8;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  double dVar13;
  
  uVar7 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x90))();
  if ((uVar7 & 0xffffffff) < 9) {
    if ((int)uVar7 == 0) {
      uVar12 = 0xffffffff821b4b54;
    }
    else {
      if (uVar7 == 1) {
        return;
      }
      if (uVar7 == 2) {
        uVar12 = 0xffffffff821b4b24;
      }
      else if (uVar7 == 3) {
        uVar12 = 0xffffffff821b4b3c;
      }
      else if (uVar7 == 4) {
        uVar12 = 0xffffffff821b4adc;
      }
      else if (uVar7 == 5) {
        uVar12 = 0xffffffff821b4b10;
      }
      else if (uVar7 == 6) {
        uVar12 = 0xffffffff821b4af8;
      }
      else if (uVar7 == 7) {
        uVar12 = 0xffffffff821b4b04;
      }
      else {
        uVar12 = 0xffffffff821b4b5c;
      }
    }
    iVar9 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x7c))(*(int **)(param_1 + 0x2e0),param_2);
    piVar5 = *(int **)(**(int **)(param_1 + 8) + iVar9 * 4);
    uVar8 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x80))(*(int **)(param_1 + 0x2e0));
    iVar11 = *(int *)(piVar5[4] * 4 + *piVar5);
    iVar10 = fn_822ABA88(iVar11,uVar8);
    uVar6 = lbl_831C996C;
    dVar13 = (double)*(float *)(param_2 + 0x26c);
    iVar9 = *(int *)(iVar10 + 0x24);
    uVar1 = *(undefined4 *)(iVar10 + 0x214);
    uVar2 = *(undefined4 *)(iVar10 + 0x28);
    uVar3 = *(undefined4 *)(iVar10 + 0x244);
    uVar4 = *(undefined4 *)(iVar11 + 0x10);
    uVar8 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x3c))();
    fn_822607F8(ABS(dVar13),uVar6,uVar8,uVar4,uVar2,iVar9 != 0,uVar12,uVar1,uVar3);
  }
  return;
}

