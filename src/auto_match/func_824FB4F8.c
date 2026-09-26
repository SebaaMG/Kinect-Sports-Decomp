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
extern unsigned int lbl_8327F678;


void fn_824FB4F8(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 == 6) {
    param_2[2] = *(int *)(param_1 + 0x30);
    return;
  }
  if (iVar1 == 0x46) {
    if (param_2[2] != param_1) {
      return;
    }
    iVar1 = 0;
  }
  else {
    if (iVar1 == 0x4b) {
      if (*(int *)(param_1 + 0x50) != 0) {
        return;
      }
      for (iVar1 = *(int *)(param_1 + 0x30) + 0x98; *(int *)(iVar1 + 4) != 0;
          iVar1 = *(int *)(iVar1 + 4)) {
      }
      *(int **)(iVar1 + 4) = (int *)(param_1 + 0x50);
      *(int *)(param_1 + 0x50) = iVar1;
      *(undefined4 *)(param_1 + 0x54) = 0;
      return;
    }
    if (iVar1 == 0x52) {
      return;
    }
    if (iVar1 == 0x53) {
      if (lbl_8327F678 == param_2[2]) {
        return;
      }
      lbl_8327F678 = param_2[2];
      return;
    }
    if (iVar1 != 0x5a) {
      return;
    }
    iVar1 = param_2[2];
  }
  *(int *)(param_1 + 0x30) = iVar1;
  return;
}

