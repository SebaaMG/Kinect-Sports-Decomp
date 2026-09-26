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


void fn_83016F60(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *param_2;
  param_1[1] = 0;
  *param_1 = iVar1;
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *param_3;
  while( true ) {
    piVar2 = (int *)*param_1;
    if ((iVar1 != piVar2[1]) || (bVar4 = true, param_3[1] != piVar2[2])) {
      bVar4 = false;
    }
    if (bVar4) break;
    iVar3 = *piVar2;
    param_1[1] = (int)piVar2;
    *param_1 = iVar3;
    if (iVar3 == 0) {
      return;
    }
  }
  return;
}

