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


undefined4 fn_823692A0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 **ppuVar6;
  undefined4 *puStack_10;
  undefined4 *apuStack_c [3];
  
  piVar1 = *(int **)(**(int **)(param_1 + 8) + (uint)(param_3 == 0) * 4);
  uVar4 = 0;
  iVar2 = *(int *)(piVar1[4] * 4 + *piVar1);
  if (*(uint *)(iVar2 + 8) != 0) {
    do {
      if (*(int *)(((uint)(param_3 == 0) * 7 + 0x59 + uVar4) * 0x30 + param_1) ==
          *(int *)((param_3 * 7 + param_2 + 0x59) * 0x30 + param_1)) {
        puVar3 = (undefined4 *)(*(undefined4 **)(iVar2 + 4))[1];
        puStack_10 = *(undefined4 **)(iVar2 + 4);
        while (puVar5 = puVar3, *(char *)((int)puVar5 + 0x15) == '\0') {
          if ((uint)puVar5[3] < uVar4) {
            puVar3 = (undefined4 *)puVar5[2];
          }
          else {
            puVar3 = (undefined4 *)*puVar5;
            puStack_10 = puVar5;
          }
        }
        if ((puStack_10 == *(undefined4 **)(iVar2 + 4)) || (uVar4 < (uint)puStack_10[3])) {
          apuStack_c[0] = *(undefined4 **)(iVar2 + 4);
          ppuVar6 = apuStack_c;
        }
        else {
          ppuVar6 = &puStack_10;
        }
        return (*ppuVar6)[4];
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(iVar2 + 8));
  }
  return 0;
}

