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
extern int fn_826AA290();


undefined4 * fn_826ADE00(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 0xa8);
  iVar4 = iVar1 * 0xc + *(int *)(param_2 + 0xa4);
  uVar2 = *(undefined4 *)(iVar4 + -8);
  uVar3 = *(undefined4 *)(iVar4 + -4);
  *param_1 = *(undefined4 *)(iVar4 + -0xc);
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  fn_826AA290(param_2 + 0xa4,iVar1 + -1);
  return param_1;
}

