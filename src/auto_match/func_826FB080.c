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


void fn_826FB080(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  byte bVar6;
  
  bVar1 = *(byte *)(param_1 + 0x20);
  uVar3 = *(uint *)(param_1 + 0xc);
  *(byte *)(param_1 + 0x20) = bVar1 | 8;
  *(uint *)(param_1 + 0x10) = uVar3;
  uVar5 = (uint)*(ushort *)(param_2 + 0xc);
  if (uVar5 != 0) {
    if (((*(byte *)(param_2 + 0xf) & 0x40) == 0) && ((*(byte *)(param_2 + 0xf) & 0x80) != 0)) {
      bVar4 = true;
      if (*(ushort *)(param_2 + 0xc) == 0) goto code_r0x826fb0c4;
    }
    else {
code_r0x826fb0c4:
      bVar4 = false;
    }
    if (bVar4) {
      uVar5 = uVar3 & ~uVar5;
    }
    else {
      uVar5 = uVar5 | uVar3;
    }
    *(uint *)(param_1 + 0xc) = uVar5;
  }
  if ((int)*(float *)(param_2 + 4) == (int)*(float *)(param_1 + 0x14)) {
    bVar6 = bVar1 & 0xef | 8;
    if ((int)*(float *)(param_2 + 8) == (int)*(float *)(param_1 + 0x18)) goto code_r0x826fb138;
  }
  bVar6 = bVar1 | 0x18;
code_r0x826fb138:
  *(byte *)(param_1 + 0x20) = bVar6;
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return;
}

