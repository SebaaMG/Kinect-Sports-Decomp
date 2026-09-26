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
extern int fn_82AB15D0();
extern int fn_82B7FAF0();
extern int fn_82B9FA18();


void fn_82B771B0(int param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  ulonglong uVar7;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x664) == 0) {
    *(undefined4 *)(param_1 + 0x66c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x66c) = 1;
  }
  if (*piVar1 == 0) {
    fn_82B9FA18(param_2,0x7ba,piVar1[0x16a8]);
    fn_82B9FA18(param_2,0x7c0,(ulonglong)*(uint *)(param_1 + 0x668) - 1);
    fn_82B9FA18(param_2,0x7c3,*(undefined4 *)(param_1 + 0x678));
    fn_82B9FA18(param_2,0x7c1,*(undefined4 *)(param_1 + 0x680));
    uVar2 = *(undefined4 *)(param_1 + 0x66c);
    uVar3 = 0x7bc;
  }
  else {
    fn_82B9FA18(param_2,0x7bb,piVar1[0x16a8]);
    fn_82B9FA18(param_2,0x7c2,*(undefined4 *)(param_1 + 0x684));
    fn_82B9FA18(param_2,0x7bf,*(undefined4 *)(param_1 + 0x674));
    fn_82B9FA18(param_2,0x7bd,*(undefined4 *)(param_1 + 0x66c));
    uVar2 = *(undefined4 *)(param_1 + 0x69c);
    uVar3 = 0x7c7;
  }
  fn_82B9FA18(param_2,uVar3,uVar2);
  fn_82B9FA18(param_2,0x7c8,*(undefined4 *)(param_1 + 0x688));
  fn_82B9FA18(param_2,0x7c9,*(undefined4 *)(param_1 + 0x68c));
  uVar7 = 0;
  puVar6 = (uint *)(piVar1 + 0xc24);
  do {
    uVar4 = *puVar6;
    if (uVar4 < 0x19) {
      uVar5 = 0xff;
      if (uVar4 == 0xf) {
        uVar3 = 8;
      }
      else if (uVar4 == 0x10) {
        uVar3 = 5;
      }
      else if (uVar4 == 0x11) {
        uVar3 = 2;
      }
      else if (uVar4 == 0x12) {
        uVar3 = 3;
      }
      else if (uVar4 == 0x13) {
        uVar3 = 4;
      }
      else if (uVar4 == 0x16) {
        uVar3 = 0xc;
      }
      else {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,0x39f3);
        uVar3 = 1;
      }
      uVar4 = 0;
      do {
        if ((ulonglong)(uint)piVar1[*puVar6 * 0x40 + uVar4 + 0x1068] == (uVar7 & 0xffffffff)) {
          uVar5 = uVar4;
          if (uVar4 != 0xff) goto LAB_82b773b8;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x14);
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820daa80,0xffffffff820da3b8,0x3a03);
      uVar4 = uVar5;
LAB_82b773b8:
      fn_82B7FAF0(*(undefined4 *)(param_1 + 0x10),0,uVar7,uVar3,uVar4,0x1010101,puVar6[5] == 0,0
                     );
    }
    uVar7 = uVar7 + 1;
    puVar6 = puVar6 + 7;
    if (0x13 < (uVar7 & 0xffffffff)) {
      return;
    }
  } while( true );
}

