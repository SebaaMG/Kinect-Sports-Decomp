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
extern int fn_82FFF250();


int * fn_82FFF348(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)param_3[2];
  iVar2 = *param_3;
  uVar4 = param_3[1];
  iVar3 = param_3[3];
  param_1[2] = iVar1;
  *param_1 = iVar2;
  param_1[1] = uVar4;
  param_1[3] = iVar3;
  while (iVar1 == 0) {
    uVar4 = uVar4 + 1;
    param_1[1] = uVar4;
    if (0xc0 < uVar4) break;
    param_1[3] = 0;
    iVar1 = *(int *)(uVar4 * 4 + iVar2);
    param_1[2] = iVar1;
  }
  fn_82FFF250(param_2);
  return param_1;
}

