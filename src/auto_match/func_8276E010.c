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
extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_8267C498();
extern int fn_82686488();
extern int fn_82768D80();
extern int fn_82768F38();
extern int fn_8276B138();
extern unsigned int lbl_82014CD0;
extern unsigned int lbl_82015068;


void fn_8276E010(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 8;
  *param_1 = &lbl_82015068;
  fn_8276B138(puVar1,0);
  if (param_1[6] != 0) {
    fn_8267BE38();
    param_1[6] = 0;
  }
  fn_82686488(param_1 + 0xf);
  fn_8267BE38(param_1[0xc]);
  fn_82768F38(param_1 + 0xb);
  fn_82768D80(*puVar1,param_1[9]);
  fn_8267BE38(*puVar1);
  if (param_1[7] != 0) {
    fn_8267C498();
  }
  *param_1 = &lbl_82014CD0;
  fn_8267C488(param_1);
  return;
}

