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
extern int fn_82FA7188();
extern int fn_82FA8F10();
extern unsigned int lbl_83264230;


undefined8 fn_82FABF68(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  fn_82FA8F10();
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = fn_82FA7188(lbl_83264230,param_1,param_3,param_2);
  }
  else {
    uVar1 = 1;
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x38);
  }
  return uVar1;
}

