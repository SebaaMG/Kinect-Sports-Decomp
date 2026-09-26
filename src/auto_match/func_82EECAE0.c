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
extern int fn_82EEDC68();
extern int fn_82F40650();
extern int fn_82F40C90();
extern unsigned int lbl_82160134;
extern unsigned int lbl_82160160;
extern unsigned int lbl_821601B4;
extern unsigned int lbl_821601C8;
extern unsigned int lbl_821601DC;
extern unsigned int lbl_82163010;


undefined4 *
fn_82EECAE0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             int param_5)

{
  if (param_5 != 0) {
    param_1[2] = &lbl_821601DC;
    param_1[0x17] = &lbl_82163010;
    fn_82F40C90(param_1 + 0x13);
    fn_82EEDC68(param_1 + 0x16,0);
  }
  fn_82F40650(param_1 + 1,0);
  *param_1 = &lbl_821601C8;
  param_1[1] = &lbl_821601B4;
  *(undefined ***)((int)param_1 + *(int *)(param_1[2] + 4) + 8) = &lbl_82160160;
  *(undefined ***)((int)param_1 + *(int *)(param_1[2] + 8) + 8) = &lbl_82160134;
  *(int *)((int)param_1 + *(int *)(param_1[2] + 4) + 4) = *(int *)(param_1[2] + 4) + -0x44;
  *(int *)((int)param_1 + *(int *)(param_1[2] + 8) + 4) = *(int *)(param_1[2] + 8) + -0x50;
  param_1[0xd] = 1;
  param_1[0xe] = param_2;
  param_1[0xf] = param_3;
  param_1[0x10] = param_4;
  param_1[0x11] = 0;
  *(undefined4 *)((int)param_1 + *(int *)(param_1[2] + 4) + 0xc) = 3;
  return param_1;
}

