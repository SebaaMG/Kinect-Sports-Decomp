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
extern int fn_82BA02A8();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CEA8E8();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_82134E74;
extern unsigned int lbl_82134E80;
extern unsigned int lbl_82134E8C;
extern unsigned int lbl_82134EA0;
extern unsigned int lbl_82142860;
extern unsigned int lbl_8214286C;
extern unsigned int lbl_82142878;
extern unsigned int lbl_8214288C;
extern unsigned int lbl_82142898;


void fn_82DC9AA8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &lbl_82142898;
  param_1[2] = &lbl_8214288C;
  param_1[3] = &lbl_82142878;
  param_1[4] = &lbl_8214286C;
  param_1[5] = &lbl_82142860;
  if (param_1[0xf] != 0) {
    fn_82CE4118();
  }
  iVar1 = fn_82CE5410();
  fn_82CEA8E8(param_1 + 0xc,*(undefined4 *)(iVar1 + 0x10));
  fn_82BA02A8(param_1 + 0xc);
  param_1[5] = &lbl_82134E80;
  param_1[4] = &lbl_82134EA0;
  param_1[3] = &lbl_82134E8C;
  param_1[2] = &lbl_82134E74;
  *param_1 = &lbl_8212FC60;
  return;
}

