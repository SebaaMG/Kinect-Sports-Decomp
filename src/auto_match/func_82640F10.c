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
extern unsigned int lbl_82195F48;
extern unsigned int lbl_82195F4C;
extern unsigned int lbl_821CC168;
extern unsigned int lbl_821CC16C;
extern unsigned int lbl_821CC170;
extern unsigned int lbl_821CC24C;
extern unsigned int lbl_821CC250;
extern unsigned int lbl_821CC254;
extern unsigned int lbl_821CC270;
extern unsigned int lbl_821CC308;
extern unsigned int lbl_821CC3A0;
extern unsigned int lbl_821CC3A4;


void fn_82640F10(longlong *param_1,ulonglong param_2,undefined4 param_3,ulonglong param_4,
                  ulonglong param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  ulonglong uVar8;
  undefined *puVar9;
  undefined4 uVar11;
  ulonglong uVar10;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  
  puVar1 = *(uint **)((int)param_1 + 0x3144);
  *(uint *)((int)param_1 + 0x2974) = *(uint *)((int)param_1 + 0x2974) & 0xfffffffc | 1;
  param_1[3] = param_1[3] | 0x4000000000000;
  iVar13 = 0;
  uVar5 = (uint)param_2;
  if ((*(uint *)(param_1 + 0x52f) & 3) == 2) {
    iVar16 = (int)(param_2 - 0x10) * 0xc;
    iVar4 = (int)((param_2 - 0x10 & 0xffffffff) << 3);
    iVar13 = *(int *)(&lbl_821CC254 + iVar16);
    *(undefined4 *)(param_1 + 0x531) = *(undefined4 *)(&lbl_821CC24C + iVar16);
    *(undefined4 *)((int)param_1 + 0x298c) = *(undefined4 *)(&lbl_821CC250 + iVar16);
    *(undefined4 *)(param_1 + 0x532) = *(undefined4 *)(&lbl_821CC254 + iVar16);
    *(undefined4 *)((int)param_1 + 0x2994) = *(undefined4 *)(&lbl_821CC3A0 + iVar4);
    *(undefined4 *)(param_1 + 0x533) = *(undefined4 *)(&lbl_821CC3A4 + iVar4);
    *(undefined4 *)((int)param_1 + 0x299c) = 0x61412107;
    *(undefined4 *)(param_1 + 0x534) = 0x66462606;
  }
  else {
    iVar16 = uVar5 * 0xc;
    *(undefined4 *)(param_1 + 0x531) = *(undefined4 *)(&lbl_821CC168 + iVar16);
    iVar4 = (int)((param_2 & 0xffffffff) << 3);
    *(undefined4 *)((int)param_1 + 0x298c) = *(undefined4 *)(&lbl_821CC16C + iVar16);
    *(undefined4 *)(param_1 + 0x532) = *(undefined4 *)(&lbl_821CC170 + iVar16);
    if ((*puVar1 & 0x80000000) == 0) {
      puVar9 = &lbl_821CC270;
      uVar11 = 0x30201000;
    }
    else {
      puVar9 = &lbl_821CC308;
      uVar11 = 0x61412101;
    }
    *(undefined4 *)((int)param_1 + 0x2994) = *(undefined4 *)(puVar9 + iVar4);
    *(undefined4 *)(param_1 + 0x533) = *(undefined4 *)(puVar9 + iVar4 + 4);
    *(undefined4 *)(param_1 + 0x534) = uVar11;
    *(undefined4 *)((int)param_1 + 0x299c) = uVar11;
  }
  uVar10 = param_1[3];
  param_1[3] = uVar10 | 0x3f8000000000;
  uVar19 = param_1[2];
  uVar15 = param_1[4];
  lVar17 = param_1[1];
  if (*param_1 != 0) {
    fn_82641EF8(param_1,*param_1,0x4000,param_1 + 0xf0);
    *param_1 = 0;
  }
  if (lVar17 != 0) {
    fn_82641EF8(param_1,lVar17,0x4400,param_1 + 0x2f0);
    param_1[1] = 0;
  }
  if (uVar19 != 0) {
    if ((uVar19 & 0x1e0000) != 0) {
      uVar19 = fn_82642F50(param_1,uVar19);
    }
    if ((param_1[5] & uVar19) != 0) {
      uVar19 = fn_826417C8(param_1,uVar19,*(undefined4 *)(param_1 + 0x528));
    }
    if ((uVar19 & 0xfff) != 0) {
      fn_82641B60(param_1,uVar19 << 0x34,0x2200,(int)param_1 + 0x2934);
    }
    if ((uVar19 & 0x1f000) != 0) {
      fn_82641B60(param_1,(uVar19 & 0x1f000) << 0x2f,0x2180,param_1 + 0x524);
    }
    if ((uVar19 & 0x3fffc0000000000) != 0) {
      fn_82641B60(param_1,(uVar19 & 0x3fffc0000000000) << 6,0x2000,param_1 + 0x510);
    }
    if ((uVar19 & 0x3ffffe00000) != 0) {
      fn_82641B60(param_1,(uVar19 & 0x3ffffe00000) << 0x16,0x2100,(int)param_1 + 0x28cc);
    }
    param_1[2] = 0;
  }
  if ((uVar10 | 0x3f8000000000) != 0) {
    if ((uVar10 & 0xffffffff) != 0) {
      fn_82641DA0(param_1,uVar10 << 0x20);
    }
    fn_82641B60(param_1,(uVar10 & 0x7ffffc00000000 | 0x3f8000000000) << 9,0x2280,
                      (int)param_1 + 0x2964);
    param_1[3] = 0;
  }
  if (uVar15 != 0) {
    if ((uVar15 & 0x3fc000000000) != 0) {
      fn_82641B60(param_1,(uVar15 & 0x3fc000000000) << 0x12,0x2380,param_1 + 0x54a);
    }
    if ((uVar15 & 0x7e000000000000) != 0) {
      fn_82641C20(param_1,(uVar15 & 0x7e000000000000) << 9);
    }
    if ((uVar15 & 0x100000000000000) != 0) {
      fn_82641B60(param_1,0xffffffffff000000,0x4900,param_1 + 0x4f0);
    }
    if ((uVar15 & 0x3fffffffff) != 0) {
      fn_82641B60(param_1,uVar15 << 0x1a,0x2300,param_1 + 0x537);
    }
    if (((uVar15 & 0xc000000000000000) != 0) &&
       (((*(byte *)(param_1 + 0x558) & 0x80) != 0 || ((*(byte *)(param_1 + 0x558) & 0x40) != 0)))) {
      fn_82647258(param_1);
    }
    param_1[4] = 0;
  }
  while( true ) {
    uVar6 = *(uint *)(param_1 + 6);
    if (*(uint *)(param_1 + 7) < uVar6) {
      uVar6 = fn_82645110(param_1);
    }
    *(undefined4 *)(uVar6 + 4) = 0x2102;
    *(undefined4 *)(uVar6 + 8) = param_3;
    uVar19 = param_5;
    if (0xffff < (param_5 & 0xffffffff)) {
      uVar14 = *(uint *)(&lbl_82195F48 + (int)((param_2 & 0xffffffff) << 3));
      trapWord(6,(ulonglong)uVar14,0);
      uVar19 = (longlong)(int)((uint)(0xffff / (ulonglong)uVar14) & 0xfffffffe) *
               (longlong)(int)uVar14;
    }
    uVar15 = (ulonglong)puVar1[6];
    uVar10 = (ulonglong)(*puVar1 >> 0x1d) & 3;
    uVar14 = (uint)(*(byte *)((int)param_1 + 0x304b) != 0) << 8 |
             *(byte *)((int)param_1 + *(byte *)((int)param_1 + 0x304b) + 0x300a) & 0x3f;
    if ((*(uint *)(param_1 + 0x52f) & 3) == 2) {
      uVar8 = (longlong)(int)(uint)uVar19 * (longlong)iVar13;
      uVar15 = uVar15 + (param_4 & 0x3fffffff) * 4;
      uVar20 = (uint)((uVar8 & 0xffffffff) << 0x10) | uVar5 & 0x3f | 0x900;
      iVar16 = ((int)((uVar15 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) +
               ((uint)uVar15 & 0x1fffffff);
      uVar18 = (uint)((uVar8 & 0xffffffff) << 1) & 0xfffffe | (uint)(uVar10 << 0x1e);
    }
    else {
      uVar8 = (param_4 & 0x7fffffff) * 2 + uVar15;
      uVar2 = (uint)((uVar19 & 0xffffffff) << 0x10) | uVar5 & 0x3f;
      uVar20 = uVar2 | 0x100;
      iVar16 = ((int)((uVar8 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) + ((uint)uVar8 & 0x1fffffff);
      uVar3 = (uint)(uVar10 << 0x1e);
      uVar18 = (uint)uVar19 & 0xffffff | uVar3;
      if ((*puVar1 & 0x80000000) != 0) {
        uVar15 = (param_4 & 0x3fffffff) * 4 + uVar15;
        uVar18 = (uint)((uVar19 & 0xffffffff) << 1) & 0xfffffe | uVar3;
        uVar20 = uVar2 | 0x900;
        iVar16 = ((int)((uVar15 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) +
                 ((uint)uVar15 & 0x1fffffff);
      }
    }
    if ((*(byte *)((int)param_1 + 0x2abc) & 1) == 0) {
      *(undefined4 *)(uVar6 + 0xc) = 0xc0032201;
      *(uint *)(uVar6 + 0x10) = uVar14;
      *(uint *)(uVar6 + 0x14) = uVar20;
      *(int *)(uVar6 + 0x18) = iVar16;
      puVar12 = (uint *)(uVar6 + 0x1c);
      *puVar12 = uVar18;
    }
    else {
      piVar7 = *(int **)((int)param_1 + 0x347c);
      if (*(int **)(param_1 + 0x690) < piVar7 + 4) {
        piVar7 = (int *)fn_82643B08(param_1 + 0x68e);
      }
      *piVar7 = (int)(uVar6 + 8);
      *(int **)((int)param_1 + 0x347c) = piVar7 + 4;
      *(undefined4 *)(uVar6 + 0xc) = 0xc0006000;
      *(undefined4 *)(uVar6 + 0x10) = 0xffffffff;
      *(undefined4 *)(uVar6 + 0x14) = 0xc0032201;
      *(uint *)(uVar6 + 0x18) = uVar14;
      *(uint *)(uVar6 + 0x1c) = uVar20;
      *(int *)(uVar6 + 0x20) = iVar16;
      *(uint *)(uVar6 + 0x24) = uVar18;
      *(undefined4 *)(uVar6 + 0x28) = 0xc0006000;
      *(undefined4 *)(uVar6 + 0x2c) = 0x80000000;
      *(undefined4 *)(uVar6 + 0x30) = 0xc0015a01;
      *(undefined4 *)(uVar6 + 0x34) = 0x1a;
      *(uint *)(uVar6 + 0x38) =
           (((uint)(piVar7 + 1) >> 0x14) + 0x200 & 0x1000) + ((uint)(piVar7 + 1) & 0x1ffffffe) | 1;
      *(undefined4 *)(uVar6 + 0x3c) = 0xc0004601;
      puVar12 = (uint *)(uVar6 + 0x40);
      *puVar12 = 0x19;
    }
    *(uint **)(param_1 + 6) = puVar12;
    if (param_5 - uVar19 == 0) break;
    param_5 = (ulonglong)*(uint *)(&lbl_82195F4C + (int)((param_2 & 0xffffffff) << 3)) +
              (param_5 - uVar19);
    param_4 = (uVar19 - *(uint *)(&lbl_82195F4C + (int)((param_2 & 0xffffffff) << 3))) + param_4;
  }
  return;
}

