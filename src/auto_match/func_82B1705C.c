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


undefined8 fn_82B1705C(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int *in_r10;
  byte in_cr6;
  
  do {
    if ((bool)(in_cr6 >> 1 & 1)) {
      return 0;
    }
    if ((in_r10[3] & 0x4000000U) != 0) {
      for (iVar1 = *in_r10; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
        if (*(int *)(iVar1 + 4) == param_3) {
          return 1;
        }
      }
    }
    in_r10 = (int *)in_r10[5];
    in_cr6 = (in_r10 == (int *)0x0) << 1;
  } while( true );
}

