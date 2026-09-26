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
extern int fn_826417C8();
extern int fn_82641B60();
extern int fn_82641C20();
extern int fn_82641DA0();
extern int fn_82641EF8();
extern int fn_82642F50();
extern int fn_82643AC0();
extern int fn_82643CE0();
extern int fn_82644C68();
extern int fn_82647258();
extern int fn_82647620();
extern int fn_8264B568();


undefined8 fn_8264BDD8(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  
  iVar1 = *(int *)(param_1 + 0x6b4);
  if ((*(uint *)(iVar1 + 0x6c) & 0x8000) == 0) {
    if (((*(byte *)(param_1 + 0x558) & 0x80) != 0) || ((*(byte *)(param_1 + 0x558) & 0x40) != 0)) {
      fn_82647258(param_1);
    }
  }
  else {
    uVar7 = param_1[4];
    uVar8 = param_1[3];
    uVar10 = param_1[2];
    lVar9 = param_1[1];
    if (*param_1 != 0) {
      fn_82641EF8(param_1,*param_1,0x4000,param_1 + 0xf0);
      *param_1 = 0;
    }
    if (lVar9 != 0) {
      fn_82641EF8(param_1,lVar9,0x4400,param_1 + 0x2f0);
      param_1[1] = 0;
    }
    if (uVar10 != 0) {
      if ((uVar10 & 0x1e0000) != 0) {
        uVar10 = fn_82642F50(param_1,uVar10);
      }
      if ((param_1[5] & uVar10) != 0) {
        uVar10 = fn_826417C8(param_1,uVar10,*(undefined4 *)(param_1 + 0x528));
      }
      if ((uVar10 & 0xfff) != 0) {
        fn_82641B60(param_1,uVar10 << 0x34,0x2200,(int)param_1 + 0x2934);
      }
      if ((uVar10 & 0x1f000) != 0) {
        fn_82641B60(param_1,(uVar10 & 0x1f000) << 0x2f,0x2180,param_1 + 0x524);
      }
      if ((uVar10 & 0x3fffc0000000000) != 0) {
        fn_82641B60(param_1,(uVar10 & 0x3fffc0000000000) << 6,0x2000,param_1 + 0x510);
      }
      if ((uVar10 & 0x3ffffe00000) != 0) {
        fn_82641B60(param_1,(uVar10 & 0x3ffffe00000) << 0x16,0x2100,(int)param_1 + 0x28cc);
      }
      param_1[2] = 0;
    }
    if (uVar8 != 0) {
      if ((uVar8 & 0xffffffff) != 0) {
        fn_82641DA0(param_1,uVar8 << 0x20);
      }
      if ((uVar8 & 0x7ffffc00000000) != 0) {
        fn_82641B60(param_1,(uVar8 & 0x7ffffc00000000) << 9,0x2280,(int)param_1 + 0x2964);
      }
      param_1[3] = 0;
    }
    if (uVar7 != 0) {
      if ((uVar7 & 0x3fc000000000) != 0) {
        fn_82641B60(param_1,(uVar7 & 0x3fc000000000) << 0x12,0x2380,param_1 + 0x54a);
      }
      if ((uVar7 & 0x7e000000000000) != 0) {
        fn_82641C20(param_1,(uVar7 & 0x7e000000000000) << 9);
      }
      if ((uVar7 & 0x100000000000000) != 0) {
        fn_82641B60(param_1,0xffffffffff000000,0x4900,param_1 + 0x4f0);
      }
      if ((uVar7 & 0x3fffffffff) != 0) {
        fn_82641B60(param_1,uVar7 << 0x1a,0x2300,param_1 + 0x537);
      }
      if ((uVar7 & 0xc000000000000000) != 0) {
        if (((*(byte *)(param_1 + 0x558) & 0x80) != 0) || ((*(byte *)(param_1 + 0x558) & 0x40) != 0)
           ) {
          fn_82647258(param_1);
        }
      }
      param_1[4] = 0;
    }
  }
  fn_82647620(param_1);
  if (*(int *)(iVar1 + 0x98) == 0) {
    fn_82644C68(param_1);
  }
  else {
    uVar5 = (*(int *)(param_1 + 6) - *(int *)((int)param_1 + 0x3b24)) + 4 >> 2;
    if (0x100000 < uVar5) {
      *(byte *)((int)param_1 + 0x2abd) = *(byte *)((int)param_1 + 0x2abd) | 0x20;
    }
    puVar3 = *(uint **)((int)param_1 + 0x35b4);
    uVar2 = *(uint *)(iVar1 + 0x98);
    if (*(uint **)(param_1 + 0x6b7) <= puVar3) {
      puVar3 = (uint *)fn_8264B568(param_1);
    }
    *puVar3 = uVar5 | 0x81000000;
    puVar3[1] = ((uVar2 >> 0x14) + 0x200 & 0x1000) + (uVar2 & 0x1fffffff);
    *(uint **)((int)param_1 + 0x35b4) = puVar3 + 2;
  }
  iVar4 = *(int *)((int)param_1 + 0x35a4);
  if (iVar4 != 0) {
    *(int *)(iVar4 + 4) = (*(int *)(param_1 + 0x6b5) - iVar4) + -8 >> 3;
  }
  iVar4 = *(int *)(param_1 + 0x6b6);
  if (iVar4 != 0) {
    *(int *)(iVar4 + 4) = (*(int *)((int)param_1 + 0x35b4) - iVar4) + -8 >> 3;
  }
  iVar4 = 0x40000000;
  if ((*(uint *)(iVar1 + 0x6c) & 0x1000) != 0) {
    iVar4 = 0x40000000;
    fn_82643AC0(param_1 + 0x68e);
    uVar5 = *(uint *)(param_1 + 0x68e);
    if (uVar5 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (((uVar5 >> 0x14) + 0x200 & 0x1000) + (uVar5 & 0x1fffffff)) - iVar4;
    }
    *(int *)(iVar1 + 0x78) = iVar6;
  }
  *(undefined4 *)(param_1 + 0x6b4) = 0;
  sync(0);
  *(int *)(iVar1 + 0x88) = *(int *)(param_1 + 6) + 4;
  *(undefined4 *)(iVar1 + 0x8c) = *(undefined4 *)((int)param_1 + 0x34);
  *(uint *)(iVar1 + 0x90) =
       (((*(int *)(param_1 + 6) + 4U >> 0x14) + 0x200 & 0x1000) +
       (*(int *)(param_1 + 6) + 4U & 0x1fffffff)) - iVar4;
  if ((*(byte *)((int)param_1 + 0x2abd) & 0x20) == 0) {
    uVar5 = 1;
    uVar11 = 0;
  }
  else {
    uVar5 = 7;
    uVar11 = 0xffffffff8007000e;
  }
  *(uint *)(iVar1 + 0x6c) = uVar5 | *(uint *)(iVar1 + 0x6c) & 0xfffffff0;
  fn_82643CE0(param_1);
  return uVar11;
}

