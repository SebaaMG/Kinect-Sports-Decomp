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
extern int fn_82681728();
extern int fn_826944C8();


int * fn_82749D70(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar3;
  longlong lVar2;
  int aiStack_20 [4];
  
  fn_82681728(aiStack_20,(ulonglong)*param_2 + 0x254,0xffffffff82012d94);
  iVar1 = *(int *)(aiStack_20[0] + 8);
  *param_1 = aiStack_20[0];
  uVar3 = iVar1 + 1;
  *(uint *)(aiStack_20[0] + 8) = uVar3;
  lVar2 = (ulonglong)uVar3 - 1;
  *(int *)(aiStack_20[0] + 8) = (int)lVar2;
  if (lVar2 == 0) {
    fn_826944C8();
  }
  return param_1;
}

