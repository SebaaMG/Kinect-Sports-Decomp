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
extern int fn_82964588();
extern int fn_82F691F0();


undefined8
fn_8296DA28(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    uVar1 = 0xffffffff80004005;
  }
  else {
    *(undefined4 *)(param_1 + 0xc0) = param_2;
    *(int *)(param_1 + 0xc4) = param_3;
    *(undefined4 *)(param_1 + 200) = param_4;
    *(undefined4 *)(param_1 + 0xcc) = param_5;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    uVar2 = fn_82964588(param_1,0xffffffff821ce358,0,0xffffffffffffffff,4);
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    uVar2 = fn_82964588(param_1,0xffffffff82029a18,0x311,0xffffffffffffffff,4);
    *(undefined4 *)(param_1 + 0x78) = uVar2;
    uVar2 = fn_82964588(param_1,0xffffffff8201261c,0x251,0xffffffffffffffff,4);
    *(undefined4 *)(param_1 + 0x7c) = uVar2;
    uVar2 = fn_82964588(param_1,0xffffffff82029a48,0x51,0xffffffffffffffff,4);
    *(undefined4 *)(param_1 + 0x80) = uVar2;
    uVar2 = fn_82964588(param_1,0xffffffff821ce344,0x62,0xffffffffffffffff,4);
    *(undefined4 *)(param_1 + 0x84) = uVar2;
    uVar2 = fn_82964588(param_1,0xffffffff821ce348,3,0xffffffffffffffff,4);
    *(undefined4 *)(param_1 + 0x88) = uVar2;
    uVar2 = fn_82964588(param_1,0xffffffff8200befc,6,0xffffffffffffffff,4);
    *(undefined4 *)(param_1 + 0x8c) = uVar2;
    uVar2 = fn_82964588(param_1,0xffffffff82029a14,10,0xffffffffffffffff,4);
    *(undefined4 *)(param_1 + 0x90) = uVar2;
    uVar2 = fn_82964588(param_1,0xffffffff82029a30,0x2d1,0xffffffffffffffff,4);
    *(undefined4 *)(param_1 + 0x94) = uVar2;
    uVar2 = fn_82964588(param_1,0xffffffff82029a34,0x1003,0xffffffffffffffff,4);
    *(undefined4 *)(param_1 + 0x98) = uVar2;
    uVar2 = fn_82964588(param_1,0xffffffff8201261c,0x2251,0xffffffffffffffff,4);
    *(undefined4 *)(param_1 + 0x9c) = uVar2;
    uVar2 = fn_82964588(param_1,0xffffffff82029a14,0x400a,0xffffffffffffffff,4);
    *(undefined4 *)(param_1 + 0xa0) = uVar2;
    uVar2 = fn_82964588(param_1,0xffffffff820387e8,0xc00a,0xffffffffffffffff,4);
    *(undefined4 *)(param_1 + 0xa4) = uVar2;
    uVar2 = fn_82964588(param_1,0xffffffff8200bef8,0x10042,0,4);
    *(undefined4 *)(param_1 + 0xa8) = uVar2;
    uVar2 = fn_82964588(param_1,0xffffffff821ce35c,0x20003,0xffffffffffffffff,4);
    *(undefined4 *)(param_1 + 0xac) = uVar2;
    uVar2 = fn_82964588(param_1,0xffffffff82029a34,0x40211,0xffffffffffffffff,4);
    *(undefined4 *)(param_1 + 0xb0) = uVar2;
    uVar2 = fn_82964588(param_1,0xffffffff820387e4,0x2062,0xffffffffffffffff,4);
    *(undefined4 *)(param_1 + 0xb4) = uVar2;
    uVar2 = fn_82964588(param_1,0xffffffff820387e0,0x40062,0xffffffffffffffff,4);
    *(undefined4 *)(param_1 + 0xb8) = uVar2;
    if (*(int *)(param_1 + 4) == 0x12) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(param_1 + 0x28,0,0x4c);
    }
    uVar1 = 0xffffffff8007000e;
  }
  return uVar1;
}

