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
extern int fn_829641F8();
extern int fn_82964588();
extern int fn_82975B00();
extern int fn_82975BB8();
extern int fn_82F65AC0();
extern int fn_82F65B18();
extern int fn_82F66A40();
extern int fn_82F66A80();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_8315BDA8;
extern unsigned int stack0x00000000;


ulonglong fn_829A5D08(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char *pcVar10;
  char cVar11;
  ulonglong uVar9;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  bool bVar15;
  char acStack_90 [144];
  
  uVar1 = *(uint *)(param_2[0x1a] + 0x18);
  uVar12 = (ulonglong)uVar1;
  lVar14 = 0;
  bVar2 = false;
  uVar13 = 0;
  uVar8 = 0x20;
  pcVar10 = &stack0x00000000 + -0x90;
  do {
    if (pcVar10[uVar1 - (int)acStack_90] == '\0') break;
    *pcVar10 = pcVar10[uVar1 - (int)acStack_90];
    uVar8 = uVar8 - 1;
    pcVar10 = pcVar10 + 1;
  } while (uVar8 != 0);
  if ((uVar8 & 0xffffffff) == 0) {
    pcVar10 = pcVar10 + -1;
  }
  *pcVar10 = '\0';
  pcVar10 = &stack0x00000000 + -0x90;
  while ((acStack_90[0] != '\0' && (iVar5 = fn_82F66A40(*pcVar10), iVar5 != 0))) {
    pcVar10 = pcVar10 + 1;
    acStack_90[0] = *pcVar10;
  }
  if (*pcVar10 == '\0') {
    lVar3 = 0;
  }
  else {
    lVar3 = fn_82F65B18(pcVar10);
  }
  if (*pcVar10 != '\0') {
    *pcVar10 = '\0';
    pcVar10 = pcVar10 + 1;
  }
  cVar11 = *pcVar10;
  while ((cVar11 != '\0' && (iVar5 = fn_82F66A80(), iVar5 != 0))) {
    pcVar10 = pcVar10 + 1;
    cVar11 = *pcVar10;
  }
  if (*pcVar10 == '\0') {
    uVar8 = (ulonglong)(param_2[0x1c] >> 2) + lVar3;
  }
  else {
    uVar8 = 0xffffffffffffffff;
  }
  if (param_2[0x1b] == 0xffffffff) {
    iVar5 = *(int *)(param_2[1] * 4 + *(int *)(param_1 + 0x10));
    puVar4 = (undefined1 *)fn_829641F8(param_1,param_2);
    uVar1 = *(uint *)(iVar5 + 4);
    if (((uVar1 & 0x10) != 0) && ((uVar1 & 0x200) == 0)) {
      iVar5 = fn_82F65AC0(&stack0x00000000 + -0x90,0xffffffff821cdae4);
      if (iVar5 == 0) {
        uVar13 = 1;
        uVar9 = 2;
        if (param_3 == 0) {
          uVar9 = (ulonglong)*(uint *)(param_1 + 0x28);
        }
LAB_829a5ec0:
        bVar15 = uVar9 <= uVar8;
LAB_829a5f48:
        lVar14 = -((ulonglong)!bVar15 - 1);
      }
      else {
        iVar5 = fn_82F65AC0(&stack0x00000000 + -0x90,0xffffffff821cdb18);
        if (iVar5 == 0) {
          uVar13 = 3;
          uVar9 = 8;
          if (param_3 == 0) {
            uVar9 = (ulonglong)*(uint *)(param_1 + 0x3c);
          }
          goto LAB_829a5ec0;
        }
        iVar5 = fn_82F65AC0(&stack0x00000000 + -0x90,0xffffffff821c44ac);
        if (((iVar5 == 0) ||
            (iVar5 = fn_82F65AC0(&stack0x00000000 + -0x90,0xffffffff821cdae0), iVar5 == 0)) ||
           (iVar5 = fn_82F65AC0(&stack0x00000000 + -0x90,0xffffffff821cdb24), iVar5 == 0)) {
          bVar15 = uVar8 != 0;
          uVar13 = 4;
          goto LAB_829a5f48;
        }
        iVar5 = fn_82F65AC0(&stack0x00000000 + -0x90,0xffffffff821c44e0);
        if (iVar5 == 0) {
          uVar13 = 1;
          lVar14 = -((ulonglong)(uVar8 == 0) - 1);
          bVar2 = true;
          if (lVar14 == 0) {
            uVar8 = 0;
          }
        }
        else {
          iVar5 = fn_82F65AC0(&stack0x00000000 + -0x90,0xffffffff82051c6c);
          if (iVar5 == 0) {
            uVar13 = 1;
            lVar14 = -((ulonglong)(uVar8 == 0) - 1);
            bVar2 = true;
            if (lVar14 == 0) {
              uVar8 = 1;
            }
          }
          else {
            uVar13 = 0;
            lVar14 = 1;
          }
        }
      }
      if ((param_3 == 0) || (param_2[4] == 0)) {
        if ((int)lVar14 == 0) {
          if (bVar2) {
            fn_82975BB8(param_1,param_2[0x1a],0x1261,0xffffffff82051c14,puVar4,uVar12,
                              (&lbl_8315BDA8)[uVar13],uVar8);
          }
        }
        else {
          fn_82975B00(param_1,param_2[0x1a],0x1196,0xffffffff82051c50,puVar4,uVar12);
        }
      }
      if (((uVar13 == 4) || ((int)lVar14 != 0)) &&
         ((*(int *)(param_1 + 0x44c) == 0 && (param_3 == 0)))) {
        uVar7 = 0xffffffff82051bec;
        goto LAB_829a607c;
      }
      goto LAB_829a6164;
    }
    if ((uVar1 & 0x20) != 0) {
      iVar5 = fn_82F65AC0(&stack0x00000000 + -0x90,0xffffffff821cdae4);
      if (iVar5 == 0) {
        uVar13 = 1;
        lVar14 = -((ulonglong)(uVar8 < *(uint *)(param_1 + 0x48)) - 1);
LAB_829a60f8:
        if ((int)lVar14 != 0) goto LAB_829a6100;
      }
      else {
        iVar5 = fn_82F65AC0(&stack0x00000000 + -0x90,0xffffffff821cdad8);
        lVar14 = 1;
        if (iVar5 != 0) {
          uVar13 = 0;
          goto LAB_829a60f8;
        }
        uVar13 = 4;
LAB_829a6100:
        if ((param_3 == 0) || (param_2[4] == 0)) {
          fn_82975B00(param_1,param_2[0x1a],0x1196,0xffffffff82051c50,puVar4,uVar12);
        }
      }
      if (uVar13 == 4) {
        if (param_3 != 0) goto LAB_829a6268;
        fn_82975B00(param_1,param_2[0x1a],0x1196,0xffffffff82051bbc,puVar4,uVar12);
      }
      goto LAB_829a6164;
    }
  }
  else {
    uVar13 = param_2[0x1b] & 0xff;
    uVar12 = (ulonglong)*(byte *)((int)param_2 + 0x6e);
    uVar8 = uVar12;
    if (uVar13 == 4) {
      if ((*(int *)(param_1 + 0x44c) != 0) || (param_3 != 0)) goto LAB_829a6268;
      uVar7 = 0xffffffff82051c78;
      puVar4 = &stack0x00000000 + -0x90;
LAB_829a607c:
      *(undefined4 *)(param_1 + 0x44c) = 1;
      fn_82975B00(param_1,param_2[0x1a],0x1196,uVar7,puVar4,uVar12);
      lVar14 = 1;
    }
LAB_829a6164:
    if (uVar13 == 3) {
      if (((((uVar8 & 0xffffffff) != 0) && ((uVar8 & 0xffffffff) < 4)) && (param_2[4] == 3)) &&
         (*(ushort *)(param_1 + 0xca) < 0x104)) {
        if (*(int *)(param_1 + 0x440) == -1) {
          uVar6 = fn_82964588(param_1,0xffffffff82051bb4,0x51,0xffffffffffffffff,4);
          *(undefined4 *)(param_1 + 0x440) = uVar6;
        }
        if (*(uint *)(param_1 + 0x440) == 0xffffffff) {
          return 0xffffffff8007000e;
        }
        param_2[1] = *(uint *)(param_1 + 0x440);
        uVar13 = 5;
        param_2[3] = 0;
        param_2[4] = (int)uVar8 - 1;
        goto LAB_829a6268;
      }
      if ((((uVar8 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x3c)) || (param_3 != 0)) ||
         (*(int *)(param_1 + 0x44c) != 0)) goto LAB_829a6268;
      *(undefined4 *)(param_1 + 0x44c) = 1;
      fn_82975B00(param_1,param_2[0x1a],0x1196,0xffffffff82051b68);
      lVar14 = 1;
    }
    if (uVar13 == 1) {
      *param_2 = *param_2 | 0x114;
      uVar7 = lbl_82005758;
      *(undefined8 *)(param_2 + 8) = lbl_82005710;
      *(undefined8 *)(param_2 + 10) = uVar7;
    }
    if (uVar13 != 0) goto LAB_829a6268;
  }
  lVar14 = 1;
LAB_829a6268:
  if (0xffff < (uVar8 & 0xffffffff)) {
    lVar14 = 1;
  }
  param_2[0x1b] = (uint)((uVar8 & 0xffffffff) << 8) | uVar13;
  return -(ulonglong)(lVar14 != 0) & 0xffffffff80004005;
}

