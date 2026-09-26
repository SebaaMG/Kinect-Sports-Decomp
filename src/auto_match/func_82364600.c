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
extern int fn_82364DF0();
extern int fn_824556F0();
extern int fn_82456BC0();
extern int fn_824BD858();
extern int fn_824C97F0();
extern int fn_8254EDB0();
extern int fn_8288B760();
extern unsigned int lbl_821CA460;


void fn_82364600(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  
  iVar8 = param_2;
  iVar6 = fn_82364DF0();
  uVar2 = *(undefined4 *)(iVar8 + 0x2c);
  iVar8 = *(int *)(iVar6 * 0x44 + param_1 + 0x18c);
  if (*(int *)(iVar8 + 0x24) != 0) {
    if (*(int *)(iVar8 + 0x168) == 0) {
      uVar7 = *(uint *)(iVar8 + 0x16c);
    }
    else {
      uVar7 = fn_8288B760();
      uVar7 = uVar7 & 0xff;
    }
    if (uVar7 != 0) {
      fn_824BD858((double)*(float *)(param_1 + 0x280),(double)*(float *)(param_1 + 0x284));
      fn_824556F0(param_1 + 0x45c,param_1 + 0x468);
      uVar3 = *(undefined4 *)(param_1 + 0x48c);
      goto LAB_823646a4;
    }
  }
  fn_824556F0(param_1 + 0x45c,param_1 + 0x46c);
  uVar3 = *(undefined4 *)(param_1 + 0x490);
LAB_823646a4:
  fn_8254EDB0((double)*(float *)(param_1 + 0x4bc),(double)*(float *)(param_1 + 0x4c0),
                    *(undefined4 *)(param_1 + 0x4d8),uVar3);
  iVar8 = *(int *)(param_1 + 0x4d8);
  uVar3 = *(undefined4 *)(param_1 + 0x4b4);
  uVar4 = *(undefined4 *)(param_1 + 0x4b0);
  uVar1 = *(undefined4 *)(param_1 + 0x4b8);
  if (*(int *)(iVar8 + 4) != 0) {
    *(undefined4 *)(iVar8 + 0x1dc) = *(undefined4 *)(param_1 + 0x4c8);
    *(undefined4 *)(iVar8 + 0x1e0) = lbl_821CA460;
    *(undefined4 *)(iVar8 + 0x1d4) = 1;
    *(undefined4 *)(iVar8 + 0x1cc) = uVar4;
    *(undefined4 *)(iVar8 + 0x1d8) = uVar1;
    *(undefined4 *)(iVar8 + 0x1d0) = uVar3;
  }
  if (*(int *)(param_2 + 0x2c) == 0) {
    uVar9 = 0xffffffff821b2a98;
  }
  else {
    uVar9 = 0xffffffff821b2aac;
  }
  piVar5 = (int *)(*(undefined4 **)(param_1 + 0xa8))[1];
  for (piVar10 = (int *)**(undefined4 **)(param_1 + 0xa8); piVar10 != piVar5; piVar10 = piVar10 + 2)
  {
    fn_824C97F0(*(undefined4 *)(*piVar10 + 0x28),uVar9);
  }
  fn_82456BC0(param_1 + 0x718,2,uVar2);
  return;
}

