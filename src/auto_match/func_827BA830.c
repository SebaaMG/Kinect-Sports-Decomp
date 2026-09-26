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
extern int fn_827B4F80();
extern int fn_827BA7C0();
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1e;
extern unsigned int uStack_20;


void fn_827BA830(int param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = *(undefined4 *)(param_1 + 0x14);
  uStack_14 = 1;
  uStack_20 = param_2;
  uStack_1e = param_3;
  fn_827B4F80(param_1 + 4,&uStack_18);
  fn_827BA7C0(param_1 + 0x14,&uStack_20);
  return;
}

