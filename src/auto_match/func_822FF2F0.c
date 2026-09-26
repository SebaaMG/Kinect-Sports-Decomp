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
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821AFA08;
extern unsigned int lbl_821AFAE8;


undefined4 * fn_822FF2F0(undefined4 *param_1,float *param_2,float *param_3)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_50 [56];
  
  param_1[1] = 1;
  puVar1 = param_1 + 3;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (puVar1 != (undefined4 *)0x0) {
    dVar3 = (double)*param_2;
    dVar2 = (double)*param_3;
    fn_82230110(auStack_50,0xffffffff821afab8);
    *puVar1 = &lbl_821AFA08;
    fn_8223B688(param_1 + 4,auStack_50);
    fn_82230300(auStack_50,1,0);
    param_1[0xb] = (float)dVar3;
    param_1[0xc] = (float)dVar2;
    *puVar1 = &lbl_821AFAE8;
  }
  return param_1;
}

