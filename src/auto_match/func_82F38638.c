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
extern int fn_82F37588();
extern int fn_82F380A0();
extern int fn_82F38430();
extern unsigned int lbl_82162BB0;
extern unsigned int lbl_82162BB8;


void fn_82F38638(undefined4 *param_1)

{
  *param_1 = &lbl_82162BB8;
  fn_82F380A0(param_1,0xffffffff8202e618);
  fn_82F38430(param_1);
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1d] + 8))();
    param_1[0x1d] = 0;
  }
  if ((int *)param_1[0x22] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x22] + 8))();
    param_1[0x22] = 0;
  }
  param_1[0x23] = &lbl_82162BB0;
  if (param_1[0x24] == 0) {
    fn_82F37588(param_1 + 0x23,0);
  }
  param_1[2] = &lbl_82162BB0;
  if (param_1[3] == 0) {
    fn_82F37588(param_1 + 2,0);
  }
  return;
}

