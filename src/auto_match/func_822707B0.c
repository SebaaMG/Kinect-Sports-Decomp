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
extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int fStack_a0;
extern int fn_82270B70();
extern int fn_822734A0();
extern unsigned int uStack_9c;
extern unsigned int uStack_d0;


void fn_822707B0(double param_1,uint param_2)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  longlong lVar6;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined4 *apuStack_e0 [2];
  undefined4 *apuStack_d8 [2];
  uint uStack_d0;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  float fStack_a0;
  undefined4 uStack_9c;
  uint auStack_90 [2];
  undefined8 auStack_88 [15];
  
  iVar2 = fn_82270B70();
  puVar1 = (undefined4 *)(*(undefined4 **)(iVar2 + 0xe8))[1];
  apuStack_e0[0] = *(undefined4 **)(iVar2 + 0xe8);
  while (puVar4 = puVar1, *(char *)((int)puVar4 + 0x61) == '\0') {
    if ((uint)puVar4[4] < param_2) {
      puVar1 = (undefined4 *)puVar4[2];
    }
    else {
      puVar1 = (undefined4 *)*puVar4;
      apuStack_e0[0] = puVar4;
    }
  }
  if ((apuStack_e0[0] == *(undefined4 **)(iVar2 + 0xe8)) || (param_2 < (uint)apuStack_e0[0][4])) {
    ppuVar5 = apuStack_d8;
    apuStack_d8[0] = *(undefined4 **)(iVar2 + 0xe8);
  }
  else {
    ppuVar5 = apuStack_e0;
  }
  if (*ppuVar5 == *(undefined4 **)(iVar2 + 0xe8)) {
    puVar1 = (undefined4 *)((uint)(auStack_c0 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
    puVar3 = auStack_88;
    puVar1 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_00010020;
    puVar1[1] = in_register_00010024;
    puVar1[2] = in_register_00010028;
    puVar1[3] = in_vr2;
    lVar6 = 8;
    fStack_a0 = (float)param_1;
    uStack_9c = 0;
    ppuVar5 = apuStack_d8;
    do {
      ppuVar5 = ppuVar5 + 2;
      puVar3 = puVar3 + 1;
      *puVar3 = *(undefined8 *)ppuVar5;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    uStack_d0 = param_2;
    auStack_90[0] = param_2;
    fn_822734A0(apuStack_d8,iVar2 + 0xe4,auStack_90);
  }
  return;
}

