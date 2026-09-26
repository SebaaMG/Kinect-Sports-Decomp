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


ulonglong fn_82AA0258(ulonglong *param_1,char param_2,ulonglong param_3,char param_4,uint *param_5
                       )

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if ((param_3 & 0xff) != 0) {
    *param_1 = 0;
  }
  uVar3 = 0;
  if (param_2 == '\0') {
    uVar4 = 0xffffffffffffffff;
  }
  else {
    uVar1 = *param_5;
    uVar4 = 0;
    if ((uVar1 & 0x1f) < 0x14) {
      uVar4 = (ulonglong)(uint)(1 << (uVar1 >> 0xc & 0x3f));
    }
    uVar2 = 0;
    if ((param_4 == '\0') || ((param_5[1] & 0x40000000) == 0)) {
      uVar2 = (ulonglong)(uint)(1 << (uVar1 >> 5 & 0x3f));
    }
    uVar3 = 0xffffffffffffffff;
    if ((uVar1 & 0x40000) == 0) {
      uVar3 = uVar4;
    }
    uVar4 = uVar3;
    if ((uVar1 & 0x800) == 0) goto code_r0x82aa02ec;
  }
  uVar2 = 0xffffffffffffffff;
code_r0x82aa02ec:
  if (((uVar4 | uVar2) & *param_1) != 0) {
    param_3 = 1;
  }
  if ((param_3 & 0xff) != 0) {
    *param_1 = 0;
  }
  *param_1 = *param_1 | uVar3;
  return param_3;
}

