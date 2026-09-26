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
extern int fn_82230300();
extern int fn_8265CA20();
extern int fn_82A1E650();
extern int fn_82A1E658();
extern int fn_82A1E810();
extern int fn_82E22190();


void fn_82E22450(int param_1)

{
  fn_82A1E650(*(undefined4 *)(param_1 + 100),0xffffffffffffffff);
  *(undefined1 *)(param_1 + 0x5c) = 1;
  fn_82A1E810(*(undefined4 *)(param_1 + 0x68));
  if (*(int *)(param_1 + 0x60) != 0) {
    fn_82A1E650(*(int *)(param_1 + 0x60),0xffffffffffffffff);
    fn_82A1E658(*(undefined4 *)(param_1 + 0x60));
  }
  fn_82E22190(param_1 + 0x88);
  fn_8265CA20(*(undefined4 *)(param_1 + 0x88));
  *(undefined4 *)(param_1 + 0x88) = 0;
  fn_82230300(param_1 + 0x38,1,0);
  fn_82230300(param_1 + 0x1c,1,0);
  fn_82230300(param_1,1,0);
  return;
}

