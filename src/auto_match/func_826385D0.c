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
extern unsigned int lbl_821956B4;
extern unsigned int lbl_821CC160;


void fn_826385D0(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  bool bVar6;
  
  fVar2 = lbl_821CC160;
  param_2 = param_2 * lbl_821956B4;
  if ((param_2 != lbl_821CC160) || (iVar3 = 0, *(float *)(param_1 + 0x2a54) != lbl_821CC160)) {
    iVar3 = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x2948);
  bVar6 = param_2 != lbl_821CC160;
  *(uint *)(param_1 + 0x2948) = iVar3 << 0xb | uVar1 & 0xfffff7ff;
  if ((bVar6) || (iVar4 = 0, *(float *)(param_1 + 0x2a5c) != fVar2)) {
    iVar4 = 1;
  }
  *(float *)(param_1 + 0x2a50) = param_2;
  *(float *)(param_1 + 0x2a58) = param_2;
  *(uint *)(param_1 + 0x2948) = iVar4 << 0xc | iVar3 << 0xb | uVar1 & 0xffffe7ff;
  uVar5 = *(ulonglong *)(param_1 + 0x20);
  *(ulonglong *)(param_1 + 0x20) = uVar5 | 0x200000000000;
  *(ulonglong *)(param_1 + 0x20) = uVar5 | 0x280000000000;
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) | 0x40;
  return;
}

