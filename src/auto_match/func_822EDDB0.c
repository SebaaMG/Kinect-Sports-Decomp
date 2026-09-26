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
extern int fn_82230300();
extern int fn_8223E0E0();
extern int fn_8223F468();
extern int fn_8223F508();
extern int fn_8223F5A0();
extern int fn_822EE628();
extern int fn_822EE6E8();
extern int fn_822EF000();
extern int fn_822EF060();
extern int fn_822EF458();
extern int fn_82F64258();
extern unsigned int iStack_a0;
extern unsigned int uStack_9c;
extern unsigned int uStack_bc;


longlong fn_822EDDB0(undefined8 param_1,undefined1 *param_2,int param_3,undefined8 param_4,
                      int param_5)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  int *piVar4;
  undefined4 *puVar5;
  char cVar6;
  char cVar7;
  char ******ppppppcVar8;
  char ******ppppppcVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  int aiStack_e0 [4];
  char *****apppppcStack_d0 [5];
  uint uStack_bc;
  char *****apppppcStack_b0 [4];
  int iStack_a0;
  uint uStack_9c;
  
  if ((*(uint *)(param_5 + 0x14) & 0x3000) == 0x3000) {
    lVar3 = fn_822EE6E8();
    return lVar3;
  }
  iVar10 = **(int **)(param_5 + 0x30);
  aiStack_e0[0] = iVar10;
  fn_8223F508(iVar10);
  piVar4 = (int *)fn_8223F468(aiStack_e0);
  if ((iVar10 != 0) &&
     (puVar5 = (undefined4 *)fn_8223F5A0(iVar10), puVar5 != (undefined4 *)0x0)) {
    (**(code **)*puVar5)(puVar5,1);
  }
  (**(code **)(*piVar4 + 0xc))(apppppcStack_b0,piVar4);
  bVar1 = false;
  cVar6 = fn_822EF458(param_3,param_4);
  puVar11 = param_2;
  if (cVar6 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      fn_822EF060(param_3);
    }
    if (*(char *)(param_3 + 5) == '+') {
      *param_2 = 0x2b;
    }
    else {
      if (*(char *)(param_3 + 4) == '\0') {
        fn_822EF060(param_3);
      }
      if (*(char *)(param_3 + 5) != '-') goto LAB_822edec0;
      *param_2 = 0x2d;
    }
    fn_822EF000(param_3);
    puVar11 = param_2 + 1;
  }
