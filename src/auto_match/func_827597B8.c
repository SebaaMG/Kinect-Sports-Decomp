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


uint fn_827597B8(undefined8 param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = (uint)*(byte *)(param_2 + 9);
  uVar5 = 0;
  if (*(ushort *)(param_2 + 10) == 0) {
    return uVar4;
  }
  iVar6 = 0;
  do {
    iVar3 = iVar6 + *(int *)(param_2 + 0xc);
    pbVar2 = (byte *)(iVar6 + *(int *)(param_2 + 0xc));
    uVar5 = uVar5 + 1;
    iVar6 = iVar6 + 8;
    uVar1 = *(uint *)(iVar3 + 4);
    uVar4 = uVar1 >> 0x10 ^ (uint)*pbVar2 ^ uVar1 ^ uVar4;
  } while (uVar5 < *(ushort *)(param_2 + 10));
  return uVar4;
}

