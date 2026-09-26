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
extern int fn_82250A18();
extern int fn_82292AE8();
extern int fn_82512B70();
extern int fn_825132E0();
extern unsigned int lbl_82005748;
extern unsigned int lbl_8219793C;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832975B0;


void fn_82246368(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &lbl_8219793C;
  iVar1 = fn_82292AE8();
  if (*(float *)(iVar1 + 0x5c) == lbl_821CC160) {
    *(undefined4 *)(iVar1 + 0x5c) = lbl_82005748;
  }
  iVar1 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar1 = fn_82250A18();
  }
  *(undefined1 *)(iVar1 + 4) = 0;
  if (param_1[0x12] != 0) {
    fn_82512B70();
    param_1[0x12] = 0;
  }
  fn_825132E0(param_1);
  return;
}

