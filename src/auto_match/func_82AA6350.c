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
extern int fn_82D7E470();
extern unsigned int lbl_831604F0;
extern unsigned int lbl_831604F4;
extern unsigned int lbl_831604F8;


ulonglong fn_82AA6350(int param_1,undefined4 *param_2,ulonglong param_3,code *param_4,
                       undefined8 param_5)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar6;
  undefined8 uVar4;
  ulonglong uVar5;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  
  piVar2 = (int *)*param_2;
  puVar6 = (uint *)(**(code **)(*piVar2 + 0xc))(piVar2);
  uVar3 = *puVar6;
  if (((uVar3 & 0x20) == 0) || ((param_3 & 0x40000) != 0)) {
    return 0xffffffff80004005;
  }
  pcVar7 = lbl_831604F8;
  if (param_4 != (code *)0x0) {
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    (*param_4)(param_5,lbl_831604F8,
               pcVar7 + (-1 - (int)lbl_831604F8));
  }
  puVar6[7] = 0;
  puVar6[8] = 0;
  *puVar6 = uVar3 & 0xffffffdf;
  *(undefined4 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x30c) = 0;
  uVar4 = (**(code **)(*piVar2 + 0x10))(piVar2);
  uVar5 = fn_82D7E470(puVar6,uVar4,param_3,0,param_4,param_5);
  if (param_4 == (code *)0x0) {
    return uVar5;
  }
  pcVar7 = lbl_831604F4;
  if ((int)uVar5 < 0) {
    if (*(int *)(param_1 + 0x30c) != 0) {
      uVar5 = -(ulonglong)(*(int *)(param_1 + 0x308) != *(int *)(param_1 + 0x30c)) & uVar5;
    }
    pcVar9 = lbl_831604F0;
    if ((int)uVar5 < 0) {
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      (*param_4)(param_5,lbl_831604F0,
                 pcVar9 + (-1 - (int)lbl_831604F0));
      iVar8 = *(int *)(param_1 + 0x30c) + 1;
      goto LAB_82aa64dc;
    }
  }
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  (*param_4)(param_5,lbl_831604F4,
             pcVar7 + (-1 - (int)lbl_831604F4));
  iVar8 = *(int *)(param_1 + 0x30c) + 2;
LAB_82aa64dc:
  *(int *)(param_1 + 0x30c) = iVar8;
  return uVar5;
}

