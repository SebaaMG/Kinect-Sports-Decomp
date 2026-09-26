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
extern unsigned int *auStack_40;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_82865088();
extern unsigned int lbl_8201F9EC;


undefined4 * fn_828648F0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_40 [40];
  
  *param_1 = &lbl_8201F9EC;
  fn_8223B688(param_1 + 1);
  puVar2 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar2 = (undefined4 *)*param_2;
  }
  fn_82230110(auStack_40,puVar2);
  uVar1 = fn_82865088(auStack_40);
  param_1[8] = uVar1;
  fn_82230300(auStack_40,1,0);
  if (param_2[4] == 0) {
    param_1[8] = 0;
  }
  return param_1;
}

