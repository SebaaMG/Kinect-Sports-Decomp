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
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_829644B8();
extern int fn_82964628();
extern int fn_82BA02A8();
extern unsigned int lbl_82005710;


longlong fn_829978F8(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar5;
  longlong lVar4;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  
  uVar7 = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar8 = 0;
    uVar12 = lbl_82005710;
    do {
      puVar2 = *(uint **)(iVar8 + *(int *)(param_1 + 0x234));
      if (puVar2 != (uint *)0x0) {
        uVar1 = *puVar2;
        if (((uVar1 & 0xfff00000) != 0x72100000) && ((uVar1 & 0xfff00000) != 0)) {
          uVar3 = uVar1 & 0xfffff;
          iVar10 = (-(uint)((uVar1 & 0xfff00000) != 0x11000000) & uVar3) * 4;
          if ((*(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(puVar2[2] + iVar10) * 4 +
                                                   *(int *)(param_1 + 0x14)) + 4) * 4 +
                                 *(int *)(param_1 + 0x10)) + 4) & 0x200) != 0) {
            iVar5 = fn_82963998(0x74);
            if (iVar5 == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = fn_829632A0();
            }
            if (iVar5 == 0) {
              return -0x7ff8fff2;
            }
            lVar4 = fn_82963A30(iVar5,uVar3 | 0x10000000,uVar3,uVar3,0);
            if (lVar4 < 0) {
              fn_82BA02A8(iVar5);
              fn_829639F0(iVar5);
              return lVar4;
            }
            lVar4 = fn_829632F0(iVar5,*(undefined4 *)(iVar8 + *(int *)(param_1 + 0x234)));
            if ((int)lVar4 < 0) {
LAB_82997b0c:
              fn_82BA02A8(iVar5);
              fn_829639F0(iVar5);
              return lVar4;
            }
            uVar9 = 0;
            if ((uVar1 & 0xfffff) != 0) {
              iVar11 = 0;
              do {
                iVar6 = fn_82964628(uVar12,param_1,*(undefined4 *)(param_1 + 0x88),0,uVar9);
                uVar9 = uVar9 + 1;
                *(undefined4 *)(*(int *)(iVar6 * 4 + *(int *)(param_1 + 0x14)) + 0x3c) = 0;
                *(int *)(*(int *)(iVar5 + 0x10) + iVar11) = iVar6;
                *(undefined4 *)(*(int *)(iVar5 + 8) + iVar11) =
                     *(undefined4 *)
                      (*(int *)(*(int *)(iVar8 + *(int *)(param_1 + 0x234)) + 8) + iVar10);
                iVar11 = iVar11 + 4;
                *(int *)(*(int *)(*(int *)(iVar8 + *(int *)(param_1 + 0x234)) + 8) + iVar10) = iVar6
                ;
                iVar10 = iVar10 + 4;
              } while (uVar9 < uVar3);
            }
            if (0x1ff < *(uint *)(param_1 + 0x224)) {
              lVar4 = -0x7ff8fff2;
              goto LAB_82997b0c;
            }
            *(int *)(*(uint *)(param_1 + 0x224) * 4 + *(int *)(param_1 + 0x230)) = iVar5;
            *(int *)(param_1 + 0x224) = *(int *)(param_1 + 0x224) + 1;
            lVar4 = fn_829644B8(param_1,iVar5);
            if ((int)lVar4 < 0) goto LAB_82997b0c;
          }
        }
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar7 < *(uint *)(param_1 + 0x4c));
  }
  return 0;
}

