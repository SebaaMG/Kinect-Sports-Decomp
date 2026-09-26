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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
extern int fn_82EE5620();
extern unsigned int uStack_10;


ulonglong fn_82EE5898(int param_1,undefined2 param_2,undefined2 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 uStack_10;
  
  if (*(uint *)(param_1 + 0xb4) < 0xffff) {
    uStack_10 = CONCAT22(param_2,param_3);
    lVar2 = fn_82EE5620(param_1 + 0x4c,uStack_10,0);
    uVar1 = -(ulonglong)(lVar2 == 0) & 0xffffffff8007000e;
  }
  else {
    uVar1 = 0xffffffffc00d3a9a;
  }
  return uVar1;
}

