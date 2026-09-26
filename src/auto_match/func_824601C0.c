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


void fn_824601C0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  
  if ((*(int *)(param_1 + 0x70) != 0) || (bVar4 = false, *(int *)(param_1 + 0x80) != 0)) {
    bVar4 = true;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x9c);
  *param_2 = 0;
  if (*(int *)(iVar1 + 4) == 0) {
    iVar1 = *(int *)(param_1 + 0x68);
    iVar3 = (iVar1 + 7) * 0x10;
    if (*(int *)(iVar3 + param_1) != 0) {
      return;
    }
    if (bVar4) {
      if (iVar1 == 0) {
        *param_2 = *(undefined4 *)(iVar2 + 0x18);
      }
      else {
        *param_2 = *(undefined4 *)(iVar2 + 0x1c);
      }
    }
    else {
      if (iVar1 == 0) {
        uVar5 = *(undefined4 *)(iVar2 + 0x10);
      }
      else {
        uVar5 = *(undefined4 *)(iVar2 + 0x14);
      }
      *param_2 = uVar5;
    }
    *(undefined4 *)(iVar3 + param_1) = 1;
    return;
  }
  *param_2 = *(undefined4 *)(iVar2 + 0xc);
  return;
}

