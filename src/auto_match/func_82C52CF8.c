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
extern int fn_82C59720();


undefined8 fn_82C52CF8(int param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x549c) = 0;
  *(undefined4 *)(param_1 + 0xd8c) = 0;
  *(undefined4 *)(param_1 + 0xd98) = 0;
  *(undefined4 *)(param_1 + 0xd94) = 0;
  *(undefined4 *)(param_1 + 0x5428) = 0;
  *(undefined4 *)(param_1 + 0x556c) = 0;
  *(undefined4 *)(param_1 + 0x54ac) = 1;
  *(undefined4 *)(param_1 + 0xda0) = 0;
  *(undefined4 *)(param_1 + 0x5448) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x54a0) = 0;
  *(undefined4 *)(param_1 + 0x54a8) = 0;
  *(undefined4 *)(param_1 + 0x54a4) = 0;
  *(undefined4 *)(param_1 + 0xfb4) = 0;
  *(undefined4 *)(param_1 + 0x5518) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0xe90) = 0;
  uVar1 = fn_82C59720(param_1,0,0,0,0,0);
  if ((int)uVar1 == 0) {
    *(undefined4 *)(param_1 + 0xe94) = 0;
    *(undefined4 *)(param_1 + 0x55b4) = 0;
    if (((*(int *)(param_1 + 0x5578) < *(int *)(param_1 + 0x5628) * *(int *)(param_1 + 0x562c)) ||
        (*(int *)(param_1 + 0x5588) < *(int *)(param_1 + 0x5628))) ||
       (*(int *)(param_1 + 0x558c) < *(int *)(param_1 + 0x562c))) {
      uVar1 = 0xfffffffffffffff8;
    }
    else {
      *(undefined4 *)(param_1 + 0x557c) = 0;
    }
  }
  return uVar1;
}

