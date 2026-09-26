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
extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821AFA08;
extern unsigned int lbl_821AFAB0;


undefined4 * fn_82333DC8(undefined4 *param_1,float *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  double dVar3;
  undefined1 auStack_50 [80];
  
  puVar1 = (undefined4 *)fn_8265C9E0(0x30);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 3;
    puVar1[1] = 1;
    *puVar1 = &lbl_821AD588;
    puVar1[2] = 1;
    if (puVar2 != (undefined4 *)0x0) {
      dVar3 = (double)*param_2;
      fn_82230110(auStack_50,0xffffffff821afa98);
      *puVar2 = &lbl_821AFA08;
      fn_8223B688(puVar1 + 4,auStack_50);
      fn_82230300(auStack_50,1,0);
      puVar1[0xb] = (float)dVar3;
      *puVar2 = &lbl_821AFAB0;
    }
  }
  param_1[1] = puVar1;
  *param_1 = puVar1 + 3;
  return param_1;
}

