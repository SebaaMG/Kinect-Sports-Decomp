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
#define TBLr 0
extern unsigned int *auStack_3100;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern unsigned int fStack_e0;
extern int fn_82BA02A8();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CEA160();
extern int fn_82CEA280();
extern int fn_82CEA480();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern int fn_82D7D528();
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_83089DA8();
extern unsigned int iStack_3130;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_82134508;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int lbl_8323B520;
extern unsigned int uStack_310c;
extern unsigned int uStack_3118;
extern unsigned int uStack_311c;
extern unsigned int uStack_3120;
extern unsigned int uStack_3128;
extern unsigned int uStack_312c;
extern unsigned int uStack_90;


void fn_82DB7128(int param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar10;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  int iStack_3130;
  uint uStack_312c;
  uint uStack_3128;
  undefined4 uStack_3120;
  undefined4 uStack_311c;
  undefined4 uStack_3118;
  undefined1 *puStack_3110;
  undefined4 uStack_310c;
  undefined1 auStack_3100 [12320];
  float fStack_e0;
  float fStack_c0;
  float fStack_bc;
  undefined4 uStack_90;
  
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = "TtRecollide PSI";
    uVar4 = TBLr;
    puVar1[1] = (int)uVar4;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  *(int *)(*(int *)(param_1 + 0xc) + 0x94) = *(int *)(*(int *)(param_1 + 0xc) + 0x94) + 1;
  uStack_3120 = 0;
  uStack_311c = 0;
  uStack_3118 = 0xffffffff;
  iVar5 = fn_82CE5410();
  fn_82CEAB00(&uStack_3120,*(undefined4 *)(iVar5 + 0x10),0);
  iVar5 = param_3[2];
  iStack_3130 = 0;
  iVar10 = 0;
  uStack_312c = 0;
  uStack_3128 = 0x80000000;
  if (-1 < iVar5) {
    piVar6 = (int *)*param_3;
    do {
      if (*piVar6 != -1) break;
      iVar10 = iVar10 + 1;
      piVar6 = piVar6 + 2;
    } while (iVar10 <= iVar5);
  }
  dVar13 = (double)lbl_821AAD20;
  if (iVar10 <= iVar5) {
    do {
      uVar2 = *(uint *)(iVar10 * 8 + *param_3 + 4);
      piVar6 = (int *)fn_83089DA8(uVar2 + 0x10);
      uVar8 = (ulonglong)(uint)piVar6[1];
      if (0 < piVar6[1]) {
        iVar5 = 0;
        do {
          iVar3 = *(int *)(*piVar6 + iVar5);
          iVar7 = fn_82CEA280(&uStack_3120,iVar3,0);
          if (iVar7 == 0) {
            iVar7 = *(char *)(iVar3 + 0xc) * 0x40 + *(int *)(*(int *)(param_1 + 0xc) + 0x80);
            if ((*(int *)(iVar7 + 0x1c30) == 0) ||
               ((*(char *)(iVar7 + 0x1c34) != '\0' && ((double)*(float *)(uVar2 + 0x14c) == dVar13))
               )) {
              uVar11 = *(undefined4 *)(uVar2 + 0xcc);
              if (*(char *)(uVar2 + 0xe8) == '\x05') {
                uVar11 = *(undefined4 *)
                          (((int)*(char *)(*(int *)(iVar3 + 0x10) + 0x10) + *(int *)(iVar3 + 0x10) ^
                            (int)*(char *)(*(int *)(iVar3 + 0x14) + 0x10) + *(int *)(iVar3 + 0x14) ^
                           uVar2) + 0xcc);
              }
              iVar7 = fn_82CE5410();
              fn_82CEA160(&uStack_3120,*(undefined4 *)(iVar7 + 0x10),iVar3,0);
              iVar7 = fn_82CE5410();
              if (uStack_312c == (uStack_3128 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(undefined4 *)(iVar7 + 0x10),&iStack_3130,8);
              }
              iVar7 = uStack_312c * 8;
              uStack_312c = uStack_312c + 1;
              *(int *)(iVar7 + iStack_3130) = iVar3;
              *(undefined4 *)(iVar7 + iStack_3130 + 4) = uVar11;
            }
          }
          uVar8 = uVar8 - 1;
          iVar5 = iVar5 + 8;
        } while (uVar8 != 0);
      }
      fn_82CE4118(uVar2);
      iVar5 = param_3[2];
      iVar10 = iVar10 + 1;
      if (iVar10 <= iVar5) {
        piVar6 = (int *)(iVar10 * 8 + *param_3);
        do {
          if (*piVar6 != -1) break;
          iVar10 = iVar10 + 1;
          piVar6 = piVar6 + 2;
        } while (iVar10 <= iVar5);
      }
    } while (iVar10 <= iVar5);
  }
  fn_82CEA480(param_3);
  iVar5 = 0;
  if (0 < (int)uStack_312c) {
    iVar10 = 0;
    dVar12 = (double)lbl_82134508;
    do {
      puStack_3110 = auStack_3100;
      iVar3 = *(int *)(iVar10 + iStack_3130);
      uStack_310c = *(undefined4 *)(iVar10 + iStack_3130 + 4);
      fStack_c0 = (float)dVar13;
      fStack_bc = (float)dVar13;
      fStack_e0 = (float)dVar12;
      uStack_90 = 0;
      iVar7 = *(char *)(iVar3 + 0xc) * 0x40 + *param_2;
      param_2[0x18] = iVar7 + 0x1c20;
      param_2[5] = *(int *)(iVar7 + 0x1c30);
      fn_82D7D528(iVar3,param_2,&puStack_3110,*(undefined4 *)(iVar3 + 8));
      if (lbl_8323B520 == 1) break;
      if (puStack_3110 != auStack_3100) {
        (**(code **)(**(int **)(iVar3 + 8) + 0x18))
                  (*(int **)(iVar3 + 8),*(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(iVar3 + 0x14),
                   param_2,&puStack_3110);
      }
      iVar5 = iVar5 + 1;
      iVar10 = iVar10 + 8;
    } while (iVar5 < (int)uStack_312c);
  }
  iVar5 = *(int *)(param_1 + 0xc);
  lVar9 = (ulonglong)*(uint *)(iVar5 + 0x94) - 1;
  *(int *)(iVar5 + 0x94) = (int)lVar9;
  if ((lVar9 == 0) && (*(char *)(iVar5 + 0x9c) == '\0')) {
    if (*(int *)(iVar5 + 0x8c) != 0) {
      fn_82D80C18(iVar5);
    }
    if ((*(int *)(iVar5 + 0xa4) == 1) && (*(int *)(iVar5 + 0x90) != 0)) {
      fn_82D80C30(iVar5);
    }
  }
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar4 = TBLr;
    puVar1[1] = (int)uVar4;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  iVar5 = fn_82CE5410();
  uStack_312c = 0;
  if ((uStack_3128 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar5 + 0x10) + 0x10))
              (*(int **)(iVar5 + 0x10),iStack_3130,uStack_3128 & 0x3fffffff,8);
  }
  iStack_3130 = 0;
  uStack_3128 = 0x80000000;
  iVar5 = fn_82CE5410();
  fn_82CEA4B8(&uStack_3120,*(undefined4 *)(iVar5 + 0x10));
  fn_82BA02A8(&uStack_3120);
  return;
}

