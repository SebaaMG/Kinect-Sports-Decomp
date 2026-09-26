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
extern unsigned int *auStack_50;
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82AD2410();


undefined8
fn_82AD3B30(undefined8 param_1,int param_2,int param_3,undefined1 *param_4,int *param_5,
             int *param_6)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  int iVar10;
  undefined8 uVar9;
  char cVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStack_50 [4];
  int aiStack_4c [19];
  
  uVar1 = *(uint *)(param_3 + 8) >> 7 & 0x7f;
  if (uVar1 == 0x54) {
    return 1;
  }
  if (uVar1 == 0x55) {
    return 2;
  }
  if (uVar1 != 0x5a) {
    return 0;
  }
  uVar1 = *(uint *)(param_3 + 8);
  uVar13 = *(uint *)(param_3 + 8) >> 0x12 & 1;
  iVar10 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
  piVar2 = *(int **)(param_2 + 0xc);
  iVar10 = *(int *)(iVar10 + param_3 + -0x10);
  do {
    if (piVar2 == (int *)0x0) {
LAB_82ad3bd8:
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    iVar3 = *piVar2;
    if (iVar3 != iVar10) {
      if (iVar3 != 0) {
        uVar5 = (ulonglong)*(uint *)(iVar10 + 0x30) & 0x7ffff;
        if ((1 << ((uint)uVar5 & 0x1f) &
            *(uint *)(((int)(uVar5 >> 5) + 1) * 4 + *(int *)(param_2 + 0x28))) != 0) {
          *param_4 = (char)uVar13;
          *param_5 = iVar10;
          *param_6 = iVar3;
          return 5;
        }
        uVar6 = (ulonglong)*(uint *)(iVar3 + 0x30) & 0x7ffff;
        iVar14 = iVar3;
        if ((1 << ((uint)uVar6 & 0x1f) &
            *(uint *)(((int)(uVar6 >> 5) + 1) * 4 + *(int *)(param_2 + 0x28))) != 0) {
          uVar9 = 5;
          goto LAB_82ad3c54;
        }
        if ((param_2 == iVar10) ||
           (uVar7 = (ulonglong)*(uint *)(param_2 + 0x30) & 0x7ffff, bVar8 = true,
           (*(uint *)(((int)(uVar7 >> 5) + 1) * 4 + *(int *)(iVar10 + 0x28)) &
           1 << ((uint)uVar7 & 0x1f)) == 0)) {
          bVar8 = false;
        }
        if (!bVar8) {
          if ((param_2 == iVar3) ||
             (uVar7 = (ulonglong)*(uint *)(param_2 + 0x30) & 0x7ffff, bVar8 = true,
             (*(uint *)(((int)(uVar7 >> 5) + 1) * 4 + *(int *)(iVar3 + 0x28)) &
             1 << ((uint)uVar7 & 0x1f)) == 0)) {
            bVar8 = false;
          }
          if (!bVar8) {
            return 0;
          }
        }
        iVar4 = *(int *)(iVar10 + 8);
        break;
      }
      goto LAB_82ad3bd8;
    }
    piVar2 = (int *)piVar2[2];
  } while( true );
LAB_82ad3cfc:
  if (iVar4 == 0) goto LAB_82ad3d34;
  iVar12 = *(int *)(iVar4 + 4);
  if ((*(uint *)(((int)(uVar6 >> 5) + 1) * 4 + *(int *)(iVar12 + 0x28)) & 1 << ((uint)uVar6 & 0x1f))
      != 0) goto LAB_82ad3d90;
  iVar4 = *(int *)(iVar4 + 0xc);
  goto LAB_82ad3cfc;
LAB_82ad3d34:
  iVar4 = *(int *)(iVar3 + 8);
  do {
    if (iVar4 == 0) {
      iVar12 = 0;
LAB_82ad3d90:
      *param_4 = (char)uVar13;
      *param_5 = iVar10;
      *param_6 = iVar14;
      if (iVar12 == 0) {
        if ((param_2 == iVar10) ||
           (uVar5 = (ulonglong)*(uint *)(param_2 + 0x30) & 0x7ffff, bVar8 = true,
           (*(uint *)(((int)(uVar5 >> 5) + 1) * 4 + *(int *)(iVar10 + 0x28)) &
           1 << ((uint)uVar5 & 0x1f)) == 0)) {
          bVar8 = false;
        }
        if (bVar8) {
          if ((param_2 == iVar14) ||
             (uVar5 = (ulonglong)*(uint *)(param_2 + 0x30) & 0x7ffff, bVar8 = true,
             (*(uint *)(((int)(uVar5 >> 5) + 1) * 4 + *(int *)(iVar14 + 0x28)) &
             1 << ((uint)uVar5 & 0x1f)) == 0)) {
            bVar8 = false;
          }
          if (bVar8) {
            cVar11 = fn_82AD2410(param_1,iVar14,0,auStack_50,0,aiStack_4c);
            if (cVar11 != '\0') {
              if (aiStack_4c[0] == 0) {
                return 3;
              }
              cVar11 = fn_82AD2410(param_1,iVar10,0,auStack_50,0,aiStack_4c);
              if ((cVar11 != '\0') && (aiStack_4c[0] == 0)) {
                uVar9 = 3;
LAB_82ad3c54:
                *param_4 = uVar13 == 0;
                *param_5 = iVar14;
                *param_6 = iVar10;
                return uVar9;
              }
            }
            return 4;
          }
        }
      }
      return 3;
    }
    iVar12 = *(int *)(iVar4 + 4);
    if ((*(uint *)(((int)(uVar5 >> 5) + 1) * 4 + *(int *)(iVar12 + 0x28)) &
        1 << ((uint)uVar5 & 0x1f)) != 0) {
      uVar13 = (uint)(uVar13 == 0);
      iVar14 = iVar10;
      iVar10 = iVar3;
      goto LAB_82ad3d90;
    }
    iVar4 = *(int *)(iVar4 + 0xc);
  } while( true );
}

