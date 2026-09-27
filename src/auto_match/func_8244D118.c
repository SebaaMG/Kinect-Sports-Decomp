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
extern float auStack_70;
extern int fn_82250A18();
extern int fn_82261940();
extern int fn_82261A08();
extern int fn_82291C30();
extern int fn_82292268();
extern int fn_8229A000();
extern int fn_8229F618();
extern int fn_822A0138();
extern int fn_822ABA88();
extern int fn_8233E7C0();
extern int fn_823BAFF8();
extern int fn_8242C1B8();
extern int fn_8242C298();
extern int fn_8242C410();
extern int fn_8242E3E0();
extern int fn_82434E38();
extern int fn_82436648();
extern int fn_82437EC8();
extern int fn_82437F40();
extern int fn_8243C3D0();
extern int fn_8243C490();
extern int fn_8244DF78();
extern int fn_8244E248();
extern int fn_8244E5A0();
extern int fn_8244FE38();
extern int fn_8244FF78();
extern int fn_82450348();
extern int fn_824FBC28();
extern int fn_824FBCC8();
extern int fn_82560708();
extern int fn_8288B760();
extern int fn_8289AB78();
extern int fn_828B00A0();
extern float lbl_821954C8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8328D41C;
extern unsigned int lbl_832975B0;


void fn_8244D118(double param_1,int *param_2)

