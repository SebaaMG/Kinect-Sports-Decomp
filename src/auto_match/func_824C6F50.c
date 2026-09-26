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
extern int fn_822980B0();
extern int fn_822B7E80();
extern int fn_82359C18();
extern int fn_8251FA58();
extern int fn_82554630();


void fn_824C6F50(int param_1)

{
  undefined4 *puVar1;
  
  fn_82359C18(param_1 + 0x1e0);
  fn_8251FA58(*(undefined4 *)(param_1 + 0x1d8));
  fn_822980B0(param_1 + 0x1c8);
  fn_822B7E80(param_1 + 0x1b4);
  fn_82554630(param_1 + 0x14);
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

