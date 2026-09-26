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
extern int fn_8263AB38();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82A94F88(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  fn_8263AB38(param_1,&uStack_20,&uStack_1c);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uStack_20;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uStack_1c;
  }
  return;
}

