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


void fn_82C3F478(int param_1,int *param_2,int param_3)

{
  int iVar1;
  short sVar3;
  int iVar2;
  int iVar4;
  
  iVar4 = param_2[10];
  if (*(int *)(param_1 + 0x78) == 1) {
    iVar4 = param_2[8] * 2 + iVar4;
  }
  if (param_3 == 1) {
    *(undefined2 *)(param_2 + 7) = 2;
    *(undefined2 *)((int)param_2 + 0x1e) = 0x10;
    if (*param_2 < 1) {
      return;
    }
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 2;
      sVar3 = (short)iVar2 + 1;
      iVar2 = (int)sVar3;
      *(short *)(iVar1 + iVar4) = *(short *)(iVar1 + iVar4) << 1;
    } while ((int)sVar3 < *param_2);
    return;
  }
  *(undefined2 *)(param_2 + 7) = 1;
  *(undefined2 *)((int)param_2 + 0x1e) = 8;
  if (*param_2 < 1) {
    return;
  }
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 2;
    sVar3 = (short)iVar2 + 1;
    iVar2 = (int)sVar3;
    *(short *)(iVar1 + iVar4) = *(short *)(iVar1 + iVar4) >> 1;
  } while ((int)sVar3 < *param_2);
  return;
}

