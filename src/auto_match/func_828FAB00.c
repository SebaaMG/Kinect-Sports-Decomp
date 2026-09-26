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
extern int fn_828F5960();
extern int fn_828F6FA8();
extern int fn_828FA548();
extern int fn_828FA798();
extern unsigned int stack0x00000000;
extern unsigned int stack0x00000030;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Removing unreachable block (ram,0x828facd4) */
/* WARNING: Removing unreachable block (ram,0x828fac18) */
/* WARNING: Removing unreachable block (ram,0x828fac78) */
/* WARNING: Removing unreachable block (ram,0x828fad80) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
fn_828FAB00(int param_1,int param_2,ulonglong param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  uint uVar9;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  int aiStack_1060 [4];
  char acStack_1050 [4176];
  
  pcVar6 = &stack0x00000000 + -0x1050;
  uVar9 = 0xffe;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  uVar4 = fn_828FA548(param_1,param_3,&stack0x00000000 + -0x1060);
  if ((int)uVar4 < 0) {
    return uVar4;
  }
  iVar5 = aiStack_1060[0] * 4;
  uVar3 = *(uint *)(*(int *)(param_1 + 8) + iVar5);
  if ((uVar3 & 0xf) == 0xf) {
    piVar8 = (int *)(param_1 + 0x18);
    uVar4 = 0xffffffff821beaf0;
  }
  else {
    piVar8 = (int *)(param_1 + 0x1c);
    uVar4 = 0xffffffff820294c4;
    if ((((*(uint *)(param_1 + 0x20) == 0) || ((uVar3 & 0xf) == 0)) ||
        (*(uint *)(param_1 + 0x20) < (uVar3 & 0xf))) ||
       (((uVar3 & 0x10) != 0 && ((uVar3 & 0x20) != 0)))) {
      return 0;
    }
    *(uint *)(*(int *)(param_1 + 8) + iVar5) = *(uint *)(*(int *)(param_1 + 8) + iVar5) | 0x20;
  }
  if (param_2 == 0) {
LAB_828fac84:
    if ((param_3 & 0xffffffff) != 0) {
      iVar5 = fn_828F6FA8(pcVar6,uVar9,0xffffffff820297e0,uVar4,param_3);
      pcVar7 = pcVar6;
      if (iVar5 < 0) goto LAB_828fad50;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      iVar5 = -1 - (int)pcVar6;
      pcVar6 = pcVar6 + (int)(pcVar7 + iVar5);
      uVar9 = uVar9 - (int)(pcVar7 + iVar5);
    }
    puVar2 = *(undefined4 **)(param_1 + 0xc);
    if (puVar2 != (undefined4 *)0x0) {
      iVar5 = (**(code **)*puVar2)(puVar2,pcVar6,uVar9);
      if (iVar5 < 0) goto LAB_828fad50;
      pcVar6 = pcVar6 + iVar5;
      uVar9 = uVar9 - iVar5;
    }
    if ((uVar9 < 0x80000000) &&
       (iVar5 = fn_828F5960(pcVar6,uVar9,param_4,&stack0x00000030), -1 < iVar5)) {
      do {
        pcVar7 = pcVar6;
        pcVar6 = pcVar7 + 1;
      } while (*pcVar7 != '\0');
      *pcVar7 = '\n';
      pcVar6 = &stack0x00000000 + -0x1050;
      pcVar7[1] = '\0';
      goto LAB_828fad98;
    }
  }
  else if (*(int *)(param_2 + 0x10) == 0) {
LAB_828fac28:
    iVar5 = *(int *)(param_2 + 0x14);
    if (iVar5 == 0) {
      iVar5 = 1;
    }
    iVar5 = fn_828F6FA8(pcVar6,uVar9,0xffffffff820297b8,iVar5);
    pcVar7 = pcVar6;
    if (-1 < iVar5) {
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      iVar5 = -1 - (int)pcVar6;
      pcVar6 = pcVar6 + (int)(pcVar7 + iVar5);
      uVar9 = uVar9 - (int)(pcVar7 + iVar5);
      goto LAB_828fac84;
    }
  }
  else {
    iVar5 = fn_828F6FA8(&stack0x00000000 + -0x1050,0xffe,0xffffffff821c4da8);
    if (-1 < iVar5) {
      pcVar7 = &stack0x00000000 + -0x1050;
      pcVar6 = pcVar7;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar9 = 0xffe - (int)(pcVar6 + (-1 - (int)pcVar7));
      pcVar6 = &stack0x00000000 + (int)(pcVar6 + (-0x1051 - (int)pcVar7));
      goto LAB_828fac28;
    }
  }
LAB_828fad50:
  pcVar6 = "Unable to create warning string";
LAB_828fad98:
  *piVar8 = *piVar8 + 1;
  uVar4 = fn_828FA798(param_1,pcVar6);
  return uVar4;
}

