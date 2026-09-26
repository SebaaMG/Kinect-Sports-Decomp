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


int * fn_82DAA348(longlong param_1,ulonglong param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  
  iVar1 = fn_82CE5410();
  piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 0x10) + 4))
                            (*(int **)(iVar1 + 0x10),
                             ((longlong)(short)param_1 + 3U & 0x3fffffff) << 2);
  lVar4 = (param_2 & 0xfffffff) * 0x10;
  iVar1 = (int)param_1;
  piVar2[1] = iVar1;
  *piVar2 = iVar1;
  lVar3 = lVar4 + 0x20;
  piVar5 = piVar2 + 3;
  piVar2[2] = (int)lVar3;
  if (0 < iVar1) {
    do {
      iVar1 = fn_82CE5410();
      iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),lVar3);
      *piVar5 = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x18) = (int)lVar4;
        *(undefined4 *)(iVar1 + 0x14) = 0;
        *(undefined4 *)(iVar1 + 0x10) = 0x10;
      }
      param_1 = param_1 + -1;
      piVar5 = piVar5 + 1;
    } while (param_1 != 0);
  }
  return piVar2;
}

