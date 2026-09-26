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
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_822C70F0();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821AE80C;


undefined4 *
fn_8233D4B8(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  undefined1 auStack_70 [112];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  puVar1 = param_1 + 3;
  if (puVar1 != (undefined4 *)0x0) {
    fn_82230110(auStack_70,param_6);
    fn_822C70F0(puVar1,param_2,param_3);
    param_1[0x18] = param_4;
    param_1[0x19] = param_4 + 0x24;
    *puVar1 = &lbl_821AE80C;
    fn_8223B688(param_1 + 0x1a,param_5);
    fn_8223B688(param_1 + 0x21,auStack_70);
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x17] = 1;
    fn_82230300(auStack_70,1,0);
  }
  return param_1;
}

