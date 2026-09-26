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
extern unsigned int *auStack_b0;
extern int fn_82A88D40();
extern int fn_82A89348();
extern int fn_82A8A088();


undefined8
fn_82A8A890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined1 auStack_b0 [176];
  
  fn_82A88D40(auStack_b0);
  cVar1 = fn_82A89348(param_1,param_2,auStack_b0);
  if ((cVar1 != '\0') &&
     (cVar1 = fn_82A8A088(param_1,param_2,auStack_b0,param_3,param_4,param_5), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

