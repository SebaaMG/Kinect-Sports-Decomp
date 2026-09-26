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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern int fn_8265CA60();
extern int fn_8305D7D0();
extern int fn_8305E0F8();
extern int fn_8305EC98();
extern int fn_8305F258();
extern int fn_8305F2E8();
extern int fn_830608F8();
extern int fn_83061BC8();
extern int fn_83068358();
extern int fn_830688E0();
extern int fn_8306AAF0();
extern int fn_8306AB80();


void fn_83067AE8(undefined8 param_1,int param_2,int *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  longlong lVar5;
  uint *puVar6;
  char cVar8;
  int iVar7;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int aiStack_e0 [4];
  undefined4 *puStack_d0;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [160];
  
  puVar3 = (undefined4 *)*param_3;
joined_r0x83067b0c:
  do {
    if (puVar3 == (undefined4 *)0x0) {
      *(int *)(param_2 + 0x10) = param_3[2];
      uVar2 = param_3[2];
      uVar11 = (ulonglong)uVar2;
      uVar10 = uVar11 * 0x54;
      if (0x30c30c3 < uVar11) {
        uVar10 = 0xffffffffffffffff;
      }
      lVar5 = uVar10 + 4;
      if (0xfffffffb < (uVar10 & 0xffffffff)) {
        lVar5 = -1;
      }
      puVar6 = (uint *)fn_8265CA60(lVar5);
      if (puVar6 == (uint *)0x0) {
        puVar13 = (uint *)0x0;
      }
      else {
        lVar5 = uVar11 - 1;
        *puVar6 = uVar2;
        puVar13 = puVar6 + 1;
        if (-1 < lVar5) {
          puVar6 = puVar6 + 2;
          do {
            fn_8305F2E8(puVar6);
            lVar5 = lVar5 + -1;
            puVar6 = puVar6 + 0x15;
          } while (-1 < lVar5);
        }
      }
      *(uint **)(param_2 + 8) = puVar13;
      iVar15 = 0;
      iVar14 = *param_3;
      if (iVar14 != 0) {
        iVar7 = 0;
        do {
          fn_8305F2E8(auStack_a0);
          *(int *)(iVar7 + *(int *)(param_2 + 8) + 0x48) =
               *(int *)(iVar14 + 0x30) * 0x10 + *(int *)(param_2 + 4);
          *(int *)(iVar7 + *(int *)(param_2 + 8) + 0x4c) =
               *(int *)(iVar14 + 0x34) * 0x10 + *(int *)(param_2 + 4);
          *(int *)(iVar14 + 0x18) = iVar15;
          *(int *)(iVar7 + *(int *)(param_2 + 8)) = iVar15;
          fn_8305E0F8(auStack_a0,param_2 + 0x14);
          fn_8305D7D0(*(undefined4 *)(iVar14 + 0x10),auStack_c0);
          fn_83061BC8(param_1,iVar14 + 0x38);
          fn_8305E0F8(iVar7 + *(int *)(param_2 + 8) + 4,param_2 + 0x14);
          cVar8 = fn_830608F8(param_1,iVar14 + 0x38,auStack_c0,param_4,auStack_a0);
          puVar9 = auStack_a0;
          if (cVar8 == '\0') {
            puVar9 = *(undefined1 **)(iVar14 + 0x10);
          }
          fn_8305EC98(iVar7 + *(int *)(param_2 + 8) + 4,puVar9);
          iVar15 = iVar15 + 1;
          iVar7 = iVar7 + 0x54;
          iVar14 = *(int *)(iVar14 + 4);
          fn_8305F258(auStack_a0);
        } while (iVar14 != 0);
      }
      iVar14 = 0;
      if (0 < *(int *)(param_2 + 0xc)) {
        iVar15 = 0;
        do {
          aiStack_e0[0] = 0;
          piVar16 = (int *)(iVar15 + *(int *)(param_2 + 4));
          aiStack_e0[2] = 0;
          aiStack_e0[1] = 0;
          puStack_d0 = (undefined4 *)0x0;
          iVar7 = *param_3;
          while (iVar12 = iVar7, iVar12 != 0) {
            iVar7 = *(int *)(iVar12 + 4);
            if ((*(int *)(iVar12 + 0x34) == *piVar16) || (*(int *)(iVar12 + 0x30) == *piVar16)) {
              fn_8306AB80(param_3,iVar12);
              fn_8306AAF0(aiStack_e0,iVar12);
            }
          }
          piVar16[1] = aiStack_e0[2];
          if (0 < aiStack_e0[2]) {
            lVar5 = ((ulonglong)(uint)aiStack_e0[2] & 0x3fffffff) << 2;
            if (0x3fffffff < (uint)aiStack_e0[2]) {
              lVar5 = -1;
            }
            iVar7 = fn_8265CA60(lVar5);
            piVar16[2] = iVar7;
            if (aiStack_e0[0] != 0) {
              iVar12 = 0;
              iVar7 = aiStack_e0[0];
              do {
                *(int *)(iVar12 + piVar16[2]) =
                     *(int *)(iVar7 + 0x18) * 0x54 + *(int *)(param_2 + 8);
                iVar12 = iVar12 + 4;
                iVar7 = *(int *)(iVar7 + 4);
              } while (iVar7 != 0);
            }
          }
          fn_83068358(param_3,aiStack_e0);
          for (; puStack_d0 != (undefined4 *)0x0; puStack_d0 = (undefined4 *)puStack_d0[2]) {
            puStack_d0[3] = 0;
            *puStack_d0 = 0;
          }
          iVar14 = iVar14 + 1;
          iVar15 = iVar15 + 0x10;
        } while (iVar14 < *(int *)(param_2 + 0xc));
      }
      return;
    }
    uVar10 = 0xffffffffffffffff;
    puVar1 = (undefined4 *)puVar3[1];
    uVar11 = 0xffffffffffffffff;
    bVar4 = true;
    if (*(char *)(puVar3 + 5) == '\0') {
      iVar14 = puVar3[7];
      if (iVar14 != 0) {
        do {
          if ((int)uVar10 < 0) {
            uVar10 = (ulonglong)*(uint *)(*(int *)(iVar14 + 0x18) + 0x38);
          }
          else {
            bVar4 = (bool)(*(uint *)(*(int *)(iVar14 + 0x18) + 0x38) == uVar10 & bVar4);
          }
          if ((int)uVar11 < 0) {
            uVar11 = (ulonglong)*(uint *)(*(int *)(iVar14 + 0x1c) + 0x38);
          }
          else {
            bVar4 = (bool)(*(uint *)(*(int *)(iVar14 + 0x1c) + 0x38) == uVar11 & bVar4);
          }
          iVar14 = *(int *)(iVar14 + 4);
        } while (iVar14 != 0);
        if ((int)uVar10 != (int)uVar11) {
          if (!bVar4) goto LAB_83067bd0;
          puVar3[0xd] = (int)uVar11;
          puVar3[0xc] = (int)uVar10;
          puVar3 = puVar1;
          goto joined_r0x83067b0c;
        }
      }
      fn_8306AB80(param_3,puVar3);
      fn_830688E0(puVar3 + 0x1a);
    }
    else {
LAB_83067bd0:
      fn_8306AB80(param_3,puVar3);
    }
    (**(code **)*puVar3)(puVar3,1);
    puVar3 = puVar1;
  } while( true );
}

