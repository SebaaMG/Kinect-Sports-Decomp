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
extern int fn_8265CA20();
extern int fn_8289FB00();
extern int fn_8289FB58();
extern int fn_828CA5B0();
extern int fn_828CB310();
extern unsigned int lbl_82024C08;


void fn_828AF818(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &lbl_82024C08;
  uVar1 = fn_828CB310();
  fn_828CA5B0(uVar1,param_1);
  fn_8289FB00(param_1[0x14],param_1);
  if (param_1[0x27] != 0) {
    fn_8265CA20();
  }
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  fn_8289FB58(param_1);
  return;
}

