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
extern unsigned int *auStack_90;
extern int fn_8223C478();
extern int fn_8287DA08();
extern int fn_8287FD98();
extern int fn_8287FE88();
extern int fn_82881B18();
extern int fn_82884568();
extern int fn_828865A0();
extern int fn_828865F0();
extern int fn_82886608();
extern int fn_82886628();
extern int fn_828871B0();
extern int fn_82887DB8();
extern int fn_82888068();
extern int fn_82888170();
extern int fn_82888178();
extern int fn_82888230();
extern int fn_828886F0();
extern int fn_82889888();
extern int fn_82889A28();
extern int fn_828E9D50();
extern int fn_828E9D78();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9DB8();
extern int fn_828E9F90();
extern int fn_828E9FF8();
extern int fn_82CE0B38();
extern int fn_82CE0BB0();
extern int iRam83159a0c;
extern int iRam83159a34;
extern unsigned int iStack_84;
extern unsigned int lbl_831599F0;
extern unsigned int lbl_831599F4;
extern unsigned int lbl_83159A14;
extern unsigned int lbl_83159A3C;
extern int (*lbl_832129E0)();
extern int (*lbl_832129E4)();
extern unsigned int uStack_88;
extern unsigned int uStack_8c;


undefined8 fn_82884B90(int param_1,ulonglong param_2,longlong param_3,int *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar8;
  int iVar9;
  undefined8 uVar4;
  ulonglong uVar5;
  int *piVar10;
  undefined8 uVar6;
  char cVar11;
  longlong lVar7;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  int *piVar15;
  undefined2 auStack_90 [2];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  
  bVar3 = *(char *)(param_1 + 5) == '\0';
  auStack_90[0] = (undefined2)(((ulonglong)(uint)param_4[6] + 7 & 0xffffffff) >> 3);
  uVar13 = *(int *)(param_1 + 8) >> 0x1f & 2;
  if (bVar3) {
    iVar8 = *param_4;
    fn_8223C478(iVar8,0x10,0);
    fn_828E9F90(iVar8,auStack_90,2);
  }
  uVar1 = param_4[6];
  uVar5 = (ulonglong)(uVar1 >> 3);
  uVar14 = (ulonglong)uVar1 - ((ulonglong)uVar1 & 0xfffffff8);
  iVar8 = iRam83159a0c;
  if (iRam83159a0c == 0) {
    iVar8 = lbl_83159A14;
  }
  iVar9 = *param_4;
  fn_8223C478(iVar9,uVar5 << 3,0);
  fn_828E9F90(iVar9,iVar8,uVar5);
  if ((uVar14 & 0xffffffff) != 0) {
    fn_828E9D50(0xffffffff831599fc,uVar5);
    iVar8 = fn_828E9DA8(0xffffffff831599fc);
    iVar9 = fn_828E9D90(0xffffffff831599fc);
    if (iVar8 - iVar9 < (int)uVar14) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_828E9FF8(0xffffffff831599fc,uVar14);
    }
    iVar8 = *param_4;
    fn_8223C478(iVar8,uVar14,0);
    fn_828E9DB8(iVar8,uVar4,uVar14);
  }
  if ((lbl_832129E0 != (code *)0x0) && (uVar5 = fn_828E9D90(*param_4), (uVar5 & 7) != 0)) {
    piVar10 = (int *)(*lbl_832129E0)();
    (**(code **)(*piVar10 + 0x48))(piVar10,param_2);
    (**(code **)(*piVar10 + 0xc))(piVar10,*param_4);
    fn_828E9D90(*param_4);
    fn_828886F0();
    (**(code **)*piVar10)(piVar10,1);
  }
  uVar5 = fn_828E9D90(*param_4);
  lVar12 = 0;
  if ((uVar5 & 7) != 0) {
    iVar8 = *param_4;
    lVar12 = 8 - (uVar5 & 7);
    fn_8223C478(iVar8,lVar12,0);
    fn_828E9DB8(iVar8,0,lVar12);
  }
  if (bVar3) {
    uVar1 = param_4[7];
    uVar5 = (ulonglong)(uVar1 >> 3);
    uVar14 = (ulonglong)uVar1 - ((ulonglong)uVar1 & 0xfffffff8);
    iVar8 = iRam83159a34;
    if (iRam83159a34 == 0) {
      iVar8 = lbl_83159A3C;
    }
    iVar9 = *param_4;
    fn_8223C478(iVar9,uVar5 << 3,0);
    fn_828E9F90(iVar9,iVar8,uVar5);
    if ((uVar14 & 0xffffffff) != 0) {
      fn_828E9D50(0xffffffff83159a24,uVar5);
      iVar8 = fn_828E9DA8(0xffffffff83159a24);
      iVar9 = fn_828E9D90(0xffffffff83159a24);
      if (iVar8 - iVar9 < (int)uVar14) {
        uVar4 = 0;
      }
      else {
        uVar4 = fn_828E9FF8(0xffffffff83159a24,uVar14);
      }
      iVar8 = *param_4;
      fn_8223C478(iVar8,uVar14,0);
      fn_828E9DB8(iVar8,uVar4,uVar14);
    }
  }
  piVar15 = param_4 + 1;
  uVar4 = 0;
  piVar10 = (int *)param_4[1];
  while (piVar10 != (int *)0x0) {
    iVar8 = fn_82886608(piVar10);
    if ((((iVar8 == 0) && (iVar8 = (**(code **)(*piVar10 + 0x2c))(piVar10), iVar8 == 0)) &&
        (iVar8 = (**(code **)(*piVar10 + 0x28))(piVar10), iVar8 == 0)) &&
       (iVar8 = (**(code **)(*piVar10 + 0x30))(piVar10), iVar8 == 0)) {
      uVar5 = param_3 - *(longlong *)(piVar10 + 0x12) & 0xffffffff;
      fn_82888068(param_2,uVar13,0x2e,uVar5,1);
      uVar6 = (**(code **)(*piVar10 + 4))(piVar10);
      fn_82888178(uVar6,0x2e,uVar5,1);
    }
    if (piVar10[0xc] != 0) {
      *(int *)(piVar10[0xc] + 0x34) = piVar10[0xd];
    }
    if (piVar10[0xd] != 0) {
      *(int *)(piVar10[0xd] + 0x30) = piVar10[0xc];
    }
    if ((int *)*piVar15 == piVar10) {
      *piVar15 = piVar10[0xc];
    }
    if ((int *)param_4[2] == piVar10) {
      param_4[2] = piVar10[0xd];
    }
    piVar10[0xc] = 0;
    piVar10[0xd] = 0;
    param_4[3] = param_4[3] + -1;
    piVar10[0xb] = 0;
    cVar11 = fn_828865A0(piVar10);
    if (cVar11 == '\0') {
      (**(code **)*piVar10)(piVar10,1);
    }
    else {
      fn_82886628(piVar10,param_4[4]);
      fn_828865F0(piVar10);
      fn_828871B0(piVar10,param_3);
      fn_8287FE88(param_1 + 0x7c,piVar10);
      uVar4 = 1;
    }
    piVar10 = (int *)*piVar15;
  }
  cVar11 = fn_82887DB8(param_2,uVar13);
  if (cVar11 != '\0') {
    uVar5 = param_2;
    uVar14 = (ulonglong)*(uint *)(param_1 + 8);
    if ((int)*(uint *)(param_1 + 8) < 0) {
      uVar5 = 0xffffffffffffffff;
      uVar14 = param_2;
    }
    iVar8 = *param_4;
    uVar6 = fn_82889A28();
    fn_82889888(uVar6,iVar8,uVar14,uVar5,uVar13,1,bVar3,param_3);
  }
  if (lbl_832129E4 != (code *)0x0) {
    (*lbl_832129E4)(param_2,*param_4,uVar4);
  }
  lVar7 = fn_828E9D78(*param_4);
  uStack_8c = 0;
  uVar14 = lVar7 - (-(ulonglong)bVar3 & 2);
  lVar7 = -(uVar14 + ((longlong)((int)uVar14 >> 3) +
                      (ulonglong)((int)uVar14 < 0 && (uVar14 & 7) != 0) & 0x1fffffff) * -8);
  uVar5 = -(ulonglong)(lVar7 != 0) & lVar7 + 8U;
  if (*(char *)(param_1 + 6) == '\0') {
    uVar2 = lbl_831599F0;
    if (*(char *)(param_1 + 5) != '\0') {
      uVar2 = lbl_831599F4;
    }
    iStack_84 = *(int *)(*param_4 + 0x10);
    if (iStack_84 == 0) {
      iStack_84 = *(int *)(*param_4 + 0x18);
    }
    uStack_88 = fn_828E9D78();
    uStack_8c = fn_828E9D78(*param_4);
    if (*(int *)(param_1 + 8) < 0) {
      iVar8 = fn_82CE0B38(uVar2,&uStack_88,1,&uStack_8c,0,param_1 + 0x24,0x10,0);
    }
    else {
      lVar7 = fn_82881B18(*(int *)(param_1 + 8));
      iVar8 = fn_82CE0B38(uVar2,&uStack_88,1,&uStack_8c,0,lVar7 + 0x24,0x10,0);
    }
    if (iVar8 != 0) {
      iVar8 = fn_82CE0BB0();
      if (iVar8 == 0x2751) {
        fn_82888170(param_2,uVar13,6,1);
        fn_82888170(param_2,uVar13,7,uVar5 + uVar14);
        fn_82888170(param_2,uVar13,8,param_4[6]);
        fn_82888170(param_2,uVar13,9,param_4[7]);
        uVar4 = 10;
      }
      else {
        fn_82888170(param_2,uVar13,0xb,1);
        fn_82888170(param_2,uVar13,0xc,uVar5 + uVar14);
        fn_82888170(param_2,uVar13,0xd,param_4[6]);
        fn_82888170(param_2,uVar13,0xe,param_4[7]);
        uVar4 = 0xf;
      }
      fn_82888170(param_2,uVar13,uVar4,(uVar5 & 0x1fffffff) * 8 + lVar12);
      return 0;
    }
  }
  else {
    uVar6 = fn_828E9D78(*param_4);
    iVar8 = *(int *)(*param_4 + 0x10);
    if (iVar8 == 0) {
      iVar8 = *(int *)(*param_4 + 0x18);
    }
    fn_82884568(*(undefined4 *)(param_1 + 0x20),iVar8,uVar6);
  }
  uVar2 = uStack_8c;
  uVar6 = fn_8287FD98();
  fn_8287DA08(uVar6,param_2,uVar2,uVar4);
  fn_82888170(param_2,uVar13,0,1);
  fn_82888170(param_2,uVar13,1,uVar5 + uVar14);
  fn_82888170(param_2,uVar13,3,param_4[6]);
  fn_82888170(param_2,uVar13,4,param_4[7]);
  fn_82888170(param_2,uVar13,5,(uVar5 & 0x1fffffff) * 8 + lVar12);
  fn_82888230(param_2,uVar13,0x2c,uVar14);
  fn_82888068(param_2,uVar13,0x2d,uVar14,1);
  return 1;
}

