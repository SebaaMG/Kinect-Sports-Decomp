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
extern int fn_8253D7A8();
extern int fn_82CE4040();
extern int fn_82CED2F8();
extern unsigned int lbl_82139E94;


undefined4 * fn_82D937A8(undefined4 *param_1,ulonglong param_2,undefined8 param_3)

{
  param_1[2] = 0;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = &lbl_82139E94;
  param_1[3] = 0;
  fn_8253D7A8(param_1 + 4,param_2,0,param_3);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x80000000;
  param_1[0x1b] = 0xffffffd1;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  fn_82CED2F8(param_1 + 0x1d);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x80000000;
  param_1[0x21] = 0;
  param_1[0x22] = 0xffffffff;
  *(char *)(param_1 + 8) = (char)param_1 - (char)(param_1 + 4);
  if ((param_2 & 0xffffffff) != 0) {
    fn_82CE4040(param_2);
  }
  return param_1;
}

