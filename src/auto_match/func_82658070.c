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
extern int fn_82645110();
extern unsigned int lbl_8328240C;
extern unsigned int lbl_83282410;


void fn_82658070(undefined8 *param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  longlong lVar7;
  
  puVar6 = (uint *)(param_1 + 0x8d);
  param_1[0x5dc] = 0xffffffff;
  lVar7 = 0x1a;
  do {
    puVar2 = puVar6 + 6;
    puVar6 = puVar6 + 6;
    *puVar6 = *puVar2 & 0xfffffffc;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  puVar6 = (uint *)(param_1 + 0xdd);
  lVar7 = 0x12;
  do {
    puVar2 = puVar6 + 2;
    puVar6 = puVar6 + 2;
    *puVar6 = *puVar2 & 0xfffffffc | 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  *(undefined4 *)((int)param_1 + 0x28bc) = 0x20002000;
  *(undefined4 *)((int)param_1 + 0x29d4) = 0xff000;
  *(undefined4 *)((int)param_1 + 0x2a14) = 0x10;
  *(uint *)((int)param_1 + 0x2944) = *(uint *)((int)param_1 + 0x2944) | 0x80000;
  *(undefined4 *)((int)param_1 + 0x2984) = 0xe;
  *(undefined4 *)(param_1 + 0x542) = 0xe;
  *(undefined4 *)((int)param_1 + 0x296c) = 8;
  *(undefined4 *)(param_1 + 0x53b) = 0xff100;
  *(undefined4 *)((int)param_1 + 0x2954) = 4;
  *(uint *)(param_1 + 0x529) = *(uint *)(param_1 + 0x529) | 0x10000;
  *(undefined4 *)((int)param_1 + 0x28cc) = 0xffffff;
  *(undefined4 *)(param_1 + 0x538) = 4;
  *(undefined4 *)(param_1 + 0x549) = 2;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = 0xffffffffffffffff;
  param_1[4] = 0xffffffffffffffff;
  *(undefined4 *)((int)param_1 + 0x2aa4) = 0xe;
  uVar4 = *(uint *)(param_1 + 6);
  if (*(uint *)(param_1 + 7) < uVar4) {
    uVar4 = fn_82645110(param_1);
  }
  *(undefined4 *)(uVar4 + 4) = 0xd01;
  *(undefined4 *)(uVar4 + 8) = 0x4000000;
  uVar1 = lbl_8328240C;
  *(undefined4 *)(uVar4 + 0xc) = 0xc0022100;
  *(undefined4 *)(uVar4 + 0x10) = 0x81;
  uVar3 = lbl_83282410;
  uVar5 = 0xf;
  *(undefined4 *)(uVar4 + 0x14) = 0xffffffff;
  *(uint *)(uVar4 + 0x18) = uVar1 | 0x80010000;
  *(undefined4 *)(uVar4 + 0x1c) = 0xc0022100;
  *(undefined4 *)(uVar4 + 0x20) = 0x82;
  *(undefined4 *)(uVar4 + 0x24) = 0xffffffff;
  *(undefined4 *)(uVar4 + 0x28) = uVar3;
  *(undefined4 *)(uVar4 + 0x2c) = 0xe42;
  *(undefined4 *)(uVar4 + 0x30) = 0x1f60;
  uVar1 = *(uint *)(param_1 + 0xbd1);
  *(undefined4 *)(uVar4 + 0x34) = 0xc85;
  if ((uVar1 & 2) == 0) {
    uVar5 = 3;
  }
  *(undefined4 *)(uVar4 + 0x38) = uVar5;
  *(undefined4 *)(uVar4 + 0x3c) = 0x57c;
  *(undefined4 *)(uVar4 + 0x40) = 0xbadf00d;
  *(undefined4 *)(uVar4 + 0x44) = 0x57b;
  *(undefined4 *)(uVar4 + 0x48) = 0;
  *(undefined4 **)(param_1 + 6) = (undefined4 *)(uVar4 + 0x48);
  return;
}

