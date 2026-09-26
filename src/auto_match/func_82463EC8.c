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
extern int fn_824645B8();
extern int fn_82464660();
extern int fn_8252ACC0();
extern int fn_8252AE68();


void fn_82463EC8(int param_1,int param_2)

{
  if (((*(int *)(param_1 + 4) == 7) && (param_2 != 0xb)) && (*(int *)(param_1 + 0x1c) != 0)) {
    fn_8252AE68(*(undefined4 *)(param_1 + 0x20),1);
  }
  if ((param_2 == 2) || (param_2 == 3)) {
    fn_8252AE68(*(undefined4 *)(param_1 + 0x20),1);
    fn_8252AE68(*(undefined4 *)(param_1 + 0x24),1);
    goto LAB_82463fa8;
  }
  if (param_2 == 5) {
    fn_8252ACC0(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 8));
    if (*(int *)(param_1 + 0x1c) != 0) goto LAB_82463fa8;
  }
  else {
    if (param_2 != 6) {
      if (param_2 == 10) {
        fn_824645B8(param_1);
      }
      else if (param_2 == 0xc) {
        fn_82464660(param_1);
      }
      goto LAB_82463fa8;
    }
    if (*(int *)(param_1 + 0x1c) == 0) goto LAB_82463fa8;
  }
  fn_8252ACC0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 8));
LAB_82463fa8:
  *(int *)(param_1 + 4) = param_2;
  return;
}

