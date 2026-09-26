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


void fn_8264FB08(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x38) < uVar1) {
    uVar1 = fn_82645110(param_1);
  }
  *(undefined4 *)(uVar1 + 4) = 0x22100;
  *(undefined4 *)(uVar1 + 8) = 0xffff;
  *(undefined4 *)(uVar1 + 0xc) = 0;
  *(undefined4 *)(uVar1 + 0x10) = 0;
  *(undefined4 *)(uVar1 + 0x14) = 0x2293;
  *(undefined4 *)(uVar1 + 0x18) = 0;
  *(undefined4 *)(uVar1 + 0x1c) = 0x22204;
  *(undefined4 *)(uVar1 + 0x20) = 0x10000;
  *(undefined4 *)(uVar1 + 0x24) = 0x10000;
  *(undefined4 *)(uVar1 + 0x28) = 0x300;
  *(undefined4 *)(uVar1 + 0x2c) = 0x2312;
  *(undefined4 *)(uVar1 + 0x30) = 0xffff;
  *(undefined4 *)(uVar1 + 0x34) = 0x200d;
  puVar2 = (undefined4 *)(uVar1 + 0x38);
  *puVar2 = 0;
  *(undefined4 **)(param_1 + 0x30) = puVar2;
  if (*(undefined4 **)(param_1 + 0x38) < puVar2) {
    puVar2 = (undefined4 *)fn_82645110(param_1);
  }
  puVar2[1] = 0x2104;
  puVar2[2] = 0xffff;
  puVar2[3] = 0x2202;
  puVar2[4] = 0;
  puVar2[5] = 0x2201;
  puVar2[6] = 0x10001;
  puVar2[7] = 0x2302;
  puVar2[8] = 1;
  puVar2[9] = 0x2200;
  puVar2[10] = 0;
  puVar2[0xb] = 0x2208;
  puVar2[0xc] = 4;
  puVar2[0xd] = 0x2203;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0x2182;
  puVar2[0x10] = 0xffffffff;
  *(undefined4 **)(param_1 + 0x30) = puVar2 + 0x10;
  return;
}

