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
extern int fn_8225C590();
extern int fn_8225D168();
extern int fn_82267130();
extern int fn_822848B8();
extern int fn_8229E090();
extern int fn_8251FA58();
extern int fn_8265CA20();
extern unsigned int lbl_832766F6;


int * fn_82286F08(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = fn_8225C590();
  fn_8225D168(uVar1,param_1[0xe1]);
  if (param_1[0xe5] != 0) {
    fn_8229E090(param_1[0xe5],0,0);
    param_1[0xe5] = 0;
  }
  if (param_1[0xb3] != 0) {
    fn_82267130();
  }
  if (param_1[0xe0] != 0) {
    fn_822848B8();
    param_1[0xe0] = 0;
  }
  fn_8251FA58(param_1[0xaf]);
  fn_8251FA58(param_1[0xb0]);
  iVar2 = *param_1;
  lbl_832766F6 = 0;
  if (iVar2 != 0) {
    for (; iVar2 != param_1[1]; iVar2 = iVar2 + 0xe0) {
    }
    fn_8265CA20();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  fn_8265CA20(param_1);
  return param_1;
}

