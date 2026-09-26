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
extern int fn_82230360();
extern int fn_823AA970();
extern int fn_8240D928();
extern int fn_825089A0();
extern int fn_8265CA20();
extern int fn_8288BC38();
extern int fn_8288DF40();
extern int fn_82890F90();
extern int fn_82893DB8();
extern int fn_82897620();
extern int fn_82897BA8();
extern int fn_8289A470();
extern int fn_8289D8D0();
extern int fn_8289F2E0();
extern int fn_8289F350();
extern int fn_828A12E8();
extern int fn_82F622E0();
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_82894298(int *param_1,char param_2,longlong param_3,undefined8 param_4,int *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  int iVar5;
  int *piVar6;
  undefined8 uVar4;
  int iVar7;
  int iVar8;
  char cVar10;
  undefined4 *puVar9;
  ulonglong uVar11;
  char cVar12;
  double dVar13;
  undefined1 auStack_90 [16];
  uint auStack_80 [4];
  undefined4 uStack_70;
  uint uStack_6c;
  
  iVar5 = fn_8289F2E0(param_1[4],param_4);
  cVar10 = *(char *)(iVar5 + 0x26);
  uVar11 = param_3 - (ulonglong)*(byte *)(param_1 + 0x17);
  if (param_2 == '\0') {
    if (0xff < (uVar11 & 0xffffffff)) {
      uVar11 = uVar11 + 0x100;
    }
    if (uVar11 < 0x80) {
      param_1[0x14] = 3;
    }
  }
  else {
    if (0xff < (uVar11 & 0xffffffff)) {
      uVar11 = uVar11 + 0x100;
    }
    if ((uVar11 == 0) || (bVar3 = true, 0x7f < (uVar11 & 0xffffffff))) {
      bVar3 = false;
    }
    if ((bVar3) || (cVar10 != '\0')) {
      if ((param_1[0xd] == 0) || (iVar7 = *(int *)(param_1[0xd] + 0x38), iVar7 == 0)) {
        cVar12 = '\0';
      }
      else {
        cVar12 = *(char *)(iVar7 + 0x26);
      }
      if ((cVar12 == '\0') || (cVar10 != '\0')) {
        param_1[0x14] = 1;
        *(char *)(param_1 + 0x17) = (char)param_3;
        piVar6 = (int *)fn_825089A0();
        dVar13 = (double)(**(code **)(*piVar6 + 8))();
        param_1[0x16] = (int)(float)dVar13;
        if (cVar10 == '\0') {
          uVar1 = *(undefined4 *)(param_1[0xd] + 0x38);
          uVar4 = fn_8289D8D0(param_1[4]);
          fn_82893DB8(param_1,uVar4);
          fn_8288BC38(param_1,param_5);
          (**(code **)(*param_1 + 0x24))(param_1,uVar1);
          iVar7 = (**(code **)(*param_1 + 8))(param_1);
          uVar11 = 0;
          uVar2 = *(uint *)(*(int *)(iVar7 + 0x10) + 8);
          if (uVar2 != 0) {
            iVar7 = 0;
            do {
              if ((ulonglong)(uint)(param_5[1] - *param_5 >> 2) <= (uVar11 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
                fn_82F622E0(0xffffffff821ae698);
              }
              uVar1 = *(undefined4 *)(iVar7 + *param_5);
              uVar4 = (**(code **)(*param_1 + 8))(param_1);
              iVar8 = fn_82897620(uVar4,uVar11);
              cVar10 = fn_82897BA8(*(undefined4 *)(iVar8 + 0x18));
              if (cVar10 == '\0') {
                fn_8289A470(iVar8,iVar5,uVar1);
              }
              uVar11 = uVar11 + 1;
              iVar7 = iVar7 + 4;
            } while ((uVar11 & 0xffffffff) < (ulonglong)uVar2);
          }
          uStack_70 = 0;
          auStack_80[0] = auStack_80[0] & 0xffffff;
          uStack_6c = 0xf;
          fn_82230360(auStack_80,0xffffffff820238cc,0x19);
          uVar4 = fn_823AA970(iVar5);
          iVar5 = fn_8289F350(param_1[4],uVar4);
          if (iVar5 != 0) {
            uVar4 = fn_8240D928();
            puVar9 = (undefined4 *)fn_8288DF40(auStack_90,param_1 + 0xf,uVar4);
            *(uint *)*puVar9 = 1 << (puVar9[1] & 0x3f) | *(uint *)*puVar9;
          }
          if (0xf < uStack_6c) {
            fn_8265CA20(auStack_80[0]);
          }
          uStack_6c = 0xf;
          uStack_70 = 0;
          auStack_80[0] = auStack_80[0] & 0xffffff;
        }
        uVar4 = fn_828A12E8(param_1[4]);
        fn_82890F90(uVar4,param_1,1);
      }
    }
  }
  return;
}

