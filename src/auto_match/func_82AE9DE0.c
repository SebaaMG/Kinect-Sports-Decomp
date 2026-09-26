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
extern int fn_82AC88B8();
extern int fn_82AC8C90();
extern int fn_82ACA698();
extern int fn_82ACB0F8();


void fn_82AE9DE0(uint *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  
  puVar1 = (uint *)*param_2;
  do {
    if (puVar1 == (uint *)0x0) {
      fn_82AC88B8(param_1,param_2);
      for (iVar4 = param_2[1]; iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
        if (*(int *)(iVar4 + 0x10) != 0) {
          fn_82AC8C90(param_1,iVar4,*(int *)(iVar4 + 0x10),param_2);
        }
      }
      fn_82ACA698(param_1,param_2,0);
      return;
    }
    if ((*puVar1 & 0x40000000) == 0) {
LAB_82ae9e18:
      bVar5 = false;
    }
    else {
      bVar5 = true;
      if ((*puVar1 & 0xe000000) != 0) goto LAB_82ae9e18;
    }
    if (bVar5) {
      uVar2 = puVar1[3];
      for (puVar8 = *(uint **)(uVar2 + 4); puVar8 != (uint *)0x0; puVar8 = (uint *)puVar8[2]) {
        piVar3 = (int *)puVar8[4];
        if (piVar3 != (int *)0x0) {
          if ((*puVar8 & 0x40000000) == 0) {
LAB_82ae9e58:
            bVar5 = false;
          }
          else {
            bVar5 = true;
            if ((*puVar8 & 0xe000000) != 0) goto LAB_82ae9e58;
          }
          if (((bVar5) && (piVar3 != param_2)) && ((*(byte *)(piVar3 + 4) & 1) != 0)) {
            cVar6 = fn_82ACB0F8(param_2);
            if (cVar6 != '\0') goto LAB_82ae9ebc;
          }
        }
      }
      uVar7 = 0;
      puVar8 = param_1;
      do {
        puVar8 = puVar8 + 1;
        if (uVar2 == *puVar8) {
          *puVar8 = 0;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 9);
    }
LAB_82ae9ebc:
    puVar1 = (uint *)puVar1[1];
  } while( true );
}

