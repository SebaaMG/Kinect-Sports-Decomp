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
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


undefined8 fn_82F53380(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iStack_40;
  int iStack_3c;
  
  fn_82F52F30(&iStack_40);
  if (iStack_40 == 0) {
    fn_8265CAA0(0);
    if (iStack_3c != 0) {
      fn_8251FA58();
    }
    uVar1 = 0;
  }
  else {
    *(uint *)(iStack_40 + 0x44) = param_3 & 0xff;
    uVar1 = fn_82F53270(param_1,iStack_40,param_2,param_4);
    fn_8265CAA0(iStack_40);
    if (iStack_3c != 0) {
      fn_8251FA58();
    }
  }
  return uVar1;
}

