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
extern unsigned int *auStack_10;
extern int fn_8288DFB8();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


longlong fn_8288F9A0(longlong param_1,int param_2)

{
  uint *puVar1;
  int iStack0000001c;
  undefined1 auStack_10 [16];
  
  if (param_2 == 0x8000) {
    return param_1 + 0x24;
  }
  iStack0000001c = param_2;
  puVar1 = (uint *)fn_8288DFB8(auStack_10,param_1 + 0x34,&stack0x0000001c);
  return (ulonglong)*puVar1 + 0x10;
}

