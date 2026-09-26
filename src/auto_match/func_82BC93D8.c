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
extern int fn_82AB15D0();
extern int fn_82BA0C40();
extern int fn_82BC24F0();
extern int fn_82BC2580();
extern int fn_82BC5538();
extern int fn_82BC6E18();
extern int fn_82BC90F0();
extern unsigned int lbl_820E4F58;
extern unsigned int lbl_820E4F5C;
extern unsigned int lbl_820E4F60;
extern unsigned int lbl_820E4F64;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82BC93D8(int param_1,int param_2,longlong param_3,int param_4,int param_5,int param_6,
                  int param_7,undefined8 param_8)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined1 in_stack_00000067;
  int in_stack_0000006c;
  undefined4 in_stack_00000074;
  uint auStack_70 [5];
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  
  param_2 = param_2 * 0x10;
  uStack_5c = *(uint *)(&lbl_820E4F5C + param_2);
  uStack_58 = *(uint *)(&lbl_820E4F60 + param_2);
  uStack_54 = *(undefined4 *)(&lbl_820E4F64 + param_2);
  if (((int)param_3 == 0) && ((uStack_5c & 0x80000000) != 0)) {
    puVar11 = *(uint **)(((uStack_58 >> 0x1d) * 6 + (*(uint *)(&lbl_820E4F58 + param_2) >> 0x1d)) *
                         4 + param_4);
    uVar1 = *puVar11;
    uVar2 = *(undefined4 *)((uVar1 >> 0xd & 0x1f8) + *(int *)(param_1 + 0x5c) + 4);
    *(int *)(param_6 + 0x38) = (int)(short)uVar1;
    *(undefined4 *)(param_6 + 0x50) = uVar2;
    fn_82BC90F0(param_1,in_stack_0000005c,param_8,puVar11,0,param_6,in_stack_00000067);
  }
  else {
    uVar1 = *(uint *)(&lbl_820E4F58 + param_2) >> 0x1d;
    iVar9 = ((uStack_58 >> 0x1d) * 6 + uVar1) * 4;
    if ((uStack_5c & 0x80000000) == 0) {
      puVar11 = *(uint **)(iVar9 + param_5);
      puVar7 = puVar11;
    }
    else {
      puVar7 = *(uint **)(iVar9 + param_4);
      puVar11 = auStack_70;
      auStack_70[0] =
           (uint)(ushort)*puVar7 | auStack_70[0] & 0xff400000 | *puVar7 & 0x3f0000 |
           *puVar7 & 0x800000;
      puVar7 = (uint *)0x0;
    }
    uVar3 = *puVar11;
    iVar8 = 0;
    bVar4 = (uVar3 >> 0x17 & 1) != 0;
    uVar12 = uVar3 >> 0x10 & 0x3f;
    iVar9 = (int)(short)uVar3;
    if (bVar4) {
      iVar8 = *(int *)((uVar1 + param_7) * 4 + in_stack_0000006c) + (uStack_58 >> 0x1d);
    }
    if (((uStack_5c & 0x40000000) == 0) && (uVar12 == 1)) {
      iVar10 = *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) + -1;
      *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) = iVar10;
      iVar5 = fn_82BC24F0(0x31,*(undefined4 *)(param_1 + 0xc));
      *(int *)(iVar5 + 0x38) = iVar10;
      *(undefined4 *)(iVar5 + 0x50) = 0;
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0xc);
      *(int *)(iVar5 + 0x3c) = iVar9;
      *(undefined4 *)(iVar5 + 0x54) = uVar2;
      if (bVar4) {
        *(int *)(iVar5 + 0xcc) = iVar8;
        *puVar11 = *puVar11 & 0xff7fffff;
      }
      fn_82BC6E18(param_1,in_stack_00000054,puVar11,param_3,iVar5);
      fn_82BA0C40(param_1,iVar5);
      fn_82BC5538(in_stack_00000074,iVar5);
      cVar6 = fn_82BC2580(iVar5);
      if (cVar6 == '\0') {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dece8,0xffffffff820e74a8,0x4ed);
      }
      uVar12 = 4;
      *puVar11 = *puVar11 & 0xff3fffff;
      *(short *)((int)puVar11 + 2) = (short)iVar10;
      *puVar11 = *puVar11 & 0xffc0ffff | 0x40000;
      iVar9 = iVar10;
    }
    else {
      fn_82BC6E18(param_1,in_stack_00000054,puVar7,param_3,param_6);
    }
    *(int *)((int)((param_3 + 0x32U & 0xffffffff) << 2) + param_6) = iVar8;
    uVar2 = *(undefined4 *)(uVar12 * 8 + *(int *)(param_1 + 0x5c) + 4);
    *(int *)((int)((param_3 + 0xeU & 0xffffffff) << 2) + param_6) = iVar9;
    *(undefined4 *)((int)((param_3 + 0x14U & 0xffffffff) << 2) + param_6) = uVar2;
  }
  return;
}

