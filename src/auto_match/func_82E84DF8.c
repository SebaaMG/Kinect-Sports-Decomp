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
extern unsigned int uRam83188cec;
extern unsigned int uRam83188cf0;


void fn_82E84DF8(undefined8 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  
  if (param_2 == 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = 1;
    uVar1 = *(ushort *)(param_2 + 6);
    param_3[1] = 3;
    param_3[0x16] = uRam83188cec >> 0x1f & uVar1 >> 8 & 0x3f;
    puVar4 = (ushort *)(param_2 + 10);
    uVar1 = *puVar4;
    param_3[0x17] = (uRam83188cec & (uint)uVar1 << 0x10) >> 0x1f;
    param_3[2] = uRam83188cec >> 0x1f & uVar1 >> 0xe & 1;
    param_3[3] = uRam83188cec >> 0x1f & uVar1 >> 10 & 0x1f;
    for (; ((*(char *)puVar4 != '\0' || ((char)*puVar4 != '\0')) ||
           (*(char *)(puVar4 + 1) != '\x01')); puVar4 = (ushort *)((int)puVar4 + 1)) {
    }
    uVar1 = puVar4[2];
    param_3[8] = 1;
    param_3[0x11] = param_4;
    param_3[0xf] = 0;
    param_3[5] = uVar1 >> 0xb & 1 & uRam83188cec >> 0x1f;
    param_3[9] = uVar1 >> 10 & 1 & uRam83188cec >> 0x1f;
    param_3[10] = uVar1 >> 9 & 1 & uRam83188cec >> 0x1f;
    param_3[0xb] = uVar1 >> 7 & 3 & uRam83188cf0 >> 0x1e;
    param_3[0xc] = uVar1 >> 6 & 1 & uRam83188cec >> 0x1f;
    param_3[0xe] = uVar1 >> 5 & 1 & uRam83188cec >> 0x1f;
    uVar2 = uVar1 >> 4 & 1 & uRam83188cec >> 0x1f;
    param_3[0x13] = uVar2;
    uVar3 = (uRam83188cec & (uint)uVar1 << 0x1c) >> 0x1f;
    if (uVar2 == 0) {
      param_3[0x15] = uVar3;
    }
    else {
      param_3[0x14] = uVar3;
    }
    if ((param_3[0x13] != 0) || (uVar5 = 0, param_3[0x15] != 0)) {
      uVar5 = 1;
    }
    param_3[0x12] = uVar5;
    param_3[4] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[0xd] = 0;
    param_3[0x10] = 0;
  }
  return;
}

