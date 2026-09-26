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
extern unsigned int *auStack_30;
extern int fn_82E7E7E0();
extern int fn_82E7E900();
extern int fn_82E7F0F8();
extern unsigned int uStack_28;


longlong fn_82E44120(int param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  
  if (param_2 == (undefined4 *)0x0) {
    return -0x7fffbffd;
  }
  fn_82E7F0F8(auStack_30);
  if (*(short *)(param_1 + 0x18) == 0x1f) {
    lVar1 = fn_82E7E900(auStack_30,param_1 + 0x18);
    if (-1 < lVar1) {
      *param_2 = uStack_28;
      fn_82E7F0F8(auStack_30);
    }
  }
  else {
    lVar1 = -0x3ff2c94e;
  }
  fn_82E7E7E0(auStack_30);
  return lVar1;
}

