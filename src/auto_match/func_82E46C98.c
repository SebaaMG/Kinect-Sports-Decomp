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


undefined8 fn_82E46C98(int param_1,int *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int aiStack_40 [16];
  
  if (param_2 == (int *)0x0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    uVar2 = 0;
    aiStack_40[0] = 0;
    iVar3 = 0;
    uVar4 = 0;
    if (*(int *)(param_1 + 100) != 0) {
      iVar5 = 0;
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0x74) + iVar5);
        uVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,aiStack_40);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 4;
        iVar3 = aiStack_40[0] + iVar3;
      } while (uVar4 < *(uint *)(param_1 + 100));
    }
    *param_2 = iVar3;
  }
  return uVar2;
}

