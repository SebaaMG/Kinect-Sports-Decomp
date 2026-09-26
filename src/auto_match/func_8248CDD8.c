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
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_8248D2B8();
extern int fn_8248D360();
extern int fn_8265CA20();
extern unsigned int iStack_3c;
extern unsigned int iStack_44;


/* WARNING: Removing unreachable block (ram,0x8248ce24) */
/* WARNING: Removing unreachable block (ram,0x8248ce28) */
/* WARNING: Removing unreachable block (ram,0x8248ce60) */
/* WARNING: Removing unreachable block (ram,0x8248ce64) */

int * fn_8248CDD8(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar6 = *param_2;
  iVar7 = param_2[1];
  uVar2 = (iVar7 - iVar6) / 0xc;
  if (uVar2 == 0) {
    iVar6 = *param_1;
    if (iVar6 == param_1[1]) {
      return param_1;
    }
    fn_8248D360(iVar6,param_1[1]);
  }
  else {
    puVar9 = (undefined4 *)*param_1;
    uVar1 = (param_1[1] - (int)puVar9) / 0xc;
    if (uVar2 <= uVar1) {
      for (; iVar6 != iVar7; iVar6 = iVar6 + 0xc) {
        puVar4 = (undefined4 *)fn_82365BD8(auStack_48,iVar6);
        uVar3 = puVar4[1];
        puVar4[1] = puVar9[1];
        puVar9[1] = uVar3;
        uVar3 = *puVar4;
        *puVar4 = *puVar9;
        *puVar9 = uVar3;
        if (iStack_44 != 0) {
          fn_822315A0();
        }
        puVar9[2] = *(undefined4 *)(iVar6 + 8);
        puVar9 = puVar9 + 3;
      }
      fn_8248D360(puVar9,param_1[1]);
      param_1[1] = ((param_2[1] - *param_2) / 0xc) * 0xc + *param_1;
      return param_1;
    }
    if ((uint)((param_1[2] - (int)puVar9) / 0xc) < uVar2) {
      if (puVar9 != (undefined4 *)0x0) {
        fn_8248D360();
        fn_8265CA20(*param_1);
      }
      cVar5 = fn_8248D2B8(param_1,(param_2[1] - *param_2) / 0xc);
      if (cVar5 == '\0') {
        return param_1;
      }
      iVar6 = param_2[1];
      iVar8 = *param_1;
      for (iVar7 = *param_2; iVar7 != iVar6; iVar7 = iVar7 + 0xc) {
        if (iVar8 != 0) {
          fn_82365BD8(iVar8,iVar7);
          *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar7 + 8);
        }
        iVar8 = iVar8 + 0xc;
      }
      param_1[1] = iVar8;
      return param_1;
    }
    iVar7 = uVar1 * 0xc + iVar6;
    if (iVar6 != iVar7) {
      puVar9 = puVar9 + -1;
      do {
        puVar4 = (undefined4 *)fn_82365BD8(auStack_40,iVar6);
        uVar3 = puVar4[1];
        puVar4[1] = puVar9[2];
        puVar9[2] = uVar3;
        uVar3 = *puVar4;
        *puVar4 = puVar9[1];
        puVar9[1] = uVar3;
        if (iStack_3c != 0) {
          fn_822315A0();
        }
        puVar4 = (undefined4 *)(iVar6 + 8);
        iVar6 = iVar6 + 0xc;
        puVar9 = puVar9 + 3;
        *puVar9 = *puVar4;
      } while (iVar6 != iVar7);
    }
    iVar8 = param_2[1];
    iVar6 = param_1[1];
    for (; iVar7 != iVar8; iVar7 = iVar7 + 0xc) {
      if (iVar6 != 0) {
        fn_82365BD8(iVar6,iVar7);
        *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar7 + 8);
      }
      iVar6 = iVar6 + 0xc;
    }
  }
  param_1[1] = iVar6;
  return param_1;
}

