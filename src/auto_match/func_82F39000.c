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
extern int fn_82E2D9C0();
extern int fn_82E58AC8();
extern int fn_82E58BE8();
extern int fn_82E58CA8();
extern int fn_82F37718();
extern int fn_82F377E8();
extern int fn_82F37AA8();
extern int fn_82F37D40();
extern int fn_82F384C0();
extern int fn_82F40450();
extern unsigned int uStack_148;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_164;
extern unsigned int uStack_168;
extern unsigned int uStack_170;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;


longlong fn_82F39000(int param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uStack_170;
  undefined4 *puStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  ulonglong auStack_160 [2];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  iVar4 = 0;
  uStack_68 = 0;
  uVar6 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_74 = 0;
  lVar2 = fn_82E58CA8(&uStack_150,*(undefined4 *)(param_1 + 0x70),0);
  if (-1 < lVar2) {
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x70);
    lVar7 = uVar5 - 1;
    if (-1 < lVar7) {
      do {
        fn_82F377E8(param_1 + 8,lVar7,&puStack_16c);
        piVar1 = (int *)*puStack_16c;
        uStack_170 = 0;
        (**(code **)(*piVar1 + 0x20))(piVar1,&uStack_170);
        if (uStack_170 != 0) {
          auStack_160[0] = 0;
          lVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,0,auStack_160);
          if (lVar2 < 0) break;
          if (0xffffffff < (uVar6 & 0xffffffff) + auStack_160[0]) {
            lVar2 = 1;
            goto LAB_82f39240;
          }
          if (((ulonglong)*(uint *)(param_1 + 0x70) < (uVar5 & 0xffffffff)) ||
             (iVar3 = fn_82F37AA8(param_1 + 8,lVar7), iVar3 < 0)) {
            lVar2 = -0x7fff0001;
            goto LAB_82f39240;
          }
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
          iVar3 = fn_82E58AC8(&uStack_150,piVar1);
          if (iVar3 == 0) {
            lVar2 = -0x7ff8fff2;
            (**(code **)(*piVar1 + 8))(piVar1);
            break;
          }
          iVar4 = iVar4 + 1;
          uVar6 = (auStack_160[0] & 0xffffffff) + uVar6;
        }
        lVar7 = lVar7 + -1;
        uVar5 = uVar5 - 1;
      } while (-1 < lVar7);
    }
    if ((int)lVar2 == 0) {
      if (iVar4 == 0) {
        lVar2 = 0;
        goto LAB_82f39288;
      }
      uStack_170 = 0;
      lVar2 = fn_82F384C0(param_1,&uStack_170);
      if (-1 < lVar2) {
        uVar5 = (ulonglong)uStack_170;
        fn_82F377E8(param_1 + 8,uVar5,&puStack_16c);
        lVar2 = fn_82F40450(*puStack_16c,uVar6);
        if (-1 < lVar2) {
          uStack_164 = 0;
          while( true ) {
            uVar5 = uVar5 + 1;
            iVar3 = fn_82E58BE8(&uStack_150,&uStack_164);
            if (iVar3 == 0) break;
            iVar3 = fn_82F37D40(param_1 + 8,uVar5,uStack_164);
            if (iVar3 == 0) {
              lVar2 = -0x7ff8fff2;
              break;
            }
            iVar4 = iVar4 + -1;
          }
        }
      }
    }
LAB_82f39240:
    if (iVar4 != 0) {
      uStack_168 = 0;
      iVar4 = fn_82E58BE8(&uStack_150,&uStack_168);
      if (iVar4 != 0) {
        do {
          fn_82F37718(param_1 + 8,uStack_168,0);
          iVar4 = fn_82E58BE8(&uStack_150,&uStack_168);
        } while (iVar4 != 0);
      }
    }
  }
LAB_82f39288:
  thunk_FUN_82e58aac(&uStack_150);
  fn_82E2D9C0(&uStack_150);
  return lVar2;
}

