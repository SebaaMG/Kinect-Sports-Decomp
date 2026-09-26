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
extern int fn_82543078();
extern int fn_82543198();
extern int fn_82543308();
extern int fn_825437D8();
extern int fn_82543940();
extern int fn_82639F78();
extern int fn_82F68B5C();


void fn_82542D90(int *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar7 = *(int *)((int)param_2 + 0x14);
  if (iVar7 == 0) {
    return;
  }
  if (*(int *)((int)((param_3 & 0xffffffff) << 3) + iVar7 + 4) == 0) {
    return;
  }
  iVar7 = *param_1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = -1;
  param_1[6] = -1;
  param_1[0x2014] = -1;
  *(undefined4 *)(iVar7 + 0x2ed8) = 0;
  *(ulonglong *)(iVar7 + 0x10) = *(ulonglong *)(iVar7 + 0x10) | 0x80000;
  puVar1 = (undefined4 *)fn_82F68B5C();
  lVar4 = (param_3 & 0x1fffffff) * 8;
  lVar3 = lVar4 + (ulonglong)*(uint *)((int)param_2 + 0x14);
  uVar6 = 0;
  if (*(int *)((int)lVar3 + 4) != 0) {
    iVar7 = 0;
    do {
      iVar8 = iVar7 + *(int *)lVar3;
      iVar2 = fn_82543078(puVar1,param_2,iVar8);
      if ((iVar2 != 0) && (uVar5 = 0, *(int *)(iVar8 + 8) != 0)) {
        iVar2 = 0;
        do {
          iVar9 = *(int *)(iVar8 + 0xc) + iVar2;
          if (*(int *)(*(int *)(iVar8 + 0xc) + iVar2) == -1) {
            if (puVar1[6] != *(int *)(iVar9 + 0x10)) {
              fn_825437D8(puVar1,param_2,*(int *)(iVar9 + 0x10),param_3,param_4);
              puVar1[6] = *(undefined4 *)(iVar9 + 0x10);
            }
            if (puVar1[5] != *(int *)(iVar9 + 8)) {
              fn_82543308(puVar1,param_2);
              puVar1[5] = *(undefined4 *)(iVar9 + 8);
            }
            fn_82639F78(*puVar1,0,**(undefined4 **)(iVar9 + 4),0,
                              (*(undefined4 **)(iVar9 + 4))[1],1);
            fn_82543940(puVar1,*(undefined4 *)(iVar9 + 0xc));
          }
          else {
            fn_82543198(puVar1,param_2,iVar9,param_3);
          }
          uVar5 = uVar5 + 1;
          iVar2 = iVar2 + 0x20;
        } while (uVar5 < *(uint *)(iVar8 + 8));
      }
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 0x10;
      lVar3 = lVar4 + (ulonglong)*(uint *)((int)param_2 + 0x14);
    } while (uVar6 < *(uint *)((int)lVar3 + 4));
  }
  return;
}

