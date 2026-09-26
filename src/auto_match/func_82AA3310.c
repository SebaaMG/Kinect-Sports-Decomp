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
extern int fn_82AA1C90();
extern int fn_82AA2720();


undefined8 fn_82AA3310(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  fn_82AA1C90(param_2,0xffffffff820d3214);
  fn_82AA2720(param_2,0xffffffff821ce7a4);
  fn_82AA1C90(param_2,0xffffffff821cc86c);
  fn_82AA1C90(param_2,0xffffffff820d3200,*param_1);
  fn_82AA2720(param_2,0xffffffff821ce7a4);
  fn_82AA1C90(param_2,0xffffffff821cc86c);
  fn_82AA1C90(param_2,0xffffffff820d31f4);
  iVar1 = (*(code *)*param_2)(param_2[1],param_1 + 2,param_1[1]);
  if ((iVar1 < 0) && (-1 < (int)param_2[2])) {
    param_2[2] = iVar1;
  }
  fn_82AA1C90(param_2,0xffffffff8200c4f8);
  fn_82AA2720(param_2,0xffffffff821ce7a4);
  fn_82AA1C90(param_2,0xffffffff821cc86c);
  return 0;
}

