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
extern unsigned int *auStack_e8;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C4C8();
extern int fn_826824B0();
extern int fn_82687270();
extern int fn_8268ACE8();
extern int fn_8268C928();
extern int fn_8268CAB0();
extern int fn_826ADF90();
extern int fn_826DB990();
extern int fn_8274DFD8();
extern int fn_82760448();
extern int fn_82761DE8();
extern int fn_82765CA0();
extern int fn_82765D90();
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int lbl_8200571C;
extern unsigned int uStack_c0;
extern unsigned int uStack_c8;
extern unsigned int uStack_dc;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern U64 storeWordConditionalIndexed();


void fn_82728090(int *param_1,int *param_2)

{
  bool bVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  int iVar12;
  int iVar13;
  longlong lVar11;
  int iVar14;
  uint *puVar15;
  char cVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  char *pcVar19;
  char *pcVar21;
  longlong lVar20;
  int *piVar22;
  uint *puVar23;
  ulonglong uVar24;
  char in_RESERVE;
  double dVar25;
  double dVar26;
  double dVar27;
  uint uStack_f0;
  uint uStack_ec;
  uint auStack_e8 [2];
  int *piStack_e0;
  undefined4 uStack_dc;
  longlong lStack_d8;
  longlong lStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  longlong lStack_b8;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  
  iVar12 = (**(code **)(*param_1 + 0x5c))();
  uVar24 = (ulonglong)(uint)param_2[1];
  if (uVar24 != 0) {
    iVar13 = (**(code **)(*param_1 + 0x40))(param_1);
    if (iVar13 != 0) {
      *(uint *)(iVar13 + 0xb00) = *(uint *)(iVar13 + 0xb00) | 0x400;
    }
    if (uVar24 != 0) {
      dVar27 = (double)lbl_8200571C;
      iVar13 = 0;
      do {
        piStack_e0 = (int *)0x0;
        uStack_dc = 0;
        piVar22 = (int *)(iVar13 + *param_2);
        lVar11 = (**(code **)(**(int **)(iVar12 + 0x74) + 0x48))();
        if (lVar11 != 0) {
          fn_8267C4C8(lVar11);
          puVar23 = (uint *)(piVar22 + 1);
          bVar10 = false;
          iVar14 = fn_8268ACE8(puVar23);
          if ((iVar14 != 0) &&
             ((cVar16 = *(char *)((*puVar23 & 0xfffffffc) + 8), cVar16 == 'i' || (cVar16 == 'I'))))
          {
            fn_8268CAB0(&uStack_f0,puVar23);
            puVar15 = (uint *)fn_8268C928(&uStack_ec,&uStack_f0,0,6);
            pcVar21 = (char *)((*puVar15 & 0xfffffffc) + 8);
            pcVar19 = "img://";
            do {
              cVar16 = *pcVar21;
              cVar3 = *pcVar19;
              bVar1 = cVar16 == '\0';
              if (bVar1) break;
              pcVar21 = pcVar21 + 1;
              pcVar19 = pcVar19 + 1;
            } while (cVar16 == cVar3);
            bVar9 = cVar16 != cVar3;
            lVar20 = ((ulonglong)uStack_ec & 0xfffffffc) + 4;
            do {
              puVar15 = (uint *)lVar20;
              uVar18 = (ulonglong)*puVar15;
              if (in_RESERVE != '\0') {
                uVar6 = storeWordConditionalIndexed(uVar18 - 1,0,lVar20);
                *puVar15 = uVar6;
                bVar1 = true;
              }
            } while (!bVar1);
            if (uVar18 == 1) {
              fn_8267BE38();
            }
            if (bVar9) {
              puVar15 = (uint *)fn_8268C928(auStack_e8,&uStack_f0,0,8);
              pcVar21 = (char *)((*puVar15 & 0xfffffffc) + 8);
              pcVar19 = "imgps://";
              do {
                cVar16 = *pcVar21;
                cVar3 = *pcVar19;
                bVar1 = cVar16 == '\0';
                if (bVar1) break;
                pcVar21 = pcVar21 + 1;
                pcVar19 = pcVar19 + 1;
              } while (cVar16 == cVar3);
              bVar9 = cVar16 != cVar3;
              lVar20 = ((ulonglong)auStack_e8[0] & 0xfffffffc) + 4;
              do {
                puVar15 = (uint *)lVar20;
                uVar18 = (ulonglong)*puVar15;
                if (in_RESERVE != '\0') {
                  uVar6 = storeWordConditionalIndexed(uVar18 - 1,0,lVar20);
                  *puVar15 = uVar6;
                  bVar1 = true;
                }
              } while (!bVar1);
              if (uVar18 == 1) {
                fn_8267BE38();
              }
              if (!bVar9) goto LAB_827282c8;
            }
            else {
LAB_827282c8:
              bVar10 = true;
            }
            lVar20 = ((ulonglong)uStack_f0 & 0xfffffffc) + 4;
            do {
              puVar15 = (uint *)lVar20;
              uVar18 = (ulonglong)*puVar15;
              if (in_RESERVE != '\0') {
                uVar6 = storeWordConditionalIndexed(uVar18 - 1,0,lVar20);
                *puVar15 = uVar6;
                bVar9 = true;
              }
            } while (!bVar9);
            if (uVar18 == 1) {
              fn_8267BE38();
            }
          }
          if ((bVar10) ||
             (cVar16 = fn_826DB990(lVar11,&piStack_e0,puVar23), uVar17 = 0xffffffff82011100,
             cVar16 != '\0')) {
            if ((bVar10) || (uVar18 = (**(code **)(*piStack_e0 + 8))(), (uVar18 & 0xff00) == 0x100))
            {
              iVar14 = fn_8274DFD8(iVar12,puVar23);
              uVar17 = 0xffffffff82011140;
              if (iVar14 == 0) goto LAB_82728328;
              iVar4 = *(int *)(iVar14 + 0x30);
              uVar18 = fn_8267B890(*(undefined4 *)(*(int *)(iVar12 + 0x78) + 0x288),0x7c,0);
              if ((uVar18 & 0xffffffff) == 0) {
                uVar18 = 0;
              }
              else {
                uVar18 = fn_82765CA0(uVar18,0x1ff8);
              }
              fn_82765D90(uVar18,iVar4,1);
              iVar5 = *piVar22;
              if ((uVar18 & 0xffffffff) != 0) {
                fn_82760448(uVar18);
              }
              if (*(int *)(iVar5 + 8) != 0) {
                fn_82761DE8();
              }
              *(int *)(iVar5 + 8) = (int)uVar18;
              (**(code **)(**(int **)(iVar4 + 0xc) + 0x14))(&iStack_b0);
              lStack_d8 = (longlong)((iStack_a4 - iStack_ac) * 0x14);
              lStack_d0 = (longlong)((iStack_a8 - iStack_b0) * 0x14);
              dVar25 = (double)lStack_d8;
              fVar8 = (float)lStack_d0;
              if (piVar22[5] != 0) {
                uStack_c8 = (ulonglong)(uint)piVar22[5];
                fVar8 = (float)uStack_c8;
              }
              dVar26 = dVar25;
              if (piVar22[6] != 0) {
                uStack_c0 = (ulonglong)(uint)piVar22[6];
                dVar26 = (double)uStack_c0;
              }
              lStack_b8 = (longlong)piVar22[7];
              fVar2 = (float)(dVar26 / dVar25);
              fVar7 = fVar8 / (float)lStack_d0;
              *(int *)(*piVar22 + 0x18) = (int)(longlong)fVar8;
              *(int *)(*piVar22 + 0x1c) = (int)(longlong)dVar26;
              iVar4 = param_1[0x28];
              *(float *)(*piVar22 + 0x34) =
                   *(float *)(*piVar22 + 0x34) - ((float)(dVar25 - dVar27) + (float)lStack_b8);
              iVar5 = *piVar22;
              *(float *)(iVar5 + 0x24) = *(float *)(iVar5 + 0x24) * fVar7;
              *(float *)(iVar5 + 0x20) = *(float *)(iVar5 + 0x20) * fVar7;
              *(float *)(iVar5 + 0x28) = *(float *)(iVar5 + 0x28) * fVar7;
              *(float *)(iVar5 + 0x2c) = *(float *)(iVar5 + 0x2c) * fVar2;
              *(float *)(iVar5 + 0x30) = *(float *)(iVar5 + 0x30) * fVar2;
              *(float *)(iVar5 + 0x34) = *(float *)(iVar5 + 0x34) * fVar2;
              *(byte *)(iVar4 + 0x13f) = *(byte *)(iVar4 + 0x13f) | 2;
              if ((uVar18 & 0xffffffff) != 0) {
                fn_82761DE8(uVar18);
              }
              fn_826824B0(iVar14);
            }
            else {
              (**(code **)(*piStack_e0 + 8))();
            }
          }
          else {
LAB_82728328:
            fn_826ADF90(iVar12,uVar17,((ulonglong)*puVar23 & 0xfffffffc) + 8);
          }
          fn_82687270(lVar11);
        }
        if (piStack_e0 != (int *)0x0) {
          fn_82687270();
        }
        uVar24 = uVar24 - 1;
        iVar13 = iVar13 + 0x2c;
      } while (uVar24 != 0);
    }
  }
  return;
}

