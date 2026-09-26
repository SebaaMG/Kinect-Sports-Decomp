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
extern unsigned int lbl_821410F0;
extern unsigned int lbl_8218784C;
extern unsigned int lbl_8218785C;


void fn_83088410(int param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  *(undefined2 *)(param_1 + 0x106) = 1;
  *(undefined ***)(param_1 + 0x108) = &lbl_821410F0;
  *(undefined ***)(param_1 + 0x100) = &lbl_8218785C;
  piVar1 = (int *)(param_1 + -4);
  *(undefined ***)(param_1 + 0x108) = &lbl_8218784C;
  lVar3 = 8;
  do {
    iVar2 = param_1 + 0x108;
    if (param_1 == -0x100) {
      iVar2 = 0;
    }
    piVar1[1] = iVar2;
    iVar2 = param_1 + 0x108;
    if (param_1 == -0x100) {
      iVar2 = 0;
    }
    piVar1[2] = iVar2;
    iVar2 = param_1 + 0x108;
    if (param_1 == -0x100) {
      iVar2 = 0;
    }
    piVar1[3] = iVar2;
    iVar2 = param_1 + 0x108;
    if (param_1 == -0x100) {
      iVar2 = 0;
    }
    piVar1[4] = iVar2;
    iVar2 = param_1 + 0x108;
    if (param_1 == -0x100) {
      iVar2 = 0;
    }
    piVar1[5] = iVar2;
    iVar2 = param_1 + 0x108;
    if (param_1 == -0x100) {
      iVar2 = 0;
    }
    piVar1[6] = iVar2;
    iVar2 = param_1 + 0x108;
    if (param_1 == -0x100) {
      iVar2 = 0;
    }
    piVar1[7] = iVar2;
    iVar2 = param_1 + 0x108;
    if (param_1 == -0x100) {
      iVar2 = 0;
    }
    piVar1 = piVar1 + 8;
    *piVar1 = iVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

