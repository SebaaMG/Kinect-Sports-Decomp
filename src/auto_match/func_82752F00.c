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


undefined8 fn_82752F00(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  uVar1 = param_2[1];
  iVar3 = *param_1;
  if (((-(uint)((uVar1 & 0x300) != 0) & 0x300 | uVar1 & 0x10 | 3) &
      (*(uint *)(*(int *)(*(int *)(iVar3 + 0x14) + 0xc) + 0x14) | *(uint *)(iVar3 + 8))) ==
      (uVar1 & 0x313)) {
    puVar2 = (uint *)(*(uint *)(iVar3 + 0xc) & 0xfffffffc);
    if ((*puVar2 & 0x7fffffff) == 0) {
      puVar2 = (uint *)(**(code **)(**(int **)(*(int *)(iVar3 + 0x14) + 0xc) + 0x3c))();
    }
    else {
      puVar2 = puVar2 + 2;
    }
    iVar3 = thunk_FUN_82f65ac0(puVar2,*param_2);
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}

