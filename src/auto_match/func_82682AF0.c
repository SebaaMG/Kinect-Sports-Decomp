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
extern int fn_8267C4C8();
extern int fn_826829A0();
extern int fn_826B14D8();
extern int fn_826C2D08();
extern unsigned int lbl_820057A8;
extern unsigned int lbl_82005800;


undefined4 *
fn_82682AF0(undefined4 *param_1,undefined4 *param_2,ulonglong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  fn_826C2D08();
  *param_1 = &lbl_82005800;
  param_1[4] = &lbl_820057A8;
  if ((param_3 & 0xffffffff) != 0) {
    fn_8267C4C8(param_3);
  }
  param_1[0xc] = (int)param_3;
  param_1[0xd] = param_4;
  uVar1 = fn_826B14D8(*param_2,7);
  fn_826829A0(param_1 + 4,param_2,uVar1);
  return param_1;
}

