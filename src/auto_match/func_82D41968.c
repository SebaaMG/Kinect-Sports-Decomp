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


longlong fn_82D41968(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar4;
  int iVar3;
  
  uVar1 = (param_2 & 0x7fffffff) >> (0x20 - *(uint *)(param_1 + 0xb0) & 0x3f);
  if ((param_2 & 0x80000000) == 0) {
    if (*(int *)(param_1 + 0xb8) == 1) {
      iVar3 = param_1 + 0x20;
      goto LAB_82d419c4;
    }
    iVar3 = *(int *)(param_1 + 0xb4);
    iVar2 = uVar1 * 0x60;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc0);
    iVar2 = uVar1 << 6;
  }
  iVar3 = iVar3 + iVar2;
LAB_82d419c4:
  iVar2 = *(int *)(iVar3 + 4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar4 = (uint)*(ushort *)(iVar3 + 8) *
          (0xffffffffU >> (*(uint *)(param_1 + 0xb0) & 0x3f) & param_2);
  if (*(char *)(iVar3 + 1) == '\x01') {
    return (longlong)(int)(uint)*(byte *)(iVar4 + iVar2) * (longlong)(int)*(short *)(iVar3 + 2) +
           (ulonglong)*(uint *)(iVar3 + 0xc);
  }
  return (longlong)(int)(uint)*(ushort *)(iVar4 + iVar2) * (longlong)(int)*(short *)(iVar3 + 2) +
         (ulonglong)*(uint *)(iVar3 + 0xc);
}

