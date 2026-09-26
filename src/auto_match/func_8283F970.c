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
extern unsigned int *auStack_f0;
extern int fn_82837D98();
extern int fn_8283F7C0();
extern int fn_82F65390();
extern int fn_82F68CC0();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int iStack00000024;
extern unsigned int iStack0000002c;
extern unsigned int iStack_10c;
extern unsigned int iStack_118;
extern unsigned int iStack_28;
extern unsigned int iStack_2c;
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int iStack_50;
extern unsigned int iStack_54;
extern unsigned int iStack_68;
extern unsigned int uStack_120;
extern unsigned int uStack_30;
extern unsigned int uStack_44;
extern unsigned int uStack_58;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff98 : 0x8283febc */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_8283F970(int param_1,int param_2,int param_3,int param_4,int *param_5,char param_6)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iStack00000014;
  int iStack0000001c;
  int iStack00000024;
  int iStack0000002c;
  int *piStack00000034;
  char cStack0000003f;
  uint uStack_120;
  int iStack_118;
  int iStack_10c;
  byte *pbStack_104;
  undefined1 auStack_f0 [128];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  byte *pbStack_60;
  byte *pbStack_5c;
  uint uStack_58;
  int iStack_54;
  int iStack_50;
  byte *pbStack_4c;
  byte *pbStack_48;
  uint uStack_44;
  int iStack_40;
  int iStack_3c;
  byte *pbStack_38;
  byte *pbStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *puStack_14;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  
  uStack_120 = 0;
  iStack00000014 = param_1;
  iStack0000001c = param_2;
  iStack00000024 = param_3;
  iStack0000002c = param_4;
  piStack00000034 = param_5;
  cStack0000003f = param_6;
  do {
    if (*(uint *)(iStack00000014 + 0x20) <= uStack_120) {
      return;
    }
    piVar3 = (int *)(*(int *)(iStack00000014 + 0x24) + uStack_120 * 0xc);
    for (iStack_118 = 0; iStack_118 < *(int *)(*(int *)(*piVar3 + 4) + 0x38);
        iStack_118 = iStack_118 + 1) {
      iVar4 = *(int *)(*(int *)(*piVar3 + 4) + 0x34) + iStack_118 * 0x10;
      pbStack_60 = *(byte **)(iVar4 + 4);
      pbStack_5c = (byte *)0x8201f498;
      do {
        uStack_58 = (uint)*pbStack_60;
        iStack_54 = uStack_58 - *pbStack_5c;
        if (uStack_58 == 0) break;
        pbStack_60 = pbStack_60 + 1;
        pbStack_5c = pbStack_5c + 1;
      } while (iStack_54 == 0);
      iStack_50 = iStack_54;
      if (iStack_54 != 0) {
        pbStack_4c = *(byte **)(iVar4 + 4);
        pbStack_48 = (byte *)0x8201f4b8;
        do {
          uStack_44 = (uint)*pbStack_4c;
          iStack_40 = uStack_44 - *pbStack_48;
          if (uStack_44 == 0) break;
          pbStack_4c = pbStack_4c + 1;
          pbStack_48 = pbStack_48 + 1;
        } while (iStack_40 == 0);
        iStack_3c = iStack_40;
        if ((iStack_40 != 0) && (iVar1 = fn_8283F7C0(iStack00000024,iVar4), iVar1 != 0)) {
          if (iStack0000002c == 0) {
            fn_82F68CC0(iStack0000001c + *(int *)(iVar4 + 0xc),
                         (ulonglong)*(uint *)(iStack00000024 + 0x28) +
                         (ulonglong)*(uint *)(iVar1 + 0xc),*(undefined4 *)(iVar4 + 8));
          }
          else {
            fn_82F68CC0(iStack0000001c + *(int *)(iVar4 + 0xc),
                         iStack0000002c + *(int *)(iVar1 + 0xc),*(undefined4 *)(iVar4 + 8));
          }
        }
      }
    }
    if (piStack00000034 != (int *)0x0) {
      for (iStack_10c = 0; iStack_10c < (int)(uint)*(ushort *)(*(int *)(*piVar3 + 4) + 0x12);
          iStack_10c = iStack_10c + 1) {
        piVar5 = (int *)(*(int *)(*(int *)(*piVar3 + 4) + 4) + iStack_10c * 0x34);
        if (piVar5[0xc] != 0) {
          puVar6 = (undefined4 *)(iStack0000001c + *piVar5);
          iVar4 = fn_8283F7C0(iStack00000024,piVar5[0xc]);
          if (iVar4 == 0) {
            if (puVar6[2] == 0) {
              uVar2 = (**(code **)*piStack00000034)(piStack00000034,piVar5,iStack0000001c);
              puVar6[2] = uVar2;
            }
          }
          else {
            if (iStack0000002c == 0) {
              pbStack_104 = (byte *)(*(int *)(iStack00000024 + 0x28) + *(int *)(iVar4 + 0xc));
            }
            else {
              pbStack_104 = (byte *)(iStack0000002c + *(int *)(iVar4 + 0xc));
            }
            pbStack_38 = (byte *)*puVar6;
            pbStack_34 = pbStack_104;
            do {
              uStack_30 = (uint)*pbStack_38;
              iStack_2c = uStack_30 - *pbStack_34;
              if (uStack_30 == 0) break;
              pbStack_38 = pbStack_38 + 1;
              pbStack_34 = pbStack_34 + 1;
            } while (iStack_2c == 0);
            iStack_28 = iStack_2c;
            if ((iStack_2c != 0) || (cStack0000003f != '\0')) {
              puStack_24 = &uStack_70;
              uStack_70 = *puVar6;
              uStack_6c = puVar6[1];
              uStack_64 = puVar6[3];
              puStack_18 = auStack_f0;
              puStack_20 = puStack_24;
              puStack_1c = puVar6;
              fn_82F68CC0(puStack_18,*puVar6,0x80);
              fn_82F68CC0(*puVar6,pbStack_104,*(undefined4 *)(iVar4 + 8));
              if (cStack0000003f == '\0') {
                puVar6[3] = 0;
              }
              uVar2 = (**(code **)*piStack00000034)(piStack00000034,piVar5,iStack0000001c);
              puVar6[2] = uVar2;
              if (puVar6[2] == 0) {
                puStack_c = &uStack_70;
                *puVar6 = uStack_70;
                puVar6[1] = uStack_6c;
                puVar6[2] = iStack_68;
                puVar6[3] = uStack_64;
                puStack_14 = puVar6;
                puStack_10 = puVar6;
              }
              else if ((iStack_68 != 0) &&
                      (iVar4 = fn_82F65390(auStack_f0,0xffffffff8201f4d4,9), iVar4 == 0)) {
                (**(code **)(*piStack00000034 + 8))(piStack00000034,&uStack_70);
              }
              fn_82837D98(puVar6[2],0,puVar6 + 1);
            }
          }
        }
      }
    }
    uStack_120 = uStack_120 + 1;
  } while( true );
}

