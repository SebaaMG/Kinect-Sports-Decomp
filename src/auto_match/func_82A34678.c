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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82A345D8();


longlong fn_82A34678(int *param_1,int param_2,undefined8 param_3)

{
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [40];
  longlong lStack_18;
  
  if ((*(uint *)(param_2 + 0xc) & 0x3fffc0) == 0) {
    (**(code **)(*param_1 + 0x20))(param_3,auStack_50,auStack_40,0x38,0x22);
    lStack_18 = lStack_18 + -0x10;
  }
  else {
    lStack_18 = fn_82A345D8(param_2);
  }
  return lStack_18;
}

