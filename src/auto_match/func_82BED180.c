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
extern int fn_82BE8CF8();
extern int fn_82BE8D50();
extern int fn_82BECBA0();
extern int fn_82BF6CA8();
extern int fn_82BF6CE8();
extern int fn_82BF7428();
extern unsigned int lbl_820EB0C8;
extern unsigned int lbl_831751CC;


void fn_82BED180(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &lbl_820EB0C8;
  if (param_1[2] != 0) {
    (*(code *)lbl_831751CC)();
    param_1[2] = 0;
  }
  iVar1 = param_1[0x13];
  if (iVar1 != 0) {
    fn_82BE8D50(*(int *)(*(int *)(iVar1 + 4) + 4) + iVar1 + 4);
  }
  fn_82BF6CA8(param_1 + 0xb);
  fn_82BECBA0(param_1);
  fn_82BF6CE8(param_1 + 0xb);
  fn_82BF7428(param_1 + 3);
  fn_82BE8CF8(param_1);
  return;
}

