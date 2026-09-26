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
extern int fn_827E8478();


longlong fn_827E3848(uint *param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = param_3 + 1;
  lVar2 = 0;
  if ((int)uVar4 < (int)(uint)*(byte *)(param_1 + 0x17)) {
    lVar3 = ((ulonglong)uVar4 & 0x3ffffff) << 6;
    do {
      lVar1 = fn_827E8478(lVar3 + (ulonglong)*param_1,param_2,
                                (ulonglong)*param_1 + ((ulonglong)param_3 & 0x3ffffff) * 0x40);
      uVar4 = uVar4 + 1;
      lVar2 = lVar1 + lVar2;
      lVar3 = lVar3 + 0x40;
    } while ((int)uVar4 < (int)(uint)*(byte *)(param_1 + 0x17));
  }
  return lVar2;
}

