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
extern unsigned int *auStack_400;
extern unsigned int *auStack_40c;
extern int fn_8223C478();
extern int fn_828E9DB8();
extern int fn_828EA2D8();
extern int fn_82A1BB28();
extern int fn_82A1BB50();
extern int fn_82A1BC70();
extern unsigned int iStack_410;


void fn_82247998(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iStack_410;
  undefined4 auStack_40c [3];
  undefined1 auStack_400 [1000];
  
  auStack_40c[0] = 0;
  iStack_410 = 0;
  iVar1 = fn_82A1BB50(0,0,0,auStack_40c);
  if (-1 < iVar1) {
    iStack_410 = 1000;
    fn_82A1BB28(auStack_40c[0],auStack_400,&iStack_410,param_3,1000);
    fn_82A1BC70(auStack_40c[0]);
    iVar1 = iStack_410;
    fn_8223C478(param_2,0x20,0);
    fn_828E9DB8(param_2,iVar1,0x20);
    iVar1 = iStack_410;
    if (iStack_410 != 0) {
      fn_8223C478(param_2,iStack_410 << 3,0);
      fn_828EA2D8(param_2,auStack_400,iVar1);
    }
  }
  return;
}

