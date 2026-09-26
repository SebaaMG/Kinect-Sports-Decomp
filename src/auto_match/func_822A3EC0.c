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
extern unsigned int *auStack_160;
extern unsigned int *auStack_220;
extern unsigned int *auStack_2e0;
extern unsigned int *auStack_300;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_822902E8();
extern int fn_82290458();
extern int fn_822A4D38();
extern int fn_822A4F48();
extern int fn_822A51A0();
extern int fn_822ABA88();
extern int fn_822B67F8();
extern int fn_822B98A8();
extern int fn_8242C410();
extern int fn_8243E578();
extern int fn_82526C70();
extern int fn_82528EE0();
extern int fn_826728E8();
extern int fn_82672C20();
extern int fn_82A1EFC0();
extern unsigned int iStack0000001c;
extern unsigned int iStack_430;
extern unsigned int iStack_43c;
extern unsigned int iStack_440;
extern unsigned int lbl_820E975C;
extern unsigned int uStack_2a0;
extern unsigned int uStack_30c;
extern unsigned int uStack_310;
extern unsigned int uStack_32c;
extern unsigned int uStack_330;
extern unsigned int uStack_33c;
extern unsigned int uStack_340;
extern unsigned int uStack_3b8;
extern unsigned int uStack_3bc;
extern unsigned int uStack_3c0;
extern unsigned int uStack_3dc;
extern unsigned int uStack_3e0;
extern unsigned int uStack_41c;
extern unsigned int uStack_420;
extern unsigned int uStack_428;
extern unsigned int uStack_438;


