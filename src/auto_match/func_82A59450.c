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
extern unsigned int *auStack_50;
extern int fn_82A58F78();
extern int fn_82A590E0();
extern int fn_82A59558();
extern int fn_82A75390();
extern int fn_82A753E8();


void fn_82A59450(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [80];
  
  fn_82A59558(param_1,auStack_50);
  uVar1 = fn_82A58F78(param_1,param_2);
  if ((uVar1 & 0xffffffff) != 0) {
    uVar2 = fn_82A753E8(*param_1);
    uVar3 = fn_82A75390(*param_1);
    fn_82A590E0(uVar3,uVar2,auStack_50,param_2,uVar1,param_3);
  }
  return;
}

