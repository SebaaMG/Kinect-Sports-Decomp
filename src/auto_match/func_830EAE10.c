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
extern int fn_830E2788();
extern V16 vectorSplatHalfWord();
extern V16 vectorSplatImmediateSignedHalfWord();


undefined8 fn_830EAE10(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_r10;
  undefined1 in_vs32 [16];
  undefined4 in_stack_00000054;
  
  vectorSplatImmediateSignedHalfWord(4);
  vectorSplatHalfWord(in_vs32,1);
  fn_830E2788(param_1 - param_2,param_2,param_3,param_4,2 << ((uint)in_r10 & 0x3f),in_r10,
                    in_stack_00000054);
  return 0;
}

