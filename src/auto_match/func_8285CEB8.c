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
extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_82861820();
extern int fn_82861F18();
extern int fn_82861F88();
extern int fn_82861FB0();


void fn_8285CEB8(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [12];
  
  iVar1 = fn_82861FB0();
  if (iVar1 == 0) {
    fn_82861F88(param_1,auStack_30,auStack_2c,auStack_28,auStack_24);
    fn_82861820(auStack_30,param_2);
  }
  else {
    fn_82861F18(param_1,param_2,param_2 + 4,param_2 + 8,param_2 + 0xc,param_2 + 0x10,param_2 + 0x14
                );
  }
  return;
}

