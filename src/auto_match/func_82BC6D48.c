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
extern int fn_82BD3510();


void fn_82BC6D48(uint *param_1,int *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    uVar1 = fn_82BD3510(param_1,lVar2);
    (**(code **)(*param_2 + 0x58))(param_2,1,lVar2,uVar1);
    lVar2 = lVar2 + 1;
  } while ((int)lVar2 < 4);
  if ((*param_1 & 0x400000) != 0) {
    param_1[1] = param_1[1] & 0xffffba98 | 0x3210;
  }
  return;
}

