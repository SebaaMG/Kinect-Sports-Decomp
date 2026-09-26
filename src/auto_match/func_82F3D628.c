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
extern int fn_82F37DA8();
extern int fn_82F3C120();
extern int fn_82F3D590();
extern unsigned int lbl_820ED018;
extern unsigned int lbl_820ED01C;
extern unsigned int lbl_820ED020;
extern unsigned int lbl_820ED024;
extern unsigned int lbl_82162D9C;
extern unsigned int lbl_82162DB0;


undefined4 * fn_82F3D628(undefined4 *param_1)

{
  int *apiStack_30 [12];
  
  fn_82F3D590();
  *param_1 = &lbl_82162DB0;
  param_1[1] = &lbl_82162D9C;
  fn_82F37DA8(param_1 + 0x16);
  param_1[0x12] = 1;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined1 *)((int)param_1 + 0x4d) = 2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  fn_82F3C120(param_1,0xffffffff8202f1fc,apiStack_30);
  param_1[0x17] = apiStack_30[0];
  if (apiStack_30[0] != (int *)0x0) {
    (**(code **)(*apiStack_30[0] + 8))();
  }
  param_1[0x15] = param_1 + 0x16;
  param_1[4] = lbl_820ED018;
  param_1[5] = lbl_820ED01C;
  param_1[6] = lbl_820ED020;
  param_1[7] = lbl_820ED024;
  param_1[0x58] = 0;
  return param_1;
}

