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
extern int fn_82AB15D0();
extern int fn_82BAFE48();
extern int fn_82BC0DD8();
extern int fn_82BC24F0();
extern int fn_82BC2958();
extern int fn_82BC5628();


void fn_82BA1A40(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  
  iVar1 = *(int *)(param_1 + 0x88);
  iVar2 = *(int *)(iVar1 + 8);
  while (iVar2 != 0) {
    for (iVar2 = *(int *)(iVar1 + 0x1c); *(int *)(iVar2 + 8) != 0; iVar2 = *(int *)(iVar2 + 8)) {
      if ((*(uint *)(iVar2 + 0xe4) & 1) != 0) {
        uVar3 = *(uint *)(iVar2 + 0x14);
        uVar11 = (ulonglong)uVar3;
        uVar9 = 0;
        uVar8 = 0;
        if (0 < (int)uVar3) {
          piVar7 = (int *)(iVar2 + 0x54);
          do {
            iVar10 = *piVar7;
            if (((iVar10 == 1) || (iVar10 == 2)) || (iVar10 == 3)) {
              uVar8 = uVar8 + 1;
            }
            else if (iVar10 == 0xb) {
              uVar9 = uVar9 + 1;
            }
            piVar7 = piVar7 + 1;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
          if (((int)uVar8 != 0) && (iVar10 = (int)uVar9, iVar10 != 0)) {
            uVar9 = ((uVar8 & 0xffffffff) >> 0x1f) + (longlong)(iVar10 >> 0x1f) +
                    (ulonglong)(uVar8 <= uVar9);
            if ((iVar10 != 1) && ((int)uVar8 != 1)) {
              fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ded50,0xffffffff820deb50,0x77b);
            }
            lVar12 = 0;
            puVar13 = (undefined4 *)(iVar2 + 0x20);
            do {
              iVar10 = puVar13[0xd];
              if (((((iVar10 == 1) || (iVar10 == 2)) || (iVar10 == 3)) && ((uVar9 & 0xff) != 0)) ||
                 ((iVar10 == 0xb && ((uVar9 & 0xff) == 0)))) {
                uVar5 = fn_82BC24F0(0x31,*(undefined4 *)(param_1 + 0xc));
                uVar4 = *puVar13;
                *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) =
                     *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) + -1;
                uVar6 = fn_82BAFE48(*(undefined4 *)(param_1 + 0xac),0);
                fn_82BC2958(uVar5,0,uVar6);
                fn_82BC2958(uVar5,1,uVar4);
                fn_82BC0DD8(uVar4,iVar2,uVar5);
                fn_82BC2958(iVar2,lVar12 + 1,uVar6);
                fn_82BC5628(*(undefined4 *)(iVar2 + 0x3b4),iVar2,uVar5);
              }
              lVar12 = lVar12 + 1;
              puVar13 = puVar13 + 1;
            } while ((int)lVar12 < (int)uVar3);
          }
        }
      }
    }
    iVar1 = *(int *)(iVar1 + 8);
    iVar2 = *(int *)(iVar1 + 8);
  }
  return;
}

