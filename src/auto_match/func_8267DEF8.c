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
extern int fn_8267CB38();
extern int fn_8267DBD0();
extern int fn_8267DC50();
extern int fn_8267DD08();
extern int fn_82A1E338();
extern int fn_82A1E508();
extern unsigned int lbl_831E7E6C;


undefined8 fn_8267DEF8(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x24) != -1) {
    fn_82A1E508(0xfffffffffffffffe);
  }
  uVar1 = fn_8267CB38(*(undefined4 *)(param_1 + 0x28));
  fn_82A1E338(0xfffffffffffffffe,uVar1);
  uVar1 = fn_8267DC50(param_1);
  fn_8267DBD0(param_1);
  fn_8267DD08(lbl_831E7E6C,param_1);
  return uVar1;
}

