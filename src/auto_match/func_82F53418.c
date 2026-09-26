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
extern int fn_8251FA58();
extern int fn_8265CAA0();
extern int fn_82F52F30();
extern int fn_82F53270();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


undefined8 fn_82F53418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iStack_30;
  int iStack_2c;
  
  fn_82F52F30(&iStack_30);
  if (iStack_30 == 0) {
    fn_8265CAA0(0);
    if (iStack_2c != 0) {
      fn_8251FA58();
    }
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82F53270(param_1,iStack_30,param_2,param_3);
    fn_8265CAA0(iStack_30);
    if (iStack_2c != 0) {
      fn_8251FA58();
    }
  }
  return uVar1;
}

