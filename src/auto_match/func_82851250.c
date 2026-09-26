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
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_a8;
extern unsigned int fStack_b8;
extern unsigned int fStack_c8;
extern unsigned int fStack_d8;
extern int fn_8280AD30();
extern int fn_8280CB70();
extern int fn_828105C8();
extern int fn_82810BE8();
extern int fn_82850FA8();
extern int fn_828510B8();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821AAD20;


void fn_82851250(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulonglong param_7,ulonglong param_8,
                  longlong param_9)

{
  undefined1 uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  ulonglong uVar12;
  double extraout_f1;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [8];
  float fStack_d8;
  undefined1 auStack_d0 [8];
  float fStack_c8;
  float fStack_b8;
  float fStack_a8;
  
  iVar3 = fn_82F6A548();
  uVar1 = 0;
  if ((*(int *)(iVar3 + 0x178) != 0) &&
     (*(int *)((int)((param_9 + 2U & 0xffffffff) << 2) + (int)param_4) != 0)) {
    dVar15 = extraout_f1;
    fn_8280CB70(param_5,param_6,auStack_d0);
    uVar10 = 0;
    if (*(int *)(iVar3 + 0x178) != 0) {
      iVar8 = 0;
      iVar9 = 0;
      dVar14 = (double)lbl_821AAD20;
      do {
        puVar11 = (uint *)(*(int *)(iVar3 + 0x17c) + iVar9);
        fn_8280AD30(auStack_d0,puVar11 + 2,auStack_e0);
        fn_828105C8((double)fStack_c8,(double)fStack_b8,(double)fStack_a8,auStack_f0);
        dVar16 = ABS((double)fStack_d8);
        dVar13 = (double)fn_82810BE8(auStack_f0);
        dVar13 = (double)(float)((double)(float)((double)(float)(dVar16 * dVar15) / dVar13) +
                                param_2);
        uVar6 = (ulonglong)*puVar11 - 1;
        if ((param_8 & 0xffffffff) <= ((ulonglong)*puVar11 - 1 & 0xffffffff)) {
          uVar6 = param_8;
        }
        uVar12 = uVar6;
        if ((param_7 & 0xffffffff) <= (uVar6 & 0xffffffff)) {
          uVar12 = param_7;
        }
        if ((uVar12 & 0xffffffff) <= (uVar6 & 0xffffffff)) {
          lVar4 = (uVar12 & 0xfffffff) << 4;
          uVar2 = uVar12;
          do {
            uVar5 = uVar2;
            if (dVar13 < (double)*(float *)((int)lVar4 + puVar11[1])) break;
            lVar4 = lVar4 + 0x10;
            uVar2 = uVar5 + 1;
            uVar12 = uVar5;
          } while ((uVar5 + 1 & 0xffffffff) <= (uVar6 & 0xffffffff));
        }
        if ((uVar12 & 0xffffffff) !=
            (ulonglong)
            *(uint *)(*(int *)((int)((param_9 + 0x10U & 0xffffffff) << 2) + (int)param_4) + iVar8))
        {
          uVar1 = 1;
          fn_82850FA8(iVar3,param_4,uVar10,uVar12,param_9);
        }
        dVar16 = dVar14;
        if ((uVar12 + 1 & 0xffffffff) < (ulonglong)*puVar11) {
          pfVar7 = (float *)((int)((uVar12 & 0xffffffff) << 4) + puVar11[1]);
          dVar16 = (double)*pfVar7;
          dVar16 = (double)((float)(dVar13 - dVar16) / (float)((double)pfVar7[4] - dVar16));
        }
        fn_828510B8(dVar16,iVar3,param_4,uVar10,uVar12);
        uVar10 = uVar10 + 1;
        iVar9 = iVar9 + 0x14;
        iVar8 = iVar8 + 4;
      } while ((uVar10 & 0xffffffff) < (ulonglong)*(uint *)(iVar3 + 0x178));
    }
  }
  fn_82F6A594(uVar1);
  return;
}

