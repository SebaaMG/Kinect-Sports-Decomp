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
extern int fn_82AA66A8();
extern int fn_82ABE250();
extern int fn_82AD3EA8();
extern int fn_82AD6090();


void fn_82AD7C20(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  uint *puVar8;
  char cVar10;
  int iVar9;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  do {
    uVar13 = param_2;
    if (*(uint **)(uVar13 + 0xc) == (uint *)0x0) break;
    param_2 = **(uint **)(uVar13 + 0xc);
  } while (param_2 != 0);
  uVar1 = *(uint *)(uVar13 + 0x24);
  while( true ) {
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    if ((*(uint *)(uVar1 + 8) & 0x3f80) == 0x2980) break;
    uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 0x28);
  }
  puVar8 = (uint *)fn_82ABE250(param_1,8,6);
  puVar5 = puVar8 + 1;
  puVar8[1] = (uint)puVar8 | 1;
  *puVar8 = (uint)puVar5 | 1;
  lVar14 = (ulonglong)*(uint *)(param_1 + 0x70) + 1;
  *(int *)(param_1 + 0x70) = (int)lVar14;
  uVar15 = uVar13;
  do {
    for (iVar2 = *(int *)(uVar15 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
      uVar3 = *(undefined4 *)(iVar2 + 4);
      cVar10 = fn_82AD3EA8(param_1,uVar3,uVar13,uVar1,lVar14);
      if (cVar10 == '\0') {
        if ((*puVar5 & 1) == 0) {
          uVar15 = *puVar8 & 0xfffffffe;
          iVar9 = uVar15 - 4;
          if ((iVar9 == 0) || (*(uint *)(uVar15 + 8) < *(int *)(uVar15 + 4) + 1U))
          goto LAB_82ad7d3c;
        }
        else {
LAB_82ad7d3c:
          iVar9 = fn_82AD6090(puVar8,1);
        }
        iVar4 = *(int *)(iVar9 + 8);
        *(int *)(iVar9 + 8) = iVar4 + 1;
        *(undefined4 *)((iVar4 + 4) * 4 + iVar9) = uVar3;
      }
    }
    if (((*puVar5 & 1) != 0) || (*puVar5 == 0)) {
      *puVar8 = *(uint *)(param_1 + 0x3d0);
      *(uint **)(param_1 + 0x3d0) = puVar8;
      return;
    }
    puVar6 = (uint *)(*puVar8 & 0xfffffffe);
    puVar11 = puVar6 + -1;
    uVar12 = puVar6[1] - 1;
    uVar15 = puVar11[puVar6[1] + 3];
    puVar6[1] = uVar12;
    if (uVar12 == 0) {
      *(uint *)(*puVar6 & 0xfffffffe) = *puVar11;
      *(uint *)(*puVar11 & 0xfffffffe) = *puVar6;
      fn_82AA6648(puVar8,puVar11,((ulonglong)puVar6[2] + 4 & 0x3fffffff) << 2);
    }
    if ((*(int *)(uVar15 + 0xc) == 0) || (bVar7 = true, *(int *)(*(int *)(uVar15 + 0xc) + 8) == 0))
    {
      bVar7 = false;
    }
    if (bVar7) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
  } while( true );
}

