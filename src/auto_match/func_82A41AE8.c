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
extern int fn_8265C990();
extern int fn_82A40C90();
extern int fn_82A41248();
extern int fn_82A4F4E0();


void fn_82A41AE8(int param_1)

{
  int iVar1;
  
  while (iVar1 = fn_82A40C90(param_1), iVar1 != 0) {
    if (iVar1 != 0) {
      fn_82A4F4E0();
    }
  }
  while (iVar1 = fn_82A40C90(param_1 + 0x7c), iVar1 != 0) {
    if (iVar1 != 0) {
      fn_82A4F4E0();
    }
  }
  if (*(int *)(param_1 + 0xfc) != 0) {
    fn_8265C990(*(int *)(param_1 + 0xfc),*(undefined4 *)(param_1 + 0xf8));
  }
  fn_82A41248(param_1 + 0x7c);
  fn_82A41248(param_1);
  return;
}

