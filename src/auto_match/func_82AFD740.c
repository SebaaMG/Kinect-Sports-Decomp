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
extern unsigned int *auStack_74;
extern unsigned int *auStack_80;
extern int fn_82AA6648();
extern int fn_82ABDD90();
extern int fn_82ABE2E0();
extern int fn_82ABE5F8();
extern int fn_82AD6090();
extern int fn_82ADD120();
extern int fn_82AF8720();
extern int fn_82B16698();
extern int fn_82B24700();
extern int fn_82B255B0();
extern int fn_82B8AC10();
extern int fn_82B8AE98();


int fn_82AFD740(int param_1,ulonglong param_2,char param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;
  int *piVar7;
  char cVar11;
  int iVar8;
  undefined2 uVar10;
  int iVar9;
  undefined8 uVar6;
  uint *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_80 [12];
  undefined4 auStack_74 [29];
  
  if (param_4 == 0) {
    param_4 = *(int *)(param_1 + 0x21c);
  }
  uVar18 = 0;
  for (uVar1 = *(uint *)(*(int *)(param_1 + 0x28c) + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4)) {
    uVar18 = *(uint *)(uVar1 + 8) + uVar18;
  }
  if ((uVar18 & 0xffffffff) == (param_2 & 0xffffffff)) {
    return param_4;
  }
  fn_82B24700(auStack_80);
LAB_82afd7c8:
  bVar5 = false;
  uVar14 = uVar18 - param_2;
joined_r0x82afd7dc:
  do {
    if ((uVar14 & 0xffffffff) == 0) break;
    piVar7 = (int *)fn_82AF8720(auStack_80);
    iVar2 = *piVar7;
    uVar14 = uVar14 - 1;
    uVar1 = *(uint *)(iVar2 + 8) >> 7 & 0x7f;
    if (uVar1 != 0x73) {
      cVar11 = fn_82ABE2E0(iVar2);
      if (cVar11 == '\0') {
        if (uVar1 != 0x6e) {
          fn_82B16698(param_1,iVar2,*(undefined4 *)(param_1 + 0x294));
          goto joined_r0x82afd7dc;
        }
        iVar8 = fn_82B255B0(param_1,iVar2,0);
        if (iVar8 == 0) goto joined_r0x82afd7dc;
        if ((*(uint *)(iVar2 + 8) >> 0x17 & 1) != 0) {
          *(uint *)(iVar8 + 8) = *(uint *)(iVar8 + 8) | 0x800000;
          uVar10 = fn_82ADD120(iVar2);
          *(undefined2 *)(iVar8 + 0x12) = uVar10;
          puVar4 = *(uint **)(param_1 + 0x294);
          if ((puVar4[1] & 1) == 0) {
            uVar1 = *puVar4 & 0xfffffffe;
            iVar9 = uVar1 - 4;
            if ((iVar9 == 0) || (*(uint *)(uVar1 + 8) < *(int *)(uVar1 + 4) + 1U))
            goto LAB_82afd894;
          }
          else {
LAB_82afd894:
            iVar9 = fn_82AD6090(puVar4,1);
          }
          iVar3 = *(int *)(iVar9 + 8);
          *(int *)(iVar9 + 8) = iVar3 + 1;
          *(int *)((iVar3 + 4) * 4 + iVar9) = iVar8;
        }
        uVar1 = *(uint *)(iVar2 + 8) >> 0x13;
        uVar16 = (ulonglong)uVar1 & 7;
        if ((uVar1 & 7) != 0) {
          puVar15 = auStack_74;
          piVar7 = (int *)(iVar2 + 0x28);
          uVar19 = uVar16;
          do {
            piVar7 = piVar7 + 1;
            puVar15 = puVar15 + 1;
            *puVar15 = *(undefined4 *)(*piVar7 + 0xc);
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        fn_82B8AC10(param_1,iVar2,0,1);
        if ((uVar1 & 7) != 0) {
          puVar15 = auStack_74;
          do {
            puVar15 = puVar15 + 1;
            fn_82B16698(param_1,*puVar15,*(undefined4 *)(param_1 + 0x294));
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
      }
      else {
        fn_82B8AE98(param_1);
      }
      bVar5 = true;
    }
  } while( true );
  if (!bVar5) {
    if (param_3 == '\0') {
      return param_4;
    }
    uVar18 = 0;
    for (uVar1 = *(uint *)(*(int *)(param_1 + 0x28c) + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
        uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4)) {
      uVar18 = *(uint *)(uVar1 + 8) + uVar18;
    }
    if ((param_2 & 0xffffffff) < (uVar18 & 0xffffffff)) {
      lVar17 = uVar18 - param_2;
      do {
        puVar4 = *(uint **)(param_1 + 0x28c);
        if ((puVar4[1] & 1) == 0) {
          puVar12 = (uint *)((*puVar4 & 0xfffffffe) - 4);
        }
        else {
          puVar12 = (uint *)0x0;
        }
        uVar13 = puVar12[2] - 1;
        uVar1 = puVar12[puVar12[2] + 3];
        puVar12[2] = uVar13;
        if (uVar13 == 0) {
          *(uint *)(puVar12[1] & 0xfffffffe) = *puVar12;
          *(uint *)(*puVar12 & 0xfffffffe) = puVar12[1];
          fn_82AA6648(puVar4,puVar12,((ulonglong)puVar12[3] + 4 & 0x3fffffff) << 2);
        }
        lVar17 = lVar17 + -1;
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) & 0xfbffffff;
      } while (lVar17 != 0);
    }
    piVar7 = (int *)(param_1 + 0x21c);
    iVar2 = *(int *)(param_1 + 0x21c);
    while (iVar2 != param_4) {
      if ((*(uint *)(iVar2 + 8) >> 0x1a & 1) == 0) {
        *piVar7 = *(int *)(iVar2 + 0x20);
        uVar1 = *(uint *)(iVar2 + 8);
        uVar6 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
        fn_82ABE5F8(param_1,iVar2,uVar6,0);
      }
      else {
        piVar7 = (int *)(iVar2 + 0x20);
      }
      iVar2 = *piVar7;
    }
    return 0;
  }
  goto LAB_82afd7c8;
}

