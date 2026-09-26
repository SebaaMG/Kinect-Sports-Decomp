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
extern unsigned int *auStack_30;
extern int fn_8223A9E0();
extern int fn_8223C478();
extern int fn_8232A260();
extern int fn_828E9F18();


void fn_82329850(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_30 [48];
  
  uVar1 = fn_8232A260((double)*param_3,auStack_30);
  lVar2 = fn_8223A9E0(uVar1,0,1);
  uVar3 = fn_8223A9E0(uVar1,1,8);
  uVar4 = fn_8223A9E0(uVar1,9,0x18);
  fn_8223C478(param_2,0x21,0);
  fn_828E9F18(param_2,(lVar2 << 8 | uVar3) << 0x18 | uVar4,0x21);
  return;
}

