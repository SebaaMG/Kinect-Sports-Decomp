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
extern unsigned int *auStack_90;
extern int fn_8225F160();
extern int fn_8225F670();
extern int fn_8225FDE0();
extern int fn_82485238();
extern int fn_82485358();
extern int fn_82526C70();
extern int fn_82E1CAD0();
extern int fn_82E1CB08();
extern int fn_82E1CB88();
extern int fn_82E1CC60();
extern int fn_82E1CCA8();
extern int fn_82F64020();


void fn_82484EE0(undefined8 param_1,int *param_2,ulonglong param_3,int *param_4,int *param_5,
                  int param_6)

{
  char *pcVar1;
  int iVar2;
  char cVar4;
  int *piVar3;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [128];
  
  auStack_80[0] = 0;
  if ((param_3 & 0xffffffff) < 0x4c) {
    fn_82485358();
  }
  else {
    fn_82F64020(auStack_80,0x40,0xffffffff821a6774);
  }
  pcVar1 = (char *)fn_8225F670();
  if (((*pcVar1 != '\0') && (iVar2 = fn_8225FDE0(0x6b,1), iVar2 == 0)) &&
     (cVar4 = fn_82E1CAD0(0x6b), cVar4 != '\0')) {
    fn_82E1CC60(param_1,0xffffffff821a7a40);
    fn_82E1CB08(0xffffffff821a7a58,auStack_80,0);
    fn_82526C70(auStack_90,10,0xffffffff821a6800,*param_4);
    fn_82E1CB08(0xffffffff821a7844,auStack_90,0);
    fn_82E1CB88(0xffffffff821a7a38,1);
    fn_82E1CB08(0xffffffff821a7a60,param_6,0);
    fn_82E1CCA8();
  }
  iVar2 = (int)param_3;
  if (iVar2 == 1) {
    piVar3 = param_2 + 0x10d;
    param_6 = param_6 - (int)piVar3;
    do {
      if (param_2 + 0x14d <= piVar3) break;
      cVar4 = *(char *)(param_6 + (int)piVar3);
      *(char *)piVar3 = cVar4;
      piVar3 = (int *)((int)piVar3 + 1);
    } while (cVar4 != '\0');
    if (piVar3 == param_2 + 0x14d) {
      *(char *)((int)piVar3 + -1) = '\0';
    }
    if (param_5 == (int *)0x0) {
      param_2[7] = 0;
    }
    else {
      param_2[7] = *param_5;
    }
    piVar3 = (int *)fn_8225F160();
    if (*piVar3 != 2) {
      fn_82526C70(param_2 + 0x14d,0x100,0xffffffff821bdc2c);
      fn_82526C70(param_2 + 0x18d,0x100,0xffffffff821bdc3c);
      fn_82526C70(param_2 + 0x1cd,0x100,0xffffffff821bd808);
    }
  }
  else if (iVar2 == 2) {
    piVar3 = param_2 + 0x10d;
    param_6 = param_6 - (int)piVar3;
    do {
      if (param_2 + 0x14d <= piVar3) break;
      cVar4 = *(char *)(param_6 + (int)piVar3);
      *(char *)piVar3 = cVar4;
      piVar3 = (int *)((int)piVar3 + 1);
    } while (cVar4 != '\0');
    if (piVar3 == param_2 + 0x14d) {
      *(char *)((int)piVar3 + -1) = '\0';
    }
    if (param_5 == (int *)0x0) {
      param_2[7] = 0;
    }
    else {
      param_2[7] = *param_5;
    }
    piVar3 = param_2 + 0x14d;
    iVar2 = (int)"sport_bowling" - (int)piVar3;
    do {
      if (param_2 + 0x18d <= piVar3) break;
      cVar4 = *(char *)(iVar2 + (int)piVar3);
      *(char *)piVar3 = cVar4;
      piVar3 = (int *)((int)piVar3 + 1);
    } while (cVar4 != '\0');
    if (piVar3 == param_2 + 0x18d) {
      *(char *)((int)piVar3 + -1) = '\0';
    }
    piVar3 = param_2 + 0x18d;
    iVar2 = (int)"bowling_main" - (int)piVar3;
    do {
      if (param_2 + 0x1cd <= piVar3) break;
      cVar4 = *(char *)(iVar2 + (int)piVar3);
      *(char *)piVar3 = cVar4;
      piVar3 = (int *)((int)piVar3 + 1);
    } while (cVar4 != '\0');
    if (piVar3 == param_2 + 0x1cd) {
      *(char *)((int)piVar3 + -1) = '\0';
    }
  }
  else if (iVar2 == 3) {
    piVar3 = param_2 + 0x10d;
    param_6 = param_6 - (int)piVar3;
    do {
      if (param_2 + 0x14d <= piVar3) break;
      cVar4 = *(char *)(param_6 + (int)piVar3);
      *(char *)piVar3 = cVar4;
      piVar3 = (int *)((int)piVar3 + 1);
    } while (cVar4 != '\0');
    if (piVar3 == param_2 + 0x14d) {
      *(char *)((int)piVar3 + -1) = '\0';
    }
    if (param_5 == (int *)0x0) {
      param_2[7] = 0;
    }
    else {
      param_2[7] = *param_5;
    }
  }
  else if ((3 < iVar2) && ((iVar2 < 0x19 || ((0x19 < iVar2 && (iVar2 < 0x1f)))))) {
    piVar3 = param_2 + 0x18d;
    param_6 = param_6 - (int)piVar3;
    do {
      if (param_2 + 0x1cd <= piVar3) break;
      cVar4 = *(char *)(param_6 + (int)piVar3);
      *(char *)piVar3 = cVar4;
      piVar3 = (int *)((int)piVar3 + 1);
    } while (cVar4 != '\0');
    if (piVar3 == param_2 + 0x1cd) {
      *(char *)((int)piVar3 + -1) = '\0';
    }
    if (param_5 != (int *)0x0) {
      param_2[8] = *param_5;
    }
  }
  fn_82485238(param_3);
  if ((param_4 != (int *)0x0) && (*param_4 != 0)) {
    *param_2 = *param_4;
  }
  return;
}

