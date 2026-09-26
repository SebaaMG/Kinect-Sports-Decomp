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
extern int fn_82F68CC0();


void fn_82E39C50(uint *param_1,uint *param_2)

{
  ushort uVar1;
  byte *pbVar2;
  uint uVar3;
  
  pbVar2 = (byte *)*param_2;
  *param_1 = (uint)pbVar2[3] << 0x18 | (uint)pbVar2[2] << 0x10 | (uint)pbVar2[1] << 8 |
             (uint)*pbVar2;
  uVar3 = *param_2;
  *param_2 = uVar3 + 4;
  uVar1 = *(ushort *)(uVar3 + 4);
  *(ushort *)(param_1 + 1) = uVar1 << 8 | uVar1 >> 8;
  uVar3 = *param_2;
  *param_2 = uVar3 + 2;
  uVar1 = *(ushort *)(uVar3 + 2);
  *(ushort *)((int)param_1 + 6) = uVar1 << 8 | uVar1 >> 8;
  uVar3 = *param_2;
  *param_2 = (uint)((ulonglong)uVar3 + 2);
  fn_82F68CC0(param_1 + 2,(ulonglong)uVar3 + 2,8);
  *param_2 = *param_2 + 8;
  return;
}

