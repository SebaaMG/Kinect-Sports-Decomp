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
extern int fn_8296CF68();
extern int fn_82F691F0();


void fn_8297AE90(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  *(int **)(param_1 + 0xbc) = param_2;
  param_2[0x18] = (param_3 & 1) << 0x1e | param_2[0x18] & 0xbfffffffU;
  fn_8296CF68();
  uVar2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(iVar3 + *(int *)(param_1 + 0x14));
      if (((*param_2 == *(int *)(iVar1 + 4)) && (*(int *)(iVar1 + 0x38) == -1)) &&
         (*(uint *)(iVar1 + 0x58) <= *(uint *)(iVar1 + 0x48))) {
        *(uint *)(iVar1 + 0x58) = *(uint *)(iVar1 + 0x48) + 1;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_2[4],0xff,param_2[10] << 2);
}

