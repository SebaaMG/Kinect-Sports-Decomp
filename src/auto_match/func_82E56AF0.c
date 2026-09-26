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
extern unsigned int stack0x00000000;


undefined8 fn_82E56AF0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if ((&stack0x00000000 == (undefined1 *)0x20) || ((*(uint *)(param_1 + 8) & 1) == 0)) {
      fn_82E569B0(param_1,0);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
      fn_82E569B0();
      *(undefined4 *)(param_1 + 0xc) = uVar1;
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    }
  }
  return 1;
}

