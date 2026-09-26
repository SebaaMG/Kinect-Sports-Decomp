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
extern int fn_827C5E70();
extern int fn_827C65C0();
extern int fn_827C6730();
extern int fn_827C6950();
extern int fn_827C6D78();
extern int fn_82F691F0();


void fn_827C6E78(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  
  iVar1 = param_1[0x57];
  if (param_2 == '\0') {
    pcVar6 = fn_827C65C0;
    pcVar5 = fn_827C6730;
  }
  else {
    pcVar6 = fn_827C6950;
    pcVar5 = fn_827C6D78;
  }
  *(code **)(iVar1 + 8) = pcVar5;
  *(code **)(iVar1 + 4) = pcVar6;
  iVar8 = 0;
  if (0 < param_1[0x39]) {
    puVar7 = (undefined4 *)(iVar1 + 0x10);
    piVar9 = param_1 + 0x3a;
    do {
      iVar2 = *(int *)(*piVar9 + 0x14);
      iVar3 = *(int *)(*piVar9 + 0x18);
      if (param_2 != '\0') {
        if ((iVar2 < 0) || (3 < iVar2)) {
          *(undefined4 *)(*param_1 + 0x14) = 0x32;
          *(int *)(*param_1 + 0x18) = iVar2;
          (**(code **)*param_1)(param_1);
        }
        if ((iVar3 < 0) || (3 < iVar3)) {
          *(undefined4 *)(*param_1 + 0x14) = 0x32;
          *(int *)(*param_1 + 0x18) = iVar3;
          (**(code **)*param_1)(param_1);
        }
        iVar8 = (iVar2 + 0x13) * 4;
        if (*(int *)(iVar8 + iVar1) == 0) {
          uVar4 = (**(code **)param_1[1])(param_1,1,0x404);
          *(undefined4 *)(iVar8 + iVar1) = uVar4;
        }
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(*(undefined4 *)(iVar8 + iVar1),0,0x404);
      }
      fn_827C5E70(param_1,1,iVar2,(iVar2 + 0xb) * 4 + iVar1);
      fn_827C5E70(param_1,0,iVar3,(iVar3 + 0xf) * 4 + iVar1);
      puVar7 = puVar7 + 1;
      *puVar7 = 0;
      iVar8 = iVar8 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar8 < param_1[0x39]);
  }
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  iVar8 = param_1[0x2f];
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(int *)(iVar1 + 0x24) = iVar8;
  return;
}

