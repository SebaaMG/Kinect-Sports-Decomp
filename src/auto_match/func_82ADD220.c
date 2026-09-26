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


longlong fn_82ADD220(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if (iVar1 == 0) {
    return 1;
  }
  if (iVar2 == 0) {
    return -1;
  }
  lVar3 = ((ulonglong)*(uint *)(*(int *)(iVar2 + 0x1c) + 0x44) & 0xfffffff) -
          ((ulonglong)*(uint *)(*(int *)(iVar1 + 0x1c) + 0x44) & 0xfffffff);
  if (lVar3 != 0) {
    return lVar3;
  }
  lVar3 = 0;
  lVar4 = 0;
  uVar5 = *(uint *)(iVar1 + 8) >> 7 & 0x7f;
  if (uVar5 == 0x6e) {
    lVar3 = 1;
  }
  else if (uVar5 == 0x70) {
    lVar3 = 2;
  }
  uVar5 = *(uint *)(iVar2 + 8) >> 7 & 0x7f;
  if (uVar5 == 0x6e) {
    lVar4 = 1;
  }
  else if (uVar5 == 0x70) {
    lVar4 = 2;
  }
  if (lVar3 - lVar4 != 0) {
    return lVar3 - lVar4;
  }
  return ((ulonglong)*(uint *)(iVar1 + 0x10) & 0xffff) -
         ((ulonglong)*(uint *)(iVar2 + 0x10) & 0xffff);
}

