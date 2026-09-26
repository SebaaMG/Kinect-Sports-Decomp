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
extern int fn_8223C258();
extern int fn_82F68CC0();


void fn_8223CE40(int param_1,undefined8 param_2,ulonglong param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0x40) = param_4;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (((param_3 & 0xffffffff) != 0) && ((param_4 & 6) != 6)) {
    lVar1 = fn_8223C258(param_3,0);
    fn_82F68CC0(lVar1,param_2,param_3);
    *(int *)(param_1 + 0x3c) = (int)(lVar1 + param_3);
    iVar3 = (int)lVar1;
    if ((*(uint *)(param_1 + 0x40) & 4) == 0) {
      **(int **)(param_1 + 0x10) = iVar3;
      **(int **)(param_1 + 0x20) = iVar3;
      **(int **)(param_1 + 0x30) = (int)param_3;
    }
    if ((*(uint *)(param_1 + 0x40) & 2) == 0) {
      lVar2 = lVar1 + param_3;
      if ((*(uint *)(param_1 + 0x40) & 0x10) == 0) {
        lVar2 = lVar1;
      }
      **(int **)(param_1 + 0x14) = iVar3;
      **(int **)(param_1 + 0x24) = (int)lVar2;
      **(int **)(param_1 + 0x34) = (iVar3 - (int)lVar2) + (int)param_3;
      if (**(int **)(param_1 + 0x20) == 0) {
        **(int **)(param_1 + 0x10) = iVar3;
        **(undefined4 **)(param_1 + 0x20) = 0;
        **(int **)(param_1 + 0x30) = iVar3;
      }
    }
    *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 1;
  }
  return;
}

