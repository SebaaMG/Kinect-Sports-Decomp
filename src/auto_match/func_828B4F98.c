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
extern unsigned int *auStack_70;
extern int fn_8240D930();
extern int fn_825089A0();
extern int fn_828B2040();
extern int fn_828B4C28();
extern int fn_828B4D60();
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_828B4F98(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar7;
  int *piVar8;
  undefined8 uVar6;
  char cVar10;
  undefined4 *puVar9;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined1 auStack_70 [112];
  
  if ((*(char *)(param_1 + 0x38) != '\0') && (*(int *)(param_1 + 0x18) != 0)) {
    piVar13 = *(int **)(param_1 + 8);
    uVar1 = *(uint *)(param_1 + 0x14);
    while (uVar1 != *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14)) {
      iVar11 = 0;
      if (piVar13 != (int *)0x0) {
        iVar11 = *piVar13;
      }
      uVar12 = uVar1;
      if (*(uint *)(iVar11 + 8) <= uVar1) {
        uVar12 = uVar1 - *(uint *)(iVar11 + 8);
      }
      iVar11 = *(int *)(*(int *)(iVar11 + 4) + uVar12 * 4);
      uVar2 = *(undefined4 *)(iVar11 + 8);
      fn_8240D930(uVar2);
      iVar14 = 0;
      piVar8 = (int *)**(int **)(param_1 + 0x20);
      if (piVar8 != *(int **)(param_1 + 0x20)) {
        do {
          iVar3 = piVar8[2];
          iVar4 = *(int *)(iVar3 + 0x10);
          iVar7 = fn_8240D930(uVar2);
          if (*(int *)(iVar4 + 0x28) == *(int *)(iVar7 + 0x28)) {
            iVar14 = iVar3;
          }
          piVar8 = (int *)*piVar8;
        } while (piVar8 != (int *)*(int *)(param_1 + 0x20));
        if (iVar14 != 0) {
          piVar8 = (int *)fn_825089A0();
          uVar6 = (**(code **)(*piVar8 + 0xc))();
          *(undefined8 *)(param_1 + 0x40) = uVar6;
          cVar10 = fn_828B2040(*(undefined4 *)(param_1 + 0x2c),iVar11 + 0x18,param_1 + 0x30);
          if (cVar10 == '\0') break;
        }
      }
      uStack_80 = 0;
      uStack_7c = 0;
      if ((piVar13 != (int *)0x0) && ((undefined4 *)*piVar13 != (undefined4 *)0x0)) {
        uStack_80 = *(undefined4 *)*piVar13;
      }
      uStack_78 = uVar1;
      puVar9 = (undefined4 *)fn_828B4C28(auStack_70,param_1 + 8,&uStack_80);
      if ((piVar13 != (int *)*puVar9) &&
         (puVar5 = *(undefined4 **)*puVar9, puVar5 != (undefined4 *)0x0)) {
        piVar13 = (int *)*puVar5;
      }
      uVar1 = puVar9[2];
    }
  }
  fn_828B4D60(param_1);
  return;
}

