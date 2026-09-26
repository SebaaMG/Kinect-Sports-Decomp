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
extern unsigned int *auStack_30;
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_826972E0();
extern int fn_82745028();
extern int fn_827459D8();
extern unsigned int lbl_82005710;


void fn_82745EB8(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar6;
  longlong lVar5;
  double *pdVar7;
  undefined1 uVar10;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  char acStack_70 [16];
  char acStack_60 [16];
  char acStack_50 [16];
  char acStack_40 [16];
  undefined1 auStack_30 [24];
  
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    lVar4 = fn_82696958(uVar3,uVar1);
    if (lVar4 != 0) {
      cVar6 = fn_82695468(param_1,0x11);
      if (cVar6 == '\0') {
        fn_826954C0(param_1,0xffffffff8200eef4,0,0);
      }
      else {
        lVar5 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
        if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
          lVar5 = 0;
        }
        pdVar7 = &dStack_80;
        dStack_90 = lbl_82005710;
        lVar11 = 4;
        dStack_88 = lbl_82005710;
        dStack_80 = lbl_82005710;
        dStack_78 = lbl_82005710;
        do {
          pdVar7 = pdVar7 + 2;
          *(undefined1 *)pdVar7 = 0;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        fn_827459D8(lVar5,*(undefined4 *)(param_1 + 0x18),&dStack_90);
        fn_82745028(*(undefined4 *)(param_1 + 0x18),lVar4,acStack_70);
        if ((acStack_70[0] == '\0') || (bVar2 = false, acStack_70[0] == '\n')) {
          bVar2 = true;
        }
        if (!bVar2) {
          if ((acStack_60[0] == '\0') || (bVar2 = false, acStack_60[0] == '\n')) {
            bVar2 = true;
          }
          if (!bVar2) {
            if ((acStack_50[0] == '\0') || (bVar2 = false, acStack_50[0] == '\n')) {
              bVar2 = true;
            }
            if (!bVar2) {
              if ((acStack_40[0] == '\0') || (bVar2 = false, acStack_40[0] == '\n')) {
                bVar2 = true;
              }
              if (!bVar2) {
                dVar12 = (double)fn_826972E0(acStack_40,*(undefined4 *)(param_1 + 0x18));
                dVar13 = (double)fn_826972E0(acStack_50,*(undefined4 *)(param_1 + 0x18));
                dVar14 = (double)fn_826972E0(acStack_60,*(undefined4 *)(param_1 + 0x18));
                dVar15 = (double)fn_826972E0(acStack_70,*(undefined4 *)(param_1 + 0x18));
                if ((((dStack_80 < dVar13 + dVar15) || (dStack_78 < dVar14 + dVar12)) ||
                    (dVar15 < dStack_90)) || (uVar10 = 1, dVar14 < dStack_88)) {
                  uVar10 = 0;
                }
                puVar9 = *(undefined1 **)(param_1 + 4);
                fn_826959C8(puVar9);
                puVar9[4] = uVar10;
                puVar8 = auStack_30;
                *puVar9 = 2;
                lVar4 = 3;
                do {
                  puVar8 = puVar8 + -0x10;
                  fn_82696330(puVar8);
                  lVar4 = lVar4 + -1;
                } while (-1 < lVar4);
                return;
              }
            }
          }
        }
        puVar9 = auStack_30;
        lVar4 = 3;
        do {
          puVar9 = puVar9 + -0x10;
          fn_82696330(puVar9);
          lVar4 = lVar4 + -1;
        } while (-1 < lVar4);
      }
    }
  }
  return;
}

