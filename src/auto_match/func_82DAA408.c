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


void fn_82DAA408(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = *param_1;
  iVar3 = 0;
  if (0 < iVar4) {
    piVar5 = param_1 + 2;
    do {
      iVar4 = param_1[2];
      piVar5 = piVar5 + 1;
      iVar1 = *piVar5;
      iVar2 = fn_82CE5410();
      (**(code **)(**(int **)(iVar2 + 0x10) + 8))(*(int **)(iVar2 + 0x10),iVar1,iVar4);
      iVar4 = *param_1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  iVar3 = fn_82CE5410();
  (**(code **)(**(int **)(iVar3 + 0x10) + 8))
            (*(int **)(iVar3 + 0x10),param_1,((longlong)(short)iVar4 + 3U & 0x3fffffff) << 2);
  return;
}

