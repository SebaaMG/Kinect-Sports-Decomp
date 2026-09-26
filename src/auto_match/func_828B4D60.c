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
extern int fn_825089A0();
extern int fn_828B4C28();
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_828B4D60(int param_1)

{
  undefined4 *puVar1;
  int *piVar3;
  ulonglong uVar2;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined1 auStack_40 [64];
  
  piVar3 = (int *)fn_825089A0();
  uVar2 = (**(code **)(*piVar3 + 0xc))();
  piVar3 = *(int **)(param_1 + 8);
  uStack_48 = *(uint *)(param_1 + 0x14);
  while( true ) {
    if (uStack_48 == *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14)) {
      return;
    }
    iVar5 = 0;
    if (piVar3 != (int *)0x0) {
      iVar5 = *piVar3;
    }
    uVar6 = uStack_48;
    if (*(uint *)(iVar5 + 8) <= uStack_48) {
      uVar6 = uStack_48 - *(uint *)(iVar5 + 8);
    }
    if (uVar2 <= *(ulonglong *)(*(int *)(*(int *)(iVar5 + 4) + uVar6 * 4) + 0x10)) break;
    uStack_50 = 0;
    uStack_4c = 0;
    if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
      uStack_50 = *(undefined4 *)*piVar3;
    }
    puVar4 = (undefined4 *)fn_828B4C28(auStack_40,(undefined4 *)(param_1 + 8),&uStack_50);
    if ((piVar3 != (int *)*puVar4) &&
       (puVar1 = *(undefined4 **)*puVar4, puVar1 != (undefined4 *)0x0)) {
      piVar3 = (int *)*puVar1;
    }
    uStack_48 = puVar4[2];
  }
  return;
}

