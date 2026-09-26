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
extern int fn_8243E5C8();
extern unsigned int lbl_821CC160;


void fn_8243B890(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  fn_8243E5C8((ulonglong)*(uint *)(param_1 + 0x40) + 0x1f0);
  uVar3 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x210) = lbl_821CC160;
  *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x1d4) = 0xffffffff;
  piVar1 = (int *)(*(int *)(param_1 + 0x40) + 0x1c4);
  if (*(int *)(*(int *)(param_1 + 0x40) + 0x1c8) - *piVar1 >> 2 != 0) {
    iVar2 = 0;
    do {
      (**(code **)(**(int **)(*piVar1 + iVar2) + 0x18))();
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 4;
      piVar1 = (int *)(*(int *)(param_1 + 0x40) + 0x1c4);
    } while (uVar3 < (uint)(*(int *)(*(int *)(param_1 + 0x40) + 0x1c8) - *piVar1 >> 2));
  }
  return;
}

