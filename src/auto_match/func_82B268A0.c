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
extern int fn_82AA6648();
extern int fn_82ABE250();
extern int fn_82AD6090();
extern int fn_82AF8720();
extern int fn_82B17520();
extern int fn_82B24700();
extern unsigned int iStack_68;
extern unsigned int iStack_70;
extern unsigned int uStack_6c;


undefined8 fn_82B268A0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  bool bVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint *puVar12;
  uint *puVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined8 uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iStack_70;
  uint uStack_6c;
  int iStack_68;
  
  uVar16 = 0;
  for (uVar1 = *(uint *)(param_2 + 0x1c); (uVar1 != 0 && ((*(uint *)(uVar1 + 0x30) & 0x80000) == 0))
      ; uVar1 = *(uint *)(uVar1 + 0x34)) {
  }
  uVar2 = *(uint *)(param_1 + 4);
  do {
    if (((uVar2 & 1) != 0) || (uVar2 == 0)) {
      return uVar16;
    }
    if ((*(uint *)(uVar2 + 0x14) & 1) == 0) {
      uVar18 = -(uint)((*(uint *)(uVar2 + 0x14) & 1) == 0) & *(uint *)(uVar2 + 0x14);
      iVar17 = uVar2 + 0x10;
    }
    else {
      if ((*(uint *)(uVar2 + 0x1c) & 1) == 0) {
        uVar18 = *(uint *)(uVar2 + 0x1c);
        iVar17 = uVar2 + 0x18;
      }
      else {
        uVar18 = *(uint *)(uVar2 + 0x24);
        iVar17 = uVar2 + 0x20;
      }
      uVar18 = -(uint)((uVar18 & 1) == 0) & uVar18;
    }
LAB_82b26dd8:
    do {
      if (uVar18 == 0) break;
      do {
        uVar19 = *(uint *)(uVar18 + 8);
        if ((uVar19 >> 0x1a & 1) != 0) {
          uVar14 = ((ulonglong)uVar19 & 0xfbffffff) >> 7 & 0x7f;
          *(uint *)(uVar18 + 8) = uVar19 & 0xfbffffff;
          if ((uVar14 == 0x56) || (bVar6 = false, uVar14 == 0x57)) {
            bVar6 = true;
          }
          if (bVar6) {
            if ((*(uint *)(uVar2 + 0x24) & 1) == 0) {
              lVar11 = ((ulonglong)*(uint *)(uVar2 + 0x20) & 0xfffffffe) - 0x28;
            }
            else {
              lVar11 = 0;
            }
            fn_82B17520(param_1,lVar11);
          }
          else {
            for (uVar19 = *(uint *)(uVar18 + 0x1c);
                (uVar19 != 0 && ((*(uint *)(uVar19 + 0x30) & 0x80000) == 0));
                uVar19 = *(uint *)(uVar19 + 0x34)) {
            }
            if ((uVar19 != 0) && (uVar19 != uVar1)) {
              puVar7 = (uint *)fn_82ABE250(param_1,8,6);
              puVar5 = puVar7 + 1;
              puVar7[1] = (uint)puVar7 | 1;
              *puVar7 = (uint)puVar5 | 1;
              do {
                for (iVar10 = *(int *)(uVar19 + 8); iVar10 != 0; iVar10 = *(int *)(iVar10 + 0xc)) {
                  uVar19 = *(uint *)(iVar10 + 4);
                  for (uVar3 = uVar19; (uVar3 != 0 && ((*(uint *)(uVar3 + 0x30) & 0x80000) == 0));
                      uVar3 = *(uint *)(uVar3 + 0x34)) {
                  }
                  if (uVar3 == uVar1) {
                    if ((*(uint *)(uVar19 + 0x24) & 1) == 0) {
                      lVar11 = ((ulonglong)*(uint *)(uVar19 + 0x20) & 0xfffffffe) - 0x28;
                    }
                    else {
                      lVar11 = 0;
                    }
                    fn_82B17520(param_1,lVar11);
                    uVar16 = 1;
                    fn_82B24700(&iStack_70,puVar7);
                    while( true ) {
                      if ((iStack_68 != 0) ||
                         (bVar6 = true,
                         uStack_6c !=
                         (-(uint)((*(uint *)(iStack_70 + 4) & 1) == 0) & *(uint *)(iStack_70 + 4))))
                      {
                        bVar6 = false;
                      }
                      if (bVar6) break;
                      piVar8 = (int *)fn_82AF8720(&iStack_70);
                      iVar9 = *piVar8;
                      piVar8 = (int *)fn_82AF8720(&iStack_70);
                      if (*piVar8 == 0) {
                        if ((*(uint *)(iVar9 + 0x24) & 1) == 0) {
                          lVar11 = ((ulonglong)*(uint *)(iVar9 + 0x20) & 0xfffffffe) - 0x28;
                        }
                        else {
                          lVar11 = 0;
                        }
                        fn_82B17520(param_1,lVar11);
                      }
                    }
                  }
                  else {
                    if ((*puVar5 & 1) == 0) {
                      uVar15 = *puVar7 & 0xfffffffe;
                      iVar9 = uVar15 - 4;
                      if ((iVar9 == 0) || (*(uint *)(uVar15 + 8) < *(int *)(uVar15 + 4) + 1U))
                      goto LAB_82b26b3c;
                    }
                    else {
LAB_82b26b3c:
                      iVar9 = fn_82AD6090(puVar7,1);
                    }
                    iVar4 = *(int *)(iVar9 + 8);
                    *(int *)(iVar9 + 8) = iVar4 + 1;
                    *(uint *)((iVar4 + 4) * 4 + iVar9) = uVar3;
                    if ((*puVar5 & 1) == 0) {
                      uVar3 = *puVar7 & 0xfffffffe;
                      iVar9 = uVar3 - 4;
                      if ((iVar9 == 0) || (*(uint *)(uVar3 + 8) < *(int *)(uVar3 + 4) + 1U))
                      goto LAB_82b26b90;
                    }
                    else {
LAB_82b26b90:
                      iVar9 = fn_82AD6090(puVar7,1);
                    }
                    iVar4 = *(int *)(iVar9 + 8);
                    *(int *)(iVar9 + 8) = iVar4 + 1;
                    *(uint *)((iVar4 + 4) * 4 + iVar9) = uVar19;
                  }
                }
                do {
                  if (((*puVar5 & 1) != 0) || (*puVar5 == 0)) {
                    *puVar7 = *(uint *)(param_1 + 0x3d0);
                    *(uint **)(param_1 + 0x3d0) = puVar7;
                    goto LAB_82b26cbc;
                  }
                  puVar13 = (uint *)(*puVar7 & 0xfffffffe);
                  puVar12 = puVar13 + -1;
                  uVar19 = puVar13[1] - 1;
                  uVar3 = puVar12[puVar13[1] + 3];
                  puVar13[1] = uVar19;
                  if (uVar19 == 0) {
                    *(uint *)(*puVar13 & 0xfffffffe) = *puVar12;
                    *(uint *)(*puVar12 & 0xfffffffe) = *puVar13;
                    fn_82AA6648(puVar7,puVar12,((ulonglong)puVar13[2] + 4 & 0x3fffffff) << 2);
                  }
                  if ((*puVar5 & 1) == 0) {
                    puVar13 = (uint *)((*puVar7 & 0xfffffffe) - 4);
                  }
                  else {
                    puVar13 = (uint *)0x0;
                  }
                  uVar15 = puVar13[2] - 1;
                  uVar19 = puVar13[puVar13[2] + 3];
                  puVar13[2] = uVar15;
                  if (uVar15 == 0) {
                    *(uint *)(puVar13[1] & 0xfffffffe) = *puVar13;
                    *(uint *)(*puVar13 & 0xfffffffe) = puVar13[1];
                    fn_82AA6648(puVar7,puVar13,((ulonglong)puVar13[3] + 4 & 0x3fffffff) << 2);
                  }
                } while (uVar19 == 0);
                if ((*puVar5 & 1) == 0) {
                  uVar15 = *puVar7 & 0xfffffffe;
                  iVar10 = uVar15 - 4;
                  if ((iVar10 == 0) || (*(uint *)(uVar15 + 8) < *(int *)(uVar15 + 4) + 1U))
                  goto LAB_82b26d44;
                }
                else {
LAB_82b26d44:
                  iVar10 = fn_82AD6090(puVar7,1);
                }
                iVar9 = *(int *)(iVar10 + 8);
                *(int *)(iVar10 + 8) = iVar9 + 1;
                *(undefined4 *)((iVar9 + 4) * 4 + iVar10) = 0;
                if ((*puVar5 & 1) == 0) {
                  uVar15 = *puVar7 & 0xfffffffe;
                  iVar10 = uVar15 - 4;
                  if ((iVar10 == 0) || (*(uint *)(uVar15 + 8) < *(int *)(uVar15 + 4) + 1U))
                  goto LAB_82b26d9c;
                }
                else {
LAB_82b26d9c:
                  iVar10 = fn_82AD6090(puVar7,1);
                }
                iVar9 = *(int *)(iVar10 + 8);
                *(int *)(iVar10 + 8) = iVar9 + 1;
                *(uint *)((iVar9 + 4) * 4 + iVar10) = uVar3;
              } while( true );
            }
          }
        }
LAB_82b26cbc:
        uVar18 = *(uint *)((uVar18 & 0xfffffffe) + 0x28);
      } while (((uVar18 & 1) == 0) && (uVar18 != 0));
      if (iVar17 == uVar2 + 0x20) break;
      if ((iVar17 == uVar2 + 0x18) || ((*(uint *)(uVar2 + 0x1c) & 1) != 0)) {
        uVar18 = *(uint *)(uVar2 + 0x24);
        iVar17 = uVar2 + 0x20;
        if ((uVar18 & 1) != 0) break;
        goto LAB_82b26dd8;
      }
      uVar18 = *(uint *)(uVar2 + 0x1c);
      iVar17 = uVar2 + 0x18;
    } while ((uVar18 & 1) == 0);
    uVar2 = *(uint *)((uVar2 & 0xfffffffe) + 4);
  } while( true );
}

