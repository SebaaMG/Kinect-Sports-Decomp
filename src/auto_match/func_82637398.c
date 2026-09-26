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
extern int fn_82637550();
extern int fn_82645110();


void fn_82637398(undefined8 *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 6);
    if (*(uint *)(param_1 + 7) < uVar1) {
      uVar1 = fn_82645110(param_1);
    }
    *(undefined4 *)(uVar1 + 4) = 0xc0006000;
    *(undefined4 *)(uVar1 + 8) = *(undefined4 *)((int)param_1 + 0x3254);
    *(undefined4 *)(uVar1 + 0xc) = 0xc0006200;
    *(undefined4 *)(uVar1 + 0x10) = 0xffffffff;
    *(undefined4 *)(uVar1 + 0x14) = 0xc0006100;
    *(undefined4 *)(uVar1 + 0x18) = *(undefined4 *)(param_1 + 0x64b);
    *(undefined4 *)(uVar1 + 0x1c) = 0xc0006300;
    *(undefined4 *)(uVar1 + 0x20) = 0;
    *(undefined4 **)(param_1 + 6) = (undefined4 *)(uVar1 + 0x20);
  }
  uVar1 = *(uint *)(param_1 + 0x519);
  fn_82637550(param_1,(*(int *)((int)param_1 + 0x28c4) << 0x11) >> 0x11,
                    (*(int *)((int)param_1 + 0x28c4) << 1) >> 0x11,
                    (int)(uVar1 << 0x11 | uVar1 >> 0xf) >> 0x11,(int)(uVar1 << 1) >> 0x11);
  uVar1 = *(uint *)(param_1 + 6);
  *(undefined4 *)((int)param_1 + 0x2aa4) = *(undefined4 *)((int)param_1 + 0x2aa4);
  if (*(uint *)(param_1 + 7) < uVar1) {
    uVar1 = fn_82645110(param_1);
  }
  *(undefined4 *)(uVar1 + 4) = 0x5c8;
  *(undefined4 *)(uVar1 + 8) = 0x20000;
  *(undefined4 *)(uVar1 + 0xc) = 0xf01;
  *(undefined4 *)(uVar1 + 0x10) = *(undefined4 *)((int)param_1 + 0x2aa4);
  *(undefined4 **)(param_1 + 6) = (undefined4 *)(uVar1 + 0x10);
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = 0xffffffffffffffff;
  param_1[4] = 0xffffffffffffffff;
  return;
}

