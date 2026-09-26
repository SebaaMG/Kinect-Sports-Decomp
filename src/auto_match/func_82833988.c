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
extern unsigned int uStack_5f;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;


void fn_82833988(int *param_1,undefined4 *param_2,short param_3,uint *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined1 auStack_80 [12];
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  short sStack_5e;
  
  uStack_70 = (undefined4)param_5;
  uStack_68 = (undefined4)param_6;
  uStack_60 = fn_82811680(param_7);
  uStack_5f = fn_82811680(param_8);
  uStack_64 = fn_828184A8(param_5,param_6);
  iVar1 = *param_1;
  iVar2 = param_1[1];
  uStack_6c = (*(int *)(iVar1 + 0x14) + (int)param_7) - 1U & ~((int)param_7 - 1U);
  piVar3 = (int *)fn_82834990(auStack_80,iVar2,&uStack_70);
  if (*piVar3 == *(int *)(iVar2 + 4)) {
    fn_82829758(iVar1,param_2,param_5,param_6,param_7,param_8);
    uStack_70 = *param_2;
    *(int *)(*(int *)(*param_1 + 8) + 0x3e0) = *(int *)(*(int *)(*param_1 + 8) + 0x3e0) + 1;
    sStack_5e = param_3;
  }
  else {
    puVar5 = &uStack_74;
    puVar4 = (undefined4 *)(*piVar3 + 8);
    lVar6 = 5;
    do {
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      *puVar5 = *puVar4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    fn_828256C0(auStack_80,iVar2);
    sStack_5e = sStack_5e + param_3 + 1;
    *param_2 = uStack_70;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uStack_6c;
  }
  fn_828311B0(auStack_80,param_1[1],&uStack_70);
  return;
}

