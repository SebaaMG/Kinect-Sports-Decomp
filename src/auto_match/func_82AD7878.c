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
extern int fn_82AD6090();


void fn_82AD7878(undefined8 param_1,int param_2,int param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  if ((*(uint *)(param_2 + 0x14) & 1) == 0) {
    iVar8 = param_2 + 0x10;
    uVar9 = -(uint)((*(uint *)(param_2 + 0x14) & 1) == 0) & *(uint *)(param_2 + 0x14);
  }
  else {
    if ((*(uint *)(param_2 + 0x1c) & 1) == 0) {
      uVar9 = *(uint *)(param_2 + 0x1c);
      iVar8 = param_2 + 0x18;
    }
    else {
      uVar9 = *(uint *)(param_2 + 0x24);
      iVar8 = param_2 + 0x20;
    }
    uVar9 = -(uint)((uVar9 & 1) == 0) & uVar9;
  }
  do {
    if (uVar9 == 0) {
      return;
    }
    do {
      for (puVar1 = *(uint **)(uVar9 + 4); puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
        uVar2 = puVar1[4];
        if ((((uVar2 != 0) && ((*puVar1 & 0xe000000) != 0)) &&
            (uVar3 = *(uint *)(uVar2 + 8), (uVar3 & 0x3f80) == 0x3800)) &&
           (((uVar3 >> 0x1b & 1) == 0 &&
            (uVar6 = (ulonglong)*(uint *)(param_3 + 0x30) & 0x7ffff,
            puVar4 = *(uint **)(*(int *)(uVar2 + 0x1c) + 0x28),
            (*(uint *)(((*puVar4 & 0x7ffff) + 0x1f >> 3 & 0x1ffffffc) + ((int)(uVar6 >> 5) + 1) * 4
                      + (int)puVar4) & 1 << ((uint)uVar6 & 0x1f)) == 0)))) {
          *(uint *)(uVar2 + 8) = uVar3 | 0x8000000;
          if ((param_4[1] & 1) == 0) {
            uVar3 = *param_4 & 0xfffffffe;
            iVar7 = uVar3 - 4;
            if ((iVar7 == 0) || (*(uint *)(uVar3 + 8) < *(int *)(uVar3 + 4) + 1U))
            goto LAB_82ad79a8;
          }
          else {
LAB_82ad79a8:
            iVar7 = fn_82AD6090(param_4,1);
          }
          iVar5 = *(int *)(iVar7 + 8);
          *(int *)(iVar7 + 8) = iVar5 + 1;
          *(uint *)((iVar5 + 4) * 4 + iVar7) = uVar2;
        }
      }
      uVar9 = *(uint *)((uVar9 & 0xfffffffe) + 0x28);
    } while (((uVar9 & 1) == 0) && (uVar9 != 0));
    if (iVar8 == param_2 + 0x20) {
      return;
    }
    if ((iVar8 == param_2 + 0x18) || ((*(uint *)(param_2 + 0x1c) & 1) != 0)) {
      uVar9 = *(uint *)(param_2 + 0x24);
      iVar8 = param_2 + 0x20;
    }
    else {
      uVar9 = *(uint *)(param_2 + 0x1c);
      iVar8 = param_2 + 0x18;
    }
    if ((uVar9 & 1) != 0) {
      return;
    }
  } while( true );
}

