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
extern unsigned int *auStack_2c;
extern unsigned int *auStack_40;
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828E4A20();
extern int fn_828E6B10();
extern int fn_828E8448();
extern int fn_828E8EF8();
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


void fn_828E91A8(int param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [44];
  
  uStack_30 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x28);
  fn_828B5580(auStack_2c,param_1 + 0x38);
  uVar1 = fn_828E8EF8();
  fn_828E6B10(&uStack_38,uVar1,&uStack_30);
  fn_828E8448(auStack_40,uVar1,uStack_38,uStack_34);
  fn_828B55B0(auStack_2c);
  fn_828B55B0(param_1 + 0x38);
  fn_828E4A20(param_1);
  return;
}

