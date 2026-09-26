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
extern int fn_82930318();
extern int fn_829304E0();
extern int fn_82933088();
extern int fn_8297FD50();
extern int fn_82980C18();
extern int fn_82981598();
extern int fn_82983380();
extern int fn_82983718();
extern int fn_829846B0();
extern int fn_82984B00();
extern int fn_82986C50();
extern int fn_829873C0();
extern int fn_82988378();
extern int fn_829885C0();
extern int fn_829891B8();
extern int fn_829B4E30();
extern unsigned int iStack_a0;
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int iStack_b0;
extern unsigned int uStack_ac;


uint fn_8298DDE0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar5;
  int iVar6;
  ulonglong uVar2;
  int iVar7;
  longlong lVar3;
  longlong lVar4;
  int iVar8;
  int iVar9;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar10;
  undefined4 uVar13;
  undefined8 uVar14;
  bool bVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  int iStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  uint auStack_9c [39];
  
  iStack_a8 = 0;
  uStack_ac = 0;
  iStack_b0 = 0;
  iStack_a4 = 0;
  iVar6 = 0;
  auStack_9c[0] = 0;
  iStack_a0 = 0;
  if ((param_2 == 0) || (*(int *)(param_2 + 4) != 3)) {
    return 0;
  }
  iVar9 = param_2 + 0x10;
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x24);
  }
  uVar14 = 6;
  if (param_4 != 0) {
    uVar14 = 0x16;
  }
  iVar5 = fn_829873C0(param_1,2,iVar9,uVar11,param_3,*(undefined4 *)(param_1 + 0x14),uVar14,
                        &iStack_a8);
  if (-1 < iVar5) {
    bVar15 = iVar5 == 0;
    if (param_4 == 0) {
      if (bVar15) {
LAB_8298dfd8:
        iVar5 = iStack_a8;
LAB_8298dfdc:
        piVar17 = &iStack_a4;
        piVar16 = &iStack_a0;
        iVar19 = param_3;
        for (iVar18 = *(int *)(iVar5 + 0x2c); iVar18 != 0; iVar18 = *(int *)(iVar18 + 0xc)) {
          iVar8 = *(int *)(iVar18 + 0xc);
          bVar15 = false;
          iVar1 = *(int *)(iVar18 + 8);
          if ((iVar8 != 0) && (*(int *)(*(int *)(iVar8 + 8) + 4) == 0xc)) {
            bVar15 = true;
            iVar18 = iVar8;
          }
          if ((param_4 == 0) || ((*(uint *)(*(int *)(iVar1 + 0x18) + 0x2c) & 0x40) != 0)) {
            if (iVar19 == 0) {
              if (!bVar15) goto LAB_8298e240;
            }
            else {
              iVar8 = *(int *)(iVar1 + 0x18);
              uVar11 = *(undefined4 *)(iVar8 + 0x30);
              if (*(int *)(iVar19 + 8) == 0) {
                uVar20 = 0;
              }
              else {
                uVar20 = *(undefined4 *)(*(int *)(iVar19 + 8) + 0x10);
              }
              uVar2 = fn_82930318(0x14);
              if ((uVar2 & 0xffffffff) == 0) {
                iVar7 = 0;
              }
              else {
                iVar7 = fn_829304E0(uVar2,0,0,0xffffffff8204f6b0);
              }
              *piVar17 = iVar7;
              if (iVar7 == 0) goto LAB_8298e408;
              uVar2 = fn_82930318(0x14);
              if ((uVar2 & 0xffffffff) == 0) {
                iVar7 = 0;
              }
              else {
                iVar7 = fn_829304E0(uVar2,0,0,0xffffffff8204f6b8);
              }
              *piVar16 = iVar7;
              if (iVar7 == 0) goto LAB_8298e408;
              if ((*(uint *)(iVar8 + 0x2c) & 0x10) != 0) {
                iVar7 = fn_829846B0(param_1,uVar11,uVar20,0);
                uVar13 = uVar20;
                uVar12 = uVar11;
                if (iVar7 == 0) {
LAB_8298e2a0:
                  fn_82984B00(param_1,iVar9,*(undefined4 *)(param_2 + 0x18),uVar12,uVar13,0);
                  goto LAB_8298e408;
                }
                lVar3 = fn_829885C0(param_1,uVar11,*(undefined4 *)(iVar19 + 8),0,0);
                if (lVar3 == 0) goto LAB_8298e408;
                if (iVar6 == 0) {
                  lVar4 = fn_82988378(param_1,*(undefined4 *)(iVar1 + 0x14),iVar8);
                  if ((lVar4 != 0) &&
                     (iVar7 = fn_829891B8(param_1,0x1b,lVar4,lVar3,1,1), iVar7 != 0)) {
                    *(int *)(*piVar17 + 8) = iVar7;
                    goto LAB_8298e174;
                  }
                  goto LAB_8298e408;
                }
                *(int *)(*piVar17 + 8) = (int)lVar3;
              }
LAB_8298e174:
              if ((*(uint *)(iVar8 + 0x2c) & 0x20) != 0) {
                iVar7 = fn_82981598(param_1,uVar20);
                uVar13 = uVar11;
                uVar12 = uVar20;
                if ((iVar7 != 0) || (iVar7 = fn_829846B0(param_1,uVar20,uVar11,0), iVar7 == 0))
                goto LAB_8298e2a0;
                lVar3 = fn_82988378(param_1,*(undefined4 *)(iVar1 + 0x14),iVar8);
                if (((lVar3 == 0) || (lVar3 = fn_829885C0(param_1,uVar20,lVar3,0,0), lVar3 == 0))
                   || (iVar8 = fn_829891B8(param_1,0x1b,*(undefined4 *)(iVar19 + 8),lVar3,1,1),
                      iVar8 == 0)) goto LAB_8298e408;
                *(int *)(*piVar16 + 8) = iVar8;
              }
              iVar19 = *(int *)(iVar19 + 0xc);
              piVar17 = (int *)(*piVar17 + 0xc);
              piVar16 = (int *)(*piVar16 + 0xc);
            }
          }
        }
        if (iVar19 == 0) {
LAB_8298e240:
          if (iVar18 == 0) {
            uVar2 = fn_82930318(0x50);
            if ((uVar2 & 0xffffffff) == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = fn_82933088(uVar2,0,(iVar6 != 0) + '\x1f',0,0,1,iVar9);
            }
            if (iVar6 != 0) {
              if (*(int **)(iVar5 + 0x28) != (int *)0x0) {
                iVar9 = (**(code **)(**(int **)(iVar5 + 0x28) + 4))();
                *(int *)(iVar6 + 0x10) = iVar9;
                if (iVar9 == 0) goto LAB_8298e408;
              }
              *(undefined4 *)(iVar6 + 0x20) = uStack_ac;
              uVar2 = fn_82930318(0x14);
              if ((uVar2 & 0xffffffff) == 0) {
                iVar9 = 0;
              }
              else {
                iVar9 = fn_829304E0(uVar2,0,0,0xffffffff8204f6a4);
              }
              *(int *)(iVar6 + 0x24) = iVar9;
              if (iVar9 != 0) {
                *(int *)(iVar9 + 8) = iStack_a4;
                *(int *)(*(int *)(iVar6 + 0x24) + 0xc) = iStack_a0;
                fn_82983380(param_1,iVar6);
                iVar9 = fn_8297FD50(param_1,iVar6,1);
                if ((iVar9 != 0) && (iVar9 = fn_82986C50(param_1,iVar6), iVar9 != 0)) {
                  iVar6 = iVar9;
                }
                goto LAB_8298e40c;
              }
            }
            goto LAB_8298e408;
          }
        }
        uVar2 = 0;
        for (; param_3 != 0; param_3 = *(int *)(param_3 + 0xc)) {
          uVar2 = uVar2 + 1;
        }
        if (iVar6 == 0) {
          if ((uVar2 & 0xffffffff) == 1) {
            uVar14 = 0xffffffff82196582;
          }
          else {
            uVar14 = 0xffffffff82029a30;
          }
          uVar10 = 0xffffffff8204f678;
        }
        else {
          if ((uVar2 & 0xffffffff) == 1) {
            uVar14 = 0xffffffff82196582;
          }
          else {
            uVar14 = 0xffffffff82029a30;
          }
          uVar10 = 0xffffffff8204f640;
        }
        fn_82980C18(param_1,iVar9,0xbc5,uVar10,*(undefined4 *)(param_2 + 0x18),uVar2,uVar14);
      }
      else {
        iVar5 = fn_82983718(param_1,0xffffffff82038ec0,0x65,0,iVar9,param_3,&iStack_b0,&uStack_ac)
        ;
        if (-1 < iVar5) {
          iVar6 = iStack_b0;
          if (iVar5 == 0) {
            bVar15 = true;
            goto LAB_8298deec;
          }
          goto LAB_8298def4;
        }
      }
    }
    else {
LAB_8298deec:
      if (!bVar15) {
LAB_8298def4:
        iVar5 = fn_829873C0(param_1,2,iVar9,0,0,*(undefined4 *)(param_1 + 0x14),2,&iStack_a8);
        if (iVar5 < 0) goto LAB_8298e408;
        if (iVar5 == 0) {
          bVar15 = true;
        }
      }
      if (param_4 == 0) {
        if (bVar15) goto LAB_8298dfcc;
        iVar6 = fn_82983718(param_1,0xffffffff82038ec0,0x65,0,iVar9,0,&iStack_b0,&uStack_ac);
        if (iVar6 < 0) goto LAB_8298e408;
        if (iVar6 == 0) {
          bVar15 = true;
          iVar6 = iStack_b0;
          goto LAB_8298df80;
        }
      }
      else {
LAB_8298df80:
        if (bVar15) {
LAB_8298dfcc:
          iVar5 = iVar6;
          if (iVar6 == 0) goto LAB_8298dfd8;
          goto LAB_8298dfdc;
        }
      }
      iVar6 = fn_829B4E30(param_1,param_2,param_3,auStack_9c);
      if (-1 < iVar6) {
        if (iVar6 == 0) {
          return auStack_9c[0];
        }
        fn_82980C18(param_1,iVar9,0xbbc,0xffffffff8204e528,*(undefined4 *)(param_2 + 0x18));
      }
    }
  }
LAB_8298e408:
  iVar6 = 0;
LAB_8298e40c:
  if (iVar6 == 0) {
    return auStack_9c[0];
  }
  return iVar6;
}

