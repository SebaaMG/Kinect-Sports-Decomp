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
extern int fn_82AB15D0();


uint * fn_82B75D30(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  uint *puVar6;
  ulonglong uVar5;
  uint *puVar7;
  
  *(undefined2 *)((int)param_4 + 2) = 0x49;
  *param_4 = *param_4 & 0xe000ffff;
  puVar6 = param_4 + 2;
  *(short *)((int)param_4 + 6) = (short)*param_1;
  uVar1 = param_4[1];
  uVar3 = *param_1 & 0x3f0000;
  param_4[1] = uVar1 & 0xffc0ffff | uVar3;
  uVar2 = *param_1;
  param_4[1] = uVar1 & 0xff40ffff | uVar3 | uVar2 & 0x800000;
  param_4[1] = uVar1 & 0xff00ffff | uVar3 | uVar2 & 0x800000 | *param_1 & 0x400000;
  if ((*param_1 & 0x400000) != 0) {
    *puVar6 = *param_2;
    puVar6 = param_4 + 3;
  }
  if ((*param_1 & 0x800000) != 0) {
    *puVar6 = *param_3;
    puVar6 = puVar6 + 1;
  }
  puVar7 = puVar6 + 1;
  *(short *)((int)puVar6 + 2) = (short)*param_1;
  uVar1 = *puVar6;
  uVar2 = *param_1;
  *puVar6 = uVar1 & 0xffc0ffff | uVar2 & 0x3f0000;
  *puVar6 = uVar1 & 0xff00ffff | uVar2 & 0x3f0000 | *param_1 & 0x800000;
  uVar1 = *param_2 >> 9 & 0xf;
  if (uVar1 == 1) {
code_r0x82b75e50:
    uVar4 = 2;
code_r0x82b75e54:
    uVar5 = 0;
  }
  else {
    if (uVar1 == 2) {
      uVar4 = 2;
code_r0x82b75ee4:
      uVar5 = 1;
      goto code_r0x82b75e58;
    }
    if (uVar1 == 3) {
      uVar4 = 2;
    }
    else {
      if (uVar1 == 4) {
        uVar4 = 3;
        goto code_r0x82b75e54;
      }
      if (uVar1 == 5) {
        uVar4 = 3;
        goto code_r0x82b75ee4;
      }
      if (uVar1 != 6) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,0x2b85);
        goto code_r0x82b75e50;
      }
      uVar4 = 3;
    }
    uVar5 = 2;
  }
code_r0x82b75e58:
  *(undefined2 *)((int)puVar6 + 6) = uVar4;
  *puVar7 = *puVar7 & 0xff00ffff | 0x410000;
  *(undefined1 *)puVar7 = 1;
  puVar6[2] = (uint)(uVar5 << 0xc) |
              (uint)((uVar5 << 4 | uVar5) << 4) | puVar6[2] & 0xffff8888 | (uint)uVar5;
  return puVar6 + 3;
}

