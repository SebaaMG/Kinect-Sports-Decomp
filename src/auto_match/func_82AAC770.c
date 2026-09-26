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
extern int fn_82A29A38();


ulonglong fn_82AAC770(uint param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x6000001) {
    if (param_1 == 0x6000000) {
      uVar1 = 0x10000;
      goto code_r0x82aac888;
    }
    if (param_1 == 0) goto code_r0x82aac888;
    if (param_1 == 0x1000000) {
      uVar1 = 0;
    }
    else {
      if (param_1 == 0x2000000) {
        uVar1 = 0x20000;
        goto code_r0x82aac888;
      }
      if (param_1 == 0x3000000) {
        uVar1 = 0x20000;
      }
      else {
        if (param_1 == 0x4000000) {
          uVar1 = 0x60000;
          goto code_r0x82aac888;
        }
        if (param_1 != 0x5000000) goto code_r0x82aac854;
        uVar1 = 0x60000;
      }
    }
  }
  else {
    if (param_1 == 0x7000000) {
      uVar1 = 0x40000;
      goto code_r0x82aac888;
    }
    if (param_1 == 0x8000000) {
      uVar1 = 0x40000;
    }
    else {
      if (param_1 == 0x9000000) {
        uVar1 = 0x400000;
        goto code_r0x82aac888;
      }
      if (param_1 == 0xa000000) {
        uVar1 = 0x600000;
        goto code_r0x82aac888;
      }
      if (param_1 == 0xb000000) {
        uVar1 = 0x100000;
        goto code_r0x82aac888;
      }
      if (param_1 != 0xc000000) {
code_r0x82aac854:
        fn_82A29A38();
        goto code_r0x82aac888;
      }
      uVar1 = 0x100000;
    }
  }
  uVar1 = uVar1 | 0x8888;
code_r0x82aac888:
  if (((uVar1 & 0x10000) != 0) && ((uVar1 & 0x68888) != 0)) {
    fn_82A29A38();
  }
  return uVar1;
}

