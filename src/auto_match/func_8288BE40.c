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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int uStack_10;


void fn_8288BE40(ulonglong *param_1,ulonglong *param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uStack_10;
  
  uVar2 = *param_2;
  uStack_10 = ((((U64)(uStack_10)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((int)(uVar2 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
  if (((int)param_3 < 0) && ((uVar2 & 0xffffffff) < (-param_3 & 0xffffffffU))) {
    param_3 = (uVar2 & 0xffffffff) + param_3;
    uStack_10 = CONCAT44((((U64)(uStack_10) >> 0) & 0xFFFFFFFF) + ((int)((-param_3 - 1U & 0xffffffff) >> 5) + 1) * -4,
                         (int)param_3) & 0xffffffff0000001f;
    *param_1 = uStack_10;
    return;
  }
  uVar1 = (int)uVar2 + (int)param_3;
  uStack_10 = CONCAT44((uVar1 >> 3 & 0x1ffffffc) + (((U64)(uStack_10) >> 0) & 0xFFFFFFFF),uVar1) & 0xffffffff0000001f;
  *param_1 = uStack_10;
  return;
}

