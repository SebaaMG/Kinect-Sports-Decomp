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
extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CEAB80();
extern int fn_82D41870();
extern unsigned int lbl_82142860;
extern unsigned int lbl_8214286C;
extern unsigned int lbl_82142878;
extern unsigned int lbl_8214288C;
extern unsigned int lbl_82142898;


undefined4 * fn_82DC9C90(undefined4 *param_1,ulonglong param_2)

{
  int iVar1;
  
  fn_82D41870();
  param_1[2] = &lbl_8214288C;
  *param_1 = &lbl_82142898;
  param_1[3] = &lbl_82142878;
  param_1[4] = &lbl_8214286C;
  param_1[5] = &lbl_82142860;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0xffffffff;
  iVar1 = fn_82CE5410();
  fn_82CEAB80(param_1 + 0xc,*(undefined4 *)(iVar1 + 0x10),0);
  param_1[0xf] = (int)param_2;
  param_1[8] = 5;
  if ((param_2 & 0xffffffff) != 0) {
    fn_82CE4040(param_2);
  }
  return param_1;
}

