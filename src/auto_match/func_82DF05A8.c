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
extern int fn_82D8A110();
extern int fn_82DF06C0();


undefined1 * fn_82DF05A8(undefined1 *param_1,int param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint *puVar4;
  
  if ((param_3 & 0xffffffff) == 0) {
LAB_82df05c8:
    *param_1 = 0;
  }
  else {
    iVar1 = 0;
    if (0 < *(int *)(param_2 + 0x38)) {
      puVar4 = *(uint **)(param_2 + 0x34);
      do {
        if ((ulonglong)*puVar4 == (param_3 & 0xffffffff)) goto LAB_82df05c8;
        iVar1 = iVar1 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar1 < *(int *)(param_2 + 0x38));
    }
    iVar1 = fn_82CE5410();
    if (*(uint *)(param_2 + 0x38) == (*(uint *)(param_2 + 0x3c) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(undefined4 *)(iVar1 + 0x10),(int *)(param_2 + 0x34),4);
    }
    *(int *)(*(int *)(param_2 + 0x38) * 4 + *(int *)(param_2 + 0x34)) = (int)param_3;
    *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
    puVar2 = (undefined4 *)fn_82DF06C0(param_3);
    iVar1 = 0;
    if (*(ushort *)(puVar2 + 1) != 0) {
      piVar3 = (int *)*puVar2;
      do {
        if (*piVar3 == param_2 + 0x30) {
          if (-1 < iVar1) goto LAB_82df06a8;
          break;
        }
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar1 < (int)(uint)*(ushort *)(puVar2 + 1));
    }
    fn_82D8A110(param_3,param_2 + 0x30);
LAB_82df06a8:
    *param_1 = 1;
  }
  return param_1;
}

