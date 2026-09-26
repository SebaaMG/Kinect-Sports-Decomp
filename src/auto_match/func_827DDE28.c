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
extern int fn_827D96A0();
extern int fn_827E0250();
extern int fn_827E0438();
extern int fn_827E0658();
extern int fn_827E8720();
extern unsigned int uStack_30;


undefined8 fn_827DDE28(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 uStack_30;
  uint auStack_2c [11];
  
  uStack_30 = fn_827D96A0(param_2);
  fn_827E0658(auStack_2c,param_1,&uStack_30);
  uVar2 = (ulonglong)auStack_2c[0];
  if (uVar2 == *(uint *)(param_1 + 4)) {
    uVar1 = 6;
  }
  else {
    uVar1 = fn_827E0250(param_1,uVar2 + 8);
    fn_827E0438(param_1,uVar2,uVar1);
    fn_827E8720(auStack_2c,param_1 + 4,uVar2);
    uVar1 = 0;
  }
  return uVar1;
}

