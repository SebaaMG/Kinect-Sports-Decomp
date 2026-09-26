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
extern int fn_82FE4CC8();


void fn_82FE0960(int param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xc4) != 0) {
    lVar2 = 0;
    do {
      fn_82FE4CC8((double)*(float *)(param_1 + 0xe4),(double)*(float *)(param_1 + 0xe8),
                        (ulonglong)*(uint *)(param_1 + 0xd4) + lVar2,param_2,param_3,
                        *(undefined4 *)(param_1 + 200));
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 0x6c;
    } while (uVar1 < *(uint *)(param_1 + 0xc4));
  }
  return;
}

