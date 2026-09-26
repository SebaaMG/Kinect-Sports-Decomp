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
extern int fn_82267F50();
extern int fn_82268330();
extern int fn_822886B0();
extern int fn_8228A540();
extern int fn_8228AF60();
extern int fn_8265C9E0();
extern int fn_8265CA20();


void fn_82289710(undefined4 *param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  iVar1 = param_1[0x185];
  if (iVar1 != 0) {
    fn_82268330(iVar1);
    fn_8265CA20(iVar1);
  }
  uVar2 = fn_8265C9E0(0x700);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_82267F50(uVar2,param_1 + 0x10c,*param_1,param_1[0x1a6]);
  }
  param_1[0x185] = uVar3;
  param_1[499] = 0;
  fn_822886B0(param_1);
  fn_8228A540(param_1,0xffffffff821a9504);
  fn_8228AF60(param_1,0xffffffff82196582);
  return;
}

