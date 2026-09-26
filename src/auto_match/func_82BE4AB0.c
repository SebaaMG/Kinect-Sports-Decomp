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
extern int fn_82BE2958();
extern int fn_82BE4378();
extern int fn_82BE4460();
extern int fn_82BEA200();
extern int fn_82BEA230();
extern int fn_82BEEB00();
extern int fn_82F68CC0();


void fn_82BE4AB0(int param_1,ulonglong param_2)

{
  int iVar1;
  
  fn_82BE2958(0xffffffff820e90c4);
  if ((*(int *)(param_1 + 0x6c) == 0) ||
     (iVar1 = fn_82BEA200(*(int *)(param_1 + 0x6c),0xffffffff820e9098), iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0x69;
  }
  else {
    if ((param_2 & 0xffffffff) == 0) {
      fn_82BEEB00(param_1 + 0x7c);
      fn_82BEEB00(param_1 + 0xa0);
      fn_82BEEB00(param_1 + 0x88);
      fn_82BEEB00(param_1 + 0x94);
      *(undefined4 *)(param_1 + 0xc) = 0x1f8;
    }
    else {
      fn_82F68CC0(param_1 + 0x7c,param_2,0x30);
    }
    fn_82BE4460(param_1);
    fn_82BE4378(param_1);
    fn_82BEA230(*(undefined4 *)(param_1 + 0x6c),0xffffffff820e9098);
  }
  return;
}

