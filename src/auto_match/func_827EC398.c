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
extern unsigned int *auStack_48;
extern unsigned int *auStack_54;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_827EBE60();
extern int fn_82810328();
extern int fn_82810530();
extern int fn_8281CB50();


void fn_827EC398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [72];
  
  fn_82810328(param_1,param_4,auStack_60);
  fn_82810328(param_2,param_4,auStack_54);
  fn_82810328(param_3,param_4,auStack_48);
  fn_8281CB50(param_6,auStack_60,auStack_60,3);
  fn_82810530(param_5,auStack_70);
  fn_827EBE60(auStack_60,auStack_54,auStack_48,auStack_70,param_5);
  return;
}

