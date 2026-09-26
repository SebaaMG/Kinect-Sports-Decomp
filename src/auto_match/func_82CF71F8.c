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


undefined4 * fn_82CF71F8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 **ppuVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *apuStack_30 [12];
  
  if (0x2000 < param_2) {
                    /* WARNING: Could not recover jumptable at 0x82cf7278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar3 = (undefined4 *)(**(code **)(**(int **)(param_1 + 4) + 4))();
    return puVar3;
  }
  if (param_2 < 0x221) {
    uVar4 = (ulonglong)*(char *)((param_2 + 0xf >> 4) + param_1 + 0xd8);
  }
  else {
    uVar4 = (ulonglong)*(uint *)(((param_2 + -1 >> 10) + 0x3f) * 4 + param_1);
  }
  iVar2 = (int)uVar4 * 8 + param_1;
  puVar3 = *(undefined4 **)(iVar2 + 0xc);
  if (puVar3 == (undefined4 *)0x0) {
    uVar1 = *(uint *)(param_1 + 8);
    uVar7 = (ulonglong)uVar1;
    if (uVar1 == 0) {
      apuStack_30[0] =
           (undefined4 *)
           (**(code **)(**(int **)(param_1 + 4) + 4))
                     (*(int **)(param_1 + 4),
                      *(undefined4 *)((int)((uVar4 + 0x25 & 0xffffffff) << 2) + param_1));
    }
    else {
      if (3 < (int)uVar1) {
        uVar7 = 4;
      }
      (**(code **)(**(int **)(param_1 + 4) + 0x18))
                (*(int **)(param_1 + 4),apuStack_30,uVar7,
                 *(undefined4 *)((int)((uVar4 + 0x25 & 0xffffffff) << 2) + param_1));
      param_1 = (int)((uVar4 & 0xffffffff) << 3) + param_1;
      if (1 < (int)uVar7) {
        lVar6 = uVar7 - 1;
        ppuVar5 = apuStack_30;
        do {
          ppuVar5 = ppuVar5 + 1;
          puVar3 = *ppuVar5;
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          *puVar3 = *(undefined4 *)(param_1 + 0xc);
          *(undefined4 *)(param_1 + 0xc) = puVar3;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
    }
    return apuStack_30[0];
  }
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + -1;
  *(undefined4 *)(iVar2 + 0xc) = *puVar3;
  return puVar3;
}

