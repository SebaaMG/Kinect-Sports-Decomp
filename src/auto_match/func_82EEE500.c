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
extern int fn_82E569B0();
extern int fn_82EEDEA0();
extern unsigned int lbl_82154D80;
extern unsigned int lbl_82160240;
extern unsigned int lbl_82160294;


void fn_82EEE500(undefined4 *param_1)

{
  *param_1 = &lbl_82160294;
  *(undefined ***)((int)param_1 + *(int *)(param_1[1] + 4) + 4) = &lbl_82160240;
  *(int *)(*(int *)(param_1[1] + 4) + (int)param_1) = *(int *)(param_1[1] + 4) + -0x78;
  fn_82EEDEA0();
  param_1[2] = &lbl_82154D80;
  if (param_1[3] == 0) {
    fn_82E569B0(param_1 + 2,0);
  }
  return;
}

