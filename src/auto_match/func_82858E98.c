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
extern int fn_826310E0();
extern int fn_826311B8();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82631AF0();
extern int fn_8263CBB0();
extern int fn_82837D98();
extern int fn_82851888();
extern int fn_828588F8();
extern int fn_82858B88();
extern int fn_82858E18();


void fn_82858E98(int param_1,ushort *param_2,int param_3,int param_4,int param_5,int *param_6)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int aiStack_50 [20];
  
  bVar1 = *(byte *)(param_2 + 1);
  if (0x2a < bVar1) {
    if (bVar1 == 0x2c) {
      if (*(int *)(param_2 + 4) != 0) {
        uVar4 = *(undefined4 *)(*(int *)(param_2 + 2) * 4 + *(int *)(param_1 + 0x5c));
        uVar5 = *(undefined1 *)((uint)param_2[6] + *(int *)(*(int *)(param_2 + 4) + param_3 + 8));
        goto LAB_828591bc;
      }
      uVar4 = *(undefined4 *)(*(int *)(param_2 + 2) * 4 + *(int *)(param_1 + 0x5c));
LAB_828591b8:
      uVar5 = 0;
LAB_828591bc:
      aiStack_50[0] = 0;
      fn_82837D98(uVar4,uVar5,aiStack_50);
      if (aiStack_50[0] == 0) {
        fn_82851888(aiStack_50);
      }
                    /* WARNING: Subroutine does not return */
      fn_8263CBB0(*(undefined4 *)(param_1 + 4),(ulonglong)param_2[6],aiStack_50[0],
                        0x8000000000000000 >> ((ulonglong)param_2[6] + 0x20 & 0x7f));
    }
    if (bVar1 == 0x2d) {
      fn_828588F8(param_1,param_2);
    }
    else if (bVar1 == 0x33) {
      fn_82631AF0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 2));
    }
    else {
      if (bVar1 == 0x35) {
        uVar4 = *(undefined4 *)(*(int *)(param_2 + 2) * 4 + *(int *)(param_1 + 0x5c));
        goto LAB_828591b8;
      }
      if (bVar1 == 0x45) {
        fn_82858B88(param_1,param_2);
      }
      else if (bVar1 == 0x4b) {
        fn_82858E18(param_1,param_2);
      }
    }
    goto LAB_828591fc;
  }
  if (bVar1 == 0x2a) {
                    /* WARNING: Subroutine does not return */
    fn_82631578(*(undefined4 *)(param_1 + 4),0);
  }
  switch(bVar1) {
  case 2:
                    /* WARNING: Subroutine does not return */
    fn_82631578(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 2));
  case 3:
    puVar6 = param_2 + 6;
    goto code_r0x82858f90;
  case 4:
    puVar6 = (ushort *)(param_5 + *(int *)(param_2 + 2));
    goto code_r0x82858f90;
  case 5:
    puVar6 = (ushort *)(*(int *)(param_2 + 2) + param_3);
code_r0x82858f90:
    uVar2 = param_2[4];
    fn_826310E0(*(undefined4 *)(param_1 + 4),(ulonglong)uVar2,puVar6,(ulonglong)param_2[5],
                 (ulonglong)
                 (-0x8000000000000000 >>
                 (((((ulonglong)uVar2 + (ulonglong)param_2[5]) - 1 & 0xffffffff) >> 2) -
                  (ulonglong)(uVar2 >> 2) & 0x7f)) >> ((ulonglong)(uVar2 >> 2) & 0x7f));
code_r0x82858f00:
    iVar8 = (uint)*param_2 + *param_6;
    goto code_r0x82859208;
  case 6:
    puVar6 = param_2 + 6;
    goto code_r0x82858f34;
  case 7:
    puVar6 = (ushort *)(*(int *)(param_2 + 2) + param_5);
    goto code_r0x82858f34;
  case 8:
    puVar6 = (ushort *)(*(int *)(param_2 + 2) + param_3);
code_r0x82858f34:
    uVar2 = param_2[4];
    fn_826311B8(*(undefined4 *)(param_1 + 4),(ulonglong)uVar2,puVar6,(ulonglong)param_2[5],
                 (ulonglong)
                 (-0x8000000000000000 >>
                 (((((ulonglong)uVar2 + (ulonglong)param_2[5]) - 1 & 0xffffffff) >> 2) -
                  (ulonglong)(uVar2 >> 2) & 0x7f)) >> ((ulonglong)(uVar2 >> 2) & 0x7f));
    goto code_r0x82858f00;
  case 9:
    fn_82631AF0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 2));
    fn_82631920(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4));
    goto code_r0x82858f00;
  case 0xc:
    uVar4 = *(undefined4 *)(param_2 + 4);
    goto code_r0x82859078;
  case 0xd:
    uVar4 = *(undefined4 *)(*(int *)(param_2 + 4) + param_5);
code_r0x82859078:
    (**(code **)(*(int *)(param_1 + 4) + *(int *)(param_2 + 2) + 0x40))(*(int *)(param_1 + 4),uVar4)
    ;
    break;
  case 0xe:
    (**(code **)(*(int *)(param_1 + 4) + *(int *)(param_2 + 2) + 0x1d4))
              (*(int *)(param_1 + 4),param_2[6],*(undefined4 *)(param_2 + 4));
    uVar2 = param_2[6];
    uVar7 = 0xffff;
code_r0x82859064:
    *(uint *)((uVar2 + 3) * 4 + param_1) = uVar7;
    break;
  case 0xf:
    piVar3 = *(int **)((uint)param_2[2] * 4 + param_4);
    if (*(uint *)((param_2[3] + 3) * 4 + param_1) != (uint)param_2[2]) {
      iVar8 = 0;
      if (0 < piVar3[1]) {
        iVar9 = 0;
        do {
          (**(code **)(*(int *)(param_1 + 4) + *(int *)(iVar9 + *piVar3) + 0x1d4))
                    (*(int *)(param_1 + 4),param_2[3],((int *)(iVar9 + *piVar3))[1]);
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 8;
        } while (iVar8 < piVar3[1]);
      }
      uVar2 = param_2[3];
      uVar7 = (uint)param_2[2];
      goto code_r0x82859064;
    }
  }
LAB_828591fc:
  iVar8 = (uint)*param_2 + *param_6;
code_r0x82859208:
  *param_6 = iVar8;
  return;
}

