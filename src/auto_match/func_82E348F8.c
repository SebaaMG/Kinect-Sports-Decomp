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
extern int fn_82C2D948();
extern int fn_82E32108();
extern int fn_82E6B780();
extern int fn_82E6BC68();
extern int fn_82E6BEC8();
extern int fn_82E6C088();
extern int fn_82E6C440();
extern int fn_82E6C698();
extern int fn_82E6C838();
extern int fn_82E6D350();
extern int fn_82E6D710();
extern int fn_82E6D818();


void fn_82E348F8(int *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  
  iVar1 = *param_1;
  iVar2 = fn_82C2D948(iVar1);
  if (-1 < iVar2) {
    *(code **)(*param_1 + 0x1e4) = fn_82E32108;
    param_1[0x42c6] = (int)fn_82E6D818;
    param_1[0x42c5] = (int)fn_82E6D710;
    param_1[0x42bb] = (int)fn_82E6D350;
    param_1[0x42be] = (int)fn_82E6BEC8;
    if ((*(int *)(iVar1 + 0x118) == 1) && (*(int *)(iVar1 + 0x28) == 0)) {
      pcVar3 = fn_82E6C088;
      pcVar5 = fn_82E6C440;
      pcVar4 = fn_82E6C698;
    }
    else {
      pcVar3 = fn_82E6BEC8;
      pcVar5 = fn_82E6BEC8;
      pcVar4 = fn_82E6BEC8;
    }
    param_1[0x42c0] = (int)pcVar4;
    param_1[0x42c1] = (int)pcVar5;
    param_1[0x42bf] = (int)pcVar3;
    if (2 < *(int *)(iVar1 + 0x3c)) {
      param_1[0x42be] = (int)fn_82E6BEC8;
      param_1[0x42bf] = (int)fn_82E6BEC8;
      param_1[0x42c1] = (int)fn_82E6BEC8;
      param_1[0x42c0] = (int)fn_82E6BEC8;
    }
    if ((*(int *)(iVar1 + 0x28) != 0) && (*(int *)(iVar1 + 0x118) == 1)) {
      param_1[0x42c2] = (int)fn_82E6C838;
    }
    param_1[0x42c3] = (int)fn_82E6BC68;
    param_1[0x42c4] = (int)fn_82E6B780;
  }
  return;
}

