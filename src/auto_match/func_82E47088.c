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
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82F68CC0();


undefined8 fn_82E47088(int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  
  uVar4 = 0;
  if (param_2 == 0) {
    uVar4 = 0xffffffff80070057;
  }
  else {
    puVar5 = (uint *)(param_1 + 0x68);
    uVar3 = 3;
    if (*(uint **)(param_1 + 0x74) != puVar5) {
      uVar3 = *puVar5;
    }
    if (uVar3 <= *(uint *)(param_1 + 100)) {
      uVar3 = *(uint *)(param_1 + 100) + 3;
      lVar2 = ((ulonglong)uVar3 & 0x3fffffff) << 2;
      if (0x3fffffff < uVar3) {
        lVar2 = -1;
      }
      lVar2 = fn_82E50BE8(lVar2,0,0,0,0);
      if (lVar2 == 0) {
        return 0xffffffff8007000e;
      }
      fn_82F68CC0(lVar2,*(undefined4 *)(param_1 + 0x74),*(int *)(param_1 + 100) << 2);
      if (*(uint **)(param_1 + 0x74) != puVar5) {
        if (*(uint **)(param_1 + 0x74) != (uint *)0x0) {
          fn_82E4FE40();
        }
        *(undefined4 *)(param_1 + 0x74) = 0;
      }
      *(int *)(param_1 + 0x74) = (int)lVar2;
      *puVar5 = uVar3;
    }
    *(int *)(*(int *)(param_1 + 100) * 4 + *(int *)(param_1 + 0x74)) = param_2;
    iVar1 = *(int *)(param_1 + 100) * 4;
    (**(code **)(**(int **)(iVar1 + *(int *)(param_1 + 0x74)) + 4))
              (*(undefined4 *)(iVar1 + *(int *)(param_1 + 0x74)));
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  }
  return uVar4;
}

