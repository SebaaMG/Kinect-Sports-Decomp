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


byte fn_829035D8(int param_1,int *param_2,int param_3,ulonglong param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  
  uVar2 = (uint)param_4;
  if (param_3 == 2) {
    if ((longlong)(int)uVar2 * (longlong)(int)param_5 == 0) {
LAB_82903600:
      bVar1 = 0;
    }
    else {
      uVar7 = 0;
      if (uVar2 != 0) {
        iVar8 = 0;
        piVar9 = param_2;
        do {
          uVar5 = 0;
          iVar6 = *(int *)(*piVar9 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
          if (param_5 != 0) {
            do {
              iVar4 = *(int *)(param_2[iVar8 + uVar5] * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
              if (*(int *)(iVar6 + 4) != *(int *)(iVar4 + 4)) goto LAB_829037ac;
              if ((*(uint *)(*(int *)(*(int *)(iVar6 + 4) * 4 +
                                     *(int *)(*(int *)(param_1 + 8) + 0x10)) + 4) & 0x40) == 0) {
                iVar3 = *(int *)(iVar6 + 0x48);
                iVar4 = *(int *)(iVar4 + 0x48);
              }
              else {
                if ((uVar5 >> 2) + *(int *)(iVar6 + 0xc) != *(int *)(iVar4 + 0xc))
                goto LAB_829037ac;
                iVar4 = *(int *)(iVar4 + 0x10);
                iVar3 = (uVar5 & 3) + *(int *)(iVar6 + 0x10);
              }
              if (iVar3 != iVar4) goto LAB_829037ac;
              uVar5 = uVar5 + 1;
            } while (uVar5 < param_5);
          }
          uVar7 = uVar7 + 1;
          iVar8 = iVar8 + param_5;
          piVar9 = piVar9 + param_5;
        } while (uVar7 < uVar2);
      }
      uVar7 = 0;
      if (param_5 != 0) {
        do {
          uVar5 = 0;
          iVar8 = *(int *)(*param_2 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
          if (uVar2 != 0) {
            piVar9 = param_2;
            do {
              iVar6 = *(int *)(*piVar9 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
              if (*(int *)(iVar8 + 4) != *(int *)(iVar6 + 4)) goto LAB_82903600;
              if ((*(uint *)(*(int *)(*(int *)(iVar8 + 4) * 4 +
                                     *(int *)(*(int *)(param_1 + 8) + 0x10)) + 4) & 0x40) == 0) {
                iVar4 = *(int *)(iVar8 + 0x48);
                iVar6 = *(int *)(iVar6 + 0x48);
              }
              else {
                if ((uVar5 >> 2) + *(int *)(iVar8 + 0xc) != *(int *)(iVar6 + 0xc))
                goto LAB_82903600;
                iVar6 = *(int *)(iVar6 + 0x10);
                iVar4 = (uVar5 & 3) + *(int *)(iVar8 + 0x10);
              }
              if (iVar4 != iVar6) goto LAB_82903600;
              uVar5 = uVar5 + 1;
              piVar9 = piVar9 + param_5;
            } while (uVar5 < uVar2);
          }
          uVar7 = uVar7 + 1;
          param_2 = param_2 + 1;
        } while (uVar7 < param_5);
      }
LAB_829037ac:
      bVar1 = 1;
    }
  }
  else {
    bVar1 = -(1 < param_4) & 1;
  }
  return bVar1;
}

