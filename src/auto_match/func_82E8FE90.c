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
extern int fn_82E8EF60();
extern float lbl_82015408;
extern float lbl_8215F710;


void fn_82E8FE90(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1d94);
  if (iVar1 < 2) {
    iVar1 = 2;
  }
  *(int *)(param_1 + 0x1d94) = iVar1;
  iVar1 = *(int *)(param_1 + 0x1efc);
  if (iVar1 < 2) {
    iVar1 = 2;
  }
  *(int *)(param_1 + 0x1efc) = iVar1;
  iVar1 = *(int *)(param_1 + 0x78cc);
  if (iVar1 < 2) {
    iVar1 = 2;
  }
  *(int *)(param_1 + 0x78cc) = iVar1;
  iVar1 = *(int *)(param_1 + 0x78d0);
  if (iVar1 < 2) {
    iVar1 = 2;
  }
  *(int *)(param_1 + 0x78d0) = iVar1;
  fn_82E8EF60(param_1,1);
  *(undefined4 *)(param_1 + 0x1fec) = 1;
  if ((((*(int *)(param_1 + 0x1a6c) == 0) ||
       (*(undefined4 *)(param_1 + 0x1a6c) = 0, *(int *)(param_1 + 4) != 8)) ||
      (*(int *)(param_1 + 0xaf0) != 0)) ||
     ((int)(*(uint *)(param_1 + 0x2d4) >> 1) <= *(int *)(param_1 + 0x1a58))) {
    *(undefined4 *)(param_1 + 0x1a54) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x1a54) = 1;
  }
  if (*(int *)(param_1 + 0x1a54) == 0) {
    if (*(int *)(param_1 + 0x1a60) <
        (int)((double)(longlong)*(int *)(param_1 + 0x1a4c) * lbl_8215F710)) {
      iVar1 = 1;
    }
    else {
      iVar1 = 2;
      if ((int)((double)(longlong)*(int *)(param_1 + 0x1a4c) * lbl_82015408) <=
          *(int *)(param_1 + 0x1a60)) {
        iVar1 = 3;
      }
    }
    if (*(int *)(param_1 + 0x1fa8) < 2) {
      iVar1 = iVar1 + 1;
    }
    iVar1 = *(int *)(param_1 + 0x2a4) + iVar1;
    if (0x1e < iVar1) {
      iVar1 = 0x1e;
    }
    *(int *)(param_1 + 0x2a4) = iVar1;
    *(int *)(param_1 + 0x2a0) = iVar1;
    *(undefined4 *)(param_1 + 0x1a64) = 1;
  }
  *(undefined4 *)(param_1 + 0x1a58) = 0;
  *(undefined4 *)(param_1 + 0x1a60) = 0;
  *(undefined4 *)(param_1 + 0x1a68) = 1;
  return;
}

