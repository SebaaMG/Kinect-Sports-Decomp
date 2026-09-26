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
extern unsigned int *auStack_60;
extern unsigned int *auStack_6e;
extern int fn_827DC918();
extern int fn_827DE048();
extern int fn_827E0DD8();
extern unsigned int iStack00000014;
extern unsigned int uStack_6f;
extern unsigned int uStack_70;


int fn_827DF630(int param_1)

{
  undefined8 uVar1;
  int iStack00000014;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_6e [14];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [40];
  
  iStack00000014 = param_1;
  uVar1 = fn_827DE048(auStack_60);
  fn_827E0DD8(param_1,&uStack_70,uVar1);
  uVar1 = fn_827DE048(auStack_40);
  fn_827E0DD8(param_1 + 0x78,&uStack_6f,uVar1);
  uVar1 = fn_827DE048(auStack_60);
  fn_827E0DD8(param_1 + 0xf0,auStack_6e,uVar1);
  uVar1 = fn_827DE048(auStack_40);
  fn_827DC918(param_1 + 0x168,uVar1);
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  RtlInitializeCriticalSection(param_1 + 400);
  return param_1;
}

