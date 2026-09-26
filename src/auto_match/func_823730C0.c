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
extern int fn_82365BD8();
extern int fn_823765C8();


undefined8 fn_823730C0(undefined8 param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x184);
  while( true ) {
    if (piVar1 == *(int **)(param_2 + 0x188)) {
      fn_823765C8(param_1);
      return param_1;
    }
    if (*(int *)(*piVar1 + 0x217c) == param_3) break;
    piVar1 = piVar1 + 2;
  }
  fn_82365BD8(param_1);
  return param_1;
}

