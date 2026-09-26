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
extern int fn_8247EBC8();
extern int fn_8247F570();


void fn_82483A68(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(int *)(param_2 + 0x980) != 0) {
    fn_8247F570(param_2 + 0x10);
    *(undefined4 *)(param_2 + 0x980) = 0;
  }
  fn_8247EBC8(param_1,param_2 + 0x10,param_3,param_4);
  return;
}

