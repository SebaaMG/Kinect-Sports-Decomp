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
extern int fn_8257A9F0();
extern int fn_82822F60();
extern int fn_82824278();
extern int fn_82824290();
extern int fn_828252E8();
extern int fn_82830110();
extern int fn_82F68CC0();


void fn_82835688(int param_1,int param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int aiStack_60 [24];
  
  piVar7 = *(int **)(param_1 + 0x388);
  uVar2 = piVar7[1] - *piVar7 >> 5;
  param_3 = (int)uVar2 + param_3;
  fn_82830110(piVar7,param_3);
  uVar4 = 0;
  if (*(int *)(param_2 + 0xa0) != 0) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x3c8) + iVar6);
      if (uVar2 <= uVar1) {
        piVar7 = (int *)(**(int **)(param_2 + 0x388) + iVar5);
        puVar8 = (undefined4 *)(uVar1 * 0x20 + **(int **)(param_1 + 0x388));
        fn_82F68CC0(puVar8,piVar7,0x20);
        cVar3 = fn_82824278(piVar7);
        if (cVar3 != '\0') {
          *puVar8 = *(undefined4 *)(*piVar7 * 4 + *(int *)(param_1 + 0x3c8));
        }
        cVar3 = fn_82824290(piVar7);
        if (cVar3 != '\0') {
          puVar8[1] = *(undefined4 *)(piVar7[1] * 4 + *(int *)(param_1 + 0x3c8));
        }
        puVar8[3] = (*(int **)(param_1 + 0x3bc))[1] - **(int **)(param_1 + 0x3bc) >> 2;
        puVar8 = (undefined4 *)(**(int **)(param_2 + 0x3bc) + piVar7[3] * 4);
        fn_8257A9F0(*(undefined4 *)(param_1 + 0x3bc),puVar8);
        aiStack_60[0] = fn_828252E8(param_1,0x18);
        *(int *)(aiStack_60[0] + 0x10) = param_1;
        *(undefined4 *)(aiStack_60[0] + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x3c8) + iVar6);
        fn_82822F60(param_1 + 0x38c,aiStack_60[0],0xffffffff82824430,aiStack_60);
        *puVar8 = 0;
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x20;
      iVar6 = iVar6 + 4;
    } while (uVar4 < *(uint *)(param_2 + 0xa0));
  }
  *(int *)(param_1 + 0xa0) = (int)param_3;
  return;
}

