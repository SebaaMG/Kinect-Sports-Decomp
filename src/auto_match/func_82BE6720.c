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
extern int fn_82BE6268();
extern int fn_82BE6328();
extern unsigned int stack0x0000001f;
extern unsigned int uStack0000001f;


void fn_82BE6720(undefined8 param_1,undefined1 param_2,int param_3)

{
  undefined1 uStack0000001f;
  
  uStack0000001f = param_2;
  if (param_3 == 0) {
    fn_82BE6268(param_1,&stack0x0000001f,1);
  }
  else {
    fn_82BE6328();
  }
  return;
}

