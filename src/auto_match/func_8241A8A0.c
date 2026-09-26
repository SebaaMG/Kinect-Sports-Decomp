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
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8241A8A0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(int *)param_1[1] + 0x3c))();
  if ((((iVar2 != 0) && (*(int *)(param_2 + 0x24) != 0)) &&
      (*(int *)(param_1[6] * 0x1ac + param_1[2] + 0x1c) != 0)) &&
     (iVar2 = *param_1, param_1 == *(int **)(iVar2 + 0x2b20))) {
    if (*(int *)(iVar2 + 0x2c9c) == 3) {
      *(undefined4 *)(iVar2 + 0x2c9c) = 0;
      *(undefined4 *)(iVar2 + 0x2ca0) = lbl_821CA460;
    }
    else {
      *(undefined4 *)(iVar2 + 0x2c9c) = 1;
    }
  }
  iVar1 = lbl_821CC160;
  iVar2 = *param_1;
  if (*(int *)(iVar2 + 0xcb8) == 0) {
    param_1[0x8d] = lbl_821CC160;
  }
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  if (param_1 == *(int **)(iVar2 + 0x2b20)) {
    *(int *)(iVar2 + 0x2c04) = iVar1;
  }
  return;
}

