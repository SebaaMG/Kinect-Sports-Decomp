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
extern int fn_82ABE650();
extern int fn_82AD20C0();
extern int fn_82B8AC10();
extern int fn_82B8F1B0();


void fn_82B18558(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  
LAB_82b18570:
  bVar1 = false;
  uVar5 = -(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4);
LAB_82b185d0:
  do {
    uVar5 = *(uint *)((uVar5 & 0xfffffffe) + 4);
    if (((uVar5 & 1) != 0) || (uVar5 == 0)) break;
    if ((*(int *)(uVar5 + 0x2c) != param_2) && ((*(uint *)(uVar5 + 0x30) >> 0x13 & 1) == 0)) {
      for (iVar7 = *(int *)(uVar5 + 8); iVar7 != 0; iVar7 = *(int *)(iVar7 + 0xc)) {
        if (*(int *)(*(int *)(iVar7 + 4) + 0x2c) != param_2) goto LAB_82b185d0;
      }
      *(int *)(uVar5 + 0x2c) = param_2;
      bVar1 = true;
    }
  } while( true );
  if (!bVar1) goto code_r0x82b185f0;
  goto LAB_82b18570;
code_r0x82b185f0:
  for (uVar5 = *(uint *)(param_1 + 4); ((uVar5 & 1) == 0 && (uVar5 != 0));
      uVar5 = *(uint *)((uVar5 & 0xfffffffe) + 4)) {
    if (*(int *)(uVar5 + 0x2c) == param_2) {
      uVar11 = *(uint *)(uVar5 + 0x30);
      if ((uVar11 >> 0x14 & 1) == 0) {
        if ((uVar11 >> 0x13 & 1) != 0) {
          iVar7 = *(int *)(uVar5 + 0x74);
          *(undefined4 *)(iVar7 + 0xc) = 0;
          *(undefined4 *)(iVar7 + 0x10) = 0;
          *(undefined4 *)(iVar7 + 0x14) = 0;
        }
      }
      else {
        *(uint *)(uVar5 + 0x30) = uVar11 & 0xffefffff;
      }
      if ((*(uint *)(uVar5 + 0x14) & 1) == 0) {
        uVar11 = *(uint *)(uVar5 + 0x14);
        iVar7 = uVar5 + 0x10;
      }
      else if ((*(uint *)(uVar5 + 0x1c) & 1) == 0) {
        uVar11 = *(uint *)(uVar5 + 0x1c);
        iVar7 = uVar5 + 0x18;
      }
      else {
        uVar11 = *(uint *)(uVar5 + 0x24);
        iVar7 = uVar5 + 0x20;
      }
      uVar11 = -(uint)((uVar11 & 1) == 0) & uVar11;
      do {
        if (uVar11 == 0) break;
        do {
          piVar6 = (int *)(uVar11 + 4);
          while (iVar4 = *piVar6, iVar4 != 0) {
            if (*(int *)(iVar4 + 0x10) != 0) {
              fn_82AD20C0(*(int *)(iVar4 + 0x10),iVar4,param_1);
            }
            if (*piVar6 == iVar4) {
              piVar6 = (int *)(iVar4 + 8);
            }
          }
          uVar11 = *(uint *)((uVar11 & 0xfffffffe) + 0x28);
        } while (((uVar11 & 1) == 0) && (uVar11 != 0));
        iVar4 = uVar5 + 0x20;
        if (iVar7 == iVar4) break;
        if ((iVar7 == uVar5 + 0x18) || ((*(uint *)(uVar5 + 0x1c) & 1) != 0)) {
          uVar11 = *(uint *)(uVar5 + 0x24);
        }
        else {
          uVar11 = *(uint *)(uVar5 + 0x1c);
          iVar4 = uVar5 + 0x18;
        }
        iVar7 = iVar4;
      } while ((uVar11 & 1) == 0);
      piVar8 = (int *)(uVar5 + 0xc);
      piVar6 = *(int **)(uVar5 + 0xc);
      while (piVar6 != (int *)0x0) {
        iVar7 = *piVar6;
        fn_82B8F1B0(uVar5,iVar7,param_1);
        if (((((*(uint *)(iVar7 + 0x30) >> 0x15 & 1) != 0) && (*(int *)(iVar7 + 0x2c) != param_2))
            && ((*(uint *)(uVar5 + 0x24) & 1) == 0)) &&
           (uVar11 = *(uint *)(uVar5 + 0x20) & 0xfffffffe, uVar11 != 0x28)) {
          uVar11 = *(uint *)(uVar11 - 0x20) >> 7 & 0x7f;
          if ((uVar11 == 0x56) || (bVar1 = false, uVar11 == 0x57)) {
            bVar1 = true;
          }
          if (bVar1) {
            *(uint *)(iVar7 + 0x30) = *(uint *)(iVar7 + 0x30) & 0xffdfffff;
          }
        }
        if ((int *)*piVar8 == piVar6) {
          piVar8 = piVar6 + 2;
        }
        piVar6 = (int *)*piVar8;
      }
    }
  }
  uVar5 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar5 | 0x1000;
  uVar11 = *(uint *)(param_1 + 4);
  uVar3 = 0;
joined_r0x82b18804:
  do {
    uVar2 = uVar11;
    if (((uVar2 & 1) != 0) || (uVar2 == 0)) {
      fn_82ABE650(param_1,uVar5 >> 0xc & 1);
      return;
    }
    if (*(int *)(uVar2 + 0x2c) == param_2) {
      if ((*(uint *)(uVar2 + 0x24) & 1) == 0) {
        uVar11 = *(uint *)(uVar2 + 0x24);
        puVar9 = (uint *)(uVar2 + 0x20);
      }
      else if ((*(uint *)(uVar2 + 0x1c) & 1) == 0) {
        uVar11 = *(uint *)(uVar2 + 0x1c);
        puVar9 = (uint *)(uVar2 + 0x18);
      }
      else {
        uVar11 = *(uint *)(uVar2 + 0x14);
        puVar9 = (uint *)(uVar2 + 0x10);
      }
      if ((uVar11 & 1) == 0) goto LAB_82b188e4;
      iVar7 = 0;
      puVar10 = puVar9;
      while (iVar7 != 0) {
        do {
          *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) & 0xfdffffff;
          fn_82B8AC10(param_1,iVar7,0,1);
          if ((*(uint *)(iVar7 + 0x24) & 1) != 0) break;
          iVar7 = (*(uint *)(iVar7 + 0x24) & 0xfffffffe) - 0x28;
        } while (iVar7 != 0);
        puVar9 = (uint *)(uVar2 + 0x10);
        if (puVar10 == puVar9) break;
        if ((puVar10 == (uint *)(uVar2 + 0x18)) || ((*(uint *)(uVar2 + 0x1c) & 1) != 0)) {
          uVar11 = *(uint *)(uVar2 + 0x14);
        }
        else {
          uVar11 = *(uint *)(uVar2 + 0x1c);
          puVar9 = (uint *)(uVar2 + 0x18);
        }
        if ((uVar11 & 1) != 0) break;
LAB_82b188e4:
        puVar10 = puVar9;
        iVar7 = (*puVar9 & 0xfffffffe) - 0x28;
      }
      puVar9 = (uint *)(uVar2 & 0xfffffffe);
      *(uint *)(puVar9[1] & 0xfffffffe) = *puVar9;
      *(uint *)(*puVar9 & 0xfffffffe) = puVar9[1];
      *(uint *)(uVar2 + 0x30) = *(uint *)(uVar2 + 0x30) | 0x400000;
      *(undefined4 *)(uVar2 + 0x50) = 0;
    }
    if (uVar3 != 0) goto code_r0x82b18934;
    uVar11 = *(uint *)(param_1 + 4);
  } while (uVar2 != (-(uint)((uVar11 & 1) == 0) & uVar11));
  goto LAB_82b1897c;
code_r0x82b18934:
  uVar11 = *(uint *)((uVar3 & 0xfffffffe) + 4);
  if (uVar2 == (-(uint)((uVar11 & 1) == 0) & uVar11)) {
LAB_82b1897c:
    uVar11 = *(uint *)((uVar2 & 0xfffffffe) + 4);
    uVar3 = uVar2;
  }
  goto joined_r0x82b18804;
}

