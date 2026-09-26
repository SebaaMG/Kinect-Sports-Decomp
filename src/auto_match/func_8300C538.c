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
extern int fn_8300C068();


int * fn_8300C538(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  param_1 = (int *)*param_1;
  do {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)0x0;
code_r0x8300c588:
      piVar1 = (int *)fn_8300C068();
      if (piVar1 != (int *)0x0) {
        piVar2 = piVar1 + 1;
        *piVar1 = param_2;
      }
      return piVar2;
    }
    if (param_1[1] == param_2) {
      piVar2 = param_1 + 2;
      if (param_1 != (int *)0xfffffff8) {
        return piVar2;
      }
      goto code_r0x8300c588;
    }
    param_1 = (int *)*param_1;
  } while( true );
}

