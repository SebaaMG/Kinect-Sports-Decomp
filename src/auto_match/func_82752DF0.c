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


undefined8 fn_82752DF0(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = *param_1;
  iVar1 = *param_2;
  if (iVar5 == iVar1) {
    uVar2 = 1;
  }
  else {
    if ((((*(uint *)(*(int *)(*(int *)(iVar1 + 0x14) + 0xc) + 0x14) | *(uint *)(iVar1 + 8)) ^
         (*(uint *)(*(int *)(*(int *)(iVar5 + 0x14) + 0xc) + 0x14) | *(uint *)(iVar5 + 8))) & 0x313)
        == 0) {
      puVar3 = (uint *)(*(uint *)(iVar1 + 0xc) & 0xfffffffc);
      if ((*puVar3 & 0x7fffffff) == 0) {
        puVar3 = (uint *)(**(code **)(**(int **)(*(int *)(iVar1 + 0x14) + 0xc) + 0x3c))();
      }
      else {
        puVar3 = puVar3 + 2;
      }
      puVar4 = (uint *)(*(uint *)(*param_1 + 0xc) & 0xfffffffc);
      if ((*puVar4 & 0x7fffffff) == 0) {
        puVar4 = (uint *)(**(code **)(**(int **)(*(int *)(*param_1 + 0x14) + 0xc) + 0x3c))();
      }
      else {
        puVar4 = puVar4 + 2;
      }
      iVar5 = thunk_FUN_82f65ac0(puVar4,puVar3);
      if (iVar5 == 0) {
        return 1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

