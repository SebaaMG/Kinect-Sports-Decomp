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
extern int fn_8223C478();
extern int fn_823B4970();
extern int fn_828E9D40();
extern int fn_828E9D60();
extern int fn_828E9D90();
extern int fn_828E9F18();


void fn_823B44E0(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  fn_8223C478(param_2,0x1e,0);
  fn_828E9F18(param_2,uVar1,0x1e);
  uVar1 = fn_828E9D90(*(undefined4 *)(param_1 + 0x80));
  fn_828E9D40(*(undefined4 *)(param_1 + 0x80));
  fn_823B4970(param_2,*(undefined4 *)(param_1 + 0x80),uVar1,0);
  fn_828E9D60(*(undefined4 *)(param_1 + 0x80),uVar1);
  return;
}

