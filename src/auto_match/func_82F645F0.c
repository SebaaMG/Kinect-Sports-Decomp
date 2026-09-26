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
extern int fn_82F641F8();
extern int fn_82F64698();
extern int fn_82F71CD0();
extern unsigned int lbl_8326338C;
extern unsigned int *lbl_83263390;


void fn_82F645F0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  fn_82F71CD0(0xe);
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)&lbl_8326338C;
    do {
      piVar2 = piVar1;
      if (lbl_83263390 == (int *)0x0) goto LAB_82f64664;
      piVar1 = lbl_83263390;
    } while (*lbl_83263390 != *(int *)(param_1 + 4));
    piVar2[1] = lbl_83263390[1];
    fn_82F641F8();
LAB_82f64664:
    fn_82F641F8(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  fn_82F64698();
  return;
}

