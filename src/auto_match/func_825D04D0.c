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


int * fn_825D04D0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  do {
    param_1 = (int *)(*param_1 + (int)param_1);
    iVar1 = param_1[1];
    if ((((iVar1 == 0x57) || (iVar1 == 0x6d)) || (iVar1 == 0x5d)) || (iVar1 == 0x89)) {
      iVar2 = iVar2 + 1;
    }
    else if (iVar2 == 1) {
      if (iVar1 == 0x58) {
        return param_1;
      }
      if (iVar1 == 0x59) {
        return param_1;
      }
    }
    else if (iVar1 == 0x59) {
      iVar2 = iVar2 + -1;
    }
    if (iVar1 == 0) {
      return (int *)0x0;
    }
  } while( true );
}

