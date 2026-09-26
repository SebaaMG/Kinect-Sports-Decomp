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
extern unsigned int *auStack_280;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82E083F8();
extern unsigned int *lbl_8323B464;
extern unsigned int uStack_288;
extern unsigned int uStack_28c;
extern unsigned int uStack_290;


void fn_82E084C8(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uStack_290;
  uint uStack_28c;
  uint uStack_288;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [624];
  
  fn_82E083F8();
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar8 = 0;
    do {
      iVar9 = 0;
      iVar2 = *(int *)(iVar8 + *(int *)(param_1 + 0xc));
      uVar1 = *(uint *)(iVar2 + 0x10);
      uVar4 = *(uint *)(iVar2 + 0x1c) | uVar1;
      uVar3 = (-(ulonglong)uVar1 & ~(ulonglong)uVar1 & 0xffffffff) >> 0x1f;
      if (0 < (int)uVar4) {
        do {
          if (*(char *)(iVar2 + 8) == '\x01') {
            if (uVar3 == 0) {
              uStack_290 = *(uint *)(iVar9 * 4 + *(int *)(iVar2 + 0x18));
              uStack_28c = *(uint *)((iVar9 + 1) * 4 + *(int *)(iVar2 + 0x18));
              uStack_288 = *(uint *)((iVar9 + 2) * 4 + *(int *)(iVar2 + 0x18));
            }
            else {
              uStack_290 = (uint)*(ushort *)(iVar9 * 2 + *(int *)(iVar2 + 0xc));
              uStack_28c = (uint)*(ushort *)((iVar9 + 1) * 2 + *(int *)(iVar2 + 0xc));
              uStack_288 = (uint)*(ushort *)((iVar9 + 2) * 2 + *(int *)(iVar2 + 0xc));
            }
            iVar9 = iVar9 + 3;
LAB_82e086c4:
            iVar5 = fn_82CE5410();
            if (*(uint *)(param_2 + 0x10) == (*(uint *)(param_2 + 0x14) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
              fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),(int *)(param_2 + 0xc),0x10);
            }
            puVar6 = (uint *)(*(int *)(param_2 + 0x10) * 0x10 + *(int *)(param_2 + 0xc));
            *puVar6 = uStack_290;
            puVar6[1] = uStack_28c;
            puVar6[2] = uStack_288;
            puVar6[3] = param_3;
            *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
          }
          else {
            if (*(char *)(iVar2 + 8) != '\x02') {
              fn_82CEE578(auStack_280,auStack_270,0x200);
              fn_82CEDB38(auStack_280,0xffffffff82149f50);
              (**(code **)(*lbl_8323B464 + 0xc))
                        (lbl_8323B464,1,0xffffffffabbaa883,auStack_270,0xffffffff82149f7c,0x8d);
                    /* WARNING: Subroutine does not return */
              fn_82CED958(auStack_280);
            }
            if (1 < iVar9) {
              if (iVar9 == 2) {
                if (uVar3 == 0) {
                  uStack_290 = **(uint **)(iVar2 + 0x18);
                  uStack_28c = *(uint *)(*(int *)(iVar2 + 0x18) + 4);
                  iVar9 = 3;
                  uStack_288 = *(uint *)(*(int *)(iVar2 + 0x18) + 8);
                }
                else {
                  uStack_290 = (uint)**(ushort **)(iVar2 + 0xc);
                  uStack_28c = (uint)*(ushort *)(*(int *)(iVar2 + 0xc) + 2);
                  iVar9 = 3;
                  uStack_288 = (uint)*(ushort *)(*(int *)(iVar2 + 0xc) + 4);
                }
              }
              else {
                iVar5 = *(int *)(param_2 + 0x10) * 0x10 + *(int *)(param_2 + 0xc);
                uStack_290 = *(uint *)(iVar5 + -8);
                uStack_28c = *(uint *)(iVar5 + -0xc);
                if (uVar3 == 0) {
                  iVar5 = iVar9 * 4;
                  iVar9 = iVar9 + 1;
                  uStack_288 = *(uint *)(iVar5 + *(int *)(iVar2 + 0x18));
                }
                else {
                  iVar5 = iVar9 * 2;
                  iVar9 = iVar9 + 1;
                  uStack_288 = (uint)*(ushort *)(iVar5 + *(int *)(iVar2 + 0xc));
                }
              }
              goto LAB_82e086c4;
            }
            iVar9 = iVar9 + 1;
          }
        } while (iVar9 < (int)uVar4);
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar7 < *(int *)(param_1 + 0x10));
  }
  return;
}

