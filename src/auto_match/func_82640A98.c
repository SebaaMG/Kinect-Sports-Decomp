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
extern int fn_82643B08();
extern int fn_82645110();
extern int fn_82647258();
extern unsigned int lbl_82195ED8;
extern unsigned int lbl_82195EDC;


void fn_82640A98(longlong *param_1,uint param_2,undefined4 param_3,ulonglong param_4,
                  ulonglong param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  
  uVar7 = param_1[4];
  uVar8 = param_1[3];
  uVar12 = param_1[2];
  lVar10 = param_1[1];
  if (*param_1 != 0) {
    fn_82641EF8(param_1,*param_1,0x4000,param_1 + 0xf0);
    *param_1 = 0;
  }
  if (lVar10 != 0) {
    fn_82641EF8(param_1,lVar10,0x4400,param_1 + 0x2f0);
    param_1[1] = 0;
  }
  if (uVar12 != 0) {
    if ((uVar12 & 0x1e0000) != 0) {
      uVar12 = fn_82642F50(param_1,uVar12);
    }
    if ((param_1[5] & uVar12) != 0) {
      uVar12 = fn_826417C8(param_1,uVar12,*(undefined4 *)(param_1 + 0x528));
    }
    if ((uVar12 & 0xfff) != 0) {
      fn_82641B60(param_1,uVar12 << 0x34,0x2200,(int)param_1 + 0x2934);
    }
    if ((uVar12 & 0x1f000) != 0) {
      fn_82641B60(param_1,(uVar12 & 0x1f000) << 0x2f,0x2180,param_1 + 0x524);
    }
    if ((uVar12 & 0x3fffc0000000000) != 0) {
      fn_82641B60(param_1,(uVar12 & 0x3fffc0000000000) << 6,0x2000,param_1 + 0x510);
    }
    if ((uVar12 & 0x3ffffe00000) != 0) {
      fn_82641B60(param_1,(uVar12 & 0x3ffffe00000) << 0x16,0x2100,(int)param_1 + 0x28cc);
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
      if (((*(byte *)(param_1 + 0x558) & 0x80) != 0) || ((*(byte *)(param_1 + 0x558) & 0x40) != 0))
      {
        fn_82647258(param_1);
      }
    }
    param_1[4] = 0;
  }
  puVar1 = *(uint **)((int)param_1 + 0x3144);
  while( true ) {
    uVar3 = *(uint *)(param_1 + 6);
    if (*(uint *)(param_1 + 7) < uVar3) {
      uVar3 = fn_82645110(param_1);
    }
    *(undefined4 *)(uVar3 + 4) = 0x2102;
    *(undefined4 *)(uVar3 + 8) = param_3;
    uVar12 = param_5;
    if (0xffff < (param_5 & 0xffffffff)) {
      uVar2 = *(uint *)(&lbl_82195ED8 + param_2 * 8);
      trapWord(6,(ulonglong)uVar2,0);
      uVar12 = (longlong)(int)((uint)(0xffff / (ulonglong)uVar2) & 0xfffffffe) *
               (longlong)(int)uVar2;
    }
    uVar7 = (ulonglong)puVar1[6];
    uVar8 = (param_4 & 0x7fffffff) * 2 + uVar7;
    uVar2 = *puVar1;
    uVar11 = (uint)uVar12 & 0xffffff;
    uVar6 = (uint)(*(byte *)((int)param_1 + 0x304b) != 0) << 8 |
            *(byte *)((int)param_1 + *(byte *)((int)param_1 + 0x304b) + 0x300a) & 0x3f;
    uVar13 = (uint)((uVar12 & 0xffffffff) << 0x10) | param_2 & 0x3f;
    iVar9 = ((int)((uVar8 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) + ((uint)uVar8 & 0x1fffffff);
    if ((uVar2 & 0x80000000) != 0) {
      uVar11 = (uint)((uVar12 & 0x7fffff) << 1);
      uVar7 = (param_4 & 0x3fffffff) * 4 + uVar7;
      uVar13 = uVar13 | 0x800;
      iVar9 = ((int)((uVar7 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) + ((uint)uVar7 & 0x1fffffff);
    }
    uVar11 = uVar11 | (uVar2 & 0x60000000) << 1;
    if ((*(byte *)((int)param_1 + 0x2abc) & 1) == 0) {
      *(undefined4 *)(uVar3 + 0xc) = 0xc0032201;
      *(uint *)(uVar3 + 0x10) = uVar6;
      *(uint *)(uVar3 + 0x14) = uVar13;
      *(int *)(uVar3 + 0x18) = iVar9;
      puVar5 = (uint *)(uVar3 + 0x1c);
      *puVar5 = uVar11;
    }
    else {
      piVar4 = *(int **)((int)param_1 + 0x347c);
      if (*(int **)(param_1 + 0x690) < piVar4 + 4) {
        piVar4 = (int *)fn_82643B08(param_1 + 0x68e);
      }
      *piVar4 = (int)(uVar3 + 8);
      *(int **)((int)param_1 + 0x347c) = piVar4 + 4;
      *(undefined4 *)(uVar3 + 0xc) = 0xc0006000;
      *(undefined4 *)(uVar3 + 0x10) = 0xffffffff;
      *(undefined4 *)(uVar3 + 0x14) = 0xc0032201;
      *(uint *)(uVar3 + 0x18) = uVar6;
      *(uint *)(uVar3 + 0x1c) = uVar13;
      *(int *)(uVar3 + 0x20) = iVar9;
      *(uint *)(uVar3 + 0x24) = uVar11;
      *(undefined4 *)(uVar3 + 0x28) = 0xc0006000;
      *(undefined4 *)(uVar3 + 0x2c) = 0x80000000;
      *(undefined4 *)(uVar3 + 0x30) = 0xc0015a01;
      *(undefined4 *)(uVar3 + 0x34) = 0x1a;
      *(uint *)(uVar3 + 0x38) =
           (((uint)(piVar4 + 1) >> 0x14) + 0x200 & 0x1000) + ((uint)(piVar4 + 1) & 0x1ffffffe) | 1;
      *(undefined4 *)(uVar3 + 0x3c) = 0xc0004601;
      puVar5 = (uint *)(uVar3 + 0x40);
      *puVar5 = 0x19;
    }
    *(uint **)(param_1 + 6) = puVar5;
    if (param_5 - uVar12 == 0) break;
    param_5 = (ulonglong)*(uint *)(&lbl_82195EDC + param_2 * 8) + (param_5 - uVar12);
    param_4 = (uVar12 - *(uint *)(&lbl_82195EDC + param_2 * 8)) + param_4;
  }
  return;
}