void fn_822A3EC0(uint *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int iVar6;
  undefined8 uVar5;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  double dVar11;
  int iStack0000001c;
  int iStack_440;
  int iStack_43c;
  undefined4 uStack_438;
  int iStack_430;
  ulonglong uStack_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  double dStack_418;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined1 *puStack_3d8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined1 uStack_3b8;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined1 *puStack_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined1 *puStack_328;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined1 *puStack_308;
  undefined1 auStack_300 [32];
  undefined1 auStack_2e0 [64];
  undefined2 uStack_2a0;
  undefined1 auStack_220 [192];
  undefined1 auStack_160 [352];
  
  if (*(int *)(*param_1 + 0x28) != 0) {
    iStack0000001c = param_2;
    fn_822A4D38();
    lVar9 = 0;
    iVar6 = fn_8242C410(param_2);
    if (0 < iVar6) {
      iVar6 = 0;
      do {
        piVar3 = *(int **)(**(int **)(param_2 + 8) + iVar6);
        fn_822ABA88(*(undefined4 *)(piVar3[4] * 4 + *piVar3),0);
        fn_822B67F8();
        uVar5 = fn_822B98A8();
        lVar9 = lVar9 + 1;
        fn_82526C70(auStack_300,0x20,0xffffffff821a87dc,lVar9);
        fn_826728E8(*(undefined4 *)(*param_1 + 0x28),auStack_300,uVar5);
        iVar6 = iVar6 + 4;
        iVar7 = fn_8242C410(param_2);
      } while ((int)lVar9 < iVar7);
    }
    uVar1 = *param_1;
    fn_822A51A0(uVar1 + 0xa4,param_3 + 4);
    *(undefined4 *)(uVar1 + 0xb4) = *(undefined4 *)(param_3 + 0x14);
    uVar1 = *param_1;
    fn_822A51A0(uVar1 + 0x5c,param_4 + 4);
    *(undefined4 *)(uVar1 + 0x6c) = *(undefined4 *)(param_4 + 0x14);
    *(undefined4 *)(*param_1 + 0xb8) = 1;
    if (param_5 != 0) {
      uVar1 = *param_1;
      fn_822A51A0(uVar1 + 0x74,param_5 + 4);
      *(undefined4 *)(uVar1 + 0x84) = *(undefined4 *)(param_5 + 0x14);
      *(undefined4 *)(*param_1 + 0xb8) = 2;
      if (param_6 != 0) {
        uVar1 = *param_1;
        fn_822A51A0(uVar1 + 0x8c,param_6 + 4);
        *(undefined4 *)(uVar1 + 0x9c) = *(undefined4 *)(param_6 + 0x14);
        *(undefined4 *)(*param_1 + 0xb8) = 3;
      }
    }
    if (param_7 == 0) {
      param_3 = *(int *)(*param_1 + 0xb8) * 0x18 + *param_1 + 0x40;
    }
    iStack_430 = param_3;
    if (*(int *)(*param_1 + 0x28) != 0) {
      uStack_428 = (ulonglong)*(uint *)(*param_1 + 0xb8);
      lVar9 = 5;
      dVar11 = (double)uStack_428;
      do {
        uStack_420 = 0;
        uStack_41c = 0;
        fn_82273CD8(&uStack_420,3);
        dStack_418 = dVar11;
        fn_82672C20(*(undefined4 *)(*param_1 + 0x28),0xffffffff821ac2cc,&uStack_420,1);
        fn_82273C88(&uStack_420);
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    iVar6 = *(int *)(*param_1 + 0x50);
    if (iVar6 == 1) {
      if ((*(int *)(param_3 + 8) - *(int *)(param_3 + 4)) / 0x5c != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82A1EFC0(auStack_220,0,0xc0);
      }
    }
    else {
      if (iVar6 != 2) {
        if (iVar6 == 3) {
          uVar10 = 0;
          if ((*(int *)(param_3 + 8) - *(int *)(param_3 + 4)) / 0x5c == 0) {
            return;
          }
          iVar6 = 0;
          do {
            iVar7 = *(int *)(param_3 + 4);
            iVar8 = fn_8243E578((ulonglong)*param_1 + 0xa0,*(undefined4 *)(iVar6 + iVar7));
            if ((iVar8 != 0) &&
               (iVar2 = *(int *)(*(int *)(param_2 + 0x174) + 0x5c),
               (*(int *)(iVar2 + 0x1c8) - *(int *)(iVar2 + 0x1c4) & 0xfffffffcU) != 4)) {
              fn_82528EE0(auStack_2e0,0x20,0xffffffff821ac280,*(undefined4 *)(iVar8 + 0x44));
            }
            iStack_440 = 0;
            iStack_43c = 0;
            uStack_438 = 0;
            if ((*(int *)(param_2 + 0xa0) == 0) ||
               (bVar4 = true, *(int *)(*(int *)(param_2 + 0xa0) + 0x40) != 2)) {
              bVar4 = false;
            }
            uVar10 = uVar10 + 1;
            fn_822A4F48(param_1,&iStack_440,param_2,iVar6 + iVar7,param_3,uVar10,!bVar4);
            puStack_328 = auStack_2e0;
            uStack_330 = 0;
            uStack_32c = 5;
            fn_82290458(&iStack_440,&uStack_330);
            fn_82273C88(&uStack_330);
            puStack_308 = &lbl_820E975C;
            uStack_310 = 0;
            uStack_30c = 5;
            fn_82290458(&iStack_440,&uStack_310);
            fn_82273C88(&uStack_310);
            puStack_3d8 = &lbl_820E975C;
            uStack_3e0 = 0;
            uStack_3dc = 5;
            fn_82290458(&iStack_440,&uStack_3e0);
            fn_82273C88(&uStack_3e0);
            puStack_338 = auStack_2e0;
            uStack_340 = 0;
            uStack_33c = 5;
            fn_82290458(&iStack_440,&uStack_340);
            fn_82273C88(&uStack_340);
            uStack_3c0 = 0;
            uStack_3bc = 2;
            uStack_3b8 = 1;
            fn_82290458(&iStack_440,&uStack_3c0);
            fn_82273C88(&uStack_3c0);
            fn_82672C20(*(undefined4 *)(*param_1 + 0x28),0xffffffff821ac2a0,iStack_440,
                              iStack_43c - iStack_440 >> 4);
            fn_822902E8(&iStack_440);
            iVar6 = iVar6 + 0x5c;
          } while ((uVar10 & 0xffffffff) <
                   (ulonglong)(uint)((*(int *)(param_3 + 8) - *(int *)(param_3 + 4)) / 0x5c));
          return;
        }
        if (iVar6 != 4) {
          return;
        }
      }
      if ((*(int *)(param_3 + 8) - *(int *)(param_3 + 4)) / 0x5c != 0) {
        uStack_2a0 = 0;
                    /* WARNING: Subroutine does not return */
        fn_82A1EFC0(auStack_160,0,0xc0);
      }
    }
  }
  return;
}

