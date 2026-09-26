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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_82F63108();
extern int fn_82F63CA0();


void fn_8225D760(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  puVar7 = *(undefined4 **)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x30) = 0;
  uVar2 = fn_822C5B18(auStack_c0);
  uVar3 = fn_822C5B18(auStack_a0,uVar2);
  uVar4 = fn_822C5B18(auStack_80,uVar3);
  uVar5 = uVar4;
  for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
    if (*(int **)(uVar4 + 0x10) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108(uVar5,*puVar7);
    }
    uVar5 = (**(code **)(**(int **)(uVar4 + 0x10) + 4))();
    if ((uVar5 & 0xff) != 0) break;
  }
  fn_82359C18(uVar4);
  fn_82359C18(uVar3);
  if (puVar7 != puVar1) {
    uVar4 = fn_822C5B18(auStack_60,uVar2);
    puVar6 = puVar7;
    uVar5 = uVar4;
    while (puVar6 = puVar6 + 1, puVar6 != puVar1) {
      if (*(int **)(uVar4 + 0x10) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108(uVar5,*puVar6);
      }
      uVar5 = (**(code **)(**(int **)(uVar4 + 0x10) + 4))();
      if ((uVar5 & 0xff) == 0) {
        *puVar7 = *puVar6;
        puVar7 = puVar7 + 1;
      }
    }
    fn_82359C18(uVar4);
  }
  fn_82359C18(uVar2);
  if (puVar7 != *(undefined4 **)(param_1 + 0x14)) {
    fn_82F63CA0(puVar7,*(undefined4 **)(param_1 + 0x14),0);
    *(undefined4 **)(param_1 + 0x14) = puVar7;
  }
  fn_82359C18(param_2);
  return;
}

