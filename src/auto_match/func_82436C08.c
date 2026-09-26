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


ulonglong fn_82436C08(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x114);
  puVar2 = *(uint **)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x40) + 0x208);
  uVar3 = *puVar2;
  if (uVar3 == 0) {
    uVar4 = (ulonglong)puVar2[1];
  }
  else if (uVar3 == 1) {
    uVar4 = (ulonglong)puVar2[2];
  }
  else if (uVar3 < 3) {
    uVar4 = (ulonglong)puVar2[3];
  }
  else if (uVar3 == 3) {
    uVar4 = (ulonglong)puVar2[4];
  }
  if (iVar1 == 1) {
    uVar4 = uVar4 + 0x34;
  }
  else if (iVar1 == 2) {
    uVar4 = uVar4 + 0x5c;
  }
  else if (iVar1 == 3) {
    uVar4 = uVar4 + 0xc4;
  }
  else if (iVar1 == 4) {
    uVar4 = uVar4 + 0xa4;
  }
  else if (iVar1 == 5) {
    uVar4 = uVar4 + 0x84;
  }
  return uVar4;
}

