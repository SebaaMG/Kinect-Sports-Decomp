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
extern int fn_82A9A6F8();
extern int fn_82F68CC0();


int fn_82A9ECB8(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = -1;
  if (-1 < *(int *)(param_1 + 0x90)) {
    iVar2 = *(int *)(param_1 + 0x30);
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar4 = ((int)pcVar3 - (int)param_2) + iVar2;
    if (*(uint *)(param_1 + 0x34) < uVar4) {
      fn_82A9A6F8((int *)(param_1 + 0x2c),uVar4,(int *)(param_1 + 0x90));
    }
    *(uint *)(param_1 + 0x30) = uVar4;
    if (-1 < *(int *)(param_1 + 0x90)) {
      fn_82F68CC0(*(int *)(param_1 + 0x2c) + iVar2,param_2,(int)pcVar3 - (int)param_2);
      iVar5 = iVar2;
    }
  }
  return iVar5;
}

