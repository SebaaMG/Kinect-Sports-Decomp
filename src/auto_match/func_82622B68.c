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
extern int fn_82522ED8();
extern int fn_82622BD8();
extern int fn_8265CA20();
extern unsigned int lbl_82197010;
extern unsigned int lbl_821CAD7C;


void fn_82622B68(undefined4 *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  *param_1 = &lbl_821CAD7C;
  fn_82522ED8(param_1[6]);
  fn_8265CA20(param_1[7]);
  piVar2 = param_1 + 9;
  lVar1 = 3;
  do {
    if (*piVar2 != 0) {
      fn_82622BD8();
      *piVar2 = 0;
    }
    lVar1 = lVar1 + -1;
    piVar2 = piVar2 + 1;
  } while (lVar1 != 0);
  *param_1 = &lbl_82197010;
  return;
}

