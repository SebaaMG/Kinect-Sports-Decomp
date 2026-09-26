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
extern int fn_82278B40();
extern int fn_822A1630();
extern int fn_822A1740();
extern int fn_822ABA88();
extern int fn_822CDC98();
extern int fn_822CEE40();
extern int fn_8236FB68();
extern int fn_82372C00();
extern int fn_82373530();
extern int fn_823807F0();
extern int fn_82508078();
extern int fn_82520780();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821CC160;


void fn_8238AE38(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar6;
  undefined4 uVar7;
  longlong lVar5;
  int iVar8;
  int *piVar9;
  
  iVar8 = *(int *)(param_1 + 8);
  fn_82278B40(iVar8 + 0x9a0);
  piVar9 = *(int **)(*(int *)(iVar8 + 0x1e4) * 4 + **(int **)(iVar8 + 8));
  uVar3 = fn_82373530(iVar8);
  uVar3 = fn_822ABA88(*(undefined4 *)(piVar9[4] * 4 + *piVar9),uVar3);
  uVar4 = fn_822CEE40();
  iVar6 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x20) = lbl_821CC160;
  if (iVar6 == 7) {
    lVar5 = fn_8236FB68(0x21);
    if (lVar5 != 0) {
      fn_82508078(*(undefined4 *)(iVar8 + 0xa4),lVar5,0);
    }
    fn_822A1630(*(undefined4 *)(iVar8 + 0xd4),0);
    *(undefined4 *)(iVar8 + 0x348) = 0;
  }
  else if (iVar6 == 8) {
    lVar5 = fn_8236FB68(0x26);
    if (lVar5 != 0) {
      fn_82508078(*(undefined4 *)(iVar8 + 0xa4),lVar5,0);
    }
    fn_822A1630(*(undefined4 *)(iVar8 + 0xd4),1);
    iVar8 = fn_822CDC98(uVar3,0xffffffff821b4504);
    if ((iVar8 == 0) && ((uVar4 & 0xffffffff) != 0)) {
      fn_822CDC98(uVar4,0xffffffff821b4504);
    }
  }
  else if (iVar6 == 9) {
    piVar9 = (int *)**(int **)(iVar8 + 8);
    uVar1 = (uint)*(float *)(*(int *)(((int *)*piVar9)[4] * 4 + *(int *)*piVar9) + 0x20);
    uVar2 = (uint)*(float *)(*(int *)(((int *)piVar9[1])[4] * 4 + *(int *)piVar9[1]) + 0x20);
    if (uVar1 == uVar2) {
      fn_822A1630(*(undefined4 *)(iVar8 + 0xd4),3);
    }
    else {
      fn_822A1740(*(undefined4 *)(iVar8 + 0xd4),2,
                        (ulonglong)
                        *(uint *)(((int *)piVar9[(((int)uVar2 >> 0x1f) - ((int)uVar1 >> 0x1f)) +
                                                 (uint)(uVar1 <= uVar2)])[4] * 4 +
                                 *(int *)piVar9[(((int)uVar2 >> 0x1f) - ((int)uVar1 >> 0x1f)) +
                                                (uint)(uVar1 <= uVar2)]) + 0xa8);
    }
    iVar6 = fn_822CDC98(uVar3,0xffffffff821b4510);
    if ((iVar6 == 0) && ((uVar4 & 0xffffffff) != 0)) {
      fn_822CDC98(uVar4,0xffffffff821b4510);
    }
    fn_823807F0(*(undefined4 *)(iVar8 + 0x664),0xf);
    uVar7 = fn_82520780((double)lbl_821917C0,0xffffffff83265a28);
    *(undefined4 *)(param_1 + 0x18) = uVar7;
  }
  else if (iVar6 == 10) {
    iVar6 = fn_82372C00(iVar8);
    fn_822A1740(*(undefined4 *)(iVar8 + 0xd4),5,iVar6 + 0x30);
    *(undefined4 *)(iVar6 + 0x2f8) = 0;
    *(undefined4 *)(iVar8 + 0xa04) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    fn_822A1630(*(undefined4 *)(iVar8 + 0xd4),*(undefined4 *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

