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
extern int fn_822315A0();
extern int fn_8251FA58();
extern int fn_8265CA20();
extern int fn_82672660();
extern unsigned int lbl_821CC160;
extern int (*lbl_8327677C)();


void fn_823DB2F8(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xd4) != 0) && (*(float *)(param_1 + 0xd8) <= lbl_821CC160)) {
    if (lbl_8327677C != (code *)0x0) {
      (*lbl_8327677C)(0xffffffff821b6748,0xffffffff821b66a8,0x1e5);
    }
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 != 0) {
    fn_82672660(*(undefined4 *)(iVar1 + 0x3c),iVar1);
    if (*(int *)(iVar1 + 0x40) != 0) {
      fn_822315A0();
    }
    fn_8265CA20(iVar1);
  }
  iVar1 = *(int *)(param_1 + 0xa4);
  if (iVar1 != 0) {
    fn_82672660(*(undefined4 *)(iVar1 + 0x3c),iVar1);
    if (*(int *)(iVar1 + 0x40) != 0) {
      fn_822315A0();
    }
    fn_8265CA20(iVar1);
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  if (*(int *)(param_1 + 200) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 200) = 0;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    fn_822315A0();
  }
  return;
}

