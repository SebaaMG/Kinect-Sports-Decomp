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


void fn_82C52DE0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x50c8) == 0) {
    if (*(int *)(param_1 + 0x5720) != 0) {
      iVar4 = param_1 + 0x5758;
      iVar3 = param_1 + 0x5764;
      iVar2 = param_1 + 0x5770;
      iVar1 = param_1 + 0x577c;
      goto LAB_82c52eb0;
    }
    iVar4 = param_1 + 0x91c;
    iVar3 = param_1 + 0x928;
    iVar2 = param_1 + 0x934;
    iVar1 = param_1 + 0x940;
  }
  else {
    if (*(int *)(param_1 + 0x50cc) != 0) {
      *(int *)(param_1 + 0x970) = param_1 + 0x52a0;
      *(int *)(param_1 + 0x974) = param_1 + 0x52ac;
      *(int *)(param_1 + 0x978) = param_1 + 0x52b8;
      *(int *)(param_1 + 0x97c) = param_1 + 0x52c4;
      if (*(int *)(param_1 + 0x54c4) == 0) {
        iVar4 = param_1 + 0x52d0;
        iVar3 = param_1 + 0x52dc;
        iVar2 = param_1 + 0x52e8;
        iVar1 = param_1 + 0x52f4;
      }
      else {
        iVar4 = param_1 + 0x5270;
        iVar3 = param_1 + 0x527c;
        iVar2 = param_1 + 0x5288;
        iVar1 = param_1 + 0x5294;
      }
      goto LAB_82c52eb0;
    }
    iVar4 = param_1 + 0x52d0;
    iVar3 = param_1 + 0x52dc;
    iVar2 = param_1 + 0x52e8;
    iVar1 = param_1 + 0x52f4;
  }
  *(int *)(param_1 + 0x97c) = param_1 + 0x52c4;
  *(int *)(param_1 + 0x978) = param_1 + 0x52b8;
  *(int *)(param_1 + 0x974) = param_1 + 0x52ac;
  *(int *)(param_1 + 0x970) = param_1 + 0x52a0;
LAB_82c52eb0:
  *(int *)(param_1 + 0x960) = iVar4;
  *(int *)(param_1 + 0x964) = iVar3;
  *(int *)(param_1 + 0x968) = iVar2;
  *(int *)(param_1 + 0x96c) = iVar1;
  *(int *)(param_1 + 0x94c) = iVar4;
  return;
}

