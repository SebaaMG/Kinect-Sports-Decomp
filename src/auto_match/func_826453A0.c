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
extern unsigned int __imp__VdGlobalDevice;
extern unsigned int __imp__VdGlobalXamDevice;


undefined4 *
fn_826453A0(int param_1,undefined4 *param_2,ulonglong param_3,undefined4 param_4,
             undefined4 param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  uVar4 = (param_3 & 0xffffffff) >> 0x18 & 0x3f;
  uVar5 = (undefined4)uVar4;
  iVar3 = KeGetCurrentProcessType();
  piVar1 = __imp__VdGlobalDevice;
  if (iVar3 == 2) {
    piVar1 = __imp__VdGlobalXamDevice;
  }
  uVar2 = *(uint *)(*piVar1 + 0x2a94);
  if ((param_3 & 6) == 0) {
    param_3 = param_3 | 6;
  }
  if ((param_3 & 2) != 0) {
    if (((param_3 & 1) == 0) || ((*(byte *)(param_1 + 0x2ac0) & 0x80) != 0)) {
      param_2[1] = 0x5c8;
      param_2 = param_2 + 2;
      *param_2 = 0x20000;
      *(ulonglong *)(param_1 + 0x20) = *(ulonglong *)(param_1 + 0x20) & 0x7fffffffffffffff;
      *(byte *)(param_1 + 0x2abf) = *(byte *)(param_1 + 0x2abf) & 0xfc;
      *(byte *)(param_1 + 0x2ac0) = *(byte *)(param_1 + 0x2ac0) & 0x7f;
    }
    param_2[1] = 0x1057c;
    param_2[2] = param_4;
    param_2[3] = param_5;
    if (uVar4 == 0) {
      uVar5 = 4;
    }
    param_2[4] = 0x578;
    param_2[5] = uVar5;
    param_2[6] = *(uint *)(param_1 + 0x325c) | 0xc0043c00;
    param_2[7] = 0x13;
    param_2[8] = ((uVar2 >> 0x14) + 0x200 & 0x1000) + (uVar2 & 0x1fffffff) | 2;
    param_2[9] = uVar5;
    param_2[10] = 0xffffffff;
    param_2[0xb] = 0x100;
    param_2[0xc] = *(uint *)(param_1 + 0x325c) | 0xc0043c00;
    param_2[0xd] = 0x13;
    param_2[0xe] = ((uVar2 + 0x14 >> 0x14) + 0x200 & 0x1000) + (uVar2 + 0x14 & 0x1fffffff) | 2;
    param_2[0xf] = param_5;
    param_2[0x10] = 0xffffffff;
    param_2[0x11] = 0x100;
    param_2[0x12] = *(uint *)(param_1 + 0x325c) | 0xc0043c00;
    param_2[0x13] = 0x13;
    param_2[0x14] = ((uVar2 + 0x10 >> 0x14) + 0x200 & 0x1000) + (uVar2 + 0x10 & 0x1fffffff) | 2;
    param_2[0x15] = param_4;
    param_2[0x16] = 0xffffffff;
    param_2[0x17] = 0x100;
    param_2[0x18] = *(uint *)(param_1 + 0x325c) | 0xc0005400;
    param_2[0x19] = uVar5;
    param_2[0x1a] = 0x45e;
    param_2 = param_2 + 0x1b;
    *param_2 = uVar5;
  }
  if ((param_3 & 4) != 0) {
    param_2[1] = *(uint *)(param_1 + 0x325c) | 0xc0043c00;
    param_2[2] = 0x13;
    param_2[3] = ((uVar2 >> 0x14) + 0x200 & 0x1000) + (uVar2 & 0x1fffffff) | 2;
    param_2[4] = 0;
    param_2[5] = 0xffffffff;
    param_2[6] = 0x100;
    param_2[7] = 0x57c;
    param_2 = param_2 + 8;
    *param_2 = 0xbadf00d;
  }
  return param_2;
}

