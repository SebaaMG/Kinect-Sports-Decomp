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
extern int fn_82F65C10();


ulonglong fn_8257AC80(int param_1,char *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = param_2;
  if (0xf < *(uint *)(param_2 + 0x14)) {
    pcVar4 = *(char **)param_2;
  }
  pcVar3 = pcVar4 + *(int *)(param_2 + 0x10);
  uVar2 = 0x811c9dc5;
  for (; pcVar4 != pcVar3; pcVar4 = pcVar4 + 1) {
    uVar2 = uVar2 * 0x1000193 ^ (int)*pcVar4;
  }
  uVar1 = fn_82F65C10(uVar2 & 0x7fffffff,0x1f31d);
  uVar1 = (uVar1 & 0xffffffff) * 0x41a7 + (uVar1 >> 0x20) * -0xb14;
  if ((longlong)uVar1 < 0) {
    uVar1 = uVar1 - 0x80000001;
  }
  uVar1 = *(uint *)(param_1 + 0x20) & uVar1;
  if (*(uint *)(param_1 + 0x24) <= uVar1) {
    uVar1 = (uVar1 - (*(uint *)(param_1 + 0x20) >> 1)) - 1;
  }
  return uVar1;
}

