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
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5398();
extern int fn_82F65AC0();
extern unsigned int lbl_831751CC;


undefined8 fn_82BE21A8(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x160;
  fn_82BE5340(iVar3);
  while( true ) {
    if (*(int *)(param_1 + 0x168) == 0) {
      return 0;
    }
    uVar1 = fn_82BE5378(iVar3);
    iVar2 = fn_82F65AC0(param_2,uVar1);
    if (iVar2 == 0) break;
    fn_82BE5350();
  }
  fn_82BE5378(iVar3);
  (*(code *)lbl_831751CC)();
  fn_82BE5398(iVar3,*(undefined4 *)(param_1 + 0x168),1);
  return 1;
}

