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
extern int fn_8223CD80();
extern int fn_8223DB10();
extern int fn_822EC810();
extern unsigned int iStack_20;
extern unsigned int lbl_821AE3B4;
extern unsigned int lbl_821CC160;


double fn_822EC770(undefined4 *param_1)

{
  char cVar1;
  double dVar2;
  float afStack_70 [4];
  undefined **appuStack_60 [15];
  undefined4 *puStack_24;
  int iStack_20;
  
  fn_8223CD80(appuStack_60);
  appuStack_60[0] = &lbl_821AE3B4;
  puStack_24 = param_1;
  if (0xf < (uint)param_1[5]) {
    puStack_24 = (undefined4 *)*param_1;
  }
  iStack_20 = param_1[4] + (int)puStack_24;
  cVar1 = fn_822EC810(appuStack_60,afStack_70);
  if (cVar1 == '\0') {
    fn_8223DB10(appuStack_60);
    dVar2 = (double)lbl_821CC160;
  }
  else {
    dVar2 = (double)afStack_70[0];
    fn_8223DB10(appuStack_60);
  }
  return dVar2;
}

