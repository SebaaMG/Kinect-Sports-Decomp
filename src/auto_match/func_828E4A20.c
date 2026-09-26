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
extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_8265CA20();
extern int fn_82887890();
extern int fn_828E3870();
extern unsigned int lbl_820260A8;


void fn_828E4A20(undefined4 *param_1)

{
  undefined1 auStack_20 [8];
  
  if (param_1[10] != 0) {
    fn_8265CA20();
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  fn_828E3870(param_1 + 6,*(undefined4 *)param_1[7]);
  fn_82887890(auStack_20,param_1 + 6,*(undefined4 *)param_1[7]);
  fn_8265CA20(param_1[7]);
  if (param_1[5] != 0) {
    fn_822315A0();
  }
  *param_1 = &lbl_820260A8;
  if (param_1[3] != 0) {
    fn_822315A0();
  }
  return;
}

