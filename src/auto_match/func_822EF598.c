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
extern int fn_822EF538();


ulonglong fn_822EF598(int *param_1)

{
  ulonglong uVar1;
  int iVar2;
  byte *pbVar3;
  
  if (*(int *)param_1[8] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)param_1[0xc];
  }
  if (iVar2 < 2) {
    uVar1 = fn_822EF538(param_1);
    if ((int)uVar1 == -1) {
      return uVar1;
    }
    if (*(int *)param_1[8] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)param_1[0xc];
    }
    if (iVar2 < 1) {
      uVar1 = (**(code **)(*param_1 + 0x18))(param_1);
      return uVar1;
    }
    pbVar3 = *(byte **)param_1[8];
  }
  else {
    *(int *)param_1[0xc] = *(int *)param_1[0xc] + -1;
    pbVar3 = (byte *)(*(int *)param_1[8] + 1);
    *(int *)param_1[8] = (int)pbVar3;
  }
  return (ulonglong)*pbVar3;
}

