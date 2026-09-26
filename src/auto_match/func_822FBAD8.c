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
extern int fn_8223B688();
extern int fn_822C70F0();
extern int fn_822FBF10();
extern unsigned int lbl_821AE85C;


undefined4 *
fn_822FBAD8(double param_1,double param_2,double param_3,undefined4 *param_4,undefined8 param_5,
             undefined8 param_6,undefined4 param_7,int param_8,undefined8 param_9)

{
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  
  fn_822C70F0();
  *param_4 = &lbl_821AE85C;
  param_4[0x15] = 0;
  param_4[0x16] = 0;
  param_4[0x17] = 0;
  param_4[0x19] = param_7;
  param_4[0x1a] = param_8;
  param_4[0x1b] = param_8 + 0x24;
  fn_8223B688(param_4 + 0x1c,param_9);
  param_4[0x25] = (float)param_1;
  param_4[0x26] = (float)param_2;
  param_4[0x23] = 0;
  param_4[0x27] = (float)param_3;
  param_4[0x24] = 0;
  fn_8223B688(param_4 + 0x28,in_stack_0000005c);
  fn_8223B688(param_4 + 0x2f,in_stack_00000064);
  param_4[0x14] = 1;
  fn_822FBF10(param_4);
  return param_4;
}

