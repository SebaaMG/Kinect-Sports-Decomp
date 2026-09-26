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
extern int fn_826E6D78();
extern int fn_82F68CC0();


int fn_826E6F60(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x40)) {
    iVar1 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x4c);
    iVar4 = param_3;
    if (iVar1 <= param_3) {
      iVar4 = iVar1;
    }
    iVar2 = iVar4;
    if (*(int *)(param_1 + 0x50) < iVar1) {
      iVar2 = (*(int *)(param_1 + 0x54) - iVar1) + *(int *)(param_1 + 0x50);
      iVar3 = *(int *)(param_1 + 0x54) - iVar2;
      if (iVar4 < iVar3) {
        iVar3 = iVar4;
      }
      fn_82F68CC0(param_2,iVar2 + param_1 + 0x58,iVar3);
      iVar2 = iVar4 - iVar3;
      iVar1 = iVar1 - iVar3;
      param_2 = iVar3 + param_2;
    }
    if (0 < iVar2) {
      fn_82F68CC0(param_2,(*(int *)(param_1 + 0x50) - iVar1) + param_1 + 0x58,iVar2);
      param_2 = iVar2 + param_2;
    }
    param_3 = param_3 - iVar4;
    *(int *)(param_1 + 0x4c) = iVar4 + *(int *)(param_1 + 0x4c);
  }
  if (0 < param_3) {
    iVar1 = fn_826E6D78(param_1,param_2,param_3);
    if (iVar1 < 0x800) {
      if (0 < iVar1) {
        iVar2 = 0x800 - *(int *)(param_1 + 0x50);
        if (iVar1 <= iVar2) {
          iVar2 = iVar1;
        }
        if (0 < iVar2) {
          fn_82F68CC0(*(int *)(param_1 + 0x50) + param_1 + 0x58,param_2,iVar2);
          param_2 = iVar2 + param_2;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2;
        }
        if (iVar2 < iVar1) {
          *(int *)(param_1 + 0x50) = iVar1 - iVar2;
          fn_82F68CC0(param_1 + 0x58,param_2);
        }
        if ((*(int *)(param_1 + 0x54) < 0x800) &&
           (iVar2 = *(int *)(param_1 + 0x54) + iVar1, *(int *)(param_1 + 0x54) = iVar2,
           0x800 < iVar2)) {
          *(undefined4 *)(param_1 + 0x54) = 0x800;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x50) = 0x800;
      *(undefined4 *)(param_1 + 0x54) = 0x800;
      fn_82F68CC0(param_1 + 0x58,iVar1 + param_2 + -0x800,0x800);
    }
    iVar4 = iVar1 + iVar4;
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x40);
  }
  return iVar4;
}

