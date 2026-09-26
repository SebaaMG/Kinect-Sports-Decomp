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
extern int fn_826824B0();
extern int fn_826A9040();
extern int fn_826BE288();
extern unsigned int lbl_8200612C;
extern unsigned int lbl_8200B5A8;
extern unsigned int lbl_8200B760;
extern unsigned int lbl_8200B7F0;
extern unsigned int lbl_82010118;
extern unsigned int lbl_82012A64;


void fn_826C2EA0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &lbl_8200B760;
  param_1[4] = &lbl_8200B7F0;
  iVar1 = param_1[10];
  *param_1 = &lbl_82012A64;
  param_1[4] = &lbl_82010118;
  if (iVar1 != 0) {
    fn_826BE288(iVar1);
    fn_8267BE38(iVar1);
  }
  if (((*(byte *)(param_1 + 9) & 2) == 0) && (param_1[7] != 0)) {
    fn_826824B0();
  }
  param_1[7] = 0;
  if (((*(byte *)(param_1 + 9) & 1) == 0) && (param_1[8] != 0)) {
    fn_826824B0();
  }
  param_1[8] = 0;
  fn_826A9040(param_1 + 6);
  param_1[4] = &lbl_8200B5A8;
  if (param_1[5] != 0) {
    fn_826824B0();
  }
  *param_1 = &lbl_8200612C;
  return;
}

