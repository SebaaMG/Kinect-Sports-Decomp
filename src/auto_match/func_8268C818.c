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
extern int fn_8268B368();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E64;


undefined4 * fn_8268C818(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*param_2;
  uVar1 = param_2[1];
  if (uVar3 == 0) {
    uVar3 = 0xffffffff82196582;
  }
  lVar2 = fn_8268B368(param_1,lbl_831E7E64,uVar1,0);
  fn_82F68CC0(lVar2 + 8,uVar3,uVar1);
  *param_1 = (int)lVar2;
  return param_1;
}

