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


void fn_82A51140(int param_1,int param_2,undefined8 param_3)

{
  float fVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  uint uVar5;
  ulonglong uVar4;
  int iVar6;
  uint uVar7;
  int *piVar8;
  
  piVar8 = *(int **)(param_1 + 0x20);
  do {
    if (piVar8 == (int *)0x0) {
      return;
    }
    if (piVar8 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar8;
      piVar8 = (int *)piVar8[1];
    }
  } while (*(int *)(iVar6 + 4) != param_2);
  puVar2 = *(undefined4 **)(iVar6 + 8);
  fVar1 = *(float *)(*(int *)(iVar6 + 4) + 0x48);
  if ((float)puVar2[4] == fVar1) {
    return;
  }
  puVar2[4] = fVar1;
  uVar3 = 0;
  uVar7 = 0;
  if (puVar2[1] != 0) {
    uVar5 = puVar2[2];
    do {
      uVar7 = 0;
      if (uVar5 != 0) {
        do {
          uVar4 = (longlong)(int)uVar7 * (longlong)(int)puVar2[1] + uVar3;
          uVar7 = uVar7 + 1;
          *(float *)((int)((uVar4 + 3 & 0xffffffff) << 2) + puVar2[6]) =
               *(float *)((int)((uVar4 & 0xffffffff) << 2) + puVar2[5]) *
               *(float *)((int)((uVar3 & 0xffffffff) << 2) + puVar2[3]) * (float)puVar2[4];
          uVar5 = puVar2[2];
        } while (uVar7 < uVar5);
      }
      uVar7 = puVar2[1];
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (ulonglong)uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x82a434b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*puVar2 + 8))
            ((int *)*puVar2,0,param_3,puVar2[6],
             ((longlong)(int)puVar2[2] * (longlong)(int)uVar7 + 3U & 0x3fffffff) << 2);
  return;
}

