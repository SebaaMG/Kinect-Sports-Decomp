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
extern int fn_82437130();
extern int fn_82508078();


void fn_8244FE38(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(undefined1 *)(*(int *)(param_1 + 0x44) + 0xfc) = 1;
  iVar1 = **(int **)(param_1 + 0x40);
  if ((*(int *)(iVar1 + 0xa0) != 0) && (*(int *)(*(int *)(iVar1 + 0xa0) + 0x40) == 1)) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x44);
  if (*(int *)(iVar2 + 0x10c) != 0) {
    uVar4 = 0xffffffff821ba104;
    goto LAB_8244fef8;
  }
  if (*(int *)(iVar2 + 0x110) != 0) {
    uVar3 = *(undefined4 *)(iVar1 + 0xa4);
    uVar4 = 0xffffffff821b9298;
    goto LAB_8244ff08;
  }
  iVar2 = *(int *)(iVar2 + 0x100);
  if (iVar2 == 1) {
    uVar4 = 0xffffffff821ba118;
LAB_8244fef8:
    uVar3 = *(undefined4 *)(iVar1 + 0xa4);
  }
  else {
    if (iVar2 == 2) {
      uVar4 = 0xffffffff821ba124;
      goto LAB_8244fef8;
    }
    uVar3 = *(undefined4 *)(iVar1 + 0xa4);
    if (iVar2 == 3) {
      uVar4 = 0xffffffff821ba130;
    }
    else {
      uVar4 = 0xffffffff821ba13c;
    }
  }
  uVar4 = fn_82437130(param_1,uVar4);
LAB_8244ff08:
  fn_82508078(uVar3,uVar4,0);
  return;
}

