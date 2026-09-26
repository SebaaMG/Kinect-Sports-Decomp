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
extern unsigned int *auStack_190;
extern int fn_82930318();
extern int fn_829304E0();
extern int fn_82933088();
extern int fn_82980C18();
extern int fn_82981598();
extern int fn_82981820();
extern int fn_82983380();
extern int fn_82983718();
extern int fn_829846B0();
extern int fn_82984B00();
extern int fn_82988378();
extern int fn_829885C0();
extern int fn_829891B8();
extern unsigned int iStack_194;
extern unsigned int iStack_198;
extern unsigned int iStack_1a0;
extern unsigned int uStack_19c;


int fn_8298E430(undefined8 param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar3;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  bool bVar15;
  int *piVar16;
  int *piVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  int iStack_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  int iStack_194;
  undefined1 auStack_190 [400];
  
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
  iVar5 = param_2[4];
  iVar10 = param_3 + 0x10;
  iStack_198 = 0;
  uVar19 = 0;
  iStack_1a0 = 0;
  uVar18 = 0;
  iStack_194 = 0;
  iVar9 = *(int *)(iVar5 + 0x14);
  uStack_19c = 0;
  if (iVar9 < 0x1f) {
    if (iVar9 == 0x1e) {
      uVar18 = 0xc;
      uVar19 = 0xffffffff82042ff8;
    }
    else if (iVar9 == 0x19) {
      uVar18 = 0x12;
      uVar19 = 0xffffffff8203ea80;
    }
    else if (iVar9 == 0x1a) {
      uVar18 = 0xe;
      uVar19 = 0xffffffff8203fa88;
    }
    else if (iVar9 == 0x1b) {
      uVar18 = 0x12;
      uVar19 = 0xffffffff82040700;
    }
    else if (iVar9 == 0x1c) {
      uVar18 = 0xe;
      uVar19 = 0xffffffff82041708;
    }
    else if (iVar9 == 0x1d) {
      uVar18 = 0xe;
      uVar19 = 0xffffffff82042380;
    }
  }
  else {
    if (iVar9 == 0x1f) {
      uVar19 = 0xffffffff82043b90;
    }
    else {
      if (iVar9 != 0x20) {
        if (iVar9 == 0x27) {
          uVar18 = 1;
          uVar19 = 0xffffffff82043aa8;
        }
        else if ((0x32 < iVar9) && (iVar9 < 0x36)) {
          uVar18 = 2;
          uVar19 = 0xffffffff8203e8b8;
        }
        goto LAB_8298e5b0;
      }
      uVar19 = 0xffffffff82043f20;
    }
    uVar18 = 4;
  }
LAB_8298e5b0:
  fn_82981820(param_1,auStack_190,0xff,iVar5);
  if ((uVar19 & 0xffffffff) == 0) {
    uVar18 = 0xc0f;
    uVar11 = 0xffffffff8204f760;
  }
  else {
    iVar4 = fn_82983718(param_1,uVar19,uVar18,*(undefined4 *)(iVar5 + 0x18),iVar10,param_4,
                          &iStack_1a0,&uStack_19c);
    iVar9 = iStack_1a0;
    if (iVar4 < 0) {
      return 0;
    }
    if (iVar4 == 0) {
      piVar17 = &iStack_198;
      piVar16 = &iStack_194;
      iVar4 = param_4;
      for (iVar5 = *(int *)(iStack_1a0 + 0x2c); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xc)) {
        iVar8 = *(int *)(iVar5 + 0xc);
        bVar15 = false;
        iVar1 = *(int *)(iVar5 + 8);
        if ((iVar8 != 0) && (*(int *)(*(int *)(iVar8 + 8) + 4) == 0xc)) {
          bVar15 = true;
          iVar5 = iVar8;
        }
        iVar8 = *(int *)(iVar1 + 0x18);
        if (iVar4 == 0) {
          iVar4 = 0;
          if (!bVar15) goto LAB_8298e878;
        }
        else {
          uVar2 = *(undefined4 *)(iVar8 + 0x30);
          if (*(int *)(iVar4 + 8) == 0) {
            uVar20 = 0;
          }
          else {
            uVar20 = *(undefined4 *)(*(int *)(iVar4 + 8) + 0x10);
          }
          uVar19 = fn_82930318(0x14);
          if ((uVar19 & 0xffffffff) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = fn_829304E0(uVar19,0,0,0xffffffff8204f6b0);
          }
          *piVar17 = iVar6;
          if (iVar6 == 0) {
            return 0;
          }
          uVar19 = fn_82930318(0x14);
          if ((uVar19 & 0xffffffff) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = fn_829304E0(uVar19,0,0,0xffffffff8204f6b8);
          }
          *piVar16 = iVar6;
          if (iVar6 == 0) {
            return 0;
          }
          if ((*(uint *)(iVar8 + 0x2c) & 0x10) != 0) {
            iVar6 = fn_829846B0(param_1,uVar2,uVar20,0);
            uVar7 = uVar20;
            uVar12 = uVar2;
            if (iVar6 == 0) goto LAB_8298e8cc;
            uVar7 = fn_829885C0(param_1,uVar2,*(undefined4 *)(iVar4 + 8),0,0);
            *(undefined4 *)(*piVar17 + 8) = uVar7;
          }
          if ((*(uint *)(iVar8 + 0x2c) & 0x20) != 0) {
            iVar6 = fn_82981598(param_1,uVar20);
            uVar7 = uVar2;
            uVar12 = uVar20;
            if ((iVar6 != 0) || (iVar6 = fn_829846B0(param_1,uVar20,uVar2,0), iVar6 == 0)) {
LAB_8298e8cc:
              fn_82984B00(param_1,iVar10,*(undefined4 *)(param_3 + 0x18),uVar12,uVar7,0);
              return 0;
            }
            lVar3 = fn_82988378(param_1,*(undefined4 *)(iVar1 + 0x14),iVar8);
            if (lVar3 == 0) {
              return 0;
            }
            lVar3 = fn_829885C0(param_1,uVar20,lVar3,0,0);
            if (lVar3 == 0) {
              return 0;
            }
            iVar8 = fn_829891B8(param_1,0x1b,*(undefined4 *)(iVar4 + 8),lVar3,1,0);
            if (iVar8 == 0) {
              return 0;
            }
            *(int *)(*piVar16 + 8) = iVar8;
          }
          iVar4 = *(int *)(iVar4 + 0xc);
          piVar17 = (int *)(*piVar17 + 0xc);
          piVar16 = (int *)(*piVar16 + 0xc);
        }
      }
      if (iVar4 == 0) {
LAB_8298e878:
        if (iVar5 == 0) {
          uVar19 = fn_82930318(0x50);
          if ((uVar19 & 0xffffffff) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = fn_82933088(uVar19,0,0x21,0,0,1,iVar10);
          }
          if (iVar5 == 0) {
            return 0;
          }
          if (*(int **)(iVar9 + 0x28) != (int *)0x0) {
            iVar9 = (**(code **)(**(int **)(iVar9 + 0x28) + 4))();
            *(int *)(iVar5 + 0x10) = iVar9;
            if (iVar9 == 0) {
              return 0;
            }
          }
          iVar9 = (**(code **)(*param_2 + 4))(param_2);
          *(int *)(iVar5 + 0x20) = iVar9;
          if (iVar9 == 0) {
            return 0;
          }
          uVar19 = fn_82930318(0x14);
          if ((uVar19 & 0xffffffff) == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = fn_829304E0(uVar19,0,0,0xffffffff8204f6a4);
          }
          if (iVar9 == 0) {
            return 0;
          }
          *(int *)(iVar9 + 8) = iStack_198;
          *(int *)(iVar9 + 0xc) = iStack_194;
          uVar19 = fn_82930318(0x14);
          if ((uVar19 & 0xffffffff) == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = fn_829304E0(uVar19,0,0,0xffffffff8204f6ec);
          }
          *(int *)(iVar5 + 0x24) = iVar10;
          if (iVar10 == 0) {
            return 0;
          }
          *(undefined4 *)(iVar10 + 8) = uStack_19c;
          *(int *)(*(int *)(iVar5 + 0x24) + 0xc) = iVar9;
          fn_82983380(param_1,iVar5);
          return iVar5;
        }
      }
      uVar19 = 0;
      if (param_4 != 0) {
        do {
          param_4 = *(int *)(param_4 + 0xc);
          uVar19 = uVar19 + 1;
        } while (param_4 != 0);
        if ((uVar19 & 0xffffffff) == 1) {
          uVar18 = 0xffffffff82196582;
          goto LAB_8298ea1c;
        }
      }
      uVar18 = 0xffffffff82029a30;
LAB_8298ea1c:
      fn_82980C18(param_1,iVar10,0xbc5,0xffffffff8204f6c0,*(undefined4 *)(param_3 + 0x18),uVar19,
                    uVar18);
      return 0;
    }
    iVar5 = fn_82983718(param_1,uVar19,uVar18,*(undefined4 *)(iVar5 + 0x18),iVar10,0,&iStack_1a0,
                          &uStack_19c);
    if (iVar5 < 0) {
      return 0;
    }
    uVar18 = 0xc10;
    if (iVar5 == 0) {
      puVar13 = *(undefined1 **)(param_3 + 0x18);
      puVar14 = auStack_190;
      uVar11 = 0xffffffff8204f728;
      goto LAB_8298e670;
    }
    uVar11 = 0xffffffff8204f704;
  }
  puVar14 = *(undefined1 **)(param_3 + 0x18);
  puVar13 = auStack_190;
LAB_8298e670:
  fn_82980C18(param_1,iVar10,uVar18,uVar11,puVar13,puVar14);
  return 0;
}

