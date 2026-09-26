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
extern unsigned int lbl_821AFA08;
extern unsigned int lbl_821AFA70;


undefined4 * fn_82320440(double param_1,double param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined1 auStack_50 [56];
  
  fn_82230110(auStack_50,0xffffffff821afa50);
  *param_3 = &lbl_821AFA08;
  fn_8223B688(param_3 + 1,auStack_50);
  fn_82230300(auStack_50,1,0);
  param_3[9] = (float)param_1;
  param_3[8] = param_4;
  param_3[10] = (float)param_2;
  *param_3 = &lbl_821AFA70;
  return param_3;
}

