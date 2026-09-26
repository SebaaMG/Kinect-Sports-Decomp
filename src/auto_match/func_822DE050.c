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
extern int fn_822315A0();
extern int fn_822CFF20();
extern int fn_82359BB0();
extern int fn_824D2AE8();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


void fn_822DE050(int param_1)

{
  int iVar1;
  int iStack_50;
  int iStack_4c;
  int *piStack_40;
  int *piStack_3c;
  
  *(undefined4 *)(param_1 + 0xa0) = 0x18;
  fn_824D2AE8(&iStack_50,param_1 + 0xb4);
  if (iStack_50 != 0) {
    *(undefined4 *)(iStack_50 + 0xac) = 1;
  }
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  *(undefined4 *)(param_1 + 0x30) = 0x18;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24c) = 0;
  if (*(int *)(param_1 + 200) != 0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 200))();
    *(undefined4 *)(param_1 + 200) = 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1e4) = 0;
  if (*(int *)(*(int *)(param_1 + 0x14) + 0x340) != 0) {
    fn_822CFF20(&piStack_40,(ulonglong)*(uint *)(param_1 + 0x10) + 0x184);
    for (; piStack_40 != piStack_3c; piStack_40 = piStack_40 + 2) {
      iVar1 = *piStack_40;
      *(undefined4 *)(iVar1 + 0x1b8) = 1;
      *(undefined4 *)(iVar1 + 0x209c) = 0;
    }
    fn_82359BB0(&piStack_40);
  }
  return;
}

