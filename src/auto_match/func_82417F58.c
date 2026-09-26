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


undefined4 fn_82417F58(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  undefined4 *puStack_10;
  undefined4 *apuStack_c [3];
  
  uVar1 = param_1[7];
  iVar3 = *(int *)(param_1[6] * 0x1ac + param_1[2]);
  iVar2 = **(int **)(*param_1 + 8);
  if ((iVar3 < (*(int **)(*param_1 + 8))[1] - iVar2 >> 2) &&
     (piVar4 = *(int **)(iVar3 * 4 + iVar2), iVar2 = *(int *)(piVar4[4] * 4 + *piVar4),
     uVar1 < *(uint *)(iVar2 + 8))) {
    puVar5 = (undefined4 *)(*(undefined4 **)(iVar2 + 4))[1];
    puStack_10 = *(undefined4 **)(iVar2 + 4);
    while (puVar6 = puVar5, *(char *)((int)puVar6 + 0x15) == '\0') {
      if ((uint)puVar6[3] < uVar1) {
        puVar5 = (undefined4 *)puVar6[2];
      }
      else {
        puVar5 = (undefined4 *)*puVar6;
        puStack_10 = puVar6;
      }
    }
    if ((puStack_10 == *(undefined4 **)(iVar2 + 4)) || (uVar1 < (uint)puStack_10[3])) {
      apuStack_c[0] = *(undefined4 **)(iVar2 + 4);
      ppuVar7 = apuStack_c;
    }
    else {
      ppuVar7 = &puStack_10;
    }
    return (*ppuVar7)[4];
  }
  return 0;
}

