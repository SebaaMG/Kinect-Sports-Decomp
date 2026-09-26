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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_50;
extern int fn_8289DF30();
extern int fn_828E9410();
extern int fn_828E95E8();
extern unsigned int iStack_48;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern U64 storeWordConditionalIndexed();


int * fn_828E9670(int *param_1,undefined4 *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 *puVar8;
  longlong lVar7;
  char *pcVar9;
  char in_RESERVE;
  byte in_cr0;
  undefined4 auStack_50 [2];
  int iStack_48;
  int *piStack_44;
  undefined4 uStack_40;
  char cStack_3c;
  undefined4 uStack_38;
  
  fn_828E95E8(&iStack_48);
  cStack_3c = '\0';
  iVar1 = *(int *)*param_2;
  if (param_4 == 0) {
    auStack_50[0] = *(undefined4 *)(iVar1 + 0x10);
    uStack_40 = 2;
  }
  else {
    uStack_40 = 0;
    auStack_50[0] = **(undefined4 **)(iVar1 + 0x10);
  }
  fn_828E9410(iVar1,auStack_50,&uStack_40,&iStack_48);
  pcVar9 = (char *)(iStack_48 + 0x68);
  *(undefined4 *)(iStack_48 + 100) = uStack_40;
  if (*pcVar9 == '\0') {
    if (cStack_3c != '\0') {
      puVar8 = (undefined4 *)(iStack_48 + 0x6c);
      in_cr0 = (puVar8 == (undefined4 *)0x0) << 1;
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = uStack_38;
      }
      *pcVar9 = '\x01';
    }
  }
  else if (cStack_3c == '\0') {
    *pcVar9 = '\0';
  }
  else {
    *(undefined4 *)(iStack_48 + 0x6c) = uStack_38;
  }
  uVar4 = ZEXT48(piStack_44);
  piVar5 = (int *)0x0;
  if (uVar4 != 0) {
    do {
      puVar6 = (uint *)(uVar4 + 8);
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)*puVar6 + 1,0,uVar4 + 8);
        *puVar6 = uVar2;
        in_cr0 = 2;
      }
      piVar5 = piStack_44;
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  *param_1 = iStack_48;
  param_1[1] = (int)piStack_44;
  if (uVar4 != 0) {
    lVar7 = uVar4 + 8;
    do {
      puVar6 = (uint *)lVar7;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)*puVar6 + 1,0,lVar7);
        *puVar6 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    do {
      uVar2 = *puVar6;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)uVar2 - 1,0,lVar7);
        *puVar6 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    piVar5 = piStack_44;
    if ((int)((ulonglong)uVar2 - 1) == 0) {
      (**(code **)(*piStack_44 + 8))(uVar4);
      piVar5 = piStack_44;
    }
  }
  if (piVar5 != (int *)0x0) {
    fn_8289DF30();
  }
  return param_1;
}

