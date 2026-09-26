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
extern int fn_822A1830();
extern int fn_822ABA88();
extern int fn_824C97F0();


undefined8 fn_8238C0E8(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar6 = *(int **)(*(int *)(iVar1 + 0x1f0) * 4 + **(int **)(iVar1 + 8));
  iVar4 = fn_822ABA88(*(undefined4 *)(piVar6[4] * 4 + *piVar6),*(undefined4 *)(iVar1 + 500));
  if (*(int *)(iVar4 + 0x24) == 0) {
    return 0;
  }
  uVar2 = *(uint *)(iVar4 + 600);
  if (uVar2 < 3) {
    uVar5 = 3;
  }
  else if (uVar2 == 0xb) {
    if (*(int *)(iVar1 + 0x21c) == 0) {
      return 0;
    }
    uVar5 = 0;
  }
  else if (uVar2 == 0xc) {
    if (*(int *)(iVar4 + 0x26c) == 0) {
      return 0;
    }
    uVar5 = 2;
  }
  else {
    if (uVar2 != 0x10) {
      return 0;
    }
    uVar5 = 1;
  }
  fn_822A1830(*(undefined4 *)(iVar1 + 0xd4),iVar4 + 0x30,uVar5);
  piVar3 = (int *)(*(undefined4 **)(iVar1 + 0xa8))[1];
  for (piVar6 = (int *)**(undefined4 **)(iVar1 + 0xa8); piVar6 != piVar3; piVar6 = piVar6 + 2) {
    fn_824C97F0(*(undefined4 *)(*piVar6 + 0x28),0xffffffff821b4420);
  }
  return 1;
}

