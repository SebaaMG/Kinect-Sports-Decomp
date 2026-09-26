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
extern int fn_82BA02A8();
extern int fn_82E8CB60();
extern int fn_82E8D3A8();
extern int fn_82E8D418();
extern int fn_82E933F8();
extern int fn_82EDAED0();
extern int fn_82F00430();
extern int fn_82F01808();
extern int fn_82F023B0();
extern int fn_82F02410();
extern int fn_82F025F0();
extern int fn_82F03FA0();
extern int fn_82F04DC0();
extern int fn_82F04E20();
extern int fn_82F0D688();
extern int fn_82F0F900();
extern int fn_82F0F9A0();
extern int fn_82F68CC0();


void fn_82E8EF60(int param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined2 uVar11;
  
  if (*(int *)(param_1 + 0x76c8) != 0) {
    fn_82E933F8();
  }
  if ((int)param_2 == 1) {
    fn_82F023B0(*(undefined4 *)(param_1 + 0x1ebc));
    if ((*(int *)(param_1 + 0x7b38) == 0) || (*(int *)(param_1 + 0x526c) == 0)) {
      if ((*(int *)(param_1 + 0xaf0) == 1) && (*(int *)(param_1 + 0x8a0) != 0)) {
        fn_82F04DC0(param_1);
      }
    }
    else {
      fn_82F0D688(param_1,1);
      fn_82F04E20(param_1,0);
      fn_82F0D688(param_1,0);
    }
    fn_82E8D3A8(param_1);
    if (*(longlong *)(param_1 + 0x2e0) != 1) {
      if (*(int *)(param_1 + 0x7814) != 0) {
        *(undefined4 *)(param_1 + 0x7820) = *(undefined4 *)(param_1 + 0x7828);
        *(undefined4 *)(param_1 + 0x7824) = *(undefined4 *)(param_1 + 0x782c);
        *(undefined4 *)(param_1 + 0x7840) = *(undefined4 *)(param_1 + 0x7848);
        *(undefined4 *)(param_1 + 0x7844) = *(undefined4 *)(param_1 + 0x784c);
      }
      *(undefined4 *)(param_1 + 0x7814) = 0;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x1a98);
    uVar2 = *(undefined4 *)(param_1 + 0x1aa4);
    uVar3 = *(undefined4 *)(param_1 + 0x1aa8);
    *(undefined4 *)(param_1 + 0x1a98) = *(undefined4 *)(param_1 + 0x1a94);
    *(undefined4 *)(param_1 + 0x1a94) = uVar1;
    *(undefined4 *)(param_1 + 0x1aa4) = *(undefined4 *)(param_1 + 0x1ab4);
    *(undefined4 *)(param_1 + 0x1ae8) = 0;
    *(undefined4 *)(param_1 + 0x1ab4) = uVar2;
    *(undefined4 *)(param_1 + 0x1aa8) = *(undefined4 *)(param_1 + 0x1ab8);
    *(undefined4 *)(param_1 + 0x1ab8) = uVar3;
    if (*(int *)(param_1 + 0x7984) != 0) {
      *(undefined4 *)(param_1 + 0x798c) = 1;
    }
    goto LAB_82e8f3a4;
  }
  if ((int)param_2 != 0) goto LAB_82e8f3a4;
  if (*(int *)(param_1 + 4) == 8) {
    if ((*(int *)(param_1 + 0xaf0) == 0) &&
       ((*(int *)(param_1 + 0x780c) != 0 || (*(int *)(param_1 + 0x7808) != 0)))) {
      fn_82E8D418(param_1);
    }
    if (*(int *)(param_1 + 0x202c) != 0) {
      if (*(int *)(param_1 + 0x8a0) != 0) {
        fn_82F04DC0(param_1);
      }
      iVar4 = *(int *)(param_1 + 0x304);
      uVar1 = *(undefined4 *)(iVar4 + 0x58);
      uVar2 = *(undefined4 *)(iVar4 + 0x70);
      fn_82F68CC0(*(undefined4 *)(iVar4 + 0x40),*(undefined4 *)(param_1 + 0x14),
                   (longlong)*(int *)(param_1 + 0x56c) * (longlong)*(int *)(param_1 + 0x564));
      fn_82F68CC0(uVar1,*(undefined4 *)(param_1 + 0x18),
                   (longlong)*(int *)(param_1 + 0x570) * (longlong)*(int *)(param_1 + 0x568));
      fn_82F68CC0(uVar2,*(undefined4 *)(param_1 + 0x1c),
                   (longlong)*(int *)(param_1 + 0x570) * (longlong)*(int *)(param_1 + 0x568));
      if ((*(int *)(param_1 + 0x84c) != 0) && (0 < *(int *)(param_1 + 0x2d4))) {
        puVar8 = (undefined4 *)(*(int *)(param_1 + 0x1e6c) + -0x2c);
        lVar7 = param_2;
        do {
          lVar10 = param_2;
          if (0 < *(int *)(param_1 + 0x2d0)) {
            do {
              uVar5 = *(uint *)(param_1 + 0x2d0);
              uVar9 = (longlong)(int)uVar5 * (longlong)(int)lVar7;
              iVar4 = (int)((uVar9 + lVar10 & 0xffffffff) << 3);
              uVar9 = ((uVar9 & 0x7fffffff) * 2 + lVar10 & 0x7fffffff) * 2;
              lVar10 = lVar10 + 1;
              uVar11 = (undefined2)param_2;
              *(undefined2 *)(iVar4 + *(int *)(param_1 + 0xaec)) = uVar11;
              *(undefined2 *)(iVar4 + *(int *)(param_1 + 0xaec) + 2) = uVar11;
              iVar4 = (int)((uVar9 & 0x7fffffff) << 1);
              *(undefined2 *)(iVar4 + *(int *)(param_1 + 0x990)) = uVar11;
              *(undefined2 *)(iVar4 + *(int *)(param_1 + 0x990) + 2) = uVar11;
              iVar6 = (int)((((ulonglong)uVar5 & 0x7fffffff) * 2 + uVar9 & 0x7fffffff) << 1);
              *(undefined2 *)(iVar6 + *(int *)(param_1 + 0x990)) = uVar11;
              *(undefined2 *)(iVar6 + *(int *)(param_1 + 0x990) + 2) = uVar11;
              *(undefined2 *)(iVar4 + *(int *)(param_1 + 0x994)) = uVar11;
              *(undefined2 *)(iVar4 + *(int *)(param_1 + 0x994) + 2) = uVar11;
              *(undefined2 *)(iVar6 + *(int *)(param_1 + 0x994)) = uVar11;
              *(undefined2 *)(iVar6 + *(int *)(param_1 + 0x994) + 2) = uVar11;
              puVar8 = puVar8 + 0x20;
              *puVar8 = 0;
            } while ((int)lVar10 < *(int *)(param_1 + 0x2d0));
          }
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < *(int *)(param_1 + 0x2d4));
      }
      fn_82F0F900(param_1);
      fn_82F0F9A0(param_1,0x17);
      *(undefined4 *)(param_1 + 0xa44) = 0;
      *(undefined4 *)(param_1 + 0xaf0) = 5;
    }
    *(int *)(param_1 + 0x4f30) = *(int *)(param_1 + 0x4f2c);
    *(undefined4 *)(param_1 + 0x4f28) = *(undefined4 *)(param_1 + 0xaf0);
    if (*(int *)(param_1 + 0x4f2c) == 1) {
      iVar4 = *(int *)(param_1 + 0xaf4);
      if ((iVar4 != 2) && (iVar4 != 4)) {
        *(undefined4 *)(param_1 + 0x4f38) = *(undefined4 *)(param_1 + 0x4f34);
        if ((iVar4 != 1) || (*(int *)(param_1 + 0xaf8) != 0)) goto LAB_82e8f298;
        *(undefined4 *)(param_1 + 0x4f34) = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x4f38) = 0;
LAB_82e8f298:
      *(undefined4 *)(param_1 + 0x4f34) = 0;
    }
    *(undefined4 *)(param_1 + 0x4f3c) = *(undefined4 *)(param_1 + 0x6f50);
  }
  *(undefined4 *)(param_1 + 0x4f20) = *(undefined4 *)(param_1 + 0xaf0);
  fn_82BA02A8(param_1);
  fn_82E8CB60(param_1);
  if (*(int *)(param_1 + 0x4aa4) == 0) {
    *(undefined4 *)(param_1 + 0x1d90) = 0;
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    fn_82EDAED0(param_1);
    *(undefined4 *)(param_1 + 0x1d90) = 1;
  }
  else {
    fn_82F03FA0();
    *(undefined4 *)(param_1 + 0x1d90) = 1;
  }
  if (*(int *)(param_1 + 0x84c) == 0) {
LAB_82e8f31c:
    fn_82F01808(param_1);
  }
  else if ((*(int *)(param_1 + 0xaf0) != 2) && (*(int *)(param_1 + 0xaf0) != 4)) {
    fn_82F00430(param_1);
    goto LAB_82e8f31c;
  }
  iVar4 = *(int *)(param_1 + 0xaf0);
  if ((iVar4 != 2) && (iVar4 != 4)) {
    if (*(int *)(param_1 + 0x6d54) == 0) {
LAB_82e8f36c:
      *(undefined4 *)(param_1 + 0x1e90) = 0;
    }
    else if (*(int *)(param_1 + 0x7b38) == 0) {
      if (*(int *)(param_1 + 0x6d54) == 0) goto LAB_82e8f36c;
      *(undefined4 *)(param_1 + 0x1e90) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x1e90) = 2;
    }
  }
  if (*(int *)(param_1 + 0x7b38) == 0) {
LAB_82e8f398:
    if (iVar4 != 0) goto LAB_82e8f3a4;
  }
  else if (*(int *)(param_1 + 0xaf4) != 0) {
    iVar4 = *(int *)(param_1 + 0xaf8);
    goto LAB_82e8f398;
  }
  *(undefined4 *)(param_1 + 0x1e10) = 1;
  *(longlong *)(param_1 + 0x1e20) = param_2;
LAB_82e8f3a4:
  if ((((*(int *)(param_1 + 4) != 8) && (0 < *(int *)(param_1 + 0x84c))) &&
      (*(int *)(param_1 + 0xaf0) == 1)) && (*(int *)(param_1 + 0x202c) != 0)) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),0,8);
    fn_82F025F0(*(undefined4 *)(param_1 + 0x1ebc));
    *(undefined4 *)(param_1 + 0x1e8c) = 1;
  }
  if ((*(int *)(param_1 + 4) == 8) && (*(int *)(param_1 + 0xaf0) == 5)) {
    fn_82F025F0(*(undefined4 *)(param_1 + 0x1ebc));
  }
  return;
}

