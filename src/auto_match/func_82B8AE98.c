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
extern int fn_82ABE2E0();
extern int fn_82ABE650();
extern int fn_82AD6090();
extern int fn_82B8AC10();


void fn_82B8AE98(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  bool bVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint *puVar12;
  uint uVar13;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar1 | 0x1000;
  puVar8 = (uint *)fn_82ABE250(param_1,8,0x26);
  puVar5 = puVar8 + 1;
  puVar8[1] = (uint)puVar8 | 1;
  *puVar8 = (uint)puVar5 | 1;
  do {
    for (iVar10 = *param_2; iVar10 != 0; iVar10 = *(int *)(iVar10 + 4)) {
      uVar2 = *(undefined4 *)(iVar10 + 0xc);
      if ((*puVar5 & 1) == 0) {
        uVar13 = *puVar8 & 0xfffffffe;
        iVar9 = uVar13 - 4;
        if ((iVar9 == 0) || (*(uint *)(uVar13 + 8) < *(int *)(uVar13 + 4) + 1U)) goto LAB_82b8af20;
      }
      else {
LAB_82b8af20:
        iVar9 = fn_82AD6090(puVar8,1);
      }
      iVar3 = *(int *)(iVar9 + 8);
      *(int *)(iVar9 + 8) = iVar3 + 1;
      *(undefined4 *)((iVar3 + 4) * 4 + iVar9) = uVar2;
    }
    for (puVar4 = (uint *)param_2[1]; puVar4 != (uint *)0x0; puVar4 = (uint *)puVar4[2]) {
      uVar13 = puVar4[4];
      if (uVar13 != 0) {
        if (((*puVar4 & 0x40000000) != 0) || (bVar7 = true, (*puVar4 & 0xe000000) != 0)) {
          bVar7 = false;
        }
        if (bVar7) {
          if ((*puVar5 & 1) == 0) {
            uVar6 = *puVar8 & 0xfffffffe;
            iVar10 = uVar6 - 4;
            if ((iVar10 == 0) || (*(uint *)(uVar6 + 8) < *(int *)(uVar6 + 4) + 1U))
            goto LAB_82b8afb8;
          }
          else {
LAB_82b8afb8:
            iVar10 = fn_82AD6090(puVar8,1);
          }
          iVar9 = *(int *)(iVar10 + 8);
          *(int *)(iVar10 + 8) = iVar9 + 1;
          *(uint *)((iVar9 + 4) * 4 + iVar10) = uVar13;
        }
      }
    }
    fn_82B8AC10(param_1,param_2,0,1);
    do {
      if (((*puVar5 & 1) != 0) || (*puVar5 == 0)) {
        *puVar8 = *(uint *)(param_1 + 0x3d0);
        *(uint **)(param_1 + 0x3d0) = puVar8;
        fn_82ABE650(param_1,uVar1 >> 0xc & 1);
        return;
      }
      puVar4 = (uint *)(*puVar8 & 0xfffffffe);
      puVar12 = puVar4 + -1;
      uVar13 = puVar4[1] - 1;
      param_2 = (int *)puVar12[puVar4[1] + 3];
      puVar4[1] = uVar13;
      if (uVar13 == 0) {
        *(uint *)(*puVar4 & 0xfffffffe) = *puVar12;
        *(uint *)(*puVar12 & 0xfffffffe) = *puVar4;
        fn_82AA6648(puVar8,puVar12,((ulonglong)puVar4[2] + 4 & 0x3fffffff) << 2);
      }
    } while (((param_2[2] & 0x3f80U) == 0x3980) || (cVar11 = fn_82ABE2E0(param_2), cVar11 == '\0'))
    ;
  } while( true );
}

