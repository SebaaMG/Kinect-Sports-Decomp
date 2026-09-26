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
extern int fn_82A1DDC0();
extern int fn_82A1EFC0();
extern unsigned int lbl_832177AC;
extern unsigned int lbl_832177B0;


void fn_829D25A8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 in_vs32 [16];
  undefined1 in_vs38 [16];
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  
  fn_82A1EFC0(param_1,0,0xa80);
  piVar5 = (int *)(param_1 + 4);
  puVar3 = (uint *)(param_3 + 0x88);
  lVar7 = 6;
  do {
    if (puVar3[-6] == 1) {
      piVar5[-1] = 1;
      altv207_13(in_vs32,in_vs38);
      puVar2 = (undefined4 *)((uint)(piVar5 + 3) & 0xfffffff0);
      *puVar2 = in_register_000103f0;
      puVar2[1] = in_register_000103f4;
      puVar2[2] = in_register_000103f8;
      puVar2[3] = in_vr63;
      uVar1 = *puVar3;
      if (uVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = lbl_832177AC + uVar1;
      }
      *piVar5 = iVar4;
      if (lbl_832177B0 <= uVar1) {
        lbl_832177B0 = uVar1;
      }
    }
    puVar3 = puVar3 + 1;
    piVar5 = piVar5 + 0x70;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  piVar5 = (int *)(param_3 + 0xd0);
  lVar7 = 2;
  do {
    if (piVar5[-6] == 1) {
      lVar6 = 2;
      iVar4 = (*piVar5 + -1) * 0x1c0;
      *(undefined4 *)(iVar4 + param_1) = 2;
      iVar4 = iVar4 + param_1;
      do {
        fn_82A1DDC0(iVar4 + 0x20,param_2,0x140);
        fn_82A1DDC0(iVar4 + 0x160,param_2 + 0x148,0x50);
        lVar6 = lVar6 + -1;
        *(undefined4 *)(iVar4 + 0x1b0) = *(undefined4 *)(param_2 + 0x144);
      } while (lVar6 != 0);
    }
    lVar7 = lVar7 + -1;
    piVar5 = piVar5 + 1;
    param_2 = param_2 + 0x1a0;
  } while (lVar7 != 0);
  return;
}

