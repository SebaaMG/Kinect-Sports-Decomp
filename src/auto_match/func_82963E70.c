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


uint fn_82963E70(uint *param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2 & 0xfff00000;
  if ((uVar2 & 0xfff00000) == 0) {
    uVar2 = 0;
    goto code_r0x82963ed8;
  }
  if (uVar1 != 0x50000000) {
    if (uVar1 == 0x50200000) {
      uVar2 = 1;
      goto code_r0x82963ed8;
    }
    if (uVar1 != 0x70800000) {
      if ((uVar2 & 0xf0000000) == 0x60000000) {
        uVar2 = 4;
      }
      else {
        uVar2 = uVar2 & 0xfffff;
      }
      goto code_r0x82963ed8;
    }
  }
  uVar2 = param_1[3];
code_r0x82963ed8:
  if (param_1[3] < uVar2 * param_2 + uVar2) {
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
    }
    return 0;
  }
  if (param_3 == (int *)0x0) {
    return uVar2;
  }
  *param_3 = uVar2 * param_2 * 4 + param_1[4];
  return uVar2;
}

