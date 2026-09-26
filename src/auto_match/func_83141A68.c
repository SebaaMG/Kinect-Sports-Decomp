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
extern int fn_82A35450();
extern int fn_82A374A0();
extern int fn_82A37A68();
extern int fn_82A37CB8();
extern int fn_82A382C8();


void fn_83141A68(void)

{
  fn_82A35450();
  fn_82A374A0(0xffffffff832196ac);
  fn_82A37A68(0xffffffff83219664);
  fn_82A37CB8(0xffffffff8321962c);
  fn_82A382C8(0xffffffff832195f0);
  return;
}

