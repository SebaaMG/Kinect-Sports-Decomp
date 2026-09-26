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
extern int fn_82E3F480();
extern int fn_82E40928();
extern int fn_82E50CB8();
extern int fn_82E50F10();


undefined8 fn_82E40C38(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  fn_82E50CB8(param_1 + 8);
  if ((*(uint *)(param_1 + 0x44) & 1) == 0) {
    uVar1 = 0xffffffffc00d36b2;
  }
  else {
    uVar1 = fn_82E40928(param_1,param_2,param_3,param_4);
    if (-1 < (int)uVar1) {
      uVar1 = fn_82E3F480(param_1,*(undefined4 *)(param_1 + 0x50));
    }
  }
  fn_82E50F10(param_1 + 8);
  return uVar1;
}

