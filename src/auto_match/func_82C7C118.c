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
extern unsigned int *auStack_9c;
extern int fn_82A9FA30();
extern int fn_82C47D90();
extern int fn_82C4D2F0();
extern int fn_82C4E1D0();
extern int fn_82C52CF8();
extern int fn_82C7BE90();
extern int fn_82C7BFB8();
extern int fn_82F68CC0();
extern unsigned int iStack_a0;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;


undefined8
fn_82C7C118(int param_1,ushort *param_2,byte *param_3,int *param_4,uint *param_5,int *param_6)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ushort *puVar6;
  undefined8 uVar7;
  int iVar8;
  ushort uVar10;
  uint uVar9;
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  ushort *puVar15;
  ushort *puVar16;
  ushort *puVar17;
  byte *pbVar18;
  int iVar19;
  ushort *puStack0000001c;
  byte *pbStack00000024;
  uint *puStack00000034;
  int iStack_a0;
  uint auStack_9c [39];
  
  iStack_a0 = *param_6;
  puVar15 = *(ushort **)(param_1 + 0x5608);
  iVar13 = *(int *)(param_1 + 0x5604);
  *(undefined4 *)(param_1 + 0x5620) = 0;
  uVar14 = 0;
  bVar3 = false;
  *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x20) = 1;
  bVar4 = false;
  bVar5 = false;
  *(undefined4 *)(param_1 + 0x5624) = 0;
  uVar12 = 0;
  puStack0000001c = param_2;
  pbStack00000024 = param_3;
  puStack00000034 = param_5;
  if (*(int *)(param_1 + 0xe94) == 0) {
    auStack_9c[0] = 0;
    uVar7 = fn_82C47D90(param_1,0,auStack_9c,0,*(undefined4 *)(param_1 + 0x5620));
    if ((int)uVar7 != 0) {
      return uVar7;
    }
  }
  if (((puStack0000001c == (ushort *)0x0) || (param_4 == (int *)0x0)) || (param_5 == (uint *)0x0)) {
    uVar12 = 0xfffffffffffffffd;
  }
  else {
    pbVar18 = (byte *)0x0;
    if (pbStack00000024 < (byte *)0x4) {
      fn_82F68CC0(puVar15,puStack0000001c,pbStack00000024);
      pbVar18 = pbStack00000024;
    }
    if (*(byte **)(param_1 + 0x560c) < pbVar18 + (int)pbStack00000024) {
      uVar7 = fn_82C7BFB8(param_1,pbVar18);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      puVar15 = *(ushort **)(param_1 + 0x5608);
      iVar13 = *(int *)(param_1 + 0x5604);
    }
    while (pbStack00000024 < (byte *)0x4) {
      if (iStack_a0 == 0) goto LAB_82c7c2e4;
      fn_82A9FA30(*(undefined4 *)(param_1 + 0xd30),0,&stack0x0000001c,4,&stack0x00000024,&iStack_a0
                  );
      *(int *)(*(int *)(param_1 + 0x50) + 0x18) = iStack_a0;
      if (*(byte **)(param_1 + 0x560c) < pbVar18 + (int)pbStack00000024) {
        uVar7 = fn_82C7BFB8(param_1,pbVar18);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        puVar15 = *(ushort **)(param_1 + 0x5608);
        iVar13 = *(int *)(param_1 + 0x5604);
      }
      fn_82F68CC0(pbVar18 + (int)puVar15,puStack0000001c,pbStack00000024);
      pbVar18 = pbVar18 + (int)pbStack00000024;
      puStack0000001c = puVar15;
      pbStack00000024 = pbVar18;
    }
    if (((*(byte *)puStack0000001c != 0) || ((byte)*puStack0000001c != 0)) ||
       (iVar8 = 0, *(byte *)(puStack0000001c + 1) != 1)) {
LAB_82c7c2e4:
      iVar8 = 1;
    }
    *(int *)(param_1 + 0x55ec) = iVar8;
    *(undefined4 *)(param_1 + 0x561c) = 0;
    if (iVar8 == 0) {
joined_r0x82c7c320:
      if ((pbStack00000024 < (byte *)0x4) || (bVar3)) {
        if (*(uint *)(param_1 + 0x560c) <= uVar14) {
          return 1;
        }
        if ((iStack_a0 != 0) && (!bVar5)) {
          iVar8 = iVar13 + uVar14;
          if ((uVar14 < 3) ||
             (((*(char *)(iVar8 + -1) != '\x01' || (*(char *)(iVar8 + -2) != '\0')) ||
              (*(char *)(iVar8 + -3) != '\0')))) {
            if (((uVar14 < 2) || (*(char *)(iVar8 + -1) != '\0')) || (*(char *)(iVar8 + -2) != '\0')
               ) {
              if ((uVar14 == 0) || (*(char *)(iVar8 + -1) != '\0')) {
                *(undefined4 *)(param_1 + 0x55f4) = 0;
              }
              else {
                *(undefined1 *)(param_1 + 0x5600) = 0;
                *(undefined4 *)(param_1 + 0x55f4) = 1;
              }
            }
            else {
              *(undefined1 *)(param_1 + 0x5600) = 0;
              *(undefined4 *)(param_1 + 0x55f4) = 2;
              *(undefined1 *)(param_1 + 0x5601) = 0;
            }
          }
          else {
            *(undefined1 *)(param_1 + 0x5600) = 0;
            *(undefined4 *)(param_1 + 0x55f4) = 3;
            *(undefined1 *)(param_1 + 0x5601) = 0;
            *(undefined1 *)(param_1 + 0x5602) = 1;
          }
          uVar14 = uVar14 - *(int *)(param_1 + 0x55f4);
        }
        *param_4 = iVar13;
        *param_5 = uVar14;
        *param_6 = iStack_a0;
        return uVar12;
      }
      do {
        puVar6 = puStack0000001c;
        bVar3 = false;
        puVar17 = puStack0000001c + 2;
        bVar1 = *(byte *)((int)puStack0000001c + 3);
        if ((byte *)0x7 < pbStack00000024) {
          puVar16 = puStack0000001c + 3;
          pbVar18 = (byte *)0x6;
          uVar10 = *puVar17;
          if ((byte *)0x6 < pbStack00000024 + -1) {
            do {
              uVar2 = *puVar16;
              if ((uVar10 & uVar2) == 0) {
                if ((uVar10 == 0) && ((uVar2 & 0xff00) == 0x100)) {
                  puVar16 = puVar16 + -1;
                }
                else {
                  if (((uVar10 & 0xff) != 0) || ((uVar2 != 1 || (pbStack00000024 <= pbVar18 + 2))))
                  goto LAB_82c7c3a8;
                  puVar16 = (ushort *)((int)puVar16 + -1);
                }
                if (puVar16 != (ushort *)0x0) goto LAB_82c7c3dc;
                break;
              }
LAB_82c7c3a8:
              pbVar18 = pbVar18 + 2;
              puVar16 = puVar16 + 1;
              uVar10 = uVar2;
            } while (pbVar18 < pbStack00000024 + -1);
          }
        }
        puVar16 = (ushort *)((int)puStack0000001c + (int)pbStack00000024);
        bVar3 = true;
LAB_82c7c3dc:
        uVar9 = (uint)bVar1;
        *(uint *)(param_1 + 22000) = uVar9;
        if (((bVar1 == 0xd) || (bVar1 == 0xc)) || (bVar1 == 0xb)) {
          bVar4 = true;
        }
        if (((!bVar3) || (bVar4)) || (iStack_a0 != 1)) goto LAB_82c7c4b4;
        iVar8 = (int)puVar16 - (int)puStack0000001c;
        fn_82F68CC0(puVar15,puStack0000001c,iVar8);
        fn_82A9FA30(*(undefined4 *)(param_1 + 0xd30),0,&stack0x0000001c,4,&stack0x00000024,
                     &iStack_a0);
        *(int *)(*(int *)(param_1 + 0x50) + 0x18) = iStack_a0;
        if (*(byte **)(param_1 + 0x560c) < pbStack00000024 + iVar8) {
          uVar7 = fn_82C7BFB8(param_1,iVar8);
          if ((int)uVar7 != 0) {
            return uVar7;
          }
          puVar15 = *(ushort **)(param_1 + 0x5608);
          iVar13 = *(int *)(param_1 + 0x5604);
        }
        fn_82F68CC0((byte *)(iVar8 + (int)puVar15),puStack0000001c,pbStack00000024);
        pbStack00000024 = pbStack00000024 + iVar8;
        puStack0000001c = puVar15;
      } while( true );
    }
    *param_5 = (uint)pbStack00000024;
    uVar12 = 0;
    *param_4 = (int)puStack0000001c;
    *param_6 = iStack_a0;
  }
  return uVar12;
