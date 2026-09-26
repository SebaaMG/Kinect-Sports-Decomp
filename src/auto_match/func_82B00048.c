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
extern unsigned int *auStack_c0;
extern int fn_82ABDBE8();
extern int fn_82ACA5E0();
extern int fn_82AD19D8();
extern int fn_82AD20C0();
extern int fn_82ADDE40();
extern int fn_82AF4E80();
extern int fn_82AF6658();
extern int fn_82AF9758();
extern int fn_82AFA520();
extern int fn_82B857D8();
extern int fn_82B85910();
extern int fn_82B8D2B8();
extern unsigned int uStack_a8;


undefined8
fn_82B00048(undefined8 param_1,int *param_2,int *param_3,uint *param_4,int param_5,
             ulonglong param_6)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar9;
  uint uVar6;
  byte bVar10;
  int iVar7;
  uint uVar8;
  undefined8 uVar5;
  ulonglong uVar11;
  int *piVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  int *piVar17;
  int *piVar18;
  uint auStack_c0 [4];
  int aiStack_b0 [2];
  undefined8 uStack_a8;
  
  uStack_a8 = 0;
  uVar13 = 2;
  uVar8 = 0;
  cVar9 = fn_82ACA5E0(param_2);
  uVar5 = uVar13;
  if ((cVar9 == '\0') ||
     ((((*(uint *)param_2[0xb] >> 0xb ^ param_2[2]) & 0x1c000) == 0 &&
      (((*(uint *)param_3[0xb] >> 0xb ^ param_3[2]) & 0x1c000) == 0)))) {
    if (((param_3[2] ^ param_2[2]) & 1U) == 0) {
      for (iVar7 = *param_3; iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
        if (*(int **)(iVar7 + 0xc) == param_2) {
          bVar4 = true;
          goto LAB_82b0010c;
        }
      }
      bVar4 = false;
LAB_82b0010c:
      if ((!bVar4) && (((uint)(param_3[2] ^ param_2[2]) >> 0x17 & 1) == 0)) {
        for (puVar1 = (uint *)param_2[1]; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
          uVar11 = (ulonglong)puVar1[4];
          if (((uVar11 != 0) && ((*(uint *)(puVar1[4] + 8) & 0x3f80) == 0x3700)) &&
             ((*puVar1 & 0xe000000) != 0)) goto LAB_82b00170;
        }
        uVar11 = 0;
LAB_82b00170:
        for (puVar1 = (uint *)param_3[1]; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
          uVar16 = (ulonglong)puVar1[4];
          if (((uVar16 != 0) && ((*(uint *)(puVar1[4] + 8) & 0x3f80) == 0x3700)) &&
             ((*puVar1 & 0xe000000) != 0)) goto LAB_82b001b0;
        }
        uVar16 = 0;
LAB_82b001b0:
        if ((uVar11 != uVar16) && ((param_6 & 0xff) == 0)) {
          uVar6 = fn_82AF4E80(param_1,uVar11,param_2,uVar16,param_3);
          if (param_5 != 0) {
            uVar6 = uVar6 - (*(uint *)(param_5 + 8) >> 5 & 7);
          }
          if ((4 < uVar6) ||
             ((((uVar11 & 0xffffffff) != 0 && (uVar16 != 0)) &&
              (cVar9 = fn_82B8D2B8(param_1), cVar9 == '\0')))) goto LAB_82b00434;
        }
        cVar9 = fn_82B857D8(param_2,param_3);
        if (((cVar9 != '\0') &&
            (cVar9 = fn_82AF6658(param_1,param_2,param_3,aiStack_b0,1,param_6), cVar9 != '\0'))
           && (cVar9 = fn_82B8D2B8(param_1,param_2,param_3,1,1), cVar9 != '\0')) {
          if (((param_2[2] & 0x40000000U) == 0) || ((param_3[2] & 0x40000000U) == 0)) {
            bVar10 = fn_82B85910(param_2,param_3);
          }
          else {
            bVar10 = -((param_3[5] & 0xfffffff8U) < (param_2[5] & 0xfffffff8U)) & 1;
          }
          piVar18 = param_3;
          piVar12 = param_2;
          if (bVar10 != 0) {
            piVar18 = param_2;
            piVar12 = param_3;
          }
          iVar7 = fn_82AD19D8(piVar18,piVar12,param_1);
          if (param_5 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(uint *)(param_5 + 8) >> 5 & 7;
          }
          uVar8 = fn_82AFA520(param_1,param_2,param_3,piVar12,uVar8,1,param_6);
          if (uVar8 != 0xffffffff) {
            uVar6 = 0;
            piVar18 = param_3 + 0xb;
            for (uVar15 = 0; uVar15 < ((uint)param_2[2] >> 0x13 & 7); uVar15 = uVar15 + 1) {
              uVar3 = *(undefined4 *)((int)piVar18 + ((int)param_2 - (int)param_3));
              uVar14 = 0;
              iVar2 = *piVar18;
              piVar17 = param_3 + 0xb;
              if (uVar15 == 0) {
LAB_82b003a4:
                uVar5 = fn_82AF9758(param_1,param_2,uVar3,param_3,iVar2,piVar12,auStack_c0,0);
                if ((int)uVar5 != 0) goto LAB_82b0041c;
                uVar6 = auStack_c0[0] >> 0xf & 7 | uVar6;
              }
              else {
                do {
                  cVar9 = fn_82ABDBE8(uVar3,*(undefined4 *)
                                              (((int)param_2 - (int)param_3) + (int)piVar17));
                  if ((cVar9 != '\0') && (cVar9 = fn_82ABDBE8(iVar2,*piVar17), cVar9 != '\0'))
                  break;
                  uVar14 = uVar14 + 1;
                  piVar17 = piVar17 + 1;
                } while (uVar14 < uVar15);
                if (uVar15 <= uVar14) goto LAB_82b003a4;
              }
              piVar18 = piVar18 + 1;
            }
            uVar5 = uVar13;
            if ((uVar6 & 5) != 5) {
              cVar9 = fn_82ACA5E0(param_2);
              if ((cVar9 == '\0') && (uVar8 < 2)) {
                uVar8 = 2;
              }
              uVar5 = 0;
            }
          }
LAB_82b0041c:
          if (iVar7 != 0) {
            fn_82AD20C0(*(undefined4 *)(iVar7 + 0x10),iVar7,param_1);
          }
        }
      }
    }
  }
LAB_82b00434:
  uVar6 = 0;
  piVar18 = aiStack_b0;
  do {
    if (*piVar18 != 0) {
      uVar15 = 0;
      if (uVar6 != 0) {
        piVar12 = aiStack_b0;
        do {
          if (*piVar18 == *piVar12) break;
          uVar15 = uVar15 + 1;
          piVar12 = piVar12 + 1;
        } while (uVar15 < uVar6);
      }
      if (uVar15 == uVar6) {
        fn_82ADDE40(param_1);
      }
    }
    uVar6 = uVar6 + 1;
    piVar18 = piVar18 + 1;
    if (3 < uVar6) {
      *param_4 = uVar8;
      return uVar5;
    }
  } while( true );
}

