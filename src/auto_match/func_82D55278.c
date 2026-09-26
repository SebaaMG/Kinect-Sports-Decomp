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
extern int fn_82D6C2B0();
extern unsigned int lbl_82138A6C;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;


void fn_82D55278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined **ppuStack_20;
  undefined1 uStack_1c;
  undefined4 uStack_18;
  
  uStack_1c = 0;
  ppuStack_20 = &lbl_82138A6C;
  uStack_18 = param_5;
  fn_82D6C2B0(param_1,param_3,param_2,param_4,&ppuStack_20);
  return;
}

