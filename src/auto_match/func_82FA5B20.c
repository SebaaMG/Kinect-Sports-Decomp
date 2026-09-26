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


undefined4 fn_82FA5B20(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = (ulonglong)*param_2;
  uVar1 = *(uint *)((int)((uVar2 + 1 & 0xffffffff) << 2) + (int)param_1) & -1 << (*param_3 & 0x3f);
  if (uVar1 == 0) {
    uVar1 = -1 << (*param_2 + 1 & 0x3f) & *param_1;
    if (uVar1 == 0) {
      return 0;
    }
    lVar3 = -LZCOUNT(~uVar1 + 1 & uVar1);
    uVar2 = lVar3 + 0x1f;
    *param_2 = (uint)uVar2;
    uVar1 = *(uint *)((int)((lVar3 + 0x20U & 0xffffffff) << 2) + (int)param_1);
  }
  lVar3 = 0x1f - LZCOUNT(~uVar1 + 1 & uVar1);
  *param_3 = (uint)lVar3;
  return *(undefined4 *)
          ((int)(((uVar2 & 0x7ffffff) * 0x20 + lVar3 + 0x19 & 0xffffffff) << 2) + (int)param_1);
}

