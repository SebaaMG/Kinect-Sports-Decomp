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
extern int fn_82930318();
extern int fn_829304E0();
extern int fn_82931D88();
extern int fn_82933088();
extern int fn_829334D8();
extern int fn_82980C18();
extern int fn_82981738();
extern int fn_82983380();


int fn_82985718(undefined8 param_1,int *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar11;
  longlong lVar9;
  int iVar12;
  ulonglong uVar10;
  int iVar13;
  char *pcVar15;
  ulonglong uVar14;
  int iVar16;
  char *pcVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  int *piVar23;
  byte *pbVar24;
  byte *pbVar25;
  longlong lVar26;
  byte *pbVar27;
  
  if (param_3 == 0) {
    return 0;
  }
  if (*(int *)(param_3 + 4) != 3) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (param_2[1] != 0xe) {
    return 0;
  }
  iVar12 = param_2[4];
  iVar20 = param_3 + 0x10;
  uVar8 = fn_82930318(0x50);
  if ((uVar8 & 0xffffffff) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = fn_82933088(uVar8,0,0x1d,0,0,1,iVar20);
  }
  if (iVar11 == 0) {
    return 0;
  }
  if (iVar12 != 0) {
    if (*(int *)(iVar12 + 4) == 1) {
      lVar26 = 0;
      do {
        iVar13 = *(int *)(iVar12 + 8);
        if ((iVar13 != 0) && (*(int *)(iVar13 + 4) == 6)) {
          pcVar17 = *(char **)(param_3 + 0x18);
          pcVar15 = *(char **)(*(int *)(iVar13 + 0x14) + 0x18);
          do {
            cVar1 = *pcVar17;
            cVar2 = *pcVar15;
            if (cVar1 == '\0') break;
            pcVar17 = pcVar17 + 1;
            pcVar15 = pcVar15 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 == cVar2) {
            piVar23 = *(int **)(*(int *)(iVar13 + 0x18) + 0x30);
            if (piVar23 != (int *)0x0) {
              iVar12 = (**(code **)(*piVar23 + 4))();
              *(int *)(iVar11 + 0x10) = iVar12;
              if (iVar12 == 0) {
                return 0;
              }
            }
            uVar8 = fn_82930318(0x40);
            if ((uVar8 & 0xffffffff) == 0) {
              iVar12 = 0;
            }
            else {
              iVar12 = fn_829334D8(uVar8,2,lVar26,iVar20);
            }
            *(int *)(iVar11 + 0x24) = iVar12;
            goto LAB_82985c60;
          }
          lVar9 = fn_82981738(param_1,*(undefined4 *)(*(int *)(iVar13 + 0x18) + 0x30));
          lVar26 = lVar9 + lVar26;
        }
        iVar12 = *(int *)(iVar12 + 0xc);
      } while (iVar12 != 0);
    }
    else if (*(int *)(iVar12 + 4) == 9) {
      pbVar27 = *(byte **)(param_3 + 0x18);
      uVar5 = *(uint *)(iVar12 + 0x1c);
      uVar6 = *(uint *)(iVar12 + 0x20);
      uVar21 = *(uint *)(iVar12 + 0x24) & 0x200;
      pbVar24 = pbVar27;
      do {
        pbVar18 = pbVar24;
        pbVar24 = pbVar18 + 1;
      } while (*pbVar18 != 0);
      bVar3 = *pbVar27;
      if (bVar3 == 0x5f) {
        if (*(int *)(iVar12 + 0x10) != 2) goto LAB_82985828;
        if ((pbVar18 <= pbVar27 + 1) || (uVar8 = 3, pbVar27[1] != 0x6d)) {
          uVar8 = 2;
        }
      }
      else {
        if (bVar3 < 0x61) goto LAB_82985828;
        if (((bVar3 < 99) || (bVar3 == 0x67)) || (bVar3 == 0x72)) {
          if ((*(int *)(iVar12 + 0x10) != 0) && (*(int *)(iVar12 + 0x10) != 1)) goto LAB_82985828;
          uVar8 = 1;
        }
        else {
          if (((bVar3 < 0x77) || (0x7a < bVar3)) ||
             ((*(int *)(iVar12 + 0x10) != 0 && (*(int *)(iVar12 + 0x10) != 1)))) goto LAB_82985828;
          uVar8 = 0;
        }
      }
      uVar22 = 0;
      if (pbVar27 < pbVar18) {
        pbVar25 = pbVar27 + 2;
        pbVar24 = pbVar27 + 3;
        piVar23 = (int *)(iVar11 + 0x24);
        do {
          if (3 < (uVar22 & 0xffffffff)) break;
          uVar19 = 0;
          uVar14 = 0;
          if (uVar8 == 0) {
            bVar3 = *pbVar27;
            if (bVar3 == 0x77) {
LAB_82985afc:
              uVar14 = 3;
            }
            else if (bVar3 == 0x78) {
LAB_82985ac0:
              uVar14 = 0;
            }
            else {
              if (bVar3 != 0x79) {
                if (bVar3 == 0x7a) goto LAB_82985aec;
                goto LAB_82985828;
              }
LAB_82985af4:
              uVar14 = 1;
            }
LAB_82985b00:
            pbVar25 = pbVar25 + 1;
            pbVar24 = pbVar24 + 1;
            pbVar27 = pbVar27 + 1;
            uVar19 = 0;
          }
          else {
            if (uVar8 == 1) {
              bVar3 = *pbVar27;
              if (bVar3 == 0x61) goto LAB_82985afc;
              if (bVar3 == 0x62) {
LAB_82985aec:
                uVar14 = 2;
                goto LAB_82985b00;
              }
              if (bVar3 == 0x67) goto LAB_82985af4;
              if (bVar3 == 0x72) goto LAB_82985ac0;
              goto LAB_82985828;
            }
            if (uVar8 < 3) {
              if ((pbVar18 <= pbVar25) || (*pbVar27 != 0x5f)) goto LAB_82985828;
              bVar3 = pbVar27[1];
              if (((char)bVar3 < '1') || ('9' < (char)bVar3)) goto LAB_82985828;
              bVar4 = *pbVar25;
              if (((char)bVar4 < '1') || ('9' < (char)bVar4)) goto LAB_82985828;
              uVar19 = (int)(char)bVar3 - 0x31;
              uVar14 = (longlong)(char)bVar4 - 0x31;
              pbVar27 = pbVar27 + 3;
              pbVar24 = pbVar24 + 3;
              pbVar25 = pbVar25 + 3;
            }
            else if (uVar8 == 3) {
              if (((pbVar18 <= pbVar24) || (*pbVar27 != 0x5f)) || (pbVar27[1] != 0x6d))
              goto LAB_82985828;
              bVar3 = *pbVar25;
              if (((char)bVar3 < '0') || ('9' < (char)bVar3)) goto LAB_82985828;
              bVar4 = *pbVar24;
              if (((char)bVar4 < '0') || ('9' < (char)bVar4)) goto LAB_82985828;
              uVar19 = (int)(char)bVar3 - 0x30;
              uVar14 = (longlong)(char)bVar4 - 0x30;
              pbVar27 = pbVar27 + 4;
              pbVar24 = pbVar24 + 4;
              pbVar25 = pbVar25 + 4;
            }
          }
          if ((uVar5 <= uVar19) || ((ulonglong)uVar6 <= (uVar14 & 0xffffffff))) goto LAB_82985828;
          uVar10 = fn_82930318(0x14);
          if ((uVar10 & 0xffffffff) == 0) {
            iVar13 = 0;
          }
          else {
            iVar13 = fn_829304E0(uVar10,0,0,0xffffffff8204e3a0);
          }
          *piVar23 = iVar13;
          if (iVar13 == 0) {
            return 0;
          }
          uVar10 = fn_82930318(0x40);
          if ((uVar10 & 0xffffffff) == 0) {
            iVar13 = 0;
          }
          else {
            iVar13 = fn_829334D8(uVar10,2,(longlong)(int)uVar19 * (longlong)(int)uVar6 + uVar14,
                                  iVar20);
          }
          *(int *)(*piVar23 + 8) = iVar13;
          if (iVar13 == 0) {
            return 0;
          }
          uVar22 = uVar22 + 1;
          piVar23 = (int *)(*piVar23 + 0xc);
        } while (pbVar27 < pbVar18);
        if ((pbVar27 < pbVar18) || (4 < (uVar22 & 0xffffffff))) goto LAB_82985828;
      }
      iVar13 = *(int *)(iVar11 + 0x24);
      do {
        iVar7 = iVar13;
        if ((iVar7 == 0) || (uVar21 != 0)) goto LAB_82985c14;
        iVar13 = *(int *)(iVar7 + 0xc);
        if (iVar13 != 0) {
          iVar16 = iVar13;
          do {
            if (*(int *)(*(int *)(iVar7 + 8) + 0x18) == *(int *)(*(int *)(iVar16 + 8) + 0x18)) {
              uVar21 = 1;
              break;
            }
            iVar16 = *(int *)(iVar16 + 0xc);
          } while (iVar16 != 0);
        }
      } while( true );
    }
  }
  goto LAB_82985828;
LAB_82985c14:
  uVar8 = fn_82930318(0x28);
  if ((uVar8 & 0xffffffff) == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = fn_82931D88(uVar8,(uVar22 - 1) - ((uVar22 - 2) + (ulonglong)(uVar22 - 1 == 0)),
                          *(undefined4 *)(iVar12 + 0x14),0,1,uVar22,
                          -(ulonglong)(uVar21 != 0) & 0x200);
  }
  *(int *)(iVar11 + 0x10) = iVar12;
LAB_82985c60:
  if (iVar12 == 0) {
    return 0;
  }
  iVar12 = (**(code **)(*param_2 + 4))(param_2);
  *(int *)(iVar11 + 0x20) = iVar12;
  if (iVar12 != 0) {
    fn_82983380(param_1,iVar11);
    return iVar11;
  }
LAB_82985828:
  fn_82980C18(param_1,iVar20,0xbca,0xffffffff8204e3a8,*(undefined4 *)(param_3 + 0x18));
  return 0;
}

