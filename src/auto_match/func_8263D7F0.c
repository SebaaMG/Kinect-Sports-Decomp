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
extern unsigned int *auStack_90;
extern int fn_82637550();
extern int fn_8263D250();
extern int fn_826417C8();
extern int fn_82641B60();
extern int fn_82645110();
extern int fn_82F68CC0();
extern unsigned int lbl_821CE890;


void fn_8263D7F0(undefined8 param_1,int param_2,ulonglong param_3,uint *param_4,
                  undefined1 *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined8 uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int *piVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_90 [144];
  
  if (param_5 == (undefined1 *)0x0) {
    param_5 = auStack_90;
    puVar5 = (undefined4 *)((uint)(&lbl_821CE890 + in_r0) & 0xfffffff0);
    uVar13 = puVar5[1];
    uVar14 = puVar5[2];
    uVar15 = puVar5[3];
    puVar3 = (undefined4 *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar5;
    puVar3[1] = uVar13;
    puVar3[2] = uVar14;
    puVar3[3] = uVar15;
  }
  if ((*(int *)(param_2 + 0x3158) == 0) &&
     (param_3 = param_3 << 0x20 | param_3 & 0xffffff0f, param_3 == 0)) {
    return;
  }
  uVar1 = (uint)*(float *)(param_2 + 0x3218);
  uVar2 = (uint)*(float *)(param_2 + 0x321c);
  uVar8 = (ulonglong)*param_4;
  if ((int)*param_4 <= (int)uVar1) {
    uVar8 = (ulonglong)uVar1;
  }
  uVar9 = (ulonglong)param_4[1];
  if ((int)param_4[1] <= (int)uVar2) {
    uVar9 = (ulonglong)uVar2;
  }
  uVar6 = (ulonglong)(uint)(int)*(float *)(param_2 + 0x3220) + (ulonglong)uVar1;
  uVar10 = (ulonglong)param_4[2];
  if ((int)uVar6 <= (int)param_4[2]) {
    uVar10 = uVar6;
  }
  uVar7 = (ulonglong)(uint)(int)*(float *)(param_2 + 0x3224) + (ulonglong)uVar2;
  uVar6 = (ulonglong)param_4[3];
  if ((int)uVar7 <= (int)param_4[3]) {
    uVar6 = uVar7;
  }
  if (*(int *)(param_2 + 0x2f00) != 0) {
    if ((int)uVar8 <= (int)*(uint *)(param_2 + 0x3234)) {
      uVar8 = (ulonglong)*(uint *)(param_2 + 0x3234);
    }
    if ((int)uVar9 <= (int)*(uint *)(param_2 + 0x3238)) {
      uVar9 = (ulonglong)*(uint *)(param_2 + 0x3238);
    }
    if ((int)*(uint *)(param_2 + 0x323c) <= (int)uVar10) {
      uVar10 = (ulonglong)*(uint *)(param_2 + 0x323c);
    }
    if ((int)*(uint *)(param_2 + 0x3240) <= (int)uVar6) {
      uVar6 = (ulonglong)*(uint *)(param_2 + 0x3240);
    }
  }
  if (((int)uVar8 < (int)uVar10) && ((int)uVar9 < (int)uVar6)) {
    uVar7 = *(ulonglong *)(param_2 + 0x10);
    if (uVar7 != 0) {
      if ((*(ulonglong *)(param_2 + 0x28) & uVar7) != 0) {
        uVar4 = fn_826417C8(param_2,uVar7,*(undefined4 *)(param_2 + 0x2940));
        *(undefined8 *)(param_2 + 0x10) = uVar4;
      }
      if ((*(ulonglong *)(param_2 + 0x10) & 0xfff) != 0) {
        fn_82641B60(param_2,*(ulonglong *)(param_2 + 0x10) << 0x34,0x2200,param_2 + 0x2934);
        *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) & 0xfffffffffffff000;
      }
      if ((*(ulonglong *)(param_2 + 0x10) & 0x1f000) != 0) {
        fn_82641B60(param_2,(*(ulonglong *)(param_2 + 0x10) & 0x1f000) << 0x2f,0x2180,
                          param_2 + 0x2920);
        *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) & 0xfffffffffffe0fff;
      }
      if ((*(ulonglong *)(param_2 + 0x10) & 0x3fffc0000000000) != 0) {
        fn_82641B60(param_2,(*(ulonglong *)(param_2 + 0x10) & 0x3fffc0000000000) << 6,0x2000,
                          param_2 + 0x2880);
        *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) & 0xfc0003ffffffffff;
      }
      if ((*(ulonglong *)(param_2 + 0x10) & 0x3ffffe00000) != 0) {
        fn_82641B60(param_2,(*(ulonglong *)(param_2 + 0x10) & 0x3ffffe00000) << 0x16,0x2100,
                          param_2 + 0x28cc);
        *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) & 0xfffffc00001fffff;
      }
    }
    uVar7 = *(ulonglong *)(param_2 + 0x18);
    if ((uVar7 != 0) && ((uVar7 & 0x7ffffc00000000) != 0)) {
      fn_82641B60(param_2,(uVar7 & 0x7ffffc00000000) << 9,0x2280,param_2 + 0x2964);
      *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) & 0xff800003ffffffff;
    }
    uVar7 = *(ulonglong *)(param_2 + 0x20);
    if ((uVar7 != 0) && ((uVar7 & 0x3fffffffff) != 0)) {
      fn_82641B60(param_2,uVar7 << 0x1a,0x2300,param_2 + 0x29b8);
      *(ulonglong *)(param_2 + 0x20) = *(ulonglong *)(param_2 + 0x20) & 0xffffffc000000000;
    }
    puVar5 = *(undefined4 **)(param_2 + 0x30);
    if (*(undefined4 **)(param_2 + 0x38) < puVar5) {
      puVar5 = (undefined4 *)fn_82645110(param_2);
    }
    if ((*(byte *)(param_2 + 0x2abc) & 0x20) != 0) {
      puVar5[1] = 0xc0006000;
      puVar5 = puVar5 + 2;
      *puVar5 = *(undefined4 *)(param_2 + 0x3254);
    }
    puVar5[1] = 0xc0003b00;
    puVar5[2] = 0x300;
    puVar5[3] = 0xc01c2b00;
    puVar5[4] = 0;
    puVar5[5] = 0x1b;
    fn_82F68CC0(puVar5 + 6,0xffffffff8218d7f0,0x6c);
    puVar5 = puVar5 + 0x20;
    *(undefined4 **)(param_2 + 0x30) = puVar5;
    if (*(undefined4 **)(param_2 + 0x38) < puVar5) {
      puVar5 = (undefined4 *)fn_82645110(param_2);
    }
    puVar5[1] = 0xc00a2b00;
    puVar5[2] = 1;
    puVar5[3] = 9;
    fn_82F68CC0(puVar5 + 4,0xffffffff8218d1d4,0x24);
    puVar5[0xd] = 0x12180;
    puVar5[0xe] = 0x10010001;
    puVar5 = puVar5 + 0xf;
    *puVar5 = 0;
    *(undefined4 **)(param_2 + 0x30) = puVar5;
    if (*(undefined4 **)(param_2 + 0x38) < puVar5) {
      puVar5 = (undefined4 *)fn_82645110(param_2);
    }
    puVar5[1] = 0x22100;
    puVar5[2] = 0xffff;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0x2293;
    puVar5[6] = 0;
    puVar5[7] = 0x22204;
    puVar5[8] = 0x10000;
    puVar5[9] = 0x10000;
    puVar5[10] = 0x300;
    puVar5[0xb] = 0x2312;
    puVar5[0xc] = 0xffff;
    puVar5[0xd] = 0x200d;
    puVar5 = puVar5 + 0xe;
    *puVar5 = 0;
    uVar7 = *(ulonglong *)(param_2 + 0x10);
    *(ulonglong *)(param_2 + 0x10) = uVar7 | 0x20000000000;
    *(ulonglong *)(param_2 + 0x10) = uVar7 | 0x30000000000;
    *(ulonglong *)(param_2 + 0x10) = uVar7 | 0x38000000000;
    *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x800000000;
    uVar7 = *(ulonglong *)(param_2 + 0x10);
    *(ulonglong *)(param_2 + 0x10) = uVar7 | 0x80;
    *(ulonglong *)(param_2 + 0x10) = uVar7 | 0xc0;
    *(ulonglong *)(param_2 + 0x10) = uVar7 | 0xe0;
    *(ulonglong *)(param_2 + 0x20) = *(ulonglong *)(param_2 + 0x20) | 0x80000;
    uVar7 = *(ulonglong *)(param_2 + 0x10);
    *(ulonglong *)(param_2 + 0x10) = uVar7 | 0x100000000000;
    *(ulonglong *)(param_2 + 0x10) = uVar7 | 0x100000080000;
    *(ulonglong *)(param_2 + 0x10) = uVar7 | 0x100000180000;
    *(undefined4 **)(param_2 + 0x30) = puVar5;
    if ((param_3 & 0xf) == 0) {
      fn_8263D250(param_1,param_2,param_3,0xffffffffffffffff,uVar8,uVar9,uVar10,uVar6,param_5);
    }
    else {
      if (*(undefined4 **)(param_2 + 0x38) < puVar5) {
        puVar5 = (undefined4 *)fn_82645110(param_2);
      }
      puVar5[1] = 0x2104;
      puVar5[2] = 0xffff;
      uVar12 = 0;
      piVar11 = (int *)(param_2 + 0x3148);
      puVar5[3] = 0x2202;
      puVar5[4] = 0;
      puVar5[5] = 0x2201;
      puVar5[6] = 0x10001;
      *(undefined4 **)(param_2 + 0x30) = puVar5 + 6;
      uVar7 = *(ulonglong *)(param_2 + 0x10);
      *(ulonglong *)(param_2 + 0x10) = uVar7 | 0x2000000000;
      *(ulonglong *)(param_2 + 0x10) = uVar7 | 0x2000000200;
      *(ulonglong *)(param_2 + 0x10) = uVar7 | 0x2000000600;
      do {
        if ((((uint)(1 << ((uint)uVar12 & 0x3f)) & param_3) != 0) && (*piVar11 != 0)) {
          fn_8263D250(param_1,param_2,param_3,uVar12,uVar8,uVar9,uVar10,uVar6,param_5);
          param_3 = param_3 << 0x20 | param_3 & 0xffffff0f;
        }
        uVar12 = uVar12 + 1;
        piVar11 = piVar11 + 1;
      } while ((uVar12 & 0xffffffff) < 4);
    }
    uVar1 = *(uint *)(param_2 + 0x28c8);
    fn_82637550(param_2,(*(int *)(param_2 + 0x28c4) << 0x11) >> 0x11,
                      (*(int *)(param_2 + 0x28c4) << 1) >> 0x11,
                      (int)(uVar1 << 0x11 | uVar1 >> 0xf) >> 0x11,(int)(uVar1 << 1) >> 0x11);
    *(byte *)(param_2 + 0x2abd) = *(byte *)(param_2 + 0x2abd) | 4;
    *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x20000;
  }
  return;
}

