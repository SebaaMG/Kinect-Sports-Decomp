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


undefined8 fn_82967DD8(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x14));
  uVar1 = *(uint *)(iVar2 + 0x48);
  if (uVar1 == 0xffffffff) {
    return 1;
  }
  if ((param_4 <= uVar1) && (uVar1 < param_5)) {
    iVar3 = *(int *)(**(int **)(param_3 + 0x10) * 4 + *(int *)(param_1 + 0x14));
    iVar4 = *(int *)(iVar3 + 0x14);
    iVar3 = *(int *)(iVar3 + 0x18);
    if (iVar4 != -1) {
      do {
        if (iVar4 == *(int *)(iVar2 + 0x14)) break;
        iVar3 = *(int *)(iVar4 * 4 + *(int *)(param_1 + 0x14));
        iVar4 = *(int *)(iVar3 + 0x14);
        iVar3 = *(int *)(iVar3 + 0x18);
      } while (iVar4 != -1);
    }
    if ((iVar4 == *(int *)(iVar2 + 0x14)) && (iVar3 == *(int *)(iVar2 + 0x18))) {
      return 1;
    }
  }
  return 0;
}

