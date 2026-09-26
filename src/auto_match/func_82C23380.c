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
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern unsigned int *auStack_a0;
extern int fn_82C10AD0();
extern int fn_82C10F68();
extern int fn_82C10FD0();
extern int fn_82C11038();
extern int fn_82C1EC50();
extern int fn_82C1EE20();
extern int fn_82C23120();
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int lbl_82154AC8;
extern unsigned int lbl_82154AD8;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_98;


void fn_82C23380(int param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  char cVar9;
  longlong lVar8;
  undefined1 auStack_a0 [4];
  char *pcStack_9c;
  undefined4 uStack_98;
  undefined4 *puStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 auStack_88 [2];
  ulonglong auStack_80 [2];
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  piVar3 = *(int **)(param_1 + 0x1c);
  auStack_88[0] = 0;
  uStack_8c = 0;
  uStack_98 = 0;
  pcStack_9c = (char *)0x0;
  puStack_94 = (undefined4 *)0x0;
  auStack_a0[0] = 0;
  do {
    while( true ) {
      while (iVar5 = piVar3[0x14], iVar5 == 0xe) {
        lVar8 = (ulonglong)*(uint *)(piVar3[1] + 8) + *(longlong *)(piVar3 + 6);
        if ((*(longlong *)(piVar3 + 2) != 0) &&
           (iVar5 = (**(code **)(*piVar3 + 0x18))(*piVar3,lVar8), iVar5 < 0)) goto LAB_82c236dc;
        *(longlong *)(piVar3 + 2) = lVar8;
        piVar3[0x14] = 0xf;
      }
      if (iVar5 == 0xf) break;
      if (iVar5 == 0x10) {
        iStack_70 = piVar3[0x15];
        iStack_6c = piVar3[0x16];
        iStack_68 = piVar3[0x17];
        iStack_64 = piVar3[0x18];
        cVar9 = '\0';
        pbVar6 = (byte *)&iStack_70;
        uVar4 = *(ulonglong *)(piVar3 + 0x1a) & 0xffffffff;
        pbVar7 = (byte *)&lbl_82154AC8;
        do {
          bVar1 = *pbVar7;
          bVar2 = *pbVar6;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar7 = pbVar7 + 1;
          pbVar6 = pbVar6 + 1;
        } while (pbVar7 != &lbl_82154AD8);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
          iVar5 = fn_82C10F68(piVar3[0x25],&uStack_98,&pcStack_9c,auStack_a0);
          if (iVar5 != -0x7fafffea) {
            if (iVar5 < 0) goto LAB_82c236dc;
            do {
              if (iVar5 < 0) goto LAB_82c236dc;
              if ((*(int *)(pcStack_9c + 0x30) == 2) &&
                 ((int)*(short *)(pcStack_9c + 0x2c) == (uint)*(ushort *)(piVar3 + 0x26))) {
                cVar9 = *pcStack_9c;
                break;
              }
              iVar5 = fn_82C10FD0(piVar3[0x25],uStack_98,&pcStack_9c,auStack_a0);
            } while (iVar5 != -0x7fafffea);
          }
          fn_82C11038(piVar3[0x25],uStack_98);
          if (cVar9 == '\0') {
            iVar5 = (**(code **)(*piVar3 + 0x14))(*piVar3,uVar4 - 0x18);
            if (iVar5 < 0) goto LAB_82c236dc;
            piVar3[0x14] = 0xf;
            *(ulonglong *)(piVar3 + 2) = (uVar4 - 0x18 & 0xffffffff) + *(longlong *)(piVar3 + 2);
          }
          else {
            if (*(int *)(pcStack_9c + 0x48) == 0) {
              iVar5 = fn_82C10AD0(piVar3[0x38],0xb,0x14,&puStack_94);
              if (iVar5 < 0) goto LAB_82c236dc;
              *puStack_94 = 0;
              puStack_94[1] = 0;
              puStack_94[2] = 0;
              puStack_94[3] = 0;
              puStack_94[4] = 0;
              *(undefined4 **)(pcStack_9c + 0x48) = puStack_94;
            }
            iVar5 = fn_82C23120(param_1,uVar4,cVar9,*(undefined4 *)(pcStack_9c + 0x48));
            if (iVar5 < 0) goto LAB_82c236dc;
            piVar3[0x14] = 0xf;
            *(short *)(piVar3 + 0x26) = *(short *)(piVar3 + 0x26) + 1;
          }
        }
        else {
          iVar5 = (**(code **)(*piVar3 + 0x14))(*piVar3,uVar4 - 0x18);
          if (iVar5 < 0) goto LAB_82c236dc;
          piVar3[0x14] = 0xf;
          *(ulonglong *)(piVar3 + 2) = (uVar4 - 0x18 & 0xffffffff) + *(longlong *)(piVar3 + 2);
        }
      }
    }
    uStack_90 = 0x18;
    iVar5 = (**(code **)(*piVar3 + 0xc))(*piVar3,0x18);
    if (((iVar5 < 0) ||
        (iVar5 = fn_82C1EE20(param_1,&iStack_70,auStack_88,&uStack_8c,&uStack_90), iVar5 < 0)) ||
       (iVar5 = fn_82C1EC50(param_1,auStack_80,auStack_88,&uStack_8c,&uStack_90), iVar5 < 0))
    goto LAB_82c236dc;
    *(ulonglong *)(piVar3 + 0x1a) = auStack_80[0];
    piVar3[0x15] = iStack_70;
    piVar3[0x16] = iStack_6c;
    piVar3[0x17] = iStack_68;
    piVar3[0x18] = iStack_64;
    if (auStack_80[0] < 0x18) {
      iVar5 = -0x7fafffff;
LAB_82c236dc:
      do {
        if (iVar5 != -0x7fafffff) {
          return;
        }
        iVar5 = (**(code **)(*piVar3 + 0x18))(*piVar3,*(undefined8 *)(piVar3 + 4));
      } while (iVar5 < 0);
      piVar3[0x14] = 0x11;
      *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar3 + 4);
      return;
    }
    piVar3[0x14] = 0x10;
  } while( true );
}

