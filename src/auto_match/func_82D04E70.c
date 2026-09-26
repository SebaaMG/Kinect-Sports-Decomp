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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CF6B28();


void fn_82D04E70(uint *param_1,longlong param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((int)param_2 != 0) {
    fn_82CF6B28((ulonglong)*param_1,(ulonglong)*param_1 + param_2);
  }
  uVar3 = param_3 + 1;
  iVar1 = fn_82CE5410();
  if ((int)(param_1[2] & 0x3fffffff) < (int)uVar3) {
    uVar2 = (param_1[2] & 0x3fffffff) << 1;
    if ((int)uVar2 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    fn_82CE6310(*(undefined4 *)(iVar1 + 0xc),param_1,uVar2,1);
  }
  param_1[1] = uVar3;
  *(undefined1 *)(*param_1 + param_3) = 0;
  return;
}

