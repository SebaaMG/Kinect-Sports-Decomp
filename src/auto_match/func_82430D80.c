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
extern int fn_8229F618();
extern unsigned int lbl_821CC160;


void fn_82430D80(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = lbl_821CC160;
  if (param_2 != *(int *)(*(int *)(param_1 + 0x244) + 0x68)) {
    *(undefined4 *)(*(int *)(param_1 + 0x244) + 0x6c) = lbl_821CC160;
    *(int *)(*(int *)(param_1 + 0x244) + 0x68) = param_2;
    if (param_2 == 1) {
      *(undefined4 *)(*(int *)(param_1 + 0x244) + 0xd4) = uVar1;
    }
    else if (param_2 == 5) {
      fn_8229F618(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x240) + 0xd4) + 0xc));
    }
    else if ((param_2 == 7) && (*(char *)(*(int *)(param_1 + 0x244) + 100) != '\0')) {
      *(undefined4 *)(*(int *)(param_1 + 0x244) + 0x68) = 8;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x244) + 0xd0) = 0;
    iVar2 = **(int **)(param_1 + 0x244);
    if (**(int **)(param_1 + 0x244) < param_3) {
      iVar2 = param_3;
    }
    **(int **)(param_1 + 0x244) = iVar2;
  }
  return;
}

