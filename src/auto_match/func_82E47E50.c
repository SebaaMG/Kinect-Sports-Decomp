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
extern int fn_82E46FB8();
extern int fn_82E471A0();
extern int fn_82E47658();
extern int fn_82E4FE40();
extern unsigned int lbl_821539A8;


void fn_82E47E50(undefined4 *param_1)

{
  *param_1 = &lbl_821539A8;
  if ((int *)param_1[0x18] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x18] + 8))();
    param_1[0x18] = 0;
  }
  fn_82E46FB8(param_1);
  fn_82E47658(param_1);
  if ((undefined4 *)param_1[0x1d] != param_1 + 0x1a) {
    if ((undefined4 *)param_1[0x1d] != (undefined4 *)0x0) {
      fn_82E4FE40();
    }
    param_1[0x1d] = 0;
  }
  fn_82E471A0(param_1);
  return;
}

