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
extern unsigned int lbl_82141EE8;
extern unsigned int lbl_8214344C;
extern unsigned int lbl_82143468;
extern unsigned int lbl_82143474;
extern unsigned int lbl_82143488;
extern unsigned int lbl_82143494;
extern unsigned int lbl_821434A4;


void fn_82DE3E38(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  param_1[2] = &lbl_82134E74;
  param_1[3] = &lbl_82134E8C;
  param_1[4] = &lbl_82134EA0;
  param_1[5] = &lbl_82134E80;
  param_1[0xc] = &lbl_82141EE8;
  *param_1 = &lbl_82143494;
  param_1[2] = &lbl_82143488;
  param_1[3] = &lbl_82143474;
  param_1[4] = &lbl_82143468;
  param_1[5] = &lbl_821434A4;
  param_1[0xc] = &lbl_8214344C;
  return;
}

