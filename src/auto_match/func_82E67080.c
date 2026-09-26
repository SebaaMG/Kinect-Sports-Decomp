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


void fn_82E67080(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = param_1[0xb];
  uVar2 = param_1[0xf];
  iVar3 = param_1[1];
  iVar4 = *param_1;
  iVar5 = param_1[2];
  param_1[7] = iVar3;
  param_1[0x1e] = iVar3;
  param_1[6] = iVar4;
  param_1[8] = iVar5;
  param_1[0x1d] = iVar4;
  param_1[0x1f] = iVar5;
  param_1[9] = iVar4;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(ulonglong *)(param_1 + 0x18) = (ulonglong)(uint)param_1[0x1a] * (ulonglong)(uint)param_1[0x14];
  *(ulonglong *)(param_1 + 0x16) = (ulonglong)(uint)param_1[0x1a] * (ulonglong)(uint)param_1[0x14];
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[3] = (int)uVar1 / (int)uVar2 + iVar4 + uVar1;
  trapWord(6,(ulonglong)uVar2,0);
  param_1[4] = iVar3 + uVar2 * 4 + 4;
  trapWord(5,(ulonglong)uVar2 &
             ~((((ulonglong)uVar1 & 0x7fffffff) << 1 | (ulonglong)(uVar1 >> 0x1f)) - 1),0xffff);
  param_1[5] = iVar5 + uVar2 * 4 + 4;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  return;
}

