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
extern unsigned int *auStack_40;
extern int fn_82F68CC0();


void fn_82551D80(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined1 auStack_40 [64];
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_2 + 0x10);
  if (uVar2 == uVar1) {
    bVar3 = *(uint *)(param_1 + 0x14) <= *(uint *)(param_2 + 0x14);
    uVar1 = *(uint *)(param_1 + 0x14) ^ *(uint *)(param_2 + 0x14);
  }
  else {
    bVar3 = uVar1 <= uVar2;
    uVar1 = uVar1 ^ uVar2;
  }
  if ((((~(ulonglong)uVar1 & 0xffffffff) >> 0x1f) + (ulonglong)bVar3 & 1) != 0) {
    fn_82F68CC0(auStack_40,param_2,0x18);
    fn_82F68CC0(param_2,param_1,0x18);
    fn_82F68CC0(param_1,auStack_40,0x18);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  uVar2 = *(uint *)(param_2 + 0x10);
  if (uVar1 == uVar2) {
    uVar1 = *(uint *)(param_3 + 0x14);
    uVar2 = *(uint *)(param_2 + 0x14);
  }
  if ((((~(ulonglong)(uVar2 ^ uVar1) & 0xffffffff) >> 0x1f) + (ulonglong)(uVar2 <= uVar1) & 1) != 0)
  {
    fn_82F68CC0(auStack_40,param_3,0x18);
    fn_82F68CC0(param_3,param_2,0x18);
    fn_82F68CC0(param_2,auStack_40,0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar1 == uVar2) {
    uVar1 = *(uint *)(param_2 + 0x14);
    uVar2 = *(uint *)(param_1 + 0x14);
  }
  if ((((~(ulonglong)(uVar2 ^ uVar1) & 0xffffffff) >> 0x1f) + (ulonglong)(uVar2 <= uVar1) & 1) != 0)
  {
    fn_82F68CC0(auStack_40,param_2,0x18);
    fn_82F68CC0(param_2,param_1,0x18);
    fn_82F68CC0(param_1,auStack_40,0x18);
  }
  return;
}

