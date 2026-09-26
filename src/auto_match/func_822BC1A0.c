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
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822B91F8();
extern int fn_822B9390();
extern int fn_8234C258();
extern int fn_8234C320();
extern int fn_824D03B8();


void fn_822BC1A0(int param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [40];
  
  iVar4 = (int)param_3;
  iVar1 = iVar4 * 0x40 + param_1;
  iVar5 = (int)param_2;
  *(int *)(iVar1 + 0x1b0) = iVar5;
  *(undefined4 *)(iVar1 + 0x1a0) = 1;
  puVar2 = (undefined4 *)(iVar5 + 0x50U & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar3 = (undefined4 *)((int)((param_3 + 7U & 0xffffffff) << 6) + param_1 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  puVar2 = (undefined4 *)(iVar5 + 0xc0U & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar3 = (undefined4 *)(iVar1 + 0x1d0U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  iVar5 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar5 = fn_824D03B8((double)*(float *)(iVar1 + 0x1ac),*(int *)(param_1 + 0x24),param_3,1);
  }
  if (((((-(*(int *)(**(int **)(param_1 + 0x238) + 0xc4c) != 0) & 3U) < 3) ||
       (*(int *)(*(int *)(param_1 + 0x23c) + 0x13c) == 0)) ||
      (*(int *)(**(int **)(param_1 + 0x238) + 0xcb8) == 0)) || (iVar5 == 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      fn_822B9390(*(undefined4 *)(param_1 + 0x11c),param_2,0x21);
    }
    else {
      fn_822B91F8(*(undefined4 *)(param_1 + 0x11c),*(undefined4 *)(param_1 + 0x14),param_2,
                        (iVar4 == 1) + ' ');
    }
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = *(int *)(param_1 + 0x118);
    if (iVar4 == 1) {
      if (*(int *)(iVar1 + 0x2ac) != 1) {
        fn_8234C320(1,iVar1 + 0x294);
      }
      fn_82230110(auStack_60,0xffffffff821acab4);
      fn_8234C258((ulonglong)*(uint *)(param_1 + 0x118) + 0x150,1,auStack_60);
      puVar6 = auStack_60;
    }
    else {
      if (*(int *)(iVar1 + 0x280) != 1) {
        fn_8234C320(1,iVar1 + 0x268);
      }
      fn_82230110(auStack_40,0xffffffff821acab4);
      fn_8234C258((ulonglong)*(uint *)(param_1 + 0x118) + 0x150,0,auStack_40);
      puVar6 = auStack_40;
    }
    fn_82230300(puVar6,1,0);
  }
  return;
}

