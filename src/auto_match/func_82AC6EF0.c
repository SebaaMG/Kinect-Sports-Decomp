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


void fn_82AC6EF0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  
  puVar6 = (uint *)fn_82ABE250(param_1,8,6);
  puVar4 = puVar6 + 1;
  puVar6[1] = (uint)puVar6 | 1;
  *puVar6 = (uint)puVar4 | 1;
  *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x40000000;
  *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x4c) & 0xdfffffff;
  do {
    iVar1 = *(int *)(param_3 + 8);
    *(uint *)(param_3 + 0x4c) = *(uint *)(param_3 + 0x4c) & 0xdfffffff;
    *(uint *)(param_3 + 0x30) = *(uint *)(param_3 + 0x30) | 0x40000000;
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
      iVar2 = *(int *)(iVar1 + 4);
      if (((*(uint *)(((int)(((ulonglong)*(uint *)(param_2 + 0x30) & 0x7ffff) >> 5) + 1) * 4 +
                     *(int *)(iVar2 + 0x28)) & 1 << (*(uint *)(param_2 + 0x30) & 0x1f)) != 0) &&
         ((*(uint *)(iVar2 + 0x30) >> 0x1e & 1) == 0)) {
        if ((*puVar4 & 1) == 0) {
          uVar9 = *puVar6 & 0xfffffffe;
          iVar7 = uVar9 - 4;
          if ((iVar7 == 0) || (*(uint *)(uVar9 + 8) < *(int *)(uVar9 + 4) + 1U)) goto LAB_82ac6fd8;
        }
        else {
LAB_82ac6fd8:
          iVar7 = fn_82AD6090(puVar6,1);
        }
        iVar3 = *(int *)(iVar7 + 8);
        *(int *)(iVar7 + 8) = iVar3 + 1;
        *(int *)((iVar3 + 4) * 4 + iVar7) = iVar2;
      }
    }
    if (((*puVar4 & 1) != 0) || (*puVar4 == 0)) {
      *puVar6 = *(uint *)(param_1 + 0x3d0);
      *(uint **)(param_1 + 0x3d0) = puVar6;
      for (uVar9 = *(uint *)(param_1 + 4); ((uVar9 & 1) == 0 && (uVar9 != 0));
          uVar9 = *(uint *)((uVar9 & 0xfffffffe) + 4)) {
        *(uint *)(uVar9 + 0x30) = *(uint *)(uVar9 + 0x30) & 0xbfffffff;
      }
      return;
    }
    puVar5 = (uint *)(*puVar6 & 0xfffffffe);
    puVar8 = puVar5 + -1;
    uVar9 = puVar5[1] - 1;
    param_3 = puVar8[puVar5[1] + 3];
    puVar5[1] = uVar9;
    if (uVar9 == 0) {
      *(uint *)(*puVar5 & 0xfffffffe) = *puVar8;
      *(uint *)(*puVar8 & 0xfffffffe) = *puVar5;
      fn_82AA6648(puVar6,puVar8,((ulonglong)puVar5[2] + 4 & 0x3fffffff) << 2);
    }
  } while( true );
}

