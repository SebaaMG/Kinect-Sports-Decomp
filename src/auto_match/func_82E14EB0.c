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
extern unsigned int *auStack_270;
extern unsigned int *auStack_288;
extern unsigned int *auStack_290;
extern unsigned int *auStack_294;
extern int fn_82CE5410();
extern int fn_82CEAC20();
extern int fn_82CEAC60();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82CFD5B0();
extern int fn_82CFFD78();
extern int fn_82CFFEF0();
extern unsigned int *lbl_8323B464;
extern unsigned int uStack_298;
extern unsigned int uStack_29c;
extern unsigned int uStack_2a0;


void fn_82E14EB0(int *param_1,undefined4 *param_2)

{
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uStack_2a0;
  uint uStack_29c;
  uint uStack_298;
  undefined1 auStack_294 [4];
  uint auStack_290 [2];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [624];
  
  uStack_2a0 = 0;
  uStack_29c = 0;
  uStack_298 = 0x80000000;
  (**(code **)(*param_1 + 0x2c))(param_1,&uStack_2a0);
  uVar10 = (ulonglong)uStack_29c - 1;
  if (-1 < (longlong)uVar10) {
    lVar11 = (uVar10 & 0xfffffff) << 4;
    do {
      uVar9 = (ulonglong)uStack_2a0;
      iVar4 = (**(code **)*param_2)(param_2,*(undefined4 *)((int)(lVar11 + uVar9) + 4),auStack_290);
      if (iVar4 != 0) {
        lVar12 = lVar11 + uVar9 + 8;
        puVar5 = (undefined4 *)fn_82CFFEF0(lVar12);
        uVar9 = fn_82CFD5B0();
        pcVar6 = (char *)fn_82CEAC60(auStack_294,uVar9,auStack_290[0]);
        if ((*pcVar6 == '\0') && ((ulonglong)auStack_290[0] != (uVar9 & 0xffffffff))) {
          fn_82CEE578(auStack_288,auStack_270,0x200);
          uVar1 = fn_82CEAC20(uVar9);
          uVar2 = fn_82CEAC20(auStack_290[0]);
          uVar3 = fn_82CEDB38(auStack_288,0xffffffff8214b300);
          uVar2 = fn_82CEDB38(uVar3,uVar2);
          uVar2 = fn_82CEDB38(uVar2,0xffffffff8214b328);
          fn_82CEDB38(uVar2,uVar1);
          (**(code **)(*lbl_8323B464 + 0xc))
                    (lbl_8323B464,1,0xfffffffff034ed21,auStack_270,0xffffffff8214b2c0,0xb3);
                    /* WARNING: Subroutine does not return */
          fn_82CED958(auStack_288);
        }
        iVar7 = (**(code **)(*param_1 + 0x18))(param_1);
        if (iVar4 == iVar7) break;
        piVar8 = (int *)fn_82CFFD78(lVar12,0);
        *piVar8 = iVar4;
        (**(code **)(*param_1 + 0x28))(param_1,*puVar5);
      }
      uVar10 = uVar10 - 1;
      lVar11 = lVar11 + -0x10;
    } while (-1 < (longlong)uVar10);
  }
  iVar4 = fn_82CE5410();
  uStack_29c = 0;
  if ((uStack_298 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),uStack_2a0,uStack_298 & 0x3fffffff,0x10);
  }
  return;
}

