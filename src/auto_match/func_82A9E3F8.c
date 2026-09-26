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
extern int fn_82A9A4B8();
extern int fn_82A9A548();


int fn_82A9E3F8(int param_1,uint param_2,ulonglong param_3)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = (int *)(param_1 + 0x90);
  iVar1 = *(int *)(param_1 + 0x90);
  if (-1 < iVar1) {
    iVar1 = *(int *)(param_1 + 0x78);
    if (*(uint *)(iVar1 + 4) <= param_2) {
      uVar4 = param_2 + 1;
      if (*(uint *)(iVar1 + 8) < uVar4) {
        fn_82A9A548(iVar1,uVar4,piVar3);
      }
      *(uint *)(iVar1 + 4) = uVar4;
      if (*piVar3 < 0) {
        return *piVar3;
      }
    }
    puVar2 = (uint *)(param_2 * 0x18 + **(int **)(param_1 + 0x78));
    *puVar2 = param_2;
    if ((ulonglong)puVar2[4] <= (param_3 & 0xffffffff)) {
      if ((ulonglong)puVar2[5] < (param_3 & 0xffffffff)) {
        fn_82A9A4B8(puVar2 + 3,param_3,piVar3);
      }
      puVar2[4] = (uint)param_3;
    }
    iVar1 = *piVar3;
  }
  return iVar1;
}

