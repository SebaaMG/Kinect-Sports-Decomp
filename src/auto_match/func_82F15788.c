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
extern unsigned int uRam831b8d54;
extern unsigned int uRam831b8d58;


void fn_82F15788(undefined8 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (param_2 == 0) {
    *param_3 = 0;
    return;
  }
  uVar4 = 1;
  param_3[0x17] = 0;
  *param_3 = 1;
  param_3[2] = 0;
  param_3[3] = 0;
  uVar1 = *(ushort *)(param_2 + 1);
  param_3[1] = 3;
  param_3[0x16] = uRam831b8d54 >> 0x1f & uVar1 >> 4 & 0x3f;
  uVar1 = *(ushort *)(param_2 + 5);
  param_3[0x11] = param_4;
  param_3[8] = 1;
  param_3[0xf] = 0;
  param_3[5] = uRam831b8d54 >> 0x1f & uVar1 >> 0xb & 1;
  param_3[9] = uRam831b8d54 >> 0x1f & uVar1 >> 10 & 1;
  param_3[0xb] = uRam831b8d58 >> 0x1e & (byte)(uVar1 >> 8) & 3;
  param_3[0xc] = uRam831b8d54 >> 0x1f & uVar1 >> 7 & 1;
  param_3[0xe] = uRam831b8d54 >> 0x1f & uVar1 >> 6 & 1;
  uVar2 = uRam831b8d54 >> 0x1f & uVar1 >> 5 & 1;
  param_3[0x13] = uVar2;
  uVar3 = (uRam831b8d54 & (uint)uVar1 << 0x1b) >> 0x1f;
  if (uVar2 == 0) {
    param_3[0x15] = uVar3;
  }
  else {
    param_3[0x14] = uVar3;
  }
  if ((param_3[0x13] == 0) && (param_3[0x15] == 0)) {
    uVar4 = 0;
  }
  param_3[0x12] = uVar4;
  param_3[4] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[0xd] = 0;
  param_3[0x10] = 0;
  param_3[10] = 0;
  return;
}

