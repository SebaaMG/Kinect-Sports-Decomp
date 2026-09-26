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
extern unsigned int *auStack_110;
extern unsigned int *auStack_160;
extern unsigned int *auStack_80;
extern int fn_8267C4F0();
extern int fn_8268ACE8();
extern int fn_826FDF58();
extern int fn_827555D8();
extern int fn_82756488();
extern int fn_82756F70();
extern int fn_8278CD58();
extern int fn_82791070();
extern int fn_82791BA8();
extern int fn_82791CF0();
extern int fn_82791DF0();
extern int fn_82793530();
extern int fn_827A0BD0();
extern int fn_827A8770();
extern int fn_827A9328();
extern unsigned int iStack_144;
extern unsigned int iStack_154;
extern unsigned int iStack_164;
extern unsigned int uStack_100;
extern unsigned int uStack_128;
extern unsigned int uStack_140;
extern unsigned int uStack_170;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;


ushort fn_827A1070(double param_1,double param_2,int param_3,undefined8 param_4,undefined8 param_5
                    ,uint *param_6)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar10;
  ulonglong uVar9;
  char *pcVar11;
  ushort uVar12;
  longlong lVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  ulonglong uStack_170;
  int *piStack_168;
  int iStack_164;
  undefined1 auStack_160 [12];
  int iStack_154;
  int iStack_144;
  uint uStack_140;
  int *apiStack_130 [2];
  uint uStack_128;
  undefined1 auStack_110 [16];
  uint uStack_100;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 auStack_80 [128];
  
  fn_827A0BD0();
  dVar16 = (double)(float)(param_1 -
                          (double)(*(float *)(param_3 + 0x3c) - *(float *)(param_3 + 0xf0)));
  dVar15 = (double)(float)(param_2 -
                          (double)(*(float *)(param_3 + 0x40) - *(float *)(param_3 + 0xf4)));
  uStack_170 = fn_827A8770(param_3 + 0x24);
  uStack_170 = uStack_170 & 0xffffffff;
  fn_827A9328((double)(float)((double)uStack_170 + dVar15),apiStack_130,param_3 + 0x24);
  uVar12 = 0;
  if (((apiStack_130[0] == (int *)0x0) || ((uint)apiStack_130[0][1] <= uStack_128)) ||
     (bVar5 = false, (int)uStack_128 < 0)) {
    bVar5 = true;
  }
  if (!bVar5) {
    piVar3 = *(int **)(uStack_128 * 4 + *apiStack_130[0]);
    dVar15 = (double)(longlong)piVar3[3];
    if (dVar15 <= dVar16) {
      if (*piVar3 < 0) {
        uVar10 = (uint)*(ushort *)(piVar3 + 5);
      }
      else {
        uVar10 = piVar3[5];
      }
      if (dVar16 <= (double)(float)((double)(longlong)(int)uVar10 + dVar15)) {
        uStack_170 = (ulonglong)*(uint *)(param_3 + 0x4c);
        uVar14 = 0;
        dVar15 = (double)((float)(dVar16 - dVar15) + (float)uStack_170);
        fn_82756F70(&uStack_e0,piVar3);
        lVar13 = 0;
        while( true ) {
          if ((uStack_e0 == 0) || (bVar5 = false, uStack_dc <= uStack_e0)) {
            bVar5 = true;
          }
          if (bVar5) goto LAB_827a123c;
          uVar9 = (ulonglong)*(ushort *)(uStack_e0 + 2);
          if ((*(ushort *)(uStack_e0 + 6) >> 6 & 1) != 0) {
            uVar9 = -uVar9;
          }
          uVar14 = uVar9 + uVar14;
          uStack_170 = uVar14 & 0xffffffff;
          if (dVar15 < (double)uStack_170) break;
          lVar13 = (ulonglong)(*(ushort *)(uStack_e0 + 4) >> 0xc) + lVar13;
          fn_827555D8(&uStack_e0);
        }
        uVar12 = *(ushort *)(uStack_e0 + 6) >> 7 & 1;
LAB_827a123c:
        if ((uVar12 != 0) && (param_6 != (uint *)0x0)) {
          *param_6 = 0;
          param_6[1] = 0;
          uVar14 = (ulonglong)(uint)piVar3[2];
          if (*piVar3 < 0) {
            uVar14 = (ulonglong)(uint)piVar3[2] & 0xffffff;
            if (uVar14 == 0xffffff) {
              uVar14 = 0xffffffffffffffff;
            }
          }
          uStack_170 = uStack_170 & 0xffffffff;
          uVar14 = uVar14 + lVar13;
          fn_82791070(&piStack_168,*(undefined4 *)(param_3 + 8),uVar14,&uStack_170);
          if (((piStack_168 == (int *)0x0) || (iStack_164 < 0)) ||
             (bVar5 = false, piStack_168[1] <= iStack_164)) {
            bVar5 = true;
          }
          if (!bVar5) {
            iVar4 = *(int *)(iStack_164 * 4 + *piStack_168);
            uVar6 = fn_82793530(auStack_80,iVar4,uStack_170 >> 0x20,(uStack_170 >> 0x20) + 1);
            fn_8278CD58(auStack_110,uVar6,0);
            fn_826FDF58(auStack_80);
            fn_82791BA8(auStack_160,iVar4);
            while (uStack_140 < *(uint *)(iStack_144 + 4)) {
              iVar7 = fn_82791CF0(auStack_160);
              uVar9 = (ulonglong)*(uint *)(iVar7 + 4) + (ulonglong)*(uint *)(iVar4 + 0x1c);
              iVar7 = fn_82791CF0(auStack_160);
              if ((*(ushort *)(*(int *)(iVar7 + 0xc) + 0x2a) & 0x100) == 0) {
LAB_827a1358:
                bVar5 = false;
              }
              else {
                iVar7 = fn_8268ACE8(*(int *)(iVar7 + 0xc) + 0x10);
                bVar5 = true;
                if (iVar7 == 0) goto LAB_827a1358;
              }
              if (bVar5) {
                iVar7 = fn_82791CF0(auStack_160);
                pcVar8 = (char *)((uStack_100 & 0xfffffffc) + 8);
                pcVar11 = (char *)((*(uint *)(*(int *)(iVar7 + 0xc) + 0x10) & 0xfffffffc) + 8);
                do {
                  cVar1 = *pcVar11;
                  cVar2 = *pcVar8;
                  if (cVar1 == '\0') break;
                  pcVar11 = pcVar11 + 1;
                  pcVar8 = pcVar8 + 1;
                } while (cVar1 == cVar2);
                if (cVar1 != cVar2) goto LAB_827a1400;
                if (((ulonglong)param_6[1] + (ulonglong)*param_6 & 0xffffffff) <
                    (uVar9 & 0xffffffff)) {
                  if ((uVar14 & 0xffffffff) < (uVar9 & 0xffffffff)) break;
                  *param_6 = (uint)uVar9;
                  iVar7 = fn_82791CF0(auStack_160);
                  uVar10 = *(uint *)(iVar7 + 8);
                }
                else {
                  iVar7 = fn_82791CF0(auStack_160);
                  uVar10 = *(int *)(iVar7 + 8) + param_6[1];
                }
                param_6[1] = uVar10;
              }
              else {
LAB_827a1400:
                if ((uVar14 & 0xffffffff) < (uVar9 & 0xffffffff)) break;
                *param_6 = 0;
                param_6[1] = 0;
              }
              fn_82791DF0(auStack_160);
            }
            if (iStack_154 != 0) {
              fn_8267C4F0();
            }
            fn_826FDF58(auStack_110);
          }
        }
        fn_82756488(&uStack_e0);
      }
    }
  }
  return uVar12;
}

