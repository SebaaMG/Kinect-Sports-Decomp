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
extern int fn_829EC0F8();
extern int fn_82F691F0();


void fn_829EE088(undefined4 *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  
  if (((param_2 < 1) || (param_3 < 0)) || (param_2 <= param_3)) {
    *param_1 = 0x80070057;
  }
  else {
    uVar1 = fn_829EC0F8(param_1 + 1,param_2 << 2,1,1);
    param_1[6] = (int)uVar1;
    if ((uVar1 & 0xffffffff) != 0) {
      param_1[8] = param_3;
      param_1[7] = param_2;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar1,0,param_2 << 2);
    }
    param_1[8] = 0;
    *param_1 = 0x8007000e;
    param_1[7] = 0;
  }
  return;
}

