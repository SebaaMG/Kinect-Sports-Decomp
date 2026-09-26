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
extern unsigned int lbl_82134E74;
extern unsigned int lbl_82134E80;
extern unsigned int lbl_82134E8C;
extern unsigned int lbl_82134EA0;
extern unsigned int lbl_82136968;
extern unsigned int lbl_82136974;
extern unsigned int lbl_82136988;
extern unsigned int lbl_82136994;
extern unsigned int lbl_821369A4;


void fn_82D3AB08(undefined4 *param_1,int param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  param_1[2] = &lbl_82134E74;
  param_1[3] = &lbl_82134E8C;
  param_1[4] = &lbl_82134EA0;
  param_1[5] = &lbl_82134E80;
  *param_1 = &lbl_82136994;
  param_1[2] = &lbl_82136988;
  param_1[3] = &lbl_82136974;
  param_1[4] = &lbl_821369A4;
  param_1[5] = &lbl_82136968;
  if (param_2 == 0) {
    return;
  }
  param_1[8] = 1;
  return;
}

