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
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern int fn_82FEF5A0();
extern int fn_82FFE0F0();
extern int fn_83015B10();
extern int fn_83017108();
extern int fn_83034FA0();
extern unsigned int lbl_821AAD20;


undefined8 fn_830187E8(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar5;
  float *pfVar4;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_70 [4];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float afStack_60 [24];
  
  RtlEnterCriticalSection(param_1 + 0x720);
  piVar1 = *(int **)(param_1 + 0x6a0);
  if (piVar1 != (int *)0x0) {
    dVar8 = (double)lbl_821AAD20;
    do {
      if ((int *)piVar1[1] == param_2) {
        iVar6 = piVar1[4];
        if ((iVar6 == 2) || (iVar6 == 1)) {
          (**(code **)(*(int *)piVar1[1] + 0x50))();
        }
        else if (iVar6 == 0) {
          iVar6 = piVar1[5];
          iVar2 = piVar1[3];
          dVar9 = dVar8;
          if (iVar6 != piVar1[6]) {
            do {
              cVar5 = fn_83017108(param_1,*(undefined4 *)(iVar6 + 4),iVar2,&fStack_6c,
                                        auStack_70);
              if (cVar5 == '\0') {
                pfVar4 = (float *)fn_82FFE0F0(param_1 + 0x61c,*(undefined4 *)(iVar6 + 4));
                dVar7 = dVar8;
                if (pfVar4 != (float *)0x0) {
                  dVar7 = (double)*pfVar4;
                }
                fStack_6c = (float)dVar7;
              }
              dVar7 = (double)fn_83015B10((double)fStack_6c,iVar6 + 8);
              iVar6 = iVar6 + 0x14;
              dVar9 = (double)(float)(dVar7 + dVar9);
            } while (iVar6 != piVar1[6]);
          }
          fStack_64 = (float)dVar9;
          piVar3 = (int *)piVar1[1];
          (**(code **)(*piVar3 + 4))(piVar3,(short)piVar1[2],&fStack_64,4);
        }
        else if (iVar6 == 4) {
          iVar6 = piVar1[5];
          iVar2 = piVar1[3];
          dVar9 = dVar8;
          if (iVar6 != piVar1[6]) {
            do {
              cVar5 = fn_83017108(param_1,*(undefined4 *)(iVar6 + 4),iVar2,&fStack_68,
                                        auStack_70);
              if (cVar5 == '\0') {
                pfVar4 = (float *)fn_82FFE0F0(param_1 + 0x61c,*(undefined4 *)(iVar6 + 4));
                dVar7 = dVar8;
                if (pfVar4 != (float *)0x0) {
                  dVar7 = (double)*pfVar4;
                }
                fStack_68 = (float)dVar7;
              }
              dVar7 = (double)fn_83015B10((double)fStack_68,iVar6 + 8);
              iVar6 = iVar6 + 0x14;
              dVar9 = (double)(float)(dVar7 + dVar9);
            } while (iVar6 != piVar1[6]);
          }
          afStack_60[0] = (float)dVar9;
          fn_82FEF5A0(piVar1[1],(short)piVar1[2],afStack_60,4);
        }
        else {
          fn_83034FA0();
        }
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
  }
  RtlLeaveCriticalSection(param_1 + 0x720);
  return 1;
}

