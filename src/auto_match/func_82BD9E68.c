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
extern unsigned int *auStack_40;
extern int fn_8265C990();
extern int fn_82BD7D68();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_38;


void fn_82BD9E68(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 auStack_40 [2];
  undefined4 uStack_38;
  undefined4 *puStack_34;
  
  puStack_34 = auStack_40;
  auStack_40[0] = 0;
  uStack_38 = 1;
  if (param_1 != 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      puVar2 = (undefined4 *)(param_1 + 0x14);
      do {
        fn_82BD7D68(puVar2[1]);
        uVar1 = uVar1 + 1;
        puVar2 = puVar2 + 1;
        *puVar2 = 0;
      } while (uVar1 < *(uint *)(param_1 + 0x20));
    }
    uVar1 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      puVar2 = (undefined4 *)(param_1 + 8);
      do {
        (**(code **)(*(int *)puVar2[1] + 4))();
        uVar1 = uVar1 + 1;
        puVar2 = puVar2 + 1;
        *puVar2 = 0;
      } while (uVar1 < *(uint *)(param_1 + 0x14));
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      if (*(int **)(param_1 + 0x48) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x48) + 0x30))((double)lbl_821AAD20);
        (**(code **)(**(int **)(param_1 + 0x48) + 8))(*(int **)(param_1 + 0x48),0);
        (**(code **)(**(int **)(param_1 + 0x48) + 4))(*(int **)(param_1 + 0x48),&uStack_38);
      }
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    if (*(int **)(param_1 + 0x48) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x48) + 0x48))();
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    if (*(int **)(param_1 + 0x50) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x50) + 0x48))();
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    fn_8265C990(param_1,0x618a8010);
  }
  return;
}

