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
extern int fn_8265C990();
extern int fn_82935258();
extern int fn_82A9CEE8();
extern int fn_82AAC760();
extern unsigned int lbl_820D2B34;


void fn_82A9D058(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  int *piVar7;
  
  uVar3 = param_1[4];
  *param_1 = &lbl_820D2B34;
  piVar2 = param_1 + 4;
  if (uVar3 < param_1[5] * 0x1dc + uVar3) {
    piVar7 = (int *)(uVar3 + 0x1c0);
    do {
      fn_8265C990(piVar7[-0xf],0x24870000);
      fn_82A9CEE8(piVar7 + -0x2b);
      fn_82A9CEE8(piVar7 + -0x28);
      fn_82A9CEE8(piVar7 + -0x25);
      fn_82A9CEE8(piVar7 + -0x22);
      fn_82A9CEE8(piVar7 + -0x1f);
      fn_82935258(piVar7 + -0x1c);
      fn_82A9CEE8(piVar7 + -0x18);
      fn_82A9CEE8(piVar7 + -0x15);
      uVar4 = piVar7[-0x12];
      for (uVar5 = (ulonglong)(int)uVar4;
          (uVar5 & 0xffffffff) <
          ((ulonglong)(uint)piVar7[-0x11] * 0x14 + (ulonglong)uVar4 & 0xffffffff);
          uVar5 = uVar5 + 0x14) {
        fn_82A9CEE8(uVar5 + 8);
        uVar4 = piVar7[-0x12];
      }
      fn_82A9CEE8(piVar7 + -0x12);
      fn_82A9CEE8(piVar7 + -0xd);
      fn_82A9CEE8(piVar7 + -10);
      fn_82A9CEE8(piVar7 + -7);
      fn_82A9CEE8(piVar7 + -4);
      uVar4 = piVar7[-1];
      if (uVar4 < *piVar7 * 0x18 + uVar4) {
        puVar6 = (uint *)(uVar4 + 0xc);
        do {
          for (uVar5 = (ulonglong)*puVar6;
              (uVar5 & 0xffffffff) < ((ulonglong)puVar6[1] * 0x1c + (ulonglong)*puVar6 & 0xffffffff)
              ; uVar5 = uVar5 + 0x1c) {
            fn_82A9CEE8(uVar5 + 0x10);
          }
          fn_82A9CEE8(puVar6);
          uVar4 = uVar4 + 0x18;
          puVar6 = puVar6 + 6;
        } while (uVar4 < (uint)(*piVar7 * 0x18 + piVar7[-1]));
      }
      fn_82A9CEE8(piVar7 + -1);
      uVar3 = uVar3 + 0x1dc;
      piVar7 = piVar7 + 0x77;
    } while (uVar3 < (uint)(param_1[5] * 0x1dc + *piVar2));
  }
  uVar3 = param_1[1];
  puVar6 = param_1 + 1;
  iVar1 = param_1[2];
  uVar4 = uVar3;
  while( true ) {
    if (iVar1 * 0x114 + uVar3 <= uVar4) break;
    if (*(int *)(uVar4 + 0x110) != 0) {
      fn_8265C990(*(int *)(uVar4 + 0x110),0x24870000);
      *(undefined4 *)(uVar4 + 0x110) = 0;
    }
    iVar1 = param_1[2];
    uVar4 = uVar4 + 0x114;
    uVar3 = *puVar6;
  }
  fn_8265C990(param_1[0x21],0x24870000);
  param_1[0x21] = 0;
  if (param_1[0xe] != 0) {
    fn_82AAC760(param_1 + 0xe);
  }
  if (param_1[0xb] != 0) {
    fn_82AAC760(param_1 + 0xb);
  }
  if (param_1[8] != 0) {
    fn_82AAC760(param_1 + 8);
  }
  if (*piVar2 != 0) {
    fn_82AAC760(piVar2);
  }
  if (*puVar6 != 0) {
    fn_82AAC760(puVar6);
  }
  return;
}