LAB_82c7c4b4:
  if ((iStack_a0 != 0) && (bVar3)) {
    uVar11 = (int)puVar16 - (int)puVar17;
    if ((uVar11 < 3) ||
       (((*(byte *)((int)puVar16 + -1) != 1 || (*(byte *)(puVar16 + -1) != 0)) ||
        (*(byte *)((int)puVar16 + -3) != 0)))) {
      if (((uVar11 < 2) || (*(byte *)((int)puVar16 + -1) != 0)) || (*(byte *)(puVar16 + -1) != 0)) {
        if ((uVar11 == 0) || (*(byte *)((int)puVar16 + -1) != 0)) {
          *(undefined4 *)(param_1 + 0x55f4) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x5600) = 0;
          *(undefined4 *)(param_1 + 0x55f4) = 1;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x5600) = 0;
        *(undefined4 *)(param_1 + 0x55f4) = 2;
        *(undefined1 *)(param_1 + 0x5601) = 0;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x5600) = 0;
      *(undefined4 *)(param_1 + 0x55f4) = 3;
      *(undefined1 *)(param_1 + 0x5601) = 0;
      *(undefined1 *)(param_1 + 0x5602) = 1;
    }
    bVar5 = true;
    puVar16 = (ushort *)((uVar11 - *(int *)(param_1 + 0x55f4)) + (int)puVar17);
  }
  if (((bVar1 == 0xd) || (bVar1 == 0xc)) || (bVar1 == 0xb)) {
    uVar9 = (int)puVar16 - (int)puVar17;
    if (uVar9 != 0) {
      pbVar18 = (byte *)(uVar9 + (int)puVar17);
      do {
        pbVar18 = pbVar18 + -1;
        if (*pbVar18 != 0) break;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (*(int *)(param_1 + 0xe94) == 0) {
      if (bVar1 == 0xc) {
        *(uint *)(param_1 + 0x55cc) = uVar9;
        *(uint *)(param_1 + 0x5624) = uVar14;
        *(undefined4 *)(param_1 + 0x5620) = 1;
        *(undefined4 *)(param_1 + 0x55c0) = *(undefined4 *)(param_1 + 0x55bc);
      }
      if (bVar1 == 0xd) {
        *(uint *)(param_1 + 0x55c8) = uVar9;
        *(int *)(param_1 + 0x55e8) = *(int *)(param_1 + 0x55e8) + 1;
      }
      if (bVar1 == 0xb) {
        if (uVar9 < 2) {
          if ((iStack_a0 == 1) && (*(undefined4 *)(param_1 + 0x561c) = 1, uVar9 == 1)) {
            iVar8 = *(int *)(param_1 + 0x55f4);
            if (2 < iVar8) {
              return 1;
            }
            if (iVar8 != 0) {
              iVar19 = iVar8;
              do {
                *(undefined1 *)(param_1 + 0x5600 + iVar8) =
                     *(undefined1 *)(param_1 + 0x55ff + iVar8);
                iVar8 = iVar8 + -1;
                iVar19 = iVar19 + -1;
              } while (iVar19 != 0);
            }
            uVar9 = 0;
            *(byte *)(param_1 + 0x5600) = *(byte *)puVar17;
            *(int *)(param_1 + 0x55f4) = *(int *)(param_1 + 0x55f4) + 1;
          }
        }
        else {
          auStack_9c[0] =
               (uint)(*(byte *)((int)puStack0000001c + 5) >> 7) + (uint)*(byte *)puVar17 * 2;
          pbVar18 = (byte *)((int)puStack0000001c + 5);
          uVar7 = fn_82C47D90(param_1,1,auStack_9c,uVar9,*(undefined4 *)(param_1 + 0x5620));
          iVar8 = (int)uVar7;
          param_5 = puStack00000034;
          if (iVar8 != 0) {
            if (iVar8 != 1) {
              if (iVar8 == -1) {
                return 1;
              }
              return uVar7;
            }
            if (*(int *)(param_1 + 0x560c) - 2U < uVar14) {
              return uVar7;
            }
            uVar12 = 1;
            uVar9 = uVar9 - 2;
            *(char *)(iVar13 + uVar14) = (char)(auStack_9c[0] >> 1);
            puVar17 = puVar6 + 3;
            *(byte *)(iVar13 + uVar14 + 1) = *pbVar18 & 0x7f;
            uVar14 = uVar14 + 2;
          }
        }
      }
    }
    if (uVar14 < *(uint *)(param_1 + 0x560c)) {
      fn_82F68CC0(iVar13 + uVar14,puVar17,uVar9);
    }
    uVar14 = uVar9 + uVar14;
    goto LAB_82c7c8c0;
  }
  iVar8 = (int)puVar16 - (int)puVar17;
  if (uVar9 < 0x1d) {
    if (uVar9 == 0x1c) {
      if ((iStack_a0 != 1) || (uVar7 = 1, !bVar3)) {
        uVar7 = 0;
      }
      fn_82C7BE90(param_1,7,puVar17,iVar8,uVar7);
      goto LAB_82c7c8c0;
    }
    if (uVar9 < 0x10) {
      if (uVar9 == 0xf) {
        fn_82C4E1D0(*(undefined4 *)(param_1 + 0x50),puVar17,iVar8,0,
                      *(int *)(param_1 + 0x3cb0) == 7);
        uVar7 = fn_82C52CF8(param_1,1);
        if ((int)uVar7 != 0) {
          *(undefined4 *)(param_1 + 0xe94) = 1;
          return uVar7;
        }
        goto LAB_82c7c8c0;
      }
      if (uVar9 == 10) {
        *(undefined4 *)(param_1 + 0xe98) = 1;
        goto LAB_82c7c8c0;
      }
      if (uVar9 == 0xe) {
        fn_82C4E1D0(*(undefined4 *)(param_1 + 0x50),puVar17,iVar8,0,
                      *(int *)(param_1 + 0x3cb0) == 7);
        if (*(int *)(param_1 + 0xe94) != 0) {
          return 1;
        }
        uVar7 = fn_82C4D2F0(param_1);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        goto LAB_82c7c8c0;
      }
    }
    else if (uVar9 == 0x1b) {
      if ((iStack_a0 != 1) || (uVar7 = 1, !bVar3)) {
        uVar7 = 0;
      }
      fn_82C7BE90(param_1,8,puVar17,iVar8,uVar7);
      goto LAB_82c7c8c0;
    }
  }
  else if (uVar9 < 0x20) {
    if (uVar9 == 0x1f) {
      if ((iStack_a0 != 1) || (uVar7 = 1, !bVar3)) {
        uVar7 = 0;
      }
      fn_82C7BE90(param_1,4,puVar17,iVar8,uVar7);
      goto LAB_82c7c8c0;
    }
    if (uVar9 == 0x1d) {
      if ((iStack_a0 != 1) || (uVar7 = 1, !bVar3)) {
        uVar7 = 0;
      }
      fn_82C7BE90(param_1,6,puVar17,iVar8,uVar7);
      goto LAB_82c7c8c0;
    }
    if (uVar9 == 0x1e) {
      if ((iStack_a0 != 1) || (uVar7 = 1, !bVar3)) {
        uVar7 = 0;
      }
      fn_82C7BE90(param_1,5,puVar17,iVar8,uVar7);
      goto LAB_82c7c8c0;
    }
  }
  else if ((0x1f < uVar9) && (uVar9 < 0x41)) goto LAB_82c7c8c0;
  uVar12 = 1;
LAB_82c7c8c0:
  pbStack00000024 = (byte *)((int)puStack0000001c + ((int)pbStack00000024 - (int)puVar16));
  puStack0000001c = puVar16;
  goto joined_r0x82c7c320;
}

