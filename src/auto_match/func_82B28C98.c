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


void fn_82B28C98(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  ulonglong uVar5;
  uint *puVar6;
  bool bVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  puVar9 = (uint *)fn_82ABE250(param_1,8,6);
  puVar8 = puVar9 + 1;
  puVar9[1] = (uint)puVar9 | 1;
  *puVar9 = (uint)puVar8 | 1;
  if (param_3 < 0x10) {
    iVar1 = ((param_3 >> 5) + 0x15) * 4;
    *(uint *)(iVar1 + param_2) = 1 << (param_3 & 0x1f) | *(uint *)(iVar1 + param_2);
  }
  else {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x40000000;
  }
  uVar13 = 0;
  for (iVar1 = *(int *)(param_2 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    uVar12 = *(uint *)(iVar1 + 4);
    if ((param_2 == uVar12) ||
       (uVar5 = (ulonglong)*(uint *)(param_2 + 0x30) & 0x7ffff, bVar7 = true,
       (*(uint *)(((int)(uVar5 >> 5) + 1) * 4 + *(int *)(uVar12 + 0x28)) & 1 << ((uint)uVar5 & 0x1f)
       ) == 0)) {
      bVar7 = false;
    }
    uVar14 = uVar13;
    if ((bVar7) && (uVar14 = uVar12, uVar13 != 0)) {
      if ((*puVar8 & 1) == 0) {
        uVar14 = *puVar9 & 0xfffffffe;
        iVar10 = uVar14 - 4;
        if ((iVar10 == 0) || (*(uint *)(uVar14 + 8) < *(int *)(uVar14 + 4) + 1U)) goto LAB_82b28da8;
      }
      else {
LAB_82b28da8:
        iVar10 = fn_82AD6090(puVar9,1);
      }
      iVar2 = *(int *)(iVar10 + 8);
      *(int *)(iVar10 + 8) = iVar2 + 1;
      *(uint *)((iVar2 + 4) * 4 + iVar10) = uVar12;
      uVar14 = uVar13;
    }
    uVar13 = uVar14;
  }
  if (uVar13 == 0) {
LAB_82b28f60:
    *puVar9 = *(uint *)(param_1 + 0x3d0);
    *(uint **)(param_1 + 0x3d0) = puVar9;
    return;
  }
  do {
    do {
      if (param_3 < 0x10) {
        iVar1 = ((param_3 >> 5) + 0x15) * 4;
        *(uint *)(iVar1 + uVar13) = 1 << (param_3 & 0x1f) | *(uint *)(iVar1 + uVar13);
      }
      else {
        *(uint *)(uVar13 + 0x30) = *(uint *)(uVar13 + 0x30) | 0x40000000;
      }
      piVar4 = (int *)(uVar13 + 8);
      uVar13 = 0;
      for (iVar1 = *piVar4; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
        uVar12 = *(uint *)(iVar1 + 4);
        uVar14 = uVar13;
        if ((*(uint *)(*(int *)(uVar12 + 0x28) + 4) & 1) == 0) {
          if (param_3 < 0x10) {
            uVar3 = *(uint *)(((param_3 >> 5) + 0x15) * 4 + uVar12) >> (param_3 & 0x1f);
          }
          else {
            uVar3 = *(uint *)(uVar12 + 0x30) >> 0x1e;
          }
          if (((uVar3 & 1) == 0) && (uVar14 = uVar12, uVar13 != 0)) {
            if ((*puVar8 & 1) == 0) {
              uVar14 = *puVar9 & 0xfffffffe;
              iVar10 = uVar14 - 4;
              if ((iVar10 == 0) || (*(uint *)(uVar14 + 8) < *(int *)(uVar14 + 4) + 1U))
              goto LAB_82b28eb0;
            }
            else {
LAB_82b28eb0:
              iVar10 = fn_82AD6090(puVar9,1);
            }
            iVar2 = *(int *)(iVar10 + 8);
            *(int *)(iVar10 + 8) = iVar2 + 1;
            *(uint *)((iVar2 + 4) * 4 + iVar10) = uVar12;
            uVar14 = uVar13;
          }
        }
        uVar13 = uVar14;
      }
    } while (uVar13 != 0);
    if (((*puVar8 & 1) != 0) || (*puVar8 == 0)) goto LAB_82b28f60;
    puVar6 = (uint *)(*puVar9 & 0xfffffffe);
    puVar11 = puVar6 + -1;
    uVar12 = puVar6[1] - 1;
    uVar13 = puVar11[puVar6[1] + 3];
    puVar6[1] = uVar12;
    if (uVar12 == 0) {
      *(uint *)(*puVar6 & 0xfffffffe) = *puVar11;
      *(uint *)(*puVar11 & 0xfffffffe) = *puVar6;
      fn_82AA6648(puVar9,puVar11,((ulonglong)puVar6[2] + 4 & 0x3fffffff) << 2);
    }
  } while( true );
}

