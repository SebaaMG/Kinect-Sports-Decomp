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
extern int fn_82639EA8();
extern unsigned int lbl_8320A898;
extern unsigned int uStack_10;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_c;


void fn_82864798(int param_1)

{
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_2c = (undefined4)(longlong)*(float *)(param_1 + 0xec);
  uStack_18 = uStack_2c;
  uStack_24 = (undefined4)(longlong)*(float *)(param_1 + 0xf0);
  uStack_14 = uStack_24;
  uStack_2c = (undefined4)(longlong)*(float *)(param_1 + 0xe4);
  uStack_24 = (undefined4)(longlong)*(float *)(param_1 + 0xe8);
  uStack_10 = *(undefined4 *)(param_1 + 0xf4);
  uStack_c = *(undefined4 *)(param_1 + 0xf8);
  uStack_20 = uStack_2c;
  uStack_1c = uStack_24;
  fn_82639EA8(lbl_8320A898,&uStack_20);
  return;
}

