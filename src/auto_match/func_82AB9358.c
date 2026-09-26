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
extern int fn_82AB15D0();
extern int fn_82AB5FE0();
extern int fn_82AB6498();
extern int fn_82AB6770();
extern int fn_82AB67A8();
extern int fn_82AB6BC8();
extern int fn_82B6B230();


void fn_82AB9358(undefined4 *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d74d0,0xffffffff820d74e0,0xc1);
  }
  if (param_2 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d74c8,0xffffffff820d74e0,0xc2);
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    lVar1 = fn_82AB6498();
    while (lVar1 != 0) {
      lVar2 = fn_82AB67A8(lVar1);
      if (lVar2 == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d683c,0xffffffff820d74e0,0xcb);
      }
      fn_82AB6BC8(lVar2);
      fn_82AB6770(lVar1);
      lVar1 = fn_82AB6498(*(undefined4 *)(param_2 + 0xc));
    }
    fn_82AB5FE0(*(undefined4 *)(param_2 + 0xc));
  }
  if (*(int *)(param_2 + 4) != 0) {
    (*(code *)param_1[3])(param_1[1]);
  }
  fn_82B6B230(*param_1,param_2);
  return;
}

