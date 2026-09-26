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
extern unsigned int *auStack_20;
extern int fn_8267C4C8();
extern int fn_8269D3D0();
extern int fn_826BF530();
extern unsigned int lbl_82006B48;
extern unsigned int lbl_82006B9C;
extern unsigned int lbl_82006BA8;


undefined4 *
fn_826A1050(undefined4 *param_1,ulonglong param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 auStack_20 [2];
  
  auStack_20[0] = *param_4;
  fn_8269D3D0(param_1,param_3,auStack_20);
  fn_826BF530(param_1 + 0x1a);
  *param_1 = &lbl_82006BA8;
  param_1[3] = &lbl_82006B9C;
  param_1[0x1a] = &lbl_82006B48;
  if ((param_2 & 0xffffffff) != 0) {
    fn_8267C4C8(param_2);
  }
  param_1[0x1f] = (int)param_2;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined1 *)((int)param_1 + 0x93) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(byte *)((int)param_1 + 0x66) = *(byte *)((int)param_1 + 0x66) | 0x80;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)((int)param_1 + 0x92) = 0;
  param_1[0x23] = 0x5011;
  return param_1;
}