{
  undefined4 uVar1;
  float *pfVar2;
  int *piVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar7;
  char cVar13;
  int iVar11;
  int iVar12;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  bool bVar17;
  ulonglong auStack_70;
  
  fn_82434E38();
  iVar8 = param_2[5];
  if (iVar8 == 2) {
    bVar5 = true;
    if (((*(int *)(*(int *)param_2[0x10] + 0x84) == 0) || (cVar13 = fn_8288B760(), cVar13 != '\0'))
       && (piVar3 = *(int **)(*(int *)param_2[0x10] + 0x84), piVar3 != (int *)0x0)) {
      lVar7 = (**(code **)(*piVar3 + 8))(piVar3);
      fn_823BAFF8(lVar7 + 0x8f4);
      lVar7 = (**(code **)(*piVar3 + 8))(piVar3);
      cVar13 = fn_8289AB78(lVar7 + 0x8f4);
      bVar5 = cVar13 != '\0';
    }
    (**(code **)(*param_2 + 0x34))(param_2);
    if (bVar5) {
      iVar9 = 0;
      uVar16 = (ulonglong)*(uint *)param_2[0x10];
      iVar8 = fn_8242C410(uVar16);
      if (0 < iVar8) {
        iVar8 = 0;
        do {
          piVar3 = *(int **)(**(int **)((int)uVar16 + 8) + iVar8);
          iVar12 = fn_822ABA88(*(undefined4 *)(piVar3[4] * 4 + *piVar3),0);
          piVar3 = *(int **)(iVar12 + 0x168);
          if ((piVar3 != (int *)0x0) && (cVar13 = fn_8288B760(piVar3), cVar13 != '\0')) {
            lVar7 = (**(code **)(*piVar3 + 8))(piVar3);
            fn_8233E7C0(lVar7 + 0x48c,0,0);
            fn_8233E7C0(lVar7 + 0x48c,0,1);
            lVar7 = (**(code **)(*piVar3 + 8))(piVar3);
            cVar13 = fn_8289AB78(lVar7 + 0x294);
            if (cVar13 != '\0') {
              lVar7 = (**(code **)(*piVar3 + 8))(piVar3);
              cVar13 = fn_8289AB78(lVar7 + 0x33c);
              if (cVar13 != '\0') {
                lVar7 = (**(code **)(*piVar3 + 8))(piVar3);
                cVar13 = fn_8289AB78(lVar7 + 0x390);
                if (cVar13 != '\0') {
                  lVar7 = (**(code **)(*piVar3 + 8))(piVar3);
                  cVar13 = fn_8289AB78(lVar7 + 0x2e8);
                  if (cVar13 != '\0') {
                    lVar7 = (**(code **)(*piVar3 + 8))(piVar3);
                    cVar13 = fn_8289AB78(lVar7 + 0x3e4);
                    if (cVar13 != '\0') {
                      lVar7 = (**(code **)(*piVar3 + 8))(piVar3);
                      cVar13 = fn_8289AB78(lVar7 + 0x438);
                      if (cVar13 != '\0') {
                        lVar7 = (**(code **)(*piVar3 + 8))(piVar3);
                        cVar13 = fn_8289AB78(lVar7 + 0x534);
                        if (cVar13 != '\0') {
                          lVar7 = (**(code **)(*piVar3 + 8))(piVar3);
                          cVar13 = fn_8289AB78(lVar7 + 0x48c);
                          if (cVar13 != '\0') goto LAB_8244de50;
                        }
                      }
                    }
                  }
                }
              }
            }
            bVar5 = false;
            break;
          }
LAB_8244de50:
          iVar9 = iVar9 + 1;
          iVar8 = iVar8 + 4;
          uVar16 = (ulonglong)*(uint *)param_2[0x10];
          iVar12 = fn_8242C410(uVar16);
        } while (iVar9 < iVar12);
      }
    }
    iVar8 = fn_8242C1B8(*(undefined4 *)param_2[0x10]);
    iVar8 = *(int *)(iVar8 + 0x24);
    if (iVar8 == 0) {
      return;
    }
    bVar6 = false;
    iVar9 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar9 = fn_82250A18();
    }
    if (*(char *)(iVar9 + 4) != '\0') {
      if (*(int *)(*(int *)(*(int *)(*(int *)param_2[0x10] + 0xd4) + 0x18) + 0xc) == 0) {
        *(float *)(param_2[0x11] + 0xb0) =
             (float)((double)*(float *)(param_2[0x11] + 0xb0) + param_1);
      }
      if (*(float *)(param_2[0x11] + 0x30) < *(float *)(param_2[0x11] + 0xb0)) {
        bVar6 = true;
      }
    }
    if (*(float *)(param_2[0x11] + 0x2c) < *(float *)(*(int *)(iVar8 + 0xfc) + 0x60)) {
      bVar6 = true;
    }
    iVar8 = *(int *)param_2[0x10];
    if (*(int *)(*(int *)(*(int *)(iVar8 + 0xd4) + 0x18) + 0xc) != 0) {
      return;
    }
    if (((int *)param_2[0x10])[0x73] == 0) {
      return;
    }
    if ((*(char *)(*(int *)(iVar8 + 0x174) + 0xc9) == '\0') && (!bVar6)) {
      return;
    }
    if (!bVar5) {
      return;
    }
    uVar14 = 6;
    goto LAB_8244df64;
  }
  if (iVar8 == 6) {
    if ((float)param_2[0xe] <= *(float *)(param_2[0x11] + 8)) {
      return;
    }
    uVar14 = 7;
    goto LAB_8244df64;
  }
  if (iVar8 == 7) {
    (**(code **)(*param_2 + 0x34))(param_2);
    if ((float)param_2[0xe] <= *(float *)(param_2[0x11] + 0xc)) {
      return;
    }
    uVar14 = 8;
    goto LAB_8244df64;
  }
  if (iVar8 != 8) {
    if (iVar8 == 9) {
      (**(code **)(*param_2 + 0x34))(param_2);
      pfVar2 = (float *)param_2[0x11];
      iVar9 = fn_82450348(param_2,0);
      iVar8 = *(int *)(*(int *)(*(int *)param_2[0x10] + 0x174) + 0x18);
      fVar4 = *pfVar2 - (**(float **)(iVar9 + 0x1a0) + lbl_821CA460);
      if (fVar4 < *(float *)(iVar8 + 4)) {
        *(float *)(iVar8 + 8) = fVar4;
      }
      fn_8244DF78(param_2);
      fn_8244E248(param_1,param_2);
      cVar13 = fn_8244E5A0(param_1,param_2);
      iVar8 = param_2[0x11];
      if ((*(int *)(iVar8 + 0xcc) - *(int *)(iVar8 + 200) >> 3 == 0) ||
         (*(char *)(iVar8 + 4) != '\0')) {
        fn_82292268(*(undefined4 *)(*(int *)param_2[0x10] + 0xd4));
      }
      else {
        fn_8244FF78(param_2);
      }
      if (cVar13 == '\0') {
        return;
      }
      iVar8 = param_2[0x10];
      if ((*(uint *)(iVar8 + 0x160) < 2) || (*(int *)(iVar8 + 0x204) != 0)) {
        iVar9 = *(int *)(iVar8 + 0x148);
      }
      else {
        iVar9 = (*(int *)(iVar8 + 0x154) - *(int *)(iVar8 + 0x15c)) + *(int *)(iVar8 + 0x148);
      }
      *(int *)(iVar8 + 0x154) = iVar9 + 1;
      fn_82437F40(param_2[0x10] + 0x138,*(undefined4 *)(param_2[0x10] + 0x154));
      uVar14 = 10;
      goto LAB_8244df64;
    }
    if (iVar8 == 10) {
      (**(code **)(*param_2 + 0x34))(param_2);
      iVar8 = param_2[0x11];
      if (((*(char *)(iVar8 + 0xfc) == '\0') && (lbl_821CC160 <= *(float *)(iVar8 + 0x108))) &&
         (*(float *)(iVar8 + 0x108) = (float)((double)*(float *)(iVar8 + 0x108) + param_1),
         *(float *)(param_2[0x11] + 0x104) < *(float *)(param_2[0x11] + 0x108))) {
        fn_8244FE38(param_2);
      }
      if ((float)param_2[0xe] <= *(float *)(param_2[0x11] + 0x20)) {
        iVar8 = fn_8242E3E0(*(undefined4 *)param_2[0x10]);
        if (iVar8 == 0) {
          return;
        }
        if ((float)param_2[0xe] <= lbl_821CA460) {
          return;
        }
      }
      iVar8 = *(int *)(*(int *)param_2[0x10] + 0xd4);
      fn_8229A000(*(undefined4 *)(iVar8 + 0x4c));
      fn_8229A000(*(undefined4 *)(iVar8 + 0x58));
      iVar8 = *(int *)(*(int *)param_2[0x10] + 0xd4);
      fn_8229A000(*(undefined4 *)(iVar8 + 0x50));
      fn_8229A000(*(undefined4 *)(iVar8 + 0x5c));
      iVar8 = *(int *)(*(int *)param_2[0x10] + 0xd4);
      fn_8229A000(*(undefined4 *)(iVar8 + 0x54));
      fn_8229A000(*(undefined4 *)(iVar8 + 0x60));
      fn_8229F618(*(undefined4 *)(*(int *)(*(int *)param_2[0x10] + 0xd4) + 0xc));
      fn_8229A000(*(undefined4 *)(*(int *)(*(int *)param_2[0x10] + 0xd4) + 100));
      fn_82292268(*(undefined4 *)(*(int *)param_2[0x10] + 0xd4));
    }
    else {
      if (iVar8 != 0xc) {
        return;
      }
      (**(code **)(*param_2 + 0x34))(param_2);
      iVar8 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar8 = fn_82250A18();
      }
      if (*(char *)(iVar8 + 4) == '\0') {
        iVar8 = fn_82560708();
        if (iVar8 == 0) {
          if (*(int *)(param_2[0x11] + 0x78) == 0) {
            iVar8 = fn_8242C1B8(*(undefined4 *)param_2[0x10]);
            if (*(int *)(*(int *)(iVar8 + 0x2c) * 0x18 + *(int *)(param_2[0x11] + 0xb8) + 4) != 0) {
              *(undefined4 *)(param_2[0x11] + 0x78) = 1;
              lVar7 = fn_8242C1B8(*(undefined4 *)param_2[0x10]);
              uVar1 = *(undefined4 *)(*(int *)param_2[0x10] + 0xd4);
LAB_8244d43c:
              uVar15 = 1;
              uVar14 = 4;
              goto LAB_8244d444;
            }
          }
        }
        else {
          if (*(int *)(param_2[0x11] + 0x7c) == 0) {
            iVar8 = fn_8242C1B8(*(undefined4 *)param_2[0x10]);
            if (*(int *)(*(int *)(iVar8 + 0x2c) * 0x18 + *(int *)(param_2[0x11] + 0xb8) + 4) != 0) {
              *(undefined4 *)(param_2[0x11] + 0x7c) = 1;
              lVar7 = fn_8242C1B8(*(undefined4 *)param_2[0x10]);
              fn_82291C30(*(undefined4 *)(*(int *)param_2[0x10] + 0xd4),0x1b,5,0,lVar7 + 0x30,
                                1);
            }
          }
          if (*(int *)(param_2[0x11] + 0x80) == 0) {
            iVar8 = fn_8242C298(*(undefined4 *)param_2[0x10]);
            if (*(int *)(*(int *)(iVar8 + 0x2c) * 0x18 + *(int *)(param_2[0x11] + 0xb8) + 4) != 0) {
              *(undefined4 *)(param_2[0x11] + 0x80) = 1;
              lVar7 = fn_8242C298(*(undefined4 *)param_2[0x10]);
              uVar15 = 2;
              uVar14 = 0x1c;
              uVar1 = *(undefined4 *)(*(int *)param_2[0x10] + 0xd4);
LAB_8244d444:
              fn_82291C30(uVar1,uVar14,5,uVar15,lVar7 + 0x30,1);
            }
          }
        }
      }
      else if (*(int *)(param_2[0x11] + 0x78) == 0) {
        bVar5 = true;
        iVar12 = 0;
        iVar9 = *(int *)param_2[0x10];
        iVar8 = *(int *)(*(int *)(iVar9 + 0x174) + 0xbc);
        if (0 < iVar8) {
          iVar11 = 0;
          do {
            if (*(int *)(*(int *)(param_2[0x11] + 0xb8) + iVar11 + 4) == 0) {
              bVar5 = false;
              break;
            }
            iVar12 = iVar12 + 1;
            iVar11 = iVar11 + 0x18;
          } while (iVar12 < iVar8);
        }
        iVar12 = 0;
        if (0 < iVar8) {
          iVar8 = 0;
          iVar11 = 0;
          do {
            if (bVar5) {
              piVar3 = *(int **)(**(int **)(iVar9 + 8) + iVar11);
              iVar9 = fn_822ABA88(*(undefined4 *)(piVar3[4] * 4 + *piVar3),0);
              if (*(int *)(iVar9 + 0x168) == 0) {
                uVar10 = *(uint *)(iVar9 + 0x16c);
              }
              else {
                uVar10 = fn_8288B760();
                uVar10 = uVar10 & 0xff;
              }
            }
            else {
              uVar10 = *(uint *)(*(int *)(param_2[0x11] + 0xb8) + iVar8 + 4);
            }
            if (uVar10 != 0) {
              *(undefined4 *)(param_2[0x11] + 0x78) = 1;
              iVar8 = *(int *)param_2[0x10];
              piVar3 = *(int **)(**(int **)(iVar8 + 8) + iVar12 * 4);
              lVar7 = fn_822ABA88(*(undefined4 *)(piVar3[4] * 4 + *piVar3),0);
              uVar1 = *(undefined4 *)(iVar8 + 0xd4);
              goto LAB_8244d43c;
            }
            iVar12 = iVar12 + 1;
            iVar11 = iVar11 + 4;
            iVar8 = iVar8 + 0x18;
            iVar9 = *(int *)param_2[0x10];
          } while (iVar12 < *(int *)(*(int *)(iVar9 + 0x174) + 0xbc));
        }
      }
      if ((float)param_2[0xe] <= *(float *)(param_2[0x11] + 0x1c)) {
        return;
      }
      iVar8 = *(int *)(*(int *)param_2[0x10] + 0xd4);
      fn_8229A000(*(undefined4 *)(iVar8 + 0x4c));
      fn_8229A000(*(undefined4 *)(iVar8 + 0x58));
      fn_8229A000(*(undefined4 *)(*(int *)(*(int *)param_2[0x10] + 0xd4) + 100));
    }
    uVar14 = 0x10;
    goto LAB_8244df64;
  }
  bVar5 = false;
  (**(code **)(*param_2 + 0x34))(param_2);
  if ((param_2[6] == param_2[5]) || (bVar6 = true, param_2[6] == 0)) {
    bVar6 = false;
  }
  if (bVar6) {
    return;
  }
  bVar6 = false;
  iVar8 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar8 = fn_82250A18();
  }
  if (*(char *)(iVar8 + 4) == '\0') {
    bVar6 = true;
    if ((float)param_2[0xe] <= *(float *)(param_2[0x11] + 0x18)) {
LAB_8244d864:
      bVar6 = false;
    }
  }
  else {
    piVar3 = *(int **)(*(int *)param_2[0x10] + 0x84);
    if (piVar3 != (int *)0x0) {
      auStack_70 = 0;
      lVar7 = (**(code **)(*piVar3 + 8))(piVar3);
      iVar8 = fn_8243C3D0(lVar7 + 0x8f4,&auStack_70);
      if (iVar8 == 0) {
        if ((*(int *)(*(int *)param_2[0x10] + 0x84) == 0) ||
           (cVar13 = fn_8288B760(), cVar13 != '\0')) {
          lVar7 = fn_828B00A0((ulonglong)(uint)piVar3[4] + 0x278);
          auStack_70 = (longlong)(*(float *)(param_2[0x11] + 0x18) * lbl_821954C8) + lVar7;
          lVar7 = (**(code **)(*piVar3 + 8))(piVar3);
          fn_8243C490(lVar7 + 0x8f4,&auStack_70);
        }
      }
      else {
        uVar16 = fn_828B00A0((ulonglong)(uint)piVar3[4] + 0x278);
        bVar6 = true;
        if (uVar16 < auStack_70) goto LAB_8244d864;
      }
    }
  }
  lVar7 = 0;
  uVar16 = (ulonglong)*(uint *)param_2[0x10];
  iVar8 = fn_8242C410(uVar16);
  if (0 < iVar8) {
    iVar9 = 0;
    iVar8 = 0;
    do {
      piVar3 = *(int **)(**(int **)((int)uVar16 + 8) + iVar8);
      iVar11 = fn_822ABA88(*(undefined4 *)(piVar3[4] * 4 + *piVar3),0);
      bVar17 = false;
      iVar12 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar12 = fn_82250A18();
      }
      if ((*(char *)(iVar12 + 4) == '\0') && (!bVar6)) {
        bVar17 = *(float *)(param_2[0x11] + 0x34) < **(float **)(iVar11 + 0x1a0);
        if (((bVar17) && (*(int *)(iVar11 + 0x24) != 0)) &&
           ((*(int *)(param_2[0x10] + 0x148) + 1 == *(int *)(param_2[0x10] + 0x154) ||
            ((*(int *)(param_2[0x10] + 0x148) + 1 == *(int *)(param_2[0x10] + 0x15c) &&
             (iVar12 = param_2[0x10],
             *(int *)(iVar12 + 0x154) == *(int *)(iVar12 + 0x160) * *(int *)(iVar12 + 0x15c))))))) {
          uVar10 = *(uint *)(iVar11 + 0x2c);
          fn_822A0138((double)*(float *)(param_2[0x11] + 0x38),
                            *(undefined4 *)(*(int *)(*(int *)param_2[0x10] + 0xd4) + 0xc),
                            (ulonglong)uVar10 +
                            ((longlong)((int)uVar10 >> 1) +
                             (ulonglong)((int)uVar10 < 0 && (uVar10 & 1) != 0) & 0x7fffffff) * -2);
        }
      }
      if ((bVar17) && (iVar12 = *(int *)(param_2[0x11] + 0xb8) + iVar9, *(int *)(iVar12 + 4) == 0))
      {
        *(undefined4 *)(iVar12 + 4) = 1;
        fn_82436648(param_2,lVar7,iVar11 + 0x30,2,lbl_8328D41C,1,0);
        if (*(int *)(iVar11 + 0x24) != 0) {
          uVar1 = *(undefined4 *)param_2[0x10];
          if (((undefined4 *)param_2[0x10])[0x45] == 1) {
            fn_8242C1B8(uVar1);
            fn_82261940((double)(float)param_2[0xe],
                              *(undefined4 *)(*(int *)(((int *)param_2[0x10])[1] + 0x40) + 0x1ec),
                              *(int *)(*(int *)(*(int *)param_2[0x10] + 0x174) + 0xc4) != 0,
                              *(undefined4 *)(iVar11 + 0x2c));
          }
          else {
            fn_8242C1B8(uVar1);
            fn_82261A08((double)(float)param_2[0xe],
                              *(undefined4 *)(*(int *)(((int *)param_2[0x10])[1] + 0x40) + 0x1ec),
                              *(int *)(*(int *)(*(int *)param_2[0x10] + 0x174) + 0xc4) != 0,
                              *(undefined4 *)(iVar11 + 0x2c));
          }
        }
      }
      if (((*(int *)(*(int *)(param_2[0x11] + 0xb8) + iVar9 + 4) != 0) &&
          (*(int *)(param_2[0x10] + 0x148) + 1 != *(int *)(param_2[0x10] + 0x154))) &&
         ((*(int *)(param_2[0x10] + 0x148) + 1 != *(int *)(param_2[0x10] + 0x15c) ||
          (iVar12 = param_2[0x10],
          *(int *)(iVar12 + 0x154) != *(int *)(iVar12 + 0x160) * *(int *)(iVar12 + 0x15c))))) {
        bVar5 = true;
      }
      lVar7 = lVar7 + 1;
      iVar8 = iVar8 + 4;
      iVar9 = iVar9 + 0x18;
      uVar16 = (ulonglong)*(uint *)param_2[0x10];
      iVar12 = fn_8242C410(uVar16);
    } while ((int)lVar7 < iVar12);
  }
  iVar8 = param_2[0x11];
  if ((*(float *)(iVar8 + 0x24) < (float)param_2[0xe]) && (*(char *)(iVar8 + 5) != '\0')) {
    *(undefined1 *)(iVar8 + 5) = 0;
    fn_8229A000(*(undefined4 *)(*(int *)(*(int *)param_2[0x10] + 0xd4) + 0x6c));
    fn_8229A000(*(undefined4 *)(*(int *)(*(int *)param_2[0x10] + 0xd4) + 0x70));
    fn_8229A000(*(undefined4 *)(*(int *)(*(int *)param_2[0x10] + 0xd4) + 0x68));
  }
  if (bVar5) {
    if (*(int *)(param_2[0x11] + 0x70) != 0) {
      fn_824FBCC8();
    }
    uVar14 = 0xc;
  }
  else {
    if (!bVar6) {
      return;
    }
    if (*(int *)(param_2[0x11] + 0x70) != 0) {
      fn_824FBC28();
    }
    uVar14 = 9;
  }
LAB_8244df64:
  fn_82437EC8(param_2,uVar14);
  return;
}

