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
extern unsigned int lbl_82027B20;
extern unsigned int lbl_82027B48;
extern unsigned int lbl_8315A394;


int * fn_828F13C0(int param_1)

{
  int *piVar1;
  
  piVar1 = &lbl_82027B48;
  while( true ) {
    if (lbl_8315A394 <= piVar1) {
      return (int *)&lbl_82027B20;
    }
    if (param_1 == *piVar1) break;
    piVar1 = piVar1 + 9;
  }
  return piVar1;
}

