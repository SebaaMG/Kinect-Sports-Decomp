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
extern int fn_8268AF70();
extern int fn_8268BA10();
extern int fn_826D7938();
extern int fn_826DA7D8();


void fn_826DC860(int *param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = fn_8268AF70(((ulonglong)*param_3 & 0xfffffffc) + 8,
                       *(uint *)(*param_3 & 0xfffffffc) & 0x7fffffff,0x1505);
  iVar1 = *param_1;
  if ((iVar1 == 0) ||
     (iVar3 = fn_826D7938(param_1,param_3,*(uint *)(iVar1 + 4) & uVar2), iVar3 < 0)) {
    fn_826DA7D8(param_1,param_2,param_3,uVar2);
  }
  else {
    fn_8268BA10(iVar3 * 0xc + iVar1 + 0x10,param_3);
  }
  return;
}

