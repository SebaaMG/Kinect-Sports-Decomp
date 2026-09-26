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
extern unsigned int *auStack_80;
extern int fn_8268CEC0();
extern int fn_8268D5D8();
extern int fn_82F68CC0();
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_827175C0(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_80 [128];
  
  if (*(int *)(param_1[0x27] + 0x1c) != 0) {
    uVar9 = 0;
    iVar1 = param_2[8];
    puVar2 = (undefined4 *)param_2[0x10];
    iVar3 = param_2[0x11];
    param_2[8] = *(int *)(param_1[0x1f] + 0x1c) + 0x18;
    iVar4 = param_1[0x27];
    piVar5 = *(int **)(*param_2 + 0xc);
    if (*(int *)(iVar4 + 0x1c) != 0) {
      iVar10 = 0;
      iVar11 = 0;
      do {
        piVar12 = (int *)(*(int *)(iVar4 + 0x18) + iVar11);
        piVar6 = *(int **)(iVar10 + param_1[0x29]);
        if (piVar6 != (int *)0x0) {
          iVar4 = param_1[0x2e];
          if (iVar4 == 0) {
            if ((*(byte *)(piVar12 + 0x12) & 8) == 0) goto LAB_82717654;
LAB_8271767c:
            bVar7 = true;
          }
          else {
LAB_82717654:
            if (iVar4 == 1) {
              if ((*(byte *)(piVar12 + 0x12) & 2) != 0) goto LAB_8271767c;
            }
            if ((iVar4 == 2) && ((*(byte *)(piVar12 + 0x12) & 4) != 0)) goto LAB_8271767c;
            bVar7 = false;
          }
          if (bVar7) {
            uStack_a0 = *puVar2;
            uStack_9c = puVar2[1];
            uStack_98 = puVar2[2];
            uStack_94 = puVar2[3];
            uStack_90 = puVar2[4];
            uStack_8c = puVar2[5];
            fn_8268CEC0(&uStack_a0,param_1 + 0x11);
            param_2[0x10] = (int)&uStack_a0;
            fn_82F68CC0(auStack_80,iVar3,0x20);
            fn_8268D5D8(auStack_80,param_1 + 9);
            param_2[0x11] = (int)auStack_80;
            if (*piVar12 != 0) {
              (**(code **)(*piVar6 + 0x1c))(piVar6);
            }
            iVar4 = *piVar5;
            uVar8 = (**(code **)(*piVar6 + 0xc))(piVar6);
            (**(code **)(iVar4 + 0x2c))(piVar5,uVar8);
            (**(code **)(*piVar6 + 0x60))(piVar6,param_2);
            (**(code **)(*piVar5 + 0x30))(piVar5);
          }
        }
        iVar4 = param_1[0x27];
        uVar9 = uVar9 + 1;
        iVar11 = iVar11 + 0x4c;
        iVar10 = iVar10 + 4;
      } while (uVar9 < *(uint *)(iVar4 + 0x1c));
    }
    param_2[8] = iVar1;
    param_2[0x10] = (int)puVar2;
    param_2[0x11] = iVar3;
    (**(code **)(*param_1 + 0xf4))(param_1);
  }
  return;
}

