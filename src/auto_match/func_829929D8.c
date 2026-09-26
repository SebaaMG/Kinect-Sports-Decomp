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
extern unsigned int *auStack_c30;
extern int fn_828F5D48();
extern int fn_82980DE8();
extern int fn_82F68780();
extern int fn_82F688E8();
extern int fn_82F691F0();


ulonglong fn_829929D8(undefined4 *param_1,undefined8 param_2,undefined4 param_3,
                       undefined4 *param_4,undefined4 param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_c30 [3120];
  
  uVar1 = fn_82F68780(0,0);
  fn_82F68780(0xffffffffffffffff,0x8001f);
  fn_82F68780(0,0x30000);
  if (param_4 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff8876086c;
  }
  else {
    *param_4 = 0;
    *param_1 = param_3;
    param_1[1] = (int)param_2;
    param_1[0x1e] = param_5;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 1;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    uVar2 = fn_828F5D48(param_2,1);
    if (-1 < (longlong)uVar2) {
      fn_82980DE8(param_1,0,0);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_c30,0,0xbdc);
    }
  }
  fn_82F688E8();
  fn_82F68780(uVar1,0xb001f);
  if (-1 < (int)uVar2) {
    if (param_1[0x12] == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (ulonglong)(uint)param_1[0x14];
      if (-1 < (int)param_1[0x14]) {
        uVar2 = 0xffffffff80004005;
      }
    }
  }
  return uVar2;
}

