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
extern int fn_82AB15D0();
extern int fn_82AB71F0();
extern unsigned int lbl_8316E4FC;


undefined8
fn_82B9CE48(ulonglong param_1,ulonglong param_2,undefined4 *param_3,code *param_4,
             ulonglong param_5)

{
  undefined4 uVar1;
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(param_1,0xffffffff820d2ea4,0xffffffff820d2ff0,0xffffffff820ddb08,0xb3d);
  }
  if (((param_2 & 0xffffffff) < 0x10) && ((int)param_2 != -1)) {
    uVar1 = fn_82AB71F0(param_1,0xf,param_2);
  }
  else {
    uVar1 = 0;
  }
  param_3[1] = uVar1;
  param_3[2] = 3;
  param_3[3] = 3;
  *param_3 = 0;
  param_3[4] = 3;
  param_3[5] = 7;
  param_3[6] = 7;
  param_3[7] = 3;
  param_3[8] = 3;
  param_3[9] = 1;
  if ((param_4 != (code *)0x0) && ((param_5 & 0xffffffff) != 0)) {
    (*param_4)(param_5,0xffffffff820ddb70,lbl_8316E4FC,0x1f,param_2);
  }
  return 1;
}

