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
extern int fn_82644040();
extern int fn_82645110();
extern int fn_82647258();


undefined8
fn_826400A0(longlong *param_1,uint param_2,undefined4 param_3,int param_4,ulonglong param_5,
             uint param_6,ulonglong param_7,uint *param_8)

{
  undefined1 uVar1;
  ulonglong uVar2;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined8 uVar3;
  uint *puVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  uint *in_stack_00000054;
  
  uVar2 = ((longlong)param_4 * (longlong)(int)param_7 & 0xffffffffU) >> 2;
  uVar9 = param_5;
  if ((param_6 & 4) == 0) {
    uVar9 = (param_5 + 1 & 0xffffffff) >> 1;
  }
  uVar17 = (param_7 & 0xffffffff) >> 2;
  uVar1 = *(undefined1 *)(param_1 + 0x634);
  *(char *)(param_1 + 0x634) = (char)uVar17;
  if (((uVar17 & 0xff) != (ulonglong)*(byte *)(param_1 + 0x5dd)) && (*(int *)(param_1 + 0x649) != 0)
     ) {
    param_1[2] = param_1[2] | 0x80000;
  }
  uVar12 = param_1[4];
  uVar14 = param_1[3];
  uVar17 = param_1[2];
  lVar15 = param_1[1];
  if (*param_1 != 0) {
    fn_82641EF8(param_1,*param_1,0x4000,param_1 + 0xf0);
    *param_1 = 0;
  }
  if (lVar15 != 0) {
    fn_82641EF8(param_1,lVar15,0x4400,param_1 + 0x2f0);
    param_1[1] = 0;
  }
  if (uVar17 != 0) {
    if ((uVar17 & 0x1e0000) != 0) {
      uVar17 = fn_82642F50(param_1,uVar17);
    }
    if ((param_1[5] & uVar17) != 0) {
      uVar17 = fn_826417C8(param_1,uVar17,*(undefined4 *)(param_1 + 0x528));
    }
    if ((uVar17 & 0xfff) != 0) {
      fn_82641B60(param_1,uVar17 << 0x34,0x2200,(int)param_1 + 0x2934);
    }
    if ((uVar17 & 0x1f000) != 0) {
      fn_82641B60(param_1,(uVar17 & 0x1f000) << 0x2f,0x2180,param_1 + 0x524);
    }
    if ((uVar17 & 0x3fffc0000000000) != 0) {
      fn_82641B60(param_1,(uVar17 & 0x3fffc0000000000) << 6,0x2000,param_1 + 0x510);
    }
    if ((uVar17 & 0x3ffffe00000) != 0) {
      fn_82641B60(param_1,(uVar17 & 0x3ffffe00000) << 0x16,0x2100,(int)param_1 + 0x28cc);
    }
    param_1[2] = 0;
  }
  if (uVar14 != 0) {
    if ((uVar14 & 0xffffffff) != 0) {
      fn_82641DA0(param_1,uVar14 << 0x20);
    }
    if ((uVar14 & 0x7ffffc00000000) != 0) {
      fn_82641B60(param_1,(uVar14 & 0x7ffffc00000000) << 9,0x2280,(int)param_1 + 0x2964);
    }
    param_1[3] = 0;
  }
  if (uVar12 != 0) {
    if ((uVar12 & 0x3fc000000000) != 0) {
      fn_82641B60(param_1,(uVar12 & 0x3fc000000000) << 0x12,0x2380,param_1 + 0x54a);
    }
    if ((uVar12 & 0x7e000000000000) != 0) {
      fn_82641C20(param_1,(uVar12 & 0x7e000000000000) << 9);
    }
    if ((uVar12 & 0x100000000000000) != 0) {
      fn_82641B60(param_1,0xffffffffff000000,0x4900,param_1 + 0x4f0);
    }
    if ((uVar12 & 0x3fffffffff) != 0) {
      fn_82641B60(param_1,uVar12 << 0x1a,0x2300,param_1 + 0x537);
    }
    if (((uVar12 & 0xc000000000000000) != 0) &&
       (((*(byte *)(param_1 + 0x558) & 0x80) != 0 || ((*(byte *)(param_1 + 0x558) & 0x40) != 0)))) {
      fn_82647258(param_1);
    }
    param_1[4] = 0;
  }
  uVar4 = *(uint *)(param_1 + 6);
  *(undefined1 *)(param_1 + 0x634) = uVar1;
  if (*(uint *)(param_1 + 7) < uVar4) {
    uVar4 = fn_82645110(param_1);
  }
  uVar5 = fn_82644040(param_1,uVar2,0x10);
  uVar6 = fn_82644040(param_1,uVar9,0x10);
  if ((uVar5 == 0) || (uVar6 == 0)) {
    *(uint *)(param_1 + 6) = uVar4;
    *param_8 = 0;
    uVar3 = 0xffffffff8007000e;
    *in_stack_00000054 = 0;
  }
  else {
    *(undefined4 *)(uVar4 + 4) = 0x2102;
    *(undefined4 *)(uVar4 + 8) = param_3;
    uVar17 = (uVar2 & 0xffffff) << 2 | 0x10000002;
    *(undefined4 *)(uVar4 + 0xc) = 0x548ba;
    *(undefined4 *)(uVar4 + 0x10) = 0;
    *(undefined4 *)(uVar4 + 0x14) = 0;
    iVar11 = ((uVar6 >> 0x14) + 0x200 & 0x1000) + (uVar6 & 0x1fffffff);
    *(undefined4 *)(uVar4 + 0x18) = 0;
    uVar16 = param_2 & 0x3f | (uint)((param_5 & 0xffffffff) << 0x10);
    uVar13 = (uint)param_5 & 0xffffff;
    *(undefined4 *)(uVar4 + 0x1c) = 0;
    *(uint *)(uVar4 + 0x20) = ((uVar5 >> 0x14) + 0x200 & 0x1000) + (uVar5 & 0x1fffffff) | 3;
    *(int *)(uVar4 + 0x24) = (int)uVar17;
    *(undefined4 *)(uVar4 + 0x28) = 0x25000;
    *(undefined4 *)(uVar4 + 0x2c) = 0;
    *(undefined4 *)(uVar4 + 0x30) = 0;
    *(undefined4 *)(uVar4 + 0x34) = 0;
    uVar10 = (uint)(*(byte *)((int)param_1 + 0x304b) != 0) << 8 |
             *(byte *)((int)param_1 + *(byte *)((int)param_1 + 0x304b) + 0x300a) & 0x3f;
    if ((param_6 & 4) != 0) {
      uVar13 = (uint)((param_5 & 0x7fffff) << 1);
      uVar16 = uVar16 | 0x800;
    }
    uVar13 = uVar13 | param_6 << 0x1e;
    if ((*(byte *)((int)param_1 + 0x2abc) & 1) == 0) {
      *(undefined4 *)(uVar4 + 0x38) = 0xc0032201;
      *(uint *)(uVar4 + 0x3c) = uVar10;
      *(uint *)(uVar4 + 0x40) = uVar16;
      *(int *)(uVar4 + 0x44) = iVar11;
      puVar8 = (uint *)(uVar4 + 0x48);
      *puVar8 = uVar13;
    }
    else {
      puVar7 = *(undefined4 **)((int)param_1 + 0x347c);
      if (*(undefined4 **)(param_1 + 0x690) < puVar7 + 4) {
        puVar7 = (undefined4 *)fn_82643B08(param_1 + 0x68e,uVar17,0,0);
      }
      *puVar7 = (undefined4 *)(uVar4 + 0x34);
      *(undefined4 **)((int)param_1 + 0x347c) = puVar7 + 4;
      *(undefined4 *)(uVar4 + 0x38) = 0xc0006000;
      *(undefined4 *)(uVar4 + 0x3c) = 0xffffffff;
      *(undefined4 *)(uVar4 + 0x40) = 0xc0032201;
      *(uint *)(uVar4 + 0x44) = uVar10;
      *(uint *)(uVar4 + 0x48) = uVar16;
      *(int *)(uVar4 + 0x4c) = iVar11;
      *(uint *)(uVar4 + 0x50) = uVar13;
      *(undefined4 *)(uVar4 + 0x54) = 0xc0006000;
      *(undefined4 *)(uVar4 + 0x58) = 0x80000000;
      *(undefined4 *)(uVar4 + 0x5c) = 0xc0015a01;
      *(undefined4 *)(uVar4 + 0x60) = 0x1a;
      *(uint *)(uVar4 + 100) =
           (((uint)(puVar7 + 1) >> 0x14) + 0x200 & 0x1000) + ((uint)(puVar7 + 1) & 0x1ffffffe) | 1;
      *(undefined4 *)(uVar4 + 0x68) = 0xc0004601;
      puVar8 = (uint *)(uVar4 + 0x6c);
      *puVar8 = 0x19;
    }
    uVar17 = param_1[3];
    uVar3 = 0;
    *param_8 = uVar6;
    param_1[3] = uVar17 | 1;
    *(uint **)((int)param_1 + 0x3554) = puVar8;
    *in_stack_00000054 = uVar5;
    *(uint *)(param_1 + 0x6ab) = uVar5;
    *(uint *)((int)param_1 + 0x355c) = uVar6;
    *(int *)(param_1 + 0x6ac) = (int)uVar2;
    *(int *)((int)param_1 + 0x3564) = (int)uVar9;
  }
  return uVar3;
}