LAB_822edec0:
  bVar2 = false;
  iVar10 = 0;
  lVar3 = 0;
  ppppppcVar9 = (char ******)apppppcStack_b0[0];
  if (uStack_9c < 0x10) {
    ppppppcVar9 = apppppcStack_b0;
  }
  if (*(char *)ppppppcVar9 == '\x7f') {
LAB_822ee274:
    while (cVar6 = fn_822EF458(param_3,param_4), cVar6 == '\0') {
      if (*(char *)(param_3 + 4) == '\0') {
        fn_822EF060(param_3);
      }
      if (*(char *)(param_3 + 5) < '0') break;
      if (*(char *)(param_3 + 4) == '\0') {
        fn_822EF060(param_3);
      }
      if ('9' < *(char *)(param_3 + 5)) break;
      if (iVar10 < 0x24) {
        if (*(char *)(param_3 + 4) == '\0') {
          fn_822EF060(param_3);
        }
        if ((*(char *)(param_3 + 5) != '0') || (iVar10 != 0)) {
          if (*(char *)(param_3 + 4) == '\0') {
            fn_822EF060(param_3);
          }
          iVar10 = iVar10 + 1;
          *puVar11 = *(undefined1 *)(param_3 + 5);
          puVar11 = puVar11 + 1;
        }
      }
      else {
        lVar3 = lVar3 + 1;
      }
      bVar2 = true;
      fn_822EF000(param_3);
    }
  }
  else {
    ppppppcVar9 = (char ******)apppppcStack_b0[0];
    if (uStack_9c < 0x10) {
      ppppppcVar9 = apppppcStack_b0;
    }
    if (*(char *)ppppppcVar9 < '\x01') goto LAB_822ee274;
    if (iStack_a0 == 0) {
      cVar6 = '\0';
    }
    else {
      cVar6 = (**(code **)(*piVar4 + 8))(piVar4);
    }
    fn_82230300(apppppcStack_d0,0,0);
    fn_822EE628(apppppcStack_d0,1,0);
    iVar14 = 0;
    cVar7 = fn_822EF458(param_3,param_4);
    uVar13 = uStack_bc;
    ppppppcVar9 = (char ******)apppppcStack_d0[0];
    if (cVar7 == '\0') {
      do {
        if (*(char *)(param_3 + 4) == '\0') {
          fn_822EF060(param_3);
        }
        if (*(char *)(param_3 + 5) < '0') {
LAB_822ee05c:
          ppppppcVar8 = ppppppcVar9;
          if (uVar13 < 0x10) {
            ppppppcVar8 = apppppcStack_d0;
          }
          if ((*(char *)((int)ppppppcVar8 + iVar14) == '\0') || (cVar6 == '\0')) break;
          if (*(char *)(param_3 + 4) == '\0') {
            fn_822EF060(param_3);
          }
          if (*(char *)(param_3 + 5) != cVar6) break;
          fn_8223E0E0(apppppcStack_d0,1,0);
          iVar14 = iVar14 + 1;
          uVar13 = uStack_bc;
          ppppppcVar9 = (char ******)apppppcStack_d0[0];
        }
        else {
          if (*(char *)(param_3 + 4) == '\0') {
            fn_822EF060(param_3);
          }
          if ('9' < *(char *)(param_3 + 5)) goto LAB_822ee05c;
          bVar2 = true;
          if (iVar10 < 0x24) {
            if (*(char *)(param_3 + 4) == '\0') {
              fn_822EF060(param_3);
            }
            if ((*(char *)(param_3 + 5) != '0') || (iVar10 != 0)) {
              if (*(char *)(param_3 + 4) == '\0') {
                fn_822EF060(param_3);
              }
              iVar10 = iVar10 + 1;
              *puVar11 = *(undefined1 *)(param_3 + 5);
              puVar11 = puVar11 + 1;
            }
          }
          else {
            lVar3 = lVar3 + 1;
          }
          ppppppcVar8 = ppppppcVar9;
          if (uVar13 < 0x10) {
            ppppppcVar8 = apppppcStack_d0;
          }
          if (*(char *)((int)ppppppcVar8 + iVar14) != '\x7f') {
            if (uVar13 < 0x10) {
              ppppppcVar9 = apppppcStack_d0;
            }
            *(char *)((int)ppppppcVar9 + iVar14) = *(char *)((int)ppppppcVar9 + iVar14) + '\x01';
            uVar13 = uStack_bc;
            ppppppcVar9 = (char ******)apppppcStack_d0[0];
          }
        }
        fn_822EF000(param_3);
        cVar7 = fn_822EF458(param_3,param_4);
      } while (cVar7 == '\0');
      apppppcStack_d0[0] = (char *****)ppppppcVar9;
      uStack_bc = uVar13;
      if (iVar14 != 0) {
        ppppppcVar9 = (char ******)apppppcStack_d0[0];
        if (uStack_bc < 0x10) {
          ppppppcVar9 = apppppcStack_d0;
        }
        if (*(char *)((int)ppppppcVar9 + iVar14) < '\x01') {
          bVar1 = true;
        }
        else {
          iVar14 = iVar14 + 1;
        }
      }
    }
    if (uStack_9c < 0x10) {
      apppppcStack_b0[0] = (char *****)apppppcStack_b0;
    }
    while (((!bVar1 && (iVar14 != 0)) && (cVar6 = *(char *)apppppcStack_b0[0], cVar6 != '\x7f'))) {
      iVar14 = iVar14 + -1;
      if (iVar14 == 0) {
LAB_822ee164:
        if (iVar14 == 0) {
          ppppppcVar9 = (char ******)apppppcStack_d0[0];
          if (uStack_bc < 0x10) {
            ppppppcVar9 = apppppcStack_d0;
          }
          if (cVar6 < *(char *)ppppppcVar9) goto LAB_822ee18c;
        }
        if ('\0' < *(char *)((int)apppppcStack_b0[0] + 1)) {
          apppppcStack_b0[0] = (char *****)((int)apppppcStack_b0[0] + 1);
        }
      }
      else {
        ppppppcVar9 = (char ******)apppppcStack_d0[0];
        if (uStack_bc < 0x10) {
          ppppppcVar9 = apppppcStack_d0;
        }
        if (cVar6 == *(char *)((int)ppppppcVar9 + iVar14)) goto LAB_822ee164;
LAB_822ee18c:
        bVar1 = true;
      }
    }
    fn_82230300(apppppcStack_d0,1,0);
  }
  if ((bVar2) && (iVar10 == 0)) {
    *puVar11 = 0x30;
    puVar11 = puVar11 + 1;
  }
  cVar6 = fn_822EF458(param_3,param_4);
  if (cVar6 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      fn_822EF060(param_3);
    }
    cVar6 = *(char *)(param_3 + 5);
    cVar7 = (**(code **)(*piVar4 + 4))(piVar4);
    if (cVar6 == cVar7) {
      puVar5 = (undefined4 *)fn_82F64258();
      *puVar11 = *(undefined1 *)*puVar5;
      puVar11 = puVar11 + 1;
      fn_822EF000(param_3);
    }
  }
  if (iVar10 == 0) {
    while (cVar6 = fn_822EF458(param_3,param_4), cVar6 == '\0') {
      if (*(char *)(param_3 + 4) == '\0') {
        fn_822EF060(param_3);
      }
      if (*(char *)(param_3 + 5) != '0') break;
      lVar3 = lVar3 + -1;
      bVar2 = true;
      fn_822EF000(param_3);
    }
    if ((int)lVar3 < 0) {
      *puVar11 = 0x30;
      lVar3 = lVar3 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  cVar6 = fn_822EF458(param_3,param_4);
  while (cVar6 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      fn_822EF060(param_3);
    }
    if (*(char *)(param_3 + 5) < '0') break;
    if (*(char *)(param_3 + 4) == '\0') {
      fn_822EF060(param_3);
    }
    if ('9' < *(char *)(param_3 + 5)) break;
    if (iVar10 < 0x24) {
      if (*(char *)(param_3 + 4) == '\0') {
        fn_822EF060(param_3);
      }
      iVar10 = iVar10 + 1;
      *puVar11 = *(undefined1 *)(param_3 + 5);
      puVar11 = puVar11 + 1;
    }
    bVar2 = true;
    fn_822EF000(param_3);
    cVar6 = fn_822EF458(param_3,param_4);
  }
  if ((bVar2) && (cVar6 = fn_822EF458(param_3,param_4), cVar6 == '\0')) {
    if (*(char *)(param_3 + 4) == '\0') {
      fn_822EF060(param_3);
    }
    if (*(char *)(param_3 + 5) != 'e') {
      if (*(char *)(param_3 + 4) == '\0') {
        fn_822EF060(param_3);
      }
      if (*(char *)(param_3 + 5) != 'E') goto LAB_822ee5ec;
    }
    *puVar11 = 0x65;
    puVar12 = puVar11 + 1;
    fn_822EF000(param_3);
    bVar2 = false;
    iVar10 = 0;
    cVar6 = fn_822EF458(param_3,param_4);
    if (cVar6 != '\0') goto LAB_822ee530;
    if (*(char *)(param_3 + 4) == '\0') {
      fn_822EF060(param_3);
    }
    if (*(char *)(param_3 + 5) == '+') {
      *puVar12 = 0x2b;
    }
    else {
      if (*(char *)(param_3 + 4) == '\0') {
        fn_822EF060(param_3);
      }
      if (*(char *)(param_3 + 5) != '-') goto LAB_822ee530;
      *puVar12 = 0x2d;
    }
    puVar11 = puVar11 + 2;
    while( true ) {
      fn_822EF000(param_3);
      puVar12 = puVar11;
LAB_822ee530:
      puVar11 = puVar12;
      cVar6 = fn_822EF458(param_3,param_4);
      if (cVar6 != '\0') break;
      if (*(char *)(param_3 + 4) == '\0') {
        fn_822EF060(param_3);
      }
      if (*(char *)(param_3 + 5) != '0') break;
      bVar2 = true;
    }
    if (bVar2) {
      *puVar11 = 0x30;
      puVar11 = puVar11 + 1;
    }
    while (cVar6 = fn_822EF458(param_3,param_4), cVar6 == '\0') {
      if (*(char *)(param_3 + 4) == '\0') {
        fn_822EF060(param_3);
      }
      if (*(char *)(param_3 + 5) < '0') break;
      if (*(char *)(param_3 + 4) == '\0') {
        fn_822EF060(param_3);
      }
      if ('9' < *(char *)(param_3 + 5)) break;
      if (iVar10 < 8) {
        if (*(char *)(param_3 + 4) == '\0') {
          fn_822EF060(param_3);
        }
        iVar10 = iVar10 + 1;
        *puVar11 = *(undefined1 *)(param_3 + 5);
        puVar11 = puVar11 + 1;
      }
      bVar2 = true;
      fn_822EF000(param_3);
    }
  }
LAB_822ee5ec:
  if ((bVar1) || (!bVar2)) {
    puVar11 = param_2;
  }
  *puVar11 = 0;
  fn_82230300(apppppcStack_b0,1,0);
  return lVar3;
}

