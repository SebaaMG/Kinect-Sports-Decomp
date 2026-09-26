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
extern int fn_82B6EA60();


uint * fn_82B74390(int param_1,ushort *param_2,uint *param_3)

{
  int iVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint *puVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar3 = fn_82B6EA60();
  uVar2 = *param_2 & 7;
  if (uVar2 < 4) {
    *(undefined2 *)((int)param_3 + 2) = 0x56;
    *param_3 = (uint)uVar2 << 0x10 | *param_3 & 0xe000ffff;
    *(undefined2 *)((int)param_3 + 6) = uVar3;
    param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
    param_3[2] = *(uint *)(param_2 + 8);
    puVar4 = param_3 + 3;
    if ((*(uint *)(param_2 + 8) & 0x400000) != 0) {
      *puVar4 = *(uint *)(param_2 + 0xe);
      puVar4 = param_3 + 4;
    }
    if ((*(uint *)(param_2 + 8) & 0x800000) != 0) {
      *puVar4 = *(uint *)(param_2 + 0x14);
      puVar4 = puVar4 + 1;
    }
    param_3 = puVar4 + 1;
    *puVar4 = *(uint *)(param_2 + 10);
    if ((*(uint *)(param_2 + 10) & 0x400000) != 0) {
      *param_3 = *(uint *)(param_2 + 0x10);
      param_3 = puVar4 + 2;
    }
    if ((*(uint *)(param_2 + 10) & 0x800000) == 0) goto LAB_82b74528;
    uVar5 = *(uint *)(param_2 + 0x16);
  }
  else {
    if (5 < uVar2) goto LAB_82b74528;
    if (uVar2 == 4) {
      *(undefined2 *)((int)param_3 + 2) = 0x56;
      *param_3 = *param_3 & 0xe000ffff | 0x20000;
    }
    else {
      *(undefined2 *)((int)param_3 + 2) = 0x56;
      *param_3 = *param_3 & 0xe000ffff | 0x30000;
    }
    *(undefined2 *)((int)param_3 + 6) = uVar3;
    param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
    param_3[2] = *(uint *)(param_2 + 10);
    puVar4 = param_3 + 3;
    if ((*(uint *)(param_2 + 10) & 0x400000) != 0) {
      *puVar4 = *(uint *)(param_2 + 0x10);
      puVar4 = param_3 + 4;
    }
    if ((*(uint *)(param_2 + 10) & 0x800000) != 0) {
      *puVar4 = *(uint *)(param_2 + 0x16);
      puVar4 = puVar4 + 1;
    }
    param_3 = puVar4 + 1;
    *puVar4 = *(uint *)(param_2 + 8);
    if ((*(uint *)(param_2 + 8) & 0x400000) != 0) {
      *param_3 = *(uint *)(param_2 + 0xe);
      param_3 = puVar4 + 2;
    }
    if ((*(uint *)(param_2 + 8) & 0x800000) == 0) goto LAB_82b74528;
    uVar5 = *(uint *)(param_2 + 0x14);
  }
  *param_3 = uVar5;
  param_3 = param_3 + 1;
LAB_82b74528:
  *(undefined2 *)((int)param_3 + 2) = 0x6c;
  *param_3 = *param_3 & 0xe000ffff;
  *(short *)((int)param_3 + 6) = (short)*(undefined4 *)(iVar1 + 0x5b40);
  param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
  *(short *)((int)param_3 + 10) = (short)*(undefined4 *)(iVar1 + 0x5b40);
  param_3[2] = param_3[2] & 0xff00ffff | 0x40000;
  *(undefined2 *)((int)param_3 + 0xe) = uVar3;
  param_3[3] = param_3[3] & 0xff00ffff | 0x40000;
  *(undefined2 *)((int)param_3 + 0x12) = 0x70;
  param_3[4] = param_3[4] & 0xe000ffff;
  *(short *)((int)param_3 + 0x16) = (short)*(undefined4 *)(iVar1 + 0x5b40);
  param_3[5] = param_3[5] & 0xff00ffff | 0x40000;
  *(short *)((int)param_3 + 0x1a) = (short)*(undefined4 *)(iVar1 + 0x5b40);
  param_3[6] = param_3[6] & 0xff00ffff | 0x40000;
  *(undefined2 *)((int)param_3 + 0x1e) = 0x6f;
  param_3[7] = param_3[7] & 0xe000ffff;
  *(short *)((int)param_3 + 0x22) = (short)*(undefined4 *)(iVar1 + 0x5b40);
  param_3[8] = param_3[8] & 0xff00ffff | 0x40000;
  *(short *)((int)param_3 + 0x26) = (short)*(undefined4 *)(iVar1 + 0x5b40);
  param_3[9] = param_3[9] & 0xff00ffff | 0x40000;
  return param_3 + 10;
}

