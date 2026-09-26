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
extern int fn_82FA5190();
extern int fn_82FA7D18();
extern int fn_82FB38A8();
extern int fn_82FF6828();
extern int fn_82FF7968();
extern int fn_82FF7B98();
extern unsigned int lbl_831BC768;


void fn_82FF7CB8(int param_1)

{
  fn_82FF6828();
  fn_82FF7B98(param_1,0);
  if (*(int *)(param_1 + 4) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 4);
    fn_82FA5190(lbl_831BC768);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  fn_82FB38A8(param_1 + 0x10);
  fn_82FA7D18(param_1 + 0x30);
  fn_82FF7968(param_1,param_1 + 0x6c);
  fn_82FF7968(param_1,param_1 + 0x78);
  return;
}

