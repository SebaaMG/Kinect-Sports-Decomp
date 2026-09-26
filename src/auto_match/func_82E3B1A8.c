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
extern unsigned int *auStack_70;
extern int fn_82E50BE8();
extern int fn_82E6FEB8();
extern int fn_82E700E0();
extern int fn_82E70378();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_82154AD8;
extern unsigned int lbl_82154AE8;
extern unsigned int lbl_82154AF8;
extern unsigned int lbl_82154B08;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


longlong fn_82E3B1A8(int param_1,int *param_2,undefined8 param_3,uint param_4,ulonglong param_5,
                      undefined8 param_6,int *param_7)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint auStack_70 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if (((param_2 == (int *)0x0) || ((param_5 & 0xffffffff) == 0)) || (param_7 == (int *)0x0)) {
    return -0x7fffbffd;
  }
  *param_7 = 0;
  uStack_60 = lbl_8202E618;
  uStack_5c = lbl_8202E61C;
  uStack_58 = lbl_8202E620;
  uStack_54 = lbl_8202E624;
  lVar4 = (**(code **)(*param_2 + 0xc))(param_2,&uStack_60);
  if (lVar4 < 0) goto LAB_82e3b42c;
  pbVar7 = (byte *)&uStack_60;
  pbVar8 = &lbl_82154AD8;
  do {
    bVar1 = *pbVar8;
    bVar2 = *pbVar7;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar8 = pbVar8 + 1;
    pbVar7 = pbVar7 + 1;
  } while (pbVar8 != (byte *)&lbl_82154AE8);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
    uVar5 = fn_82E50BE8(0x70,0,0,0,0);
    if ((uVar5 & 0xffffffff) == 0) {
LAB_82e3b3b0:
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)fn_82E6FEB8(uVar5,param_2,param_3,param_5,param_6,
                                      *(undefined4 *)(param_1 + 100),*(uint *)(param_1 + 0x44) & 4);
    }
LAB_82e3b3b4:
    *param_7 = (int)piVar6;
    if (piVar6 == (int *)0x0) {
      lVar4 = -0x7ff8fff2;
      goto LAB_82e3b42c;
    }
    auStack_70[0] = 0;
    lVar4 = (**(code **)(*piVar6 + 8))(piVar6,auStack_70);
    if ((lVar4 < 0) ||
       ((param_4 < auStack_70[0] && (lVar4 = (**(code **)(*(int *)*param_7 + 4))(), lVar4 < 0))))
    goto LAB_82e3b42c;
  }
  else {
    pbVar7 = (byte *)&uStack_60;
    pbVar8 = (byte *)&lbl_82154AE8;
    do {
      bVar1 = *pbVar8;
      bVar2 = *pbVar7;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar8 = pbVar8 + 1;
      pbVar7 = pbVar7 + 1;
    } while (pbVar8 != (byte *)&lbl_82154AF8);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      uVar5 = fn_82E50BE8(0x88,0,0,0,0);
      if ((uVar5 & 0xffffffff) == 0) goto LAB_82e3b3b0;
      piVar6 = (int *)fn_82E700E0(uVar5,param_2,param_3,param_5,param_6,
                                        *(undefined4 *)(param_1 + 100),*(uint *)(param_1 + 0x44) & 4
                                       );
      goto LAB_82e3b3b4;
    }
    pbVar7 = (byte *)&uStack_60;
    pbVar8 = (byte *)&lbl_82154AF8;
    do {
      bVar1 = *pbVar8;
      bVar2 = *pbVar7;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar8 = pbVar8 + 1;
      pbVar7 = pbVar7 + 1;
    } while (pbVar8 != &lbl_82154B08);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      uVar5 = fn_82E50BE8(0x70,0,0,0,0);
      if ((uVar5 & 0xffffffff) == 0) goto LAB_82e3b3b0;
      piVar6 = (int *)fn_82E70378(uVar5,param_2,param_3,param_5,param_6,
                                        *(undefined4 *)(param_1 + 100),*(uint *)(param_1 + 0x44) & 4
                                       );
      goto LAB_82e3b3b4;
    }
    lVar4 = -0x7fffbfff;
  }
  if (-1 < (int)lVar4) {
    return lVar4;
  }
LAB_82e3b42c:
  puVar3 = (undefined4 *)*param_7;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  *param_7 = 0;
  return lVar4;
}

