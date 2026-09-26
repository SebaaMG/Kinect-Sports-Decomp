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
extern unsigned int *auStack_68;
extern int fn_82810328();
extern int fn_82810558();
extern int fn_8305D680();
extern int fn_8305D8F0();
extern int fn_8305E0F8();
extern int fn_8305ED48();
extern int fn_8305F320();
extern int fn_83065C40();
extern int fn_83065E50();
extern int fn_83066810();
extern unsigned int iStack_90;
extern unsigned int iStack_94;
extern unsigned int iStack_a0;
extern unsigned int iStack_a4;
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_820288B0;
extern unsigned int lbl_8217E8A0;
extern unsigned int lbl_8217E8A4;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;


undefined8
fn_830635A0(int param_1,int param_2,undefined8 param_3,undefined4 *param_4,undefined4 *param_5)

{
  code *pcVar1;
  int iVar3;
  ulonglong uVar2;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  char cStack_b0;
  undefined **ppuStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined **ppuStack_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 auStack_68 [104];
  
  uStack_78 = *param_4;
  uStack_74 = param_4[1];
  uStack_70 = param_4[2];
  uStack_88 = *param_5;
  uStack_84 = param_5[1];
  uStack_80 = param_5[2];
  fn_82810328(&uStack_88,&uStack_78,auStack_68);
  fn_82810558((double)lbl_820288B0,auStack_68,&uStack_78);
  fn_82810558((double)lbl_82002C2C,auStack_68,&uStack_88);
  ppuStack_98 = &lbl_8217E8A0;
  iVar8 = 0;
  iStack_94 = param_2;
  iStack_90 = param_2;
  iVar3 = (*(code *)lbl_8217E8A4)(&ppuStack_98,param_2);
  iVar5 = param_2;
  if (iVar3 != 0) {
    do {
      iStack_90 = iVar3;
      uVar2 = fn_83065E50();
      fn_8305E0F8(uVar2,param_3);
      fn_8305ED48(uVar2,iVar3 + 0x10,&uStack_78,&uStack_88);
      if (*(int *)(iVar3 + 0x30) == iVar5) {
        fn_8305D8F0(uVar2);
      }
      ppuStack_a8 = &lbl_8217E8A0;
      pcVar1 = (code *)lbl_8217E8A4;
      iStack_a4 = param_2;
      iStack_a0 = param_2;
      while (iVar5 = iStack_a0, iVar3 = (*pcVar1)(&ppuStack_a8,iStack_a0), iStack_a0 = iVar3,
            iVar3 != 0) {
        iVar4 = fn_83066810((double)*(float *)(param_1 + 0x30),iVar3 + 0x10,uVar2);
        if (cStack_b0 == '\0') {
          if (iVar4 == 3) {
            if (*(int *)(iVar3 + 0x30) == iVar5) {
              uVar6 = 0;
              uVar7 = uVar2;
            }
            else {
              uVar7 = 0;
              uVar6 = uVar2;
            }
            fn_8305F320((double)*(float *)(param_1 + 0x30),uVar2,iVar3 + 0x10,uVar6,uVar7);
          }
          else if (((iVar4 == 1) && (*(int *)(iVar3 + 0x34) == iVar5)) ||
                  ((iVar4 == 2 && (*(int *)(iVar3 + 0x30) == iVar5)))) {
            fn_83065C40(uVar2);
            goto LAB_830637b8;
          }
        }
        iVar5 = fn_8305D680(uVar2);
        if (iVar5 < 3) {
          fn_83065C40(uVar2);
          uVar2 = 0;
          break;
        }
        pcVar1 = (code *)ppuStack_a8[1];
      }
      if (((uVar2 & 0xffffffff) != 0) && (iVar5 = fn_8305D680(uVar2), 2 < iVar5)) {
        iVar8 = iVar8 + 1;
      }
LAB_830637b8:
      iVar5 = iStack_90;
      iVar3 = (*(code *)ppuStack_98[1])(&ppuStack_98);
    } while (iVar3 != 0);
    if (3 < iVar8) {
      return 1;
    }
  }
  return 0;
}

