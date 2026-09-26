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


void fn_82AE4D78(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  
  param_2 = param_2 * 8;
  uVar1 = *(uint *)(param_2 + param_1);
  uVar2 = (param_3 & 0x3fff) << 4;
  param_4 = param_4 & 0xf;
  uVar4 = param_4 | uVar2 | uVar1 & 0xfffc0000;
  *(uint *)(param_2 + param_1) = uVar4;
  if (param_5 == 0) {
    uVar4 = param_4 | uVar2 | uVar1 & 0xfff00000 | 0x40000;
  }
  else {
    if (((int)param_5 < 1) || (bVar3 = true, 9 < (int)param_5)) {
      bVar3 = false;
    }
    if (!bVar3) goto code_r0x82ae4df0;
    if (((int)param_5 < 2) || (bVar3 = true, 5 < (int)param_5)) {
      bVar3 = false;
    }
    if (bVar3) {
      uVar4 = param_4 | uVar2 | uVar1 & 0xfff00000 | 0x80000;
    }
    else {
      uVar4 = uVar4 | 0xc0000;
    }
  }
  *(uint *)(param_2 + param_1) = uVar4;
code_r0x82ae4df0:
  *(uint *)(param_2 + param_1) =
       ((param_6 & 0xff) << 0xb | param_5 & 0x3f) << 0x14 |
       *(uint *)(param_2 + param_1) & 0x7c0fffff;
  return;
}

