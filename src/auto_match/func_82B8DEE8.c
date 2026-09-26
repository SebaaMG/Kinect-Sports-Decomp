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
extern int fn_82B8D5B0();


void fn_82B8DEE8(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int *piVar10;
  
  puVar6 = (uint *)fn_82ABE250(param_1,8,0x26);
  puVar3 = puVar6 + 1;
  puVar6[1] = (uint)puVar6 | 1;
  *puVar6 = (uint)puVar3 | 1;
  piVar10 = *(int **)(param_2 + 0x10);
  piVar10[2] = piVar10[2] | 0x4000000;
  do {
    for (puVar1 = (uint *)*piVar10; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[1]) {
      if ((*puVar1 & 0x40000000) == 0) {
        bVar5 = false;
        if ((*puVar1 & 0xe000000) != 0) goto LAB_82b8df54;
      }
      else {
LAB_82b8df54:
        bVar5 = true;
      }
      if (bVar5) {
        fn_82B8D5B0(param_1,puVar1,0);
      }
    }
    for (puVar1 = (uint *)piVar10[1]; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
      uVar9 = puVar1[4];
      if (uVar9 != 0) {
        if ((*puVar1 & 0x40000000) == 0) {
          bVar5 = false;
          if ((*puVar1 & 0xe000000) != 0) goto LAB_82b8dfa8;
        }
        else {
LAB_82b8dfa8:
          bVar5 = true;
        }
        if (bVar5) {
          if ((*(uint *)(uVar9 + 8) >> 0x1a & 1) == 0) {
            *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) | 0x4000000;
            if ((*puVar3 & 1) == 0) {
              uVar4 = *puVar6 & 0xfffffffe;
              iVar7 = uVar4 - 4;
              if ((iVar7 == 0) || (*(uint *)(uVar4 + 8) < *(int *)(uVar4 + 4) + 1U))
              goto LAB_82b8dff8;
            }
            else {
LAB_82b8dff8:
              iVar7 = fn_82AD6090(puVar6,1);
            }
            iVar2 = *(int *)(iVar7 + 8);
            *(int *)(iVar7 + 8) = iVar2 + 1;
            *(uint *)((iVar2 + 4) * 4 + iVar7) = uVar9;
          }
        }
      }
    }
    if ((*puVar3 & 1) != 0) {
LAB_82b8e09c:
      *puVar6 = *(uint *)(param_1 + 0x3d0);
      *(uint **)(param_1 + 0x3d0) = puVar6;
      return;
    }
    if (*puVar3 == 0) goto LAB_82b8e09c;
    puVar1 = (uint *)(*puVar6 & 0xfffffffe);
    puVar8 = puVar1 + -1;
    uVar9 = puVar1[1] - 1;
    piVar10 = (int *)puVar8[puVar1[1] + 3];
    puVar1[1] = uVar9;
    if (uVar9 == 0) {
      *(uint *)(*puVar1 & 0xfffffffe) = *puVar8;
      *(uint *)(*puVar8 & 0xfffffffe) = *puVar1;
      fn_82AA6648(puVar6,puVar8,((ulonglong)puVar1[2] + 4 & 0x3fffffff) << 2);
    }
  } while( true );
}

