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
extern int fn_82231540();
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_823F2E20();
extern unsigned int iStack_4c;


void fn_8248DE88(int param_1)

{
  uint uVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int *piStack_50;
  int iStack_4c;
  
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (uVar4 != *(uint *)(param_1 + 0x50)) {
    uVar3 = uVar4 + 8;
    do {
      fn_82365BD8(&piStack_50,uVar4);
      uVar1 = *(uint *)(param_1 + 0x50);
      if ((uVar3 & 0xffffffff) != (ulonglong)uVar1) {
        uVar5 = uVar3;
        do {
          fn_823F2E20((uVar4 - uVar3) + uVar5,uVar5);
          uVar5 = uVar5 + 8;
        } while ((uVar5 & 0xffffffff) != (ulonglong)uVar1);
      }
      fn_82231540((ulonglong)*(uint *)(param_1 + 0x50) - 8);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -8;
      for (piVar2 = *(int **)(param_1 + 0x4c);
          (piVar2 != *(int **)(param_1 + 0x50) && ((int *)*piVar2 != piStack_50));
          piVar2 = piVar2 + 2) {
      }
      if (piVar2 == *(int **)(param_1 + 0x50)) {
        (**(code **)(*piStack_50 + 0x10))();
      }
      if (iStack_4c != 0) {
        fn_822315A0();
      }
    } while (uVar4 != *(uint *)(param_1 + 0x50));
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

