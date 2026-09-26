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
extern unsigned int *auStack_50;
extern unsigned int fStack_4c;
extern int fn_82FEF5A0();
extern int fn_82FFE0F0();
extern int fn_83015B10();
extern int fn_83017108();
extern int fn_83034FA0();
extern unsigned int lbl_821AAD20;


void fn_83017A30(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar3;
  float *pfVar2;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_50 [4];
  float fStack_4c;
  float afStack_48 [18];
  
  iVar4 = param_2[3];
  if ((iVar4 == 2) || (iVar4 == 1)) {
    (**(code **)(*(int *)*param_2 + 0x50))();
  }
  else if (iVar4 == 0) {
    iVar4 = param_2[4];
    uVar1 = param_2[2];
    dVar6 = (double)lbl_821AAD20;
    dVar7 = dVar6;
    if (iVar4 != param_2[5]) {
      do {
        cVar3 = fn_83017108(param_1,*(undefined4 *)(iVar4 + 4),uVar1,&fStack_4c,auStack_50);
        if (cVar3 == '\0') {
          pfVar2 = (float *)fn_82FFE0F0(param_1 + 0x61c,*(undefined4 *)(iVar4 + 4));
          dVar5 = dVar6;
          if (pfVar2 != (float *)0x0) {
            dVar5 = (double)*pfVar2;
          }
          fStack_4c = (float)dVar5;
        }
        dVar5 = (double)fn_83015B10((double)fStack_4c,iVar4 + 8);
        iVar4 = iVar4 + 0x14;
        dVar7 = (double)(float)(dVar5 + dVar7);
      } while (iVar4 != param_2[5]);
    }
    afStack_48[0] = (float)dVar7;
    (**(code **)(*(int *)*param_2 + 4))((int *)*param_2,(short)param_2[1],afStack_48,4);
  }
  else if (iVar4 == 4) {
    iVar4 = param_2[4];
    uVar1 = param_2[2];
    dVar6 = (double)lbl_821AAD20;
    dVar7 = dVar6;
    if (iVar4 != param_2[5]) {
      do {
        cVar3 = fn_83017108(param_1,*(undefined4 *)(iVar4 + 4),uVar1,&fStack_4c,auStack_50);
        if (cVar3 == '\0') {
          pfVar2 = (float *)fn_82FFE0F0(param_1 + 0x61c,*(undefined4 *)(iVar4 + 4));
          dVar5 = dVar6;
          if (pfVar2 != (float *)0x0) {
            dVar5 = (double)*pfVar2;
          }
          fStack_4c = (float)dVar5;
        }
        dVar5 = (double)fn_83015B10((double)fStack_4c,iVar4 + 8);
        iVar4 = iVar4 + 0x14;
        dVar7 = (double)(float)(dVar5 + dVar7);
      } while (iVar4 != param_2[5]);
    }
    afStack_48[0] = (float)dVar7;
    fn_82FEF5A0(*param_2,(short)param_2[1],afStack_48,4);
  }
  else {
    fn_83034FA0(*param_2);
  }
  return;
}

