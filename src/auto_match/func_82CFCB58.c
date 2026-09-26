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


int * fn_82CFCB58(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = param_2[1];
  iVar1 = fn_82CE5410();
  iVar2 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),iVar2);
  iVar1 = 0;
  if (0 < (longlong)((ulonglong)(uint)param_2[1] - 1)) {
    do {
      cVar3 = *(char *)(*param_2 + iVar1);
      if (('`' < cVar3) && (cVar3 < '{')) {
        cVar3 = cVar3 + -0x20;
      }
      *(char *)(iVar1 + iVar2) = cVar3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2[1] + -1);
  }
  iVar1 = param_2[1];
  *param_1 = iVar2;
  *(undefined1 *)(iVar2 + iVar1 + -1) = 0;
  iVar2 = param_2[1];
  param_1[1] = iVar2;
  param_1[2] = iVar2;
  return param_1;
}

