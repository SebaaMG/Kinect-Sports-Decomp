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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82ABE250();
extern int fn_82ACB180();
extern int fn_82AD6090();
extern int fn_82B1A538();
extern int fn_82B20868();
extern int fn_82B20920();
extern int fn_82B241A0();
extern int fn_82B271F8();
extern int fn_82B27568();
extern int fn_82B4B410();
extern int fn_82B8A3A0();
extern unsigned int iStack_98;
extern unsigned int iStack_a0;
extern unsigned int iStack_a8;
extern unsigned int iStack_b0;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_9c;
extern unsigned int uStack_ac;


ulonglong fn_82B27D10(int param_1,int param_2,int *param_3,undefined8 param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined4 *puVar9;
  char cVar17;
  uint *puVar10;
  int *piVar11;
  uint *puVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  longlong lVar8;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  int iStack_b0;
  uint uStack_ac;
  int iStack_a8;
  int iStack_a0;
  uint uStack_9c;
  int iStack_98;
  
  iStack_a8 = 0;
  uStack_ac = -(uint)((*(uint *)(param_2 + 4) & 1) == 0) & *(uint *)(param_2 + 4);
  uVar18 = 0;
  iVar16 = 0;
  iStack_b0 = param_2;
  while( true ) {
    if ((uStack_ac == 0) || (bVar6 = false, iStack_a8 == *(int *)(uStack_ac + 8))) {
      bVar6 = true;
    }
    if (bVar6) break;
    puVar9 = (undefined4 *)fn_82ACB180(&iStack_b0);
    uVar14 = *puVar9;
    cVar17 = fn_82B20920(uVar14,*(undefined8 *)param_3,(ulonglong)(uint)param_3[2] << 0x20);
    if (cVar17 != '\0') {
      cVar17 = fn_82B20868(uVar14);
      if (cVar17 != '\0') {
        iVar16 = iVar16 + 1;
      }
      uVar18 = uVar18 + 1;
    }
  }
  if (iVar16 != 0) {
    uVar18 = uVar18 - 1;
  }
  if (1 < (uVar18 & 0xffffffff)) {
    puVar10 = (uint *)fn_82ABE250(param_1,8,0x39);
    iStack_98 = 0;
    puVar10[1] = (uint)puVar10 | 1;
    *puVar10 = (uint)(puVar10 + 1) | 1;
    dVar19 = (double)lbl_82002AE0;
    uStack_9c = -(uint)((*(uint *)(param_2 + 4) & 1) == 0) & *(uint *)(param_2 + 4);
    dVar20 = (double)lbl_821AAD20;
    iStack_a0 = param_2;
    while( true ) {
      if ((uStack_9c == 0) || (bVar6 = false, iStack_98 == *(int *)(uStack_9c + 8))) {
        bVar6 = true;
      }
      if (bVar6) break;
      piVar11 = (int *)fn_82ACB180(&iStack_a0);
      iVar16 = *piVar11;
      puVar12 = (uint *)fn_82ABE250(param_1,8,0x33);
      puVar3 = puVar12 + 1;
      iStack_a8 = 0;
      puVar12[1] = (uint)puVar12 | 1;
      *puVar12 = (uint)puVar3 | 1;
      bVar6 = false;
      uStack_ac = -(uint)((*(uint *)(iVar16 + 4) & 1) == 0) & *(uint *)(iVar16 + 4);
      iStack_b0 = iVar16;
      while( true ) {
        if ((uStack_ac == 0) || (bVar7 = false, iStack_a8 == *(int *)(uStack_ac + 8))) {
          bVar7 = true;
        }
        if (bVar7) break;
        piVar11 = (int *)fn_82B1A538(&iStack_b0);
        if (bVar6) {
LAB_82b27ff4:
          iVar13 = *piVar11;
          iVar1 = piVar11[1];
          iVar2 = piVar11[2];
          if ((*puVar3 & 1) == 0) {
            uVar5 = *puVar12 & 0xfffffffe;
            iVar15 = uVar5 - 4;
            if ((iVar15 == 0) || (*(uint *)(uVar5 + 8) < *(int *)(uVar5 + 4) + 1U))
            goto LAB_82b28030;
          }
          else {
LAB_82b28030:
            iVar15 = fn_82B4B410(puVar12,1);
          }
          iVar4 = *(int *)(iVar15 + 8) * 0xc + iVar15;
          *(int *)(iVar15 + 8) = *(int *)(iVar15 + 8) + 1;
          *(int *)(iVar4 + 0x10) = iVar13;
          *(int *)(iVar4 + 0x14) = iVar1;
          *(int *)(iVar4 + 0x18) = iVar2;
        }
        else {
          if (((*piVar11 != *param_3) || (piVar11[1] != param_3[1])) ||
             (bVar7 = true,
             (CONCAT44(piVar11[2] ^ param_3[2],piVar11[2] ^ param_3[2]) & 0xfffffffffffffffb) != 0))
          {
            bVar7 = false;
          }
          if (!bVar7) goto LAB_82b27ff4;
          cVar17 = fn_82B20868(iVar16);
          if (cVar17 != '\0') {
            if ((*puVar3 & 1) == 0) {
              uVar5 = *puVar12 & 0xfffffffe;
              iVar13 = uVar5 - 4;
              if ((iVar13 == 0) || (*(uint *)(uVar5 + 8) < *(int *)(uVar5 + 4) + 1U))
              goto LAB_82b27f94;
            }
            else {
LAB_82b27f94:
              iVar13 = fn_82B4B410(puVar12,1);
            }
            iVar1 = *(int *)(iVar13 + 8);
            *(int *)(iVar13 + 8) = iVar1 + 1;
            iVar13 = iVar1 * 0xc + iVar13;
            uVar14 = fn_82B8A3A0(dVar19,dVar20,dVar20,dVar20,param_1,1);
            *(undefined4 *)(iVar13 + 0x10) = uVar14;
            *(uint *)(iVar13 + 0x18) = piVar11[2] & 4;
          }
          bVar6 = true;
        }
      }
      if ((puVar10[1] & 1) == 0) {
        uVar5 = *puVar10 & 0xfffffffe;
        iVar16 = uVar5 - 4;
        if ((iVar16 == 0) || (*(uint *)(uVar5 + 8) < *(int *)(uVar5 + 4) + 1U)) goto LAB_82b28098;
      }
      else {
LAB_82b28098:
        iVar16 = fn_82AD6090(puVar10,1);
      }
      iVar13 = *(int *)(iVar16 + 8);
      *(int *)(iVar16 + 8) = iVar13 + 1;
      *(uint **)((iVar13 + 4) * 4 + iVar16) = puVar12;
    }
    fn_82B27568(param_1,puVar10,param_4);
    uVar18 = fn_82B241A0(param_1,param_2);
    lVar8 = fn_82B241A0(param_1,puVar10);
    if ((lVar8 + 1U & 0xffffffff) < (uVar18 & 0xffffffff)) {
      *param_5 = puVar10;
      return uVar18 - lVar8;
    }
    fn_82B271F8(param_1,puVar10,*(undefined4 *)(param_1 + 0x28c));
    uVar18 = 0;
  }
  *param_5 = 0;
  return uVar18;
}

