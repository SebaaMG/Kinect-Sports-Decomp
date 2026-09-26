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
extern int fn_8265CA20();
extern unsigned int lbl_821C2CF8;
extern unsigned int lbl_832767C8;


void fn_82521D28(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0xc];
  *param_1 = &lbl_821C2CF8;
  if (*piVar1 != 0) {
    *(int *)(*piVar1 + 4) = piVar1[1];
  }
  if ((int *)piVar1[1] != (int *)0x0) {
    *(int *)piVar1[1] = *piVar1;
  }
  *piVar1 = 0;
  piVar1[1] = 0;
  fn_82522ED8();
  lbl_832767C8 = 0;
  if (param_1[8] != 0) {
    fn_8265CA20();
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}

