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
extern int fn_826829A0();
extern int fn_826C09B0();
extern int fn_826FDED0();
extern unsigned int lbl_82010C6C;
extern unsigned int lbl_82011808;
extern unsigned int lbl_8201185C;


undefined4 * fn_82735870(undefined4 *param_1,int *param_2,undefined8 param_3)

{
  fn_826C09B0();
  *param_1 = &lbl_8201185C;
  param_1[4] = &lbl_82011808;
  fn_826FDED0(param_1 + 0xc,*(undefined4 *)(*param_2 + 0x288));
  param_1[0x19] = 0;
  param_1[0x17] = &lbl_82010C6C;
  param_1[0x18] = 1;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined2 *)((int)param_1 + 0x6a) = 0;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  *(undefined2 *)((int)param_1 + 0x6e) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)((int)param_1 + 0x72) = 0;
  fn_826829A0(param_1 + 4,param_2,param_3);
  return param_1;
}

