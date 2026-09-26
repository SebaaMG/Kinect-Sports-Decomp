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
extern unsigned int *auStack_58;
extern int fn_82C10AD0();
extern int fn_82C10B28();
extern int fn_82C1EAB8();
extern int fn_82F691F0();
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


undefined8 fn_82C1F3F8(int param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong lVar12;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 auStack_58 [22];
  
  piVar3 = *(int **)(param_1 + 0x1c);
  uVar10 = param_2 - 0x18;
  auStack_58[0] = 0;
  uStack_60 = 0;
  uStack_5c = (undefined4)uVar10;
  uVar6 = (**(code **)(*piVar3 + 0xc))(*piVar3,uVar10);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  iVar4 = piVar3[1];
  if (0 < *(short *)(iVar4 + 0x3c)) {
    return 0xffffffff8050000c;
  }
  if (*(int *)(iVar4 + 0x78) == 0) {
    uVar6 = fn_82C10AD0(piVar3[0x38],0xb,0x10,iVar4 + 0x78);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    puVar8 = *(undefined4 **)(piVar3[1] + 0x78);
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
  }
  piVar5 = *(int **)(piVar3[1] + 0x78);
  if (*piVar5 != 0) {
    return 0xffffffff8050000c;
  }
  uVar6 = fn_82C10AD0(piVar3[0x38],0xb,0x20,piVar5);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  puVar8 = (undefined4 *)(*piVar5 + -4);
  lVar12 = 8;
  do {
    puVar8 = puVar8 + 1;
    *puVar8 = 0;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  piVar5 = (int *)*piVar5;
  if (3 < (uVar10 & 0xffffffff)) {
    piVar11 = piVar5 + 4;
    uVar6 = fn_82C1EAB8(param_1,piVar11,auStack_58,&uStack_60,&uStack_5c);
    if ((int)uVar6 < 0) goto LAB_82c1f7ac;
    if (*piVar11 != 0) {
      uVar6 = fn_82C10AD0(piVar3[0x38],0xb,*piVar11,piVar5 + 5);
      if (-1 < (int)uVar6) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(piVar5[5],0,*piVar11);
      }
      goto LAB_82c1f7ac;
    }
    if (7 < (uVar10 & 0xffffffff)) {
      uVar6 = fn_82C1EAB8(param_1,piVar5,auStack_58,&uStack_60,&uStack_5c);
      if ((int)uVar6 < 0) goto LAB_82c1f7ac;
      if (*piVar5 != 0) {
        uVar6 = fn_82C10AD0(piVar3[0x38],0xb,*piVar5,piVar5 + 1);
        if (-1 < (int)uVar6) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(piVar5[1],0,*piVar5);
        }
        goto LAB_82c1f7ac;
      }
      if (0xb < (uVar10 & 0xffffffff)) {
        piVar11 = piVar5 + 2;
        uVar6 = fn_82C1EAB8(param_1,piVar11,auStack_58,&uStack_60,&uStack_5c);
        if (-1 < (int)uVar6) {
          if (*piVar11 == 0) {
            pcVar9 = (char *)piVar5[1];
            if (pcVar9 != (char *)0x0) {
              pcVar7 = "DRM";
              do {
                cVar1 = *pcVar9;
                cVar2 = *pcVar7;
                if (cVar1 == '\0') break;
                pcVar9 = pcVar9 + 1;
                pcVar7 = pcVar7 + 1;
              } while (cVar1 == cVar2);
              if (cVar1 == cVar2) {
                *(undefined4 *)(piVar3[1] + 0x44) = 1;
              }
            }
            uVar10 = (uVar10 - uStack_60) - 0xc;
            if (uVar10 != 0) {
              uVar6 = (**(code **)(*piVar3 + 0x14))(*piVar3,uVar10);
              if ((int)uVar6 < 0) goto LAB_82c1f7ac;
              *(ulonglong *)(piVar3 + 2) = (uVar10 & 0xffffffff) + *(longlong *)(piVar3 + 2);
            }
            *(short *)(piVar3[1] + 0x3c) = *(short *)(piVar3[1] + 0x3c) + 1;
            return uVar6;
          }
          uVar6 = fn_82C10AD0(piVar3[0x38],0xb,*piVar11,piVar5 + 3);
          if (-1 < (int)uVar6) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(piVar5[3],0,*piVar11);
          }
        }
        goto LAB_82c1f7ac;
      }
    }
  }
  uVar6 = 0xffffffff8050000c;
LAB_82c1f7ac:
  if (piVar5 == (int *)0x0) {
    return uVar6;
  }
  if (piVar5[1] != 0) {
    fn_82C10B28(piVar3[0x38],0xb,piVar5 + 1);
  }
  if (piVar5[3] != 0) {
    fn_82C10B28(piVar3[0x38],0xb,piVar5 + 3);
  }
  if (piVar5[5] != 0) {
    fn_82C10B28(piVar3[0x38],0xb,piVar5 + 5);
    return uVar6;
  }
  return uVar6;
}

