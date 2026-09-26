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
extern unsigned int *auStack_80;
extern int fn_82811680();
extern int fn_828184A8();
extern int fn_828256C0();
extern int fn_82829758();
extern int fn_828311B0();
extern int fn_82834990();
extern unsigned int iStack_68;
extern unsigned int uStack_5f;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;


/* WARNING: Removing unreachable block (ram,0x82833ab4) */

void fn_82833AF8(int *param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_80 [12];
  undefined4 uStack_74;
  char *pcStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  short sStack_5e;
  
  pcVar7 = param_2;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  iVar8 = (int)pcVar7 - (int)param_2;
  pcStack_70 = param_2;
  iStack_68 = iVar8;
  uStack_60 = fn_82811680(1);
  uStack_5f = fn_82811680(1);
  uStack_64 = fn_828184A8(param_2,iVar8);
  iVar2 = *param_1;
  iVar3 = param_1[1];
  uStack_6c = *(undefined4 *)(iVar2 + 0x14);
  piVar4 = (int *)fn_82834990(auStack_80,iVar3,&pcStack_70);
  if (*piVar4 == *(int *)(iVar3 + 4)) {
    fn_82829758(iVar2,param_3,param_2,iVar8,1,1);
    pcStack_70 = (char *)*param_3;
    sStack_5e = 0;
    *(int *)(*(int *)(*param_1 + 8) + 0x3e0) = *(int *)(*(int *)(*param_1 + 8) + 0x3e0) + 1;
  }
  else {
    puVar6 = &uStack_74;
    puVar5 = (undefined4 *)(*piVar4 + 8);
    lVar9 = 5;
    do {
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar5;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    fn_828256C0(auStack_80,iVar3);
    sStack_5e = sStack_5e + 1;
    *param_3 = pcStack_70;
  }
  fn_828311B0(auStack_80,param_1[1],&pcStack_70);
  return;
}

