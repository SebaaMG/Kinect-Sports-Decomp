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
extern unsigned int *auStack_108;
extern unsigned int *auStack_10c;
extern unsigned int *auStack_e0;
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern int fn_82CED958();
extern int fn_82CEE1B0();
extern int fn_82CFC050();
extern int fn_82E17F40();
extern int fn_82E17FB8();
extern int fn_82E19B50();
extern int fn_82E19DB0();
extern int fn_82E1A688();
extern unsigned int iStack_a0;
extern unsigned int iStack_a4;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int iStack_fc;
extern unsigned int lbl_8214B02C;
extern unsigned int uStack_100;
extern unsigned int uStack_110;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a8;
extern unsigned int uStack_d8;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;


void fn_82E0F818(int *param_1,int *param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uStack_110;
  undefined1 auStack_10c [4];
  undefined1 auStack_108 [8];
  undefined4 uStack_100;
  int iStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined4 uStack_d8;
  undefined **appuStack_d0 [8];
  int iStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  
  uStack_100 = 0;
  iStack_fc = 0;
  uStack_f8 = 0x80000000;
  fn_82CEE1B0(auStack_e0,&uStack_100);
  iStack_b0 = 0;
  iStack_ac = 0;
  iStack_a4 = 0;
  iStack_a0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_a8 = 0x80000000;
  uStack_9c = 0x80000000;
  uStack_90 = 0x80000000;
  uStack_84 = 0x80000000;
  uStack_e8 = 0xffffffff;
  iVar3 = fn_82CE5410();
  fn_82CEAB00(&uStack_f0,*(undefined4 *)(iVar3 + 0x10),0);
  iVar3 = 0;
  if (0 < param_3[1]) {
    iVar5 = 0;
    do {
      iVar6 = *(int *)(iVar5 + *param_3) * 8;
      puVar8 = (undefined4 *)(*param_1 + iVar6);
      fn_82E19DB0(auStack_10c,0xffffffff83187414);
      fn_82E19DB0(auStack_108,0xffffffff83187414);
      fn_82E17F40(appuStack_d0,auStack_108,auStack_10c,uStack_110);
      iVar2 = iStack_fc;
      appuStack_d0[0] = &lbl_8214B02C;
      piVar7 = (int *)(iVar6 + *param_2);
      iVar6 = piVar7[1];
      *piVar7 = iStack_fc;
      uVar1 = *puVar8;
      iVar4 = fn_82CE5410();
      fn_82CEA160(&uStack_f0,*(undefined4 *)(iVar4 + 0x10),uVar1,iVar2);
      fn_82E19B50(appuStack_d0,*puVar8,puVar8[1],uStack_d8,iVar6,&iStack_b0);
      fn_82E17FB8(appuStack_d0);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar3 < param_3[1]);
  }
  iVar3 = iStack_fc;
  if (iStack_fc != 0) {
    iVar5 = fn_82CE5410();
    iVar3 = (**(code **)(**(int **)(iVar5 + 0x10) + 4))(*(int **)(iVar5 + 0x10),iVar3);
    (**(code **)(*param_4 + 0x10))(param_4,iVar3,iStack_fc,5);
    fn_82CFC050(iVar3,uStack_100,iStack_fc);
    iVar5 = 0;
    if (0 < param_3[1]) {
      iVar6 = 0;
      do {
        iVar5 = iVar5 + 1;
        piVar7 = (int *)(iVar6 + *param_3);
        iVar6 = iVar6 + 4;
        iVar2 = *piVar7 * 8;
        *(int *)(iVar2 + *param_2) = *(int *)(iVar2 + *param_2) + iVar3;
      } while (iVar5 < param_3[1]);
    }
    iVar5 = 0;
    if (0 < iStack_ac) {
      iVar6 = 0;
      do {
        iVar5 = iVar5 + 1;
        iVar2 = iVar6 + iStack_b0;
        piVar7 = (int *)(iVar6 + iStack_b0);
        iVar6 = iVar6 + 8;
        *(int *)(*piVar7 + iVar3) = *(int *)(iVar2 + 4) + iVar3;
      } while (iVar5 < iStack_ac);
    }
    iVar5 = 0;
    if (0 < iStack_a0) {
      iVar6 = 0;
      do {
        (**(code **)(*param_4 + 0x14))
                  (param_4,*(undefined4 *)(iVar6 + iStack_a4 + 4),
                   *(int *)(iVar6 + iStack_a4) + iVar3);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x10;
      } while (iVar5 < iStack_a0);
    }
    iVar3 = fn_82CE5410();
    fn_82CEA4B8(&uStack_f0,*(undefined4 *)(iVar3 + 0x10));
    fn_82BA02A8(&uStack_f0);
    fn_82E1A688(&iStack_b0);
                    /* WARNING: Subroutine does not return */
    fn_82CED958(auStack_e0);
  }
  iVar3 = fn_82CE5410();
  fn_82CEA4B8(&uStack_f0,*(undefined4 *)(iVar3 + 0x10));
  fn_82BA02A8(&uStack_f0);
  fn_82E1A688(&iStack_b0);
                    /* WARNING: Subroutine does not return */
  fn_82CED958(auStack_e0);
}

