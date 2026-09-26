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
extern int fn_82D04358();
extern int fn_82D046D0();
extern int fn_82D047D8();
extern int fn_82D04AB8();
extern int fn_82D054C0();


undefined4 fn_82CF9CC0(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  
  fn_82D04AB8(param_2,param_1);
  fn_82D047D8(param_2,0x5c,0x2f,1);
  fn_82D054C0(param_2,0xffffffff82133a30,0xffffffff821aa630,1);
  iVar1 = fn_82D04358(param_2,0xffffffff82133a2c);
  if (iVar1 != 0) {
    fn_82D046D0(param_2,2);
  }
  return *param_2;
}

