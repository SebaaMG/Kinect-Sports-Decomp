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
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_78;
extern int fn_822ABA88();
extern int fn_822CF008();
extern int fn_8236FB68();
extern int fn_8238D3A0();
extern int fn_82508078();
extern int fn_82535298();
extern int fn_82536070();
extern int fn_82536288();
extern int fn_82536590();
extern int fn_82F655D8();
extern unsigned int lbl_821929B0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_8238CEB8(double param_1,int *param_2)

{
  float fVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  uint uVar7;
  int iVar8;
  longlong lVar6;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong auStack_78;
  
  dVar13 = (double)(**(code **)(*param_2 + 0x70))();
  dVar17 = (double)lbl_821CC160;
  if ((dVar13 <= dVar17) || (dVar17 < (double)(float)param_2[6])) {
    iVar9 = param_2[2];
    fVar1 = (float)param_2[0xb];
    piVar2 = *(int **)(**(int **)(iVar9 + 8) + 4);
    uVar11 = (ulonglong)*(uint *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8);
    param_2[0xb] = (int)(float)((double)fVar1 - param_1);
    if ((double)(float)((double)fVar1 - param_1) <= dVar17) {
      uVar10 = param_2[9];
      uVar5 = (**(code **)(*param_2 + 0x44))(param_2,(ulonglong)uVar10,uVar11);
      fn_8238D3A0(param_2,uVar5);
      bVar4 = false;
      param_2[0x10] = param_2[0x10] + 1;
      uVar7 = (**(code **)(*param_2 + 0x90))(param_2);
      if (uVar7 <= (uint)param_2[0x10]) {
        dVar14 = (double)(**(code **)(*param_2 + 0x5c))(param_2);
        dVar13 = (double)(**(code **)(*param_2 + 0x58))(param_2);
        pcVar3 = *(code **)(*param_2 + 0x50);
        dVar16 = (double)(float)((double)(float)((double)(float)param_2[0xc] - dVar13) - dVar14);
        dVar13 = (double)(float)((double)(float)param_2[0xc] - dVar13);
        if (*(float *)(&lbl_821954D8 +
                      ((uint)(byte)((dVar16 < dVar17) << 2) |
                      (uint)(NAN(dVar16) || NAN(dVar17)) << 2)) < 0.0) {
          dVar13 = dVar14;
        }
        param_2[0xc] = (int)(float)dVar13;
        dVar14 = (double)(*pcVar3)(param_2);
        dVar13 = (double)(**(code **)(*param_2 + 0x4c))(param_2);
        pcVar3 = *(code **)(*param_2 + 0x68);
        dVar16 = (double)(float)((double)(float)((double)(float)param_2[0xe] - dVar13) - dVar14);
        dVar13 = (double)(float)((double)(float)param_2[0xe] - dVar13);
        if (*(float *)(&lbl_821954D8 +
                      ((uint)(byte)((dVar16 < dVar17) << 2) |
                      (uint)(NAN(dVar16) || NAN(dVar17)) << 2)) < 0.0) {
          dVar13 = dVar14;
        }
        param_2[0xe] = (int)(float)dVar13;
        dVar13 = (double)(*pcVar3)(param_2);
        param_2[0xd] = (int)(float)(dVar13 + (double)(float)param_2[0xd]);
        param_2[0x10] = 0;
        iVar8 = (**(code **)(*param_2 + 0x9c))(param_2);
        if ((iVar8 != 0) && (uVar12 = 0, uVar11 != 0)) {
          do {
            iVar8 = fn_822ABA88(*(undefined4 *)(piVar2[4] * 4 + *piVar2),uVar12);
            dVar16 = (double)*(float *)(iVar8 + 0x344);
            dVar14 = (double)(**(code **)(*param_2 + 0x74))(param_2);
            dVar13 = (double)(float)(dVar14 + dVar16);
            if ((double)lbl_821CA460 < (double)(float)(dVar14 + dVar16)) {
              dVar13 = dVar17;
            }
            uVar12 = uVar12 + 1;
            *(float *)(iVar8 + 0x344) = (float)dVar13;
          } while ((uVar12 & 0xffffffff) < uVar11);
        }
        bVar4 = true;
      }
      iVar8 = (**(code **)(*param_2 + 0x94))(param_2);
      if (((iVar8 != 0) || (bVar4)) && ((ulonglong)uVar10 != (uVar5 & 0xffffffff))) {
        uStack_80 = *(undefined4 *)(param_2[2] + 0x300);
        uStack_80 = fn_82535298(&uStack_80,**(undefined4 **)(param_2[2] + 0x9b8),
                                      0xffffffff83296bc0,0xffffffff83296bd0);
        fn_82536288(&uStack_80);
        lVar6 = fn_8236FB68(0xd);
        if (lVar6 != 0) {
          fn_82508078(*(undefined4 *)(iVar9 + 0xa4),lVar6,0);
        }
      }
      param_2[0xb] = param_2[0xd];
    }
    fVar1 = (float)param_2[8];
    param_2[8] = (int)(float)((double)fVar1 - param_1);
    dVar13 = (double)lbl_821929B0;
    if ((double)(float)((double)fVar1 - param_1) <= dVar17) {
      iVar9 = (**(code **)(*param_2 + 0x8c))(param_2);
      if ((iVar9 != 0) && (uVar5 = 0, uVar11 != 0)) {
        do {
          iVar9 = fn_822ABA88(*(undefined4 *)(piVar2[4] * 4 + *piVar2),uVar5);
          if ((*(int *)(iVar9 + 0x2b0) == 0) && (iVar9 = fn_822CF008(dVar13), iVar9 == 0))
          goto LAB_8238d280;
          uVar5 = uVar5 + 1;
        } while ((uVar5 & 0xffffffff) < uVar11);
      }
      uVar10 = param_2[9];
      if ((int)(param_2[10] + 1U) < param_2[9]) {
        uVar10 = param_2[10] + 1U;
      }
      param_2[10] = uVar10;
      auStack_78 = (ulonglong)uVar10;
      dVar14 = (double)auStack_78;
      uVar15 = (**(code **)(*param_2 + 0x60))(param_2);
      dVar14 = (double)fn_82F655D8(uVar15,dVar14);
      param_2[8] = (int)((float)param_2[0xc] * (float)dVar14);
    }
LAB_8238d280:
    uVar11 = 0;
    if (param_2[10] != 0) {
      do {
        iVar9 = fn_822ABA88(*(undefined4 *)(piVar2[4] * 4 + *piVar2),uVar11);
        if ((double)*(float *)(iVar9 + 0x2fc) <= dVar17) {
          *(int *)(iVar9 + 0x2fc) = param_2[0xe];
          iVar8 = fn_822CF008(dVar13);
          if ((iVar8 != 0) && (*(int *)(iVar9 + 0x300) == 0)) {
            (**(code **)(*param_2 + 0x3c))(param_2,&uStack_80,&uStack_7c,&auStack_78);
            *(undefined4 *)(iVar9 + 0x2e0) = uStack_80;
            *(undefined4 *)(iVar9 + 0x2e4) = uStack_7c;
            *(undefined4 *)(iVar9 + 0x2e8) = ((uint)((ulonglong)(auStack_78) >> 32));
            if (param_2[0x12] == 0) {
              iVar9 = param_2[2];
              if (((*(int *)(iVar9 + 0xa0) == 0) || (*(int *)(*(int *)(iVar9 + 0xa0) + 0x40) != 1))
                 && (*(int *)(iVar9 + 0xc48) == 0)) {
                fn_82536070(0xffffffff821b34b4,0xffffffff821b34ac);
                fn_82536590(iVar9 + 0xc3c,0);
                *(undefined4 *)(iVar9 + 0xc48) = 1;
              }
              param_2[0x12] = 1;
            }
          }
        }
        uVar11 = uVar11 + 1;
      } while ((uVar11 & 0xffffffff) < (ulonglong)(uint)param_2[10]);
    }
  }
  return;
}

