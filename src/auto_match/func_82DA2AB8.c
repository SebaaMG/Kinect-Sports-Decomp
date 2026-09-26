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
extern int fn_82CE63B0();
extern int fn_82D8D918();


void fn_82DA2AB8(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 != 0) && (iVar1 = fn_82D8D918(), iVar1 == 0)) {
    iVar1 = fn_82CE5410();
    if (*(uint *)(param_1 + 0x164) == (*(uint *)(param_1 + 0x168) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(undefined4 *)(iVar1 + 0x10),(int *)(param_1 + 0x160),4);
    }
    iVar1 = *(int *)(param_1 + 0x164);
    *(int *)(param_1 + 0x164) = iVar1 + 1;
    *(int **)(iVar1 * 4 + *(int *)(param_1 + 0x160)) = param_2;
    *(undefined1 *)(param_1 + 0x16c) = 1;
  }
  return;
}

