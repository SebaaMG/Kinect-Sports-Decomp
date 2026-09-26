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


int fn_826E7250(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    return -1;
  }
  iVar5 = 0;
  if (*(int *)(iVar1 + 0x4c) < *(int *)(iVar1 + 0x40)) {
    iVar2 = *(int *)(iVar1 + 0x40) - *(int *)(iVar1 + 0x4c);
    iVar5 = param_3;
    if (iVar2 <= param_3) {
      iVar5 = iVar2;
    }
    iVar3 = iVar5;
    if (*(int *)(iVar1 + 0x50) < iVar2) {
      iVar3 = (*(int *)(iVar1 + 0x54) - iVar2) + *(int *)(iVar1 + 0x50);
      iVar4 = *(int *)(iVar1 + 0x54) - iVar3;
      if (iVar5 < iVar4) {
        iVar4 = iVar5;
      }
      fn_82F68CC0(param_2,iVar3 + iVar1 + 0x58,iVar4);
      iVar3 = iVar5 - iVar4;
      iVar2 = iVar2 - iVar4;
      param_2 = iVar4 + param_2;
    }
    if (0 < iVar3) {
      fn_82F68CC0(param_2,(*(int *)(iVar1 + 0x50) - iVar2) + iVar1 + 0x58,iVar3);
      param_2 = iVar3 + param_2;
    }
    param_3 = param_3 - iVar5;
    *(int *)(iVar1 + 0x4c) = iVar5 + *(int *)(iVar1 + 0x4c);
  }
  if (0 < param_3) {
    iVar2 = fn_826E6D78(iVar1,param_2,param_3);
    if (iVar2 < 0x800) {
      if (0 < iVar2) {
        iVar3 = 0x800 - *(int *)(iVar1 + 0x50);
        if (iVar2 <= iVar3) {
          iVar3 = iVar2;
        }
        if (0 < iVar3) {
          fn_82F68CC0(*(int *)(iVar1 + 0x50) + iVar1 + 0x58,param_2,iVar3);
          param_2 = iVar3 + param_2;
          *(int *)(iVar1 + 0x50) = *(int *)(iVar1 + 0x50) + iVar3;
        }
        if (iVar3 < iVar2) {
          *(int *)(iVar1 + 0x50) = iVar2 - iVar3;
          fn_82F68CC0(iVar1 + 0x58,param_2);
        }
        if ((*(int *)(iVar1 + 0x54) < 0x800) &&
           (iVar3 = *(int *)(iVar1 + 0x54) + iVar2, *(int *)(iVar1 + 0x54) = iVar3, 0x800 < iVar3))
        {
          *(undefined4 *)(iVar1 + 0x54) = 0x800;
        }
      }
    }
    else {
      *(undefined4 *)(iVar1 + 0x50) = 0x800;
      *(undefined4 *)(iVar1 + 0x54) = 0x800;
      fn_82F68CC0(iVar1 + 0x58,iVar2 + param_2 + -0x800,0x800);
    }
    iVar5 = iVar2 + iVar5;
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(iVar1 + 0x40);
  }
  return iVar5;
}

