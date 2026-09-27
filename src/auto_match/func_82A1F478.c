extern unsigned int *puRam83219598;
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
extern int fn_82A35940();
extern int iRam83219750;
extern unsigned int lbl_832195A0;


undefined8 fn_82A1F478(undefined8 param_1)

{
  int iVar1;

  if (iRam83219750 == 0) {
    iVar1 = fn_82A35940(0xffffffff832195a0,param_1);
    if (-1 < iVar1) {
      puRam83219598 = &lbl_832195A0;
      return 0;
    }
    if (iVar1 == -0x3fffffe9) {
      return 0xffffffff8007000e;
    }
  }
  return 0xffffffff80004005;
}
