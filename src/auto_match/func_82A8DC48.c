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
extern unsigned int *auStack_38;
extern unsigned int *auStack_3c;
extern unsigned int *auStack_40;
extern int fn_82A8C020();
extern int fn_82A8C620();


void fn_82A8DC48(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [56];
  
  fn_82A8C620(param_3,param_4,*(undefined4 *)(param_2 + 0x28),auStack_40);
  param_4 = param_4 + (ulonglong)*(uint *)(param_2 + 0x28);
  fn_82A8C620(param_3,param_4,*(undefined4 *)(param_2 + 0x2c),auStack_3c);
  fn_82A8C620(param_3,param_4 + (ulonglong)*(uint *)(param_2 + 0x2c),
                *(undefined4 *)(param_2 + 0x30),auStack_38);
  fn_82A8C020(param_2,auStack_40,param_5);
  return;
}

