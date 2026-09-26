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
extern int fn_82F62A28();
extern int fn_82F70430();


void fn_82F62AB0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = fn_82F70430(0,0);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = 0xffffffff82196582;
  }
  fn_82F62A28(param_1 + 0x14,uVar1);
  if (((param_2 & 0xffffffff) == 0) || (lVar2 = fn_82F70430(0,param_2), lVar2 == 0)) {
    lVar2 = -0x7decc048;
  }
  fn_82F62A28(param_1 + 0x1c,lVar2);
  return;
}

