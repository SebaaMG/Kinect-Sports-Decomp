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
extern int fn_82E7F8F0();
extern unsigned int uStack_28;


longlong fn_82E807D0(short *param_1,undefined8 param_2,short *param_3)

{
  longlong lVar1;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  uStack_28 = 0;
  if (*param_1 == 0) {
    lVar1 = -0x3ff2c917;
  }
  else if ((param_3 == (short *)0x0) || (param_1 == param_3)) {
    lVar1 = -0x7fffbffd;
  }
  else {
    lVar1 = fn_82E7F8F0(param_1,param_2,auStack_30);
    if ((-1 < lVar1) && (lVar1 = fn_82E7E900(param_3,auStack_30), -1 < lVar1)) {
      uStack_28 = 0;
    }
  }
  fn_82E7E7E0(auStack_30);
  return lVar1;
}

