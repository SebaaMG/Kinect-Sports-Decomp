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
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_82522D98();
extern int fn_82536690();
extern int fn_8265C9E0();
extern unsigned int lbl_821BE9C0;


undefined4 * fn_824896F0(undefined4 *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 auStack_50 [20];
  
  param_1[4] = (int)param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 999999;
  param_1[6] = 0;
  param_1[7] = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  fn_8223B688(param_1 + 0xd,param_3);
  param_1[0x14] = 0;
  lVar2 = 6;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 2;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  do {
    puVar1 = (undefined4 *)fn_8265C9E0(0x2c);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[4] = (int)param_2;
      puVar1[8] = param_1;
      puVar1[1] = 0;
      *puVar1 = &lbl_821BE9C0;
      puVar1[5] = 0xffffffff;
      puVar1[9] = 0;
                    /* WARNING: Subroutine does not return */
      fn_82522D98(param_2 + 0x80);
    }
    auStack_50[0] = 0;
    fn_82536690(param_1,auStack_50);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  fn_82230300(param_3,1,0);
  return param_1;
}

