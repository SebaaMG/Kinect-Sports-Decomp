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
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_82695370();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696AD0();
extern int fn_82696B20();
extern int fn_826A2AB8();
extern int fn_826A2DA8();
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;


undefined8 fn_82720090(int param_1,int *param_2,undefined8 param_3,int *param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar10;
  int iVar4;
  int iVar5;
  ulonglong uVar3;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar11;
  int iVar12;
  int iStack_a0;
  int iStack_9c;
  byte bStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [128];
  
  if (param_2 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    piVar11 = (int *)(param_1 + 0x78);
    auStack_80[0] = 0;
    cVar10 = (**(code **)(*param_2 + 0x2c))
                       (param_2,piVar11,(ulonglong)*(uint *)(param_1 + 0x78) + 0x140,auStack_80);
    if (((cVar10 != '\0') && (iVar4 = fn_82696958(auStack_80,param_1), iVar4 != 0)) &&
       (iVar5 = (**(code **)(*(int *)(iVar4 + 0x10) + 8))(iVar4 + 0x10), iVar5 == 7)) {
      *(uint *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1U & 0x8fffffff;
      if (0 < *(int *)(iVar4 + 0x38)) {
        uVar3 = fn_8267B890(*(undefined4 *)(*piVar11 + 0x288),0x48,0);
        if ((uVar3 & 0xffffffff) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = fn_826A2AB8(uVar3,param_1);
        }
        fn_826A2DA8(iVar5,*(undefined4 *)(*piVar11 + 0x288),iVar4);
        uVar3 = (ulonglong)*(uint *)(iVar5 + 0x38);
        if (uVar3 != 0) {
          iVar12 = 0;
          do {
            pcVar1 = *(char **)(iVar12 + *(int *)(iVar5 + 0x34));
            if ((pcVar1 != (char *)0x0) &&
               (piVar6 = (int *)fn_82696AD0(pcVar1,param_1), piVar6 != (int *)0x0)) {
              iVar8 = 0;
              iVar7 = 0;
              if (*pcVar1 == '\a') {
                iVar7 = fn_82695370();
                if (iVar7 != 0) {
                  *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
                }
              }
              else {
                iVar8 = fn_82696958(pcVar1,param_1);
                if (iVar8 != 0) {
                  *(uint *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1U & 0x8fffffff;
                }
              }
              auStack_90[0] = 0;
              cVar10 = (**(code **)(*piVar6 + 0x2c))(piVar6,piVar11,param_3,auStack_90);
              if (cVar10 != '\0') {
                fn_82696B20(&iStack_a0,auStack_90,param_1);
                iVar9 = 0;
                if (iStack_a0 != 0) {
                  (**(code **)(*param_4 + 4))(param_4,param_1,piVar6,&iStack_a0);
                  iVar9 = iStack_a0;
                }
                if (((bStack_98 & 2) == 0) && (iVar9 != 0)) {
                  fn_826824B0();
                }
                iStack_a0 = 0;
                if (((bStack_98 & 1) == 0) && (iStack_9c != 0)) {
                  fn_826824B0();
                }
                iStack_9c = 0;
              }
              fn_82696330(auStack_90);
              if (iVar7 != 0) {
                fn_8267C498(iVar7);
              }
              if (iVar8 != 0) {
                fn_826824B0(iVar8);
              }
            }
            uVar3 = uVar3 - 1;
            iVar12 = iVar12 + 4;
          } while (uVar3 != 0);
        }
        fn_826824B0(iVar5);
      }
      fn_826824B0(iVar4);
    }
    fn_82696330(auStack_80);
    uVar2 = 1;
  }
  return uVar2;
}

