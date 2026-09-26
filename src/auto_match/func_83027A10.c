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
extern unsigned int lbl_821AAD20;


void fn_83027A10(undefined4 *param_1,ushort param_2,ushort param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  
  sVar5 = 0;
  *param_1 = 0;
  uVar6 = 0;
  param_1[5] = 0;
  uVar3 = lbl_821AAD20;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[1] = uVar3;
  *(undefined2 *)((int)param_1 + 0x2a) = 0;
  param_1[2] = uVar3;
  param_1[3] = uVar3;
  param_1[4] = uVar3;
  do {
    iVar4 = uVar6 + 6;
    uVar6 = uVar6 + 1 & 0xff;
    param_1[iVar4] = uVar3;
  } while (uVar6 < 4);
  uVar1 = *(ushort *)((int)param_1 + 0x2e);
  uVar2 = (param_2 & 3) << 0xb;
  *(ushort *)(param_1 + 0xb) = param_3 & 0xfff7;
  *(ushort *)((int)param_1 + 0x2e) = uVar2 | uVar1 & 0xe7ff;
  for (param_3 = param_3 & 0xfff7; param_3 != 0; param_3 = param_3 - 1 & param_3) {
    sVar5 = sVar5 + 1;
  }
  *(ushort *)((int)param_1 + 0x2e) = uVar2 | uVar1 & 0x3ff | sVar5 << 0xd | 0x400;
  return;
}

