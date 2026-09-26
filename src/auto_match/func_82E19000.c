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
extern unsigned int *auStack_2a0;
extern unsigned int *auStack_2c0;
extern unsigned int *auStack_2d8;
extern unsigned int *auStack_2e8;
extern int fn_82CEAC20();
extern int fn_82CEAE80();
extern int fn_82CEAEA8();
extern int fn_82CEAFA8();
extern int fn_82CEB1A8();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82CFD5B0();
extern int fn_82CFD5F0();
extern int fn_82CFD870();
extern int fn_82CFDFE0();
extern int fn_82CFE180();
extern int fn_82CFE1F0();
extern int fn_82E17EE8();
extern int fn_82E17FC8();
extern int fn_82E18210();
extern int fn_82E182B0();
extern int fn_82E18720();
extern int fn_82E18F88();
extern int fn_82E19C10();
extern int fn_82E19C88();
extern int fn_82E19D28();
extern unsigned int iStack0000001c;
extern unsigned int *lbl_8323B464;
extern unsigned int uStack00000024;
extern unsigned int uStack_2a8;
extern unsigned int uStack_2b0;
extern unsigned int uStack_2c8;
extern unsigned int uStack_2f0;
extern unsigned int uStack_300;


void fn_82E19000(int *param_1,int param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5
                  ,longlong param_6,undefined8 param_7,longlong param_8)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ulonglong in_r0;
  undefined8 uVar5;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong uVar6;
  int *piVar12;
  longlong lVar7;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint *puVar19;
  longlong lVar20;
  int iStack0000001c;
  undefined4 uStack00000024;
  uint uStack_300;
  undefined8 uStack_2f0;
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [16];
  undefined8 uStack_2c8;
  undefined8 auStack_2c0 [2];
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [672];
  
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  if ((int)param_8 == 0) {
    uVar5 = fn_82CEAC20(param_5);
    fn_82E19D28(param_7,param_6,uVar5);
  }
  uVar18 = 0;
  uStack_300 = 0;
  param_8 = param_8 + 1;
  iVar8 = fn_82CEAE80(param_5);
  if (0 < iVar8) {
    do {
      puVar9 = (undefined4 *)fn_82CEAEA8(param_5,uVar18);
      iVar8 = fn_82CEAFA8(uStack00000024,*puVar9);
      if (iVar8 != 0) {
        puVar19 = (uint *)((uint)*(ushort *)(iVar8 + 0x12) + iStack0000001c);
        iVar10 = (**(code **)(*param_1 + 0x10))(param_1,iVar8,puVar9);
        if ((iVar10 != 0) && (((param_1[4] & 2U) == 0 || ((*(ushort *)(puVar9 + 4) & 0x400) == 0))))
        {
          uVar16 = *(byte *)(puVar9 + 3) - 1;
          if (0x20 < uVar16) {
            fn_82CEE578(auStack_2d8,auStack_2a0,0x200);
            fn_82CEDB38(auStack_2d8,"Unknown class member found during write of data.");
            iVar8 = (**(code **)(*lbl_8323B464 + 0xc))
                              (lbl_8323B464,3,0x641e3e05,auStack_2a0,0xffffffff8214b528,0x3a5);
            if (iVar8 != 0) {
              trapWord(0x1f,in_r0,0x16);
            }
            puVar15 = auStack_2d8;
LAB_82e19b14:
                    /* WARNING: Subroutine does not return */
            fn_82CED958(puVar15);
          }
          in_r0 = (ulonglong)*(uint *)(uVar16 * 4 + -0x7d1e6ec0);
          switch(*(byte *)(puVar9 + 3)) {
          case 0x13:
            fn_82CEE578(auStack_2e8,auStack_2a0,0x200);
            fn_82CEDB38(auStack_2e8,"TYPE_ZERO should not occur.");
            iVar8 = (**(code **)(*lbl_8323B464 + 0xc))
                              (lbl_8323B464,3,0x641e3e05,auStack_2a0,0xffffffff8214b528,0x3a0);
            if (iVar8 != 0) {
              trapWord(0x1f,in_r0,0x16);
            }
            puVar15 = auStack_2e8;
            goto LAB_82e19b14;
          case 0x14:
            iVar13 = fn_82E17EE8(puVar9);
            iVar10 = fn_82E17EE8(iVar8);
            if (iVar13 <= iVar10) {
              iVar10 = iVar13;
            }
            uVar18 = fn_82E17EE8(iVar8);
            uVar6 = fn_82CFD5F0(iVar8);
            iVar8 = 0;
            trapWord(6,uVar18,0);
            trapWord(5,uVar18 & ~(((uVar6 & 0x7fffffff) << 1 | (uVar6 & 0xffffffff) >> 0x1f) - 1),
                     0xffff);
            if (0 < iVar10) {
              do {
                uVar16 = *puVar19;
                if (uVar16 != 0) {
                  lVar7 = (longlong)(int)(uint)*(byte *)(param_1 + 3) * (longlong)iVar8 +
                          (ulonglong)*(ushort *)((int)puVar9 + 0x12);
                  if (*(char *)((int)puVar9 + 0xd) == '\x02') {
                    fn_82E18F88(uVar16,lVar7 + param_6,param_4,param_7);
                  }
                  else {
                    uVar5 = fn_82CFD5B0(puVar9);
                    fn_82E19C88(param_7,lVar7 + param_6,uVar16,uVar5,0);
                  }
                }
                iVar8 = iVar8 + 1;
                puVar19 = (uint *)((int)puVar19 + (int)uVar6 / (int)uVar18);
              } while (iVar8 < iVar10);
            }
            break;
          case 0x16:
          case 0x17:
          case 0x1a:
            if ((puVar19[1] != 0) && (cVar1 = *(char *)((int)puVar9 + 0xd), cVar1 != '\0')) {
              if (cVar1 == '\x14') {
                piVar12 = (int *)fn_82CFE1F0(param_4);
                uVar2 = *(ushort *)((int)puVar9 + 0x12);
                uVar5 = (**(code **)(*piVar12 + 0x20))();
                fn_82E19C10(param_7,(ulonglong)uVar2 + param_6,uVar5);
                auStack_2c0[0] = 0;
                iVar10 = fn_82CFD870(iVar8);
                iVar13 = 0;
                if (0 < (int)puVar19[1]) {
                  iVar14 = 0;
                  do {
                    iVar4 = *(int *)(iVar14 + *puVar19);
                    if (iVar4 != 0) {
                      piVar12 = (int *)fn_82CFE1F0(param_4);
                      uVar11 = fn_82CFD5B0(iVar8);
                      uVar5 = (**(code **)(*piVar12 + 0x20))(piVar12);
                      fn_82E19C88(param_7,uVar5,iVar4,uVar11,0);
                    }
                    fn_82CFE180(param_4,auStack_2c0,*(undefined1 *)(param_1 + 3));
                    iVar13 = iVar13 + 1;
                    iVar14 = iVar14 + iVar10;
                  } while (iVar13 < (int)puVar19[1]);
                }
              }
              else if (cVar1 == '\x1d') {
                piVar12 = (int *)fn_82CFE1F0(param_4);
                uVar2 = *(ushort *)((int)puVar9 + 0x12);
                uVar5 = (**(code **)(*piVar12 + 0x20))();
                fn_82E19C10(param_7,(ulonglong)uVar2 + param_6,uVar5);
                uStack_2f0 = 0;
                piVar12 = (int *)fn_82CFE1F0(param_4);
                lVar7 = (**(code **)(*piVar12 + 0x20))();
                uVar16 = puVar19[1];
                iVar8 = 0;
                if (0 < (int)uVar16) {
                  do {
                    fn_82CFE180(param_4,&uStack_2f0,*(undefined1 *)(param_1 + 3));
                    uVar16 = puVar19[1];
                    iVar8 = iVar8 + 1;
                  } while (iVar8 < (int)uVar16);
                }
                iVar8 = 0;
                if (0 < (int)uVar16) {
                  iVar10 = 0;
                  do {
                    if (*(int *)(iVar10 + *puVar19) != 0) {
                      fn_82E18F88(*(undefined4 *)(iVar10 + *puVar19),
                                    (longlong)(int)(uint)*(byte *)(param_1 + 3) * (longlong)iVar8 +
                                    lVar7,param_4,param_7);
                    }
                    iVar8 = iVar8 + 1;
                    iVar10 = iVar10 + 4;
                  } while (iVar8 < (int)puVar19[1]);
                }
              }
              else if (cVar1 == '!') {
                piVar12 = (int *)fn_82CFE1F0(param_4);
                uVar2 = *(ushort *)((int)puVar9 + 0x12);
                uVar5 = (**(code **)(*piVar12 + 0x20))();
                fn_82E19C10(param_7,(ulonglong)uVar2 + param_6,uVar5);
                uStack_2c8 = 0;
                piVar12 = (int *)fn_82CFE1F0(param_4);
                lVar7 = (**(code **)(*piVar12 + 0x20))();
                uVar16 = puVar19[1];
                iVar8 = 0;
                if (0 < (int)uVar16) {
                  do {
                    fn_82CFE180(param_4,&uStack_2c8,*(undefined1 *)(param_1 + 3));
                    uVar16 = puVar19[1];
                    iVar8 = iVar8 + 1;
                  } while (iVar8 < (int)uVar16);
                }
                iVar8 = 0;
                if (0 < (int)uVar16) {
                  iVar10 = 0;
                  do {
                    if ((*(uint *)(iVar10 + *puVar19) & 0xfffffffe) != 0) {
                      fn_82E18F88(*(uint *)(iVar10 + *puVar19) & 0xfffffffe,
                                    (longlong)(int)(uint)*(byte *)(param_1 + 3) * (longlong)iVar8 +
                                    lVar7,param_4,param_7);
                    }
                    iVar8 = iVar8 + 1;
                    iVar10 = iVar10 + 4;
                  } while (iVar8 < (int)puVar19[1]);
                }
              }
              else if (cVar1 == '\x19') {
                piVar12 = (int *)fn_82CFE1F0(param_4);
                lVar7 = (**(code **)(*piVar12 + 0x20))();
                fn_82E19C10(param_7,(ulonglong)*(ushort *)((int)puVar9 + 0x12) + param_6,lVar7
                                 );
                uVar18 = fn_82CFD5B0(iVar8);
                uVar6 = fn_82CFD5B0(puVar9);
                if (((uVar18 & 0xffffffff) != 0) && ((uVar6 & 0xffffffff) != 0)) {
                  uVar16 = puVar19[1];
                  iVar8 = 0;
                  uVar17 = *puVar19;
                  if (0 < (int)uVar16) {
                    do {
                      iVar10 = fn_82CEB1A8(uVar18);
                      fn_82E18720(param_1,(longlong)iVar10 * (longlong)iVar8 + (ulonglong)uVar17,
                                    uVar18,param_4,uVar6);
                      uVar16 = puVar19[1];
                      iVar8 = iVar8 + 1;
                    } while (iVar8 < (int)uVar16);
                  }
                  iVar8 = 0;
                  if (0 < (int)uVar16) {
                    do {
                      iVar10 = fn_82CEB1A8(uVar6);
                      iVar13 = fn_82CEB1A8(uVar18);
                      fn_82E19000(param_1,(longlong)iVar13 * (longlong)iVar8 + (ulonglong)uVar17,
                                    uVar18,param_4,uVar6,(longlong)iVar10 * (longlong)iVar8 + lVar7,
                                    param_7,param_8);
                      iVar8 = iVar8 + 1;
                    } while (iVar8 < (int)puVar19[1]);
                  }
                }
              }
              else if (cVar1 == '\x1c') {
                piVar12 = (int *)fn_82CFE1F0(param_4);
                lVar7 = (**(code **)(*piVar12 + 0x20))();
                fn_82E19C10(param_7,(ulonglong)*(ushort *)((int)puVar9 + 0x12) + param_6,lVar7
                                 );
                uVar16 = puVar19[1];
                iVar8 = 0;
                if (0 < (int)uVar16) {
                  do {
                    uStack_2b0 = 0;
                    uStack_2a8 = 0;
                    fn_82CFDFE0(param_4,&uStack_2b0,*(undefined1 *)(param_1 + 3),2);
                    uVar16 = puVar19[1];
                    iVar8 = iVar8 + 1;
                  } while (iVar8 < (int)uVar16);
                }
                iVar8 = 0;
                if (0 < (int)uVar16) {
                  iVar10 = 0;
                  do {
                    iVar13 = *(int *)(iVar10 + *puVar19);
                    lVar20 = ((longlong)(int)(uint)*(byte *)(param_1 + 3) * (longlong)iVar8 &
                             0x7fffffffU) * 2;
                    if (iVar13 != 0) {
                      fn_82E19C88(param_7,lVar20 + lVar7,iVar13,
                                        ((int *)(iVar10 + *puVar19))[1],0);
                    }
                    iVar13 = *(int *)(iVar10 + *puVar19 + 4);
                    if (iVar13 != 0) {
                      fn_82E19C88(param_7,(ulonglong)*(byte *)(param_1 + 3) + lVar20 + lVar7,
                                        iVar13,0xffffffff8323ae68,0);
                    }
                    iVar8 = iVar8 + 1;
                    iVar10 = iVar10 + 8;
                  } while (iVar8 < (int)puVar19[1]);
                }
              }
              else {
                piVar12 = (int *)fn_82CFE1F0(param_4);
                uVar2 = *(ushort *)((int)puVar9 + 0x12);
                uVar5 = (**(code **)(*piVar12 + 0x20))();
                fn_82E19C10(param_7,(ulonglong)uVar2 + param_6,uVar5);
                cVar1 = *(char *)((int)puVar9 + 0xd);
                if (cVar1 == '\x1e') {
                  fn_82E18210(param_4,*(undefined1 *)(param_1 + 3),puVar19[1],*puVar19);
                }
                else {
                  uVar16 = *puVar19;
                  uVar17 = puVar19[1];
                  uVar5 = fn_82CFD870(puVar9);
                  fn_82E17FC8(param_4,cVar1,uVar5,uVar17,uVar16);
                }
              }
            }
            break;
          case 0x19:
            uVar18 = fn_82CFD5B0(iVar8);
            uVar6 = fn_82CFD5B0(puVar9);
            if (((uVar18 & 0xffffffff) != 0) && ((uVar6 & 0xffffffff) != 0)) {
              uVar2 = *(ushort *)((int)puVar9 + 0x12);
              iVar8 = fn_82E17EE8(iVar8);
              iVar10 = fn_82E17EE8(puVar9);
              if (iVar10 <= iVar8) {
                iVar8 = iVar10;
              }
              iVar10 = 0;
              if (0 < iVar8) {
                do {
                  iVar13 = fn_82CEB1A8(uVar18);
                  iVar14 = fn_82CEB1A8(uVar6);
                  fn_82E19000(param_1,(uint *)(iVar13 * iVar10 + (int)puVar19),uVar18,param_4,
                                uVar6,(longlong)iVar14 * (longlong)iVar10 +
                                      (ulonglong)uVar2 + param_6,param_7,param_8);
                  iVar10 = iVar10 + 1;
                } while (iVar10 < iVar8);
              }
            }
            break;
          case 0x1b:
            uVar16 = *puVar19;
            if (uVar16 != 0) {
              fn_82E19C88(param_7,(ulonglong)*(ushort *)((int)puVar9 + 0x12) + param_6,uVar16,
                                0xffffffff8323ae68,1);
              piVar12 = (int *)fn_82CFE1F0(param_4);
              lVar7 = (**(code **)(*piVar12 + 0x20))();
              fn_82E19C10(param_7,(ulonglong)*(byte *)(param_1 + 3) +
                                        (ulonglong)*(ushort *)((int)puVar9 + 0x12) + param_6,lVar7);
              uVar17 = puVar19[2];
              iVar8 = 0;
              uVar3 = puVar19[1];
              if (0 < (int)uVar17) {
                do {
                  iVar10 = fn_82CEB1A8(uVar16);
                  fn_82E18720(param_1,(longlong)iVar10 * (longlong)iVar8 + (ulonglong)uVar3,uVar16
                                ,param_4,uVar16);
                  uVar17 = puVar19[2];
                  iVar8 = iVar8 + 1;
                } while (iVar8 < (int)uVar17);
              }
              iVar8 = 0;
              if (0 < (int)uVar17) {
                do {
                  iVar10 = fn_82CEB1A8(uVar16);
                  iVar13 = fn_82CEB1A8(uVar16);
                  fn_82E19000(param_1,(longlong)iVar13 * (longlong)iVar8 + (ulonglong)uVar3,uVar16
                                ,param_4,uVar16,(longlong)iVar10 * (longlong)iVar8 + lVar7,param_7,
                                param_8);
                  iVar8 = iVar8 + 1;
                } while (iVar8 < (int)puVar19[2]);
              }
            }
            break;
          case 0x1c:
            iVar8 = fn_82E17EE8(iVar8);
            iVar10 = fn_82E17EE8(puVar9);
            if (iVar10 <= iVar8) {
              iVar8 = iVar10;
            }
            iVar10 = 0;
            if (0 < iVar8) {
              iVar13 = 1;
              do {
                iVar14 = *(int *)(iVar10 * (uint)*(byte *)(param_1 + 2) * 2 + (int)puVar19);
                uVar16 = *(uint *)(iVar13 * (uint)*(byte *)(param_1 + 2) + (int)puVar19);
                if (iVar14 != 0) {
                  fn_82E19C88(param_7,((longlong)(int)(uint)*(byte *)(param_1 + 3) *
                                             (longlong)iVar10 & 0x7fffffffU) * 2 +
                                            (ulonglong)*(ushort *)((int)puVar9 + 0x12) + param_6,
                                    iVar14,uVar16,0);
                }
                if (uVar16 != 0) {
                  fn_82E19C88(param_7,(longlong)(int)(uint)*(byte *)(param_1 + 3) *
                                            (longlong)iVar13 +
                                            (ulonglong)*(ushort *)((int)puVar9 + 0x12) + param_6,
                                    uVar16,0xffffffff8323ae68,0);
                }
                iVar10 = iVar10 + 1;
                iVar13 = iVar13 + 2;
              } while (iVar10 < iVar8);
            }
            break;
          case 0x1d:
            if (*puVar19 != 0) {
              fn_82E18F88(*puVar19,(ulonglong)*(ushort *)((int)puVar9 + 0x12) + param_6,param_4,
                            param_7);
            }
            break;
          case 0x21:
            if ((*puVar19 & 0xfffffffe) != 0) {
              fn_82E18F88(*puVar19 & 0xfffffffe,
                            (ulonglong)*(ushort *)((int)puVar9 + 0x12) + param_6,param_4,param_7);
            }
          }
          uVar5 = fn_82CFE1F0(param_4);
          fn_82E182B0(uVar5,0x10);
          uVar18 = (ulonglong)uStack_300;
        }
      }
      uVar18 = uVar18 + 1;
      uStack_300 = (uint)uVar18;
      iVar8 = fn_82CEAE80(param_5);
    } while ((int)uStack_300 < iVar8);
  }
  return;
}

