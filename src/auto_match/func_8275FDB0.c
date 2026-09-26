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
extern unsigned int *auStack_30;
extern int fn_8275E498();


int fn_8275FDB0(int *param_1)

{
  bool bVar1;
  undefined1 auStack_30 [32];
  
  do {
    if (*(byte *)(*param_1 + 0x20) == 1) {
LAB_8275fde0:
      bVar1 = true;
    }
    else {
      bVar1 = false;
      if ((*(byte *)(*param_1 + 0x20) & 0x80) == 0) goto LAB_8275fde0;
    }
    if (bVar1) {
      return param_1[1];
    }
    fn_8275E498(param_1,auStack_30);
  } while( true );
}

