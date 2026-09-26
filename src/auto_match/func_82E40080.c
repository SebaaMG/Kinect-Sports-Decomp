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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_50;
extern int fn_82E3A938();
extern int fn_82E3ACD8();
extern int fn_82E3AF20();
extern int fn_82E3B1A8();
extern int fn_82E3C048();
extern int fn_82E3D760();
extern int fn_82E3D8B0();
extern int fn_82E3E5A8();
extern int fn_82E3F410();
extern int fn_82E50BE8();
extern int fn_82E6F550();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E628;
extern unsigned int lbl_8214C020;
extern unsigned int lbl_8214C030;
extern unsigned int lbl_82154AC8;
extern unsigned int lbl_82154AD0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong fn_82E40080(int param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar5;
  undefined8 uVar4;
  int iVar6;
  int *piVar7;
  ulonglong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int *piVar11;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  undefined1 auStack_50 [80];
  
  if (param_2 == (byte *)0x0) {
    return -0x7ff8ffa9;
  }
  piStack_60 = (int *)0x0;
  piStack_5c = (int *)0x0;
  piStack_58 = (int *)0x0;
  piVar11 = (int *)0x0;
  piStack_54 = (int *)0x0;
  piVar7 = (int *)0x0;
  lVar3 = fn_82E3D760(param_1,*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8),&piStack_5c,
                        &piStack_60);
  if (lVar3 < 0) goto LAB_82e403fc;
  uVar8 = ZEXT48(piStack_5c);
  if (uVar8 == 0) {
    puVar5 = (undefined8 *)fn_82E3ACD8(auStack_50,param_1,param_2);
    lVar3 = fn_82E3A938(param_1,*puVar5,puVar5[1],&piStack_5c);
    if ((lVar3 < 0) || (lVar3 = (**(code **)(*piStack_5c + 0x54))(piStack_5c,param_3), lVar3 < 0))
    goto LAB_82e403fc;
    if (piStack_60 != (int *)0x0) {
      (**(code **)(*piStack_60 + 8))();
      piStack_60 = (int *)0x0;
    }
    lVar3 = fn_82E3C048(param_1,&piStack_60);
    if (lVar3 < 0) goto LAB_82e403fc;
    uVar8 = ZEXT48(piStack_5c);
    if (uVar8 != 0) goto LAB_82e40184;
  }
  else {
LAB_82e40184:
    iVar6 = *(int *)uVar8;
    uVar4 = fn_82E3AF20(param_1,param_2);
    lVar3 = (**(code **)(iVar6 + 0x58))(uVar8,*(undefined2 *)(param_2 + 0x10),uVar4);
    if (lVar3 < 0) goto LAB_82e403fc;
    pbVar10 = &lbl_8214C020;
    pbVar9 = param_2;
    do {
      bVar1 = *pbVar10;
      bVar2 = *pbVar9;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar10 = pbVar10 + 1;
      pbVar9 = pbVar9 + 1;
    } while (pbVar10 != &lbl_8214C030);
    if (((((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) &&
         (lVar3 = (**(code **)(*piStack_5c + 0x58))(piStack_5c,*(undefined2 *)(param_2 + 0x10),0xff)
         , lVar3 < 0)) ||
        (lVar3 = fn_82E3B1A8(param_1,piStack_5c,*(undefined2 *)(param_2 + 0x10),param_3,piStack_60
                               ,0,&piStack_54), piVar11 = piStack_54, lVar3 < 0)) ||
       ((lVar3 = fn_82E3E5A8(param_1 + 0x1ac,param_2,&piStack_54), piVar11 = piStack_54, lVar3 < 0
        || (lVar3 = fn_82E3D8B0(param_1,piStack_5c), piVar11 = piStack_54, lVar3 < 0))))
    goto LAB_82e403fc;
  }
  pbVar10 = (byte *)&lbl_8202E618;
  pbVar9 = param_2;
  do {
    bVar1 = *pbVar10;
    bVar2 = *pbVar9;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar10 = pbVar10 + 1;
    pbVar9 = pbVar9 + 1;
  } while (pbVar10 != &lbl_8202E628);
  if (((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) &&
     (iVar6 = fn_82E3F410(param_1,*(undefined2 *)(param_2 + 0x10)), iVar6 != 0)) {
    lVar3 = fn_82E3A938(param_1,lbl_82154AC8,lbl_82154AD0,&piStack_58);
    if ((lVar3 < 0) ||
       (lVar3 = (**(code **)(*piStack_58 + 0x4c))(piStack_58,param_3 * 10000 & 0xffffffff),
       lVar3 < 0)) goto LAB_82e403fc;
    if (piStack_60 != (int *)0x0) {
      (**(code **)(*piStack_60 + 8))();
      piStack_60 = (int *)0x0;
    }
    lVar3 = fn_82E3C048(param_1,&piStack_60);
    if (lVar3 < 0) goto LAB_82e403fc;
    uVar8 = fn_82E50BE8(0x70,0,0,0,0);
    if ((uVar8 & 0xffffffff) == 0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)fn_82E6F550(uVar8,piStack_58,*(undefined2 *)(param_2 + 0x10),piStack_60,0,
                                      *(undefined4 *)(param_1 + 0x54),*(uint *)(param_1 + 0x44) & 4)
      ;
    }
    if (piVar7 == (int *)0x0) {
      lVar3 = -0x7ff8fff2;
      goto LAB_82e403fc;
    }
    lVar3 = (**(code **)(*piVar7 + 0x14))(piVar7);
    if (lVar3 < 0) goto LAB_82e403fc;
    if (piVar11 == (int *)0x0) {
      piStack_54 = piVar7;
      lVar3 = fn_82E3E5A8(param_1 + 0x1ac,param_2,&piStack_54);
    }
    else {
      lVar3 = (**(code **)(*piVar11 + 0x1c))(piVar11,piVar7);
    }
    if (lVar3 < 0) goto LAB_82e403fc;
  }
  piVar7 = (int *)0x0;
  piVar11 = (int *)0x0;
LAB_82e403fc:
  if (piStack_60 != (int *)0x0) {
    (**(code **)(*piStack_60 + 8))();
    piStack_60 = (int *)0x0;
  }
  if (piStack_5c != (int *)0x0) {
    (**(code **)(*piStack_5c + 8))();
    piStack_5c = (int *)0x0;
  }
  if (piStack_58 != (int *)0x0) {
    (**(code **)(*piStack_58 + 8))();
    piStack_58 = (int *)0x0;
  }
  if (piVar11 != (int *)0x0) {
    (**(code **)*piVar11)(piVar11,1);
  }
  if (piVar7 != (int *)0x0) {
    (**(code **)*piVar7)(piVar7,1);
  }
  return lVar3;
}

