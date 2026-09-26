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
extern unsigned int *auStack_410;
extern unsigned int *auStack_41c;
extern int fn_8223B610();
extern int fn_8223C610();
extern int fn_82A1BC10();
extern int fn_82A1BC70();
extern int fn_82A1BCC0();
extern unsigned int uStack_420;


void fn_82247A70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uStack_420;
  undefined4 auStack_41c [3];
  undefined1 auStack_410 [1040];
  
  lVar1 = fn_8223C610(param_2,0x20,0,0);
  if (lVar1 != 0) {
    fn_8223B610(param_2,auStack_410,lVar1,0,0);
    uStack_420 = 0;
    iVar2 = fn_82A1BCC0(0,0,0,&uStack_420);
    if (-1 < iVar2) {
      auStack_41c[0] = 1000;
      fn_82A1BC10(uStack_420,param_3,auStack_41c,auStack_410,lVar1);
      fn_82A1BC70(uStack_420);
    }
  }
  return;
}

