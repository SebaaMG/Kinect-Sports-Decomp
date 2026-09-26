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
extern int fn_82630E38();
extern int fn_82645110();


void fn_82631C78(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_3 == 0) && (param_4 == 0)) {
    param_3 = 0x40;
    param_4 = 0x40;
  }
  if ((param_2 & 1) == 0) {
    uVar2 = (param_3 & 0x7f) << 0xc |
            (param_4 & 0x7f) << 4 | *(uint *)(param_1 + 0x2aa8) & 0xfff8080f;
  }
  else {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0x2aa8) = uVar2;
  uVar2 = *(uint *)(param_1 + 0x325c);
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x38) < uVar1) {
    uVar1 = fn_82645110(param_1);
  }
  uVar2 = uVar2 & param_2 | 0xc0013f00;
  *(uint *)(uVar1 + 4) = uVar2;
  *(undefined4 *)(uVar1 + 8) = *(undefined4 *)(param_1 + 14000);
  *(uint *)(uVar1 + 0xc) = *(uint *)(param_1 + 0x36ac) & 0xffffff;
  *(uint *)(uVar1 + 0x10) = uVar2;
  *(undefined4 *)(uVar1 + 0x14) = *(undefined4 *)((param_3 + 0x6d7) * 8 + param_1);
  *(uint *)(uVar1 + 0x18) = *(uint *)(param_3 * 8 + param_1 + 0x36b4) & 0xffffff;
  *(uint *)(uVar1 + 0x1c) = uVar2;
  *(undefined4 *)(uVar1 + 0x20) = *(undefined4 *)(param_1 + 0x3ab8);
  *(uint *)(uVar1 + 0x24) = *(uint *)(param_1 + 0x3ab4) & 0xffffff;
  *(uint **)(param_1 + 0x30) = (uint *)(uVar1 + 0x24);
  fn_82630E38(param_1);
  return;
}

