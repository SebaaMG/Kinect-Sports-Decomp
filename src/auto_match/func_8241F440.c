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
extern int fn_82536070();


void fn_8241F440(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0xc40) == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x14) == 0) {
    piVar2 = *(int **)(iVar1 + 0x2b20);
    if (*(int *)(param_2 + 0x18) == 0) {
      if (param_1 != piVar2) {
        return;
      }
      if (*(int *)(iVar1 + 0x2b98) == 0) {
        return;
      }
      fn_82536070(iVar1 + 0x12fc,iVar1 + 0x133c);
      uVar3 = 0;
    }
    else if (*(int *)(param_2 + 0x18) == 1) {
      if (param_1 != piVar2) {
        return;
      }
      if (*(int *)(iVar1 + 0x2b98) == 3) {
        return;
      }
      fn_82536070(iVar1 + 0x12fc,iVar1 + 0x13fc);
      uVar3 = 3;
    }
    else {
      if (param_1 != piVar2) {
        return;
      }
      if (*(int *)(iVar1 + 0x2b98) == 4) {
        return;
      }
      fn_82536070(iVar1 + 0x12fc,iVar1 + 0x143c);
      uVar3 = 4;
    }
  }
  else if (*(int *)(param_2 + 0x14) == 1) {
    if (param_1 != *(int **)(iVar1 + 0x2b20)) {
      return;
    }
    if (*(int *)(iVar1 + 0x2b98) == 1) {
      return;
    }
    fn_82536070(iVar1 + 0x12fc,iVar1 + 0x137c);
    uVar3 = 1;
  }
  else {
    if (param_1 != *(int **)(iVar1 + 0x2b20)) {
      return;
    }
    if (*(int *)(iVar1 + 0x2b98) == 2) {
      return;
    }
    fn_82536070(iVar1 + 0x12fc,iVar1 + 0x13bc);
    uVar3 = 2;
  }
  *(undefined4 *)(iVar1 + 0x2b98) = uVar3;
  return;
}

