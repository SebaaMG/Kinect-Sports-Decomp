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
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F6A4B0();
extern int fn_82F7F760();
extern unsigned int lbl_831BBCA8;


undefined8
fn_82F7F850(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
             longlong param_5)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined1 *puVar3;
  short sVar4;
  ulonglong uVar5;
  char cVar7;
  ulonglong uVar6;
  ulonglong uVar8;
  char *pcVar10;
  longlong lVar9;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  
  lVar11 = 0x3ff;
  sVar4 = 0x30;
  param_4 = ((param_4 & 0xffffffff) >> 0x1f) - 1 & param_4;
  if ((param_2 & 0xffffffff) == 0) {
    puVar1 = (undefined4 *)fn_82F68240();
    *puVar1 = 0x16;
    fn_82F63BA0();
    return 0x16;
  }
  if ((param_3 & 0xffffffff) == 0) {
    puVar1 = (undefined4 *)fn_82F68240();
    uVar12 = 0x16;
LAB_82f7f8ac:
    *puVar1 = (int)uVar12;
    fn_82F63BA0();
    return uVar12;
  }
  puVar3 = (undefined1 *)param_2;
  *puVar3 = 0;
  if ((param_3 & 0xffffffff) <= (param_4 + 0xb & 0xffffffff)) {
    puVar1 = (undefined4 *)fn_82F68240();
    uVar12 = 0x22;
    goto LAB_82f7f8ac;
  }
  if ((*param_1 >> 0x34 & 0x7ff) == 0x7ff) {
    if ((int)param_3 == -1) {
      lVar11 = -1;
    }
    else {
      lVar11 = param_3 - 2;
    }
    uVar12 = fn_82F7F760(param_1,param_2 + 2,lVar11,param_4,0,0);
    if ((int)uVar12 == 0) {
      if (*(char *)(param_2 + 2) == '-') {
        *puVar3 = 0x2d;
        param_2 = param_2 + 1;
      }
      *(undefined1 *)param_2 = 0x30;
      ((undefined1 *)param_2)[1] = (-(param_5 != 0) & 0xe0U) + 0x78;
      pcVar2 = (char *)fn_82F6A4B0(param_2 + 2,0x65);
      if (pcVar2 == (char *)0x0) {
        return 0;
      }
      *pcVar2 = (-(param_5 != 0) & 0xe0U) + 0x70;
      pcVar2[3] = '\0';
      return 0;
    }
    *puVar3 = 0;
    return uVar12;
  }
  if ((*param_1 & 0x8000000000000000) != 0) {
    *puVar3 = 0x2d;
    param_2 = param_2 + 1;
  }
  puVar3 = (undefined1 *)param_2;
  *puVar3 = 0x30;
  puVar3[1] = (-(param_5 != 0) & 0xe0U) + 0x78;
  uVar13 = -(ulonglong)(param_5 != 0) & 0xffffffe0;
  if ((*param_1 & 0x7ff0000000000000) == 0) {
    puVar3[2] = 0x30;
    if ((*param_1 & 0xfffffffffffff) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0x3fe;
    }
  }
  else {
    puVar3[2] = 0x31;
  }
  uVar6 = param_2 + 3;
  param_2 = param_2 + 4;
  pcVar2 = (char *)uVar6;
  if ((int)param_4 == 0) {
    *pcVar2 = '\0';
  }
  else {
    *pcVar2 = *(char *)**(undefined4 **)(lbl_831BBCA8 + 0xbc);
  }
  if ((*param_1 & 0xfffffffffffff) != 0) {
    uVar5 = 0xf000000000000;
    do {
      if ((int)param_4 < 1) break;
      uVar8 = ((*param_1 & uVar5) >> ((longlong)sVar4 & 0x7fU) & 0xffff) + 0x30;
      if (0x39 < (uVar8 & 0xffff)) {
        uVar8 = (uVar13 + 0x27 & 0xffff) + (uVar8 & 0xffff) & 0xffff;
      }
      sVar4 = sVar4 + -4;
      *(undefined1 *)param_2 = (char)uVar8;
      param_2 = param_2 + 1;
      uVar5 = uVar5 >> 4;
      param_4 = param_4 - 1;
    } while (-1 < sVar4);
    if ((-1 < sVar4) &&
       (uVar8 = param_2, 8 < ((*param_1 & uVar5) >> ((longlong)sVar4 & 0x7fU) & 0xffff))) {
      while( true ) {
        uVar5 = uVar8 - 1;
        pcVar10 = (char *)uVar5;
        cVar7 = *pcVar10;
        if ((cVar7 != 'f') && (cVar7 != 'F')) break;
        *pcVar10 = '0';
        uVar8 = uVar5;
      }
      if ((uVar5 & 0xffffffff) == (uVar6 & 0xffffffff)) {
        pcVar10 = (char *)((int)uVar8 + -2);
        cVar7 = *pcVar10;
LAB_82f7fb1c:
        cVar7 = cVar7 + '\x01';
      }
      else {
        if (cVar7 != '9') goto LAB_82f7fb1c;
        cVar7 = (char)uVar13 + 'a';
      }
      *pcVar10 = cVar7;
    }
  }
  if (0 < (int)param_4) {
    lVar9 = param_2 - 1;
    uVar13 = param_4;
    uVar5 = param_4 & 0xffffffff;
    while (uVar5 != 0) {
      lVar9 = lVar9 + 1;
      *(undefined1 *)lVar9 = 0x30;
      uVar13 = uVar13 - 1;
      uVar5 = uVar13;
    }
    param_2 = param_2 + param_4;
  }
  if (*pcVar2 == '\0') {
    param_2 = uVar6;
  }
  pcVar2 = (char *)param_2 + 1;
  *(char *)param_2 = (-(param_5 != 0) & 0xe0U) + 0x70;
  lVar11 = (*param_1 >> 0x34 & 0x7ff) - lVar11;
  if (lVar11 < 0) {
    *pcVar2 = '-';
    lVar11 = -lVar11;
  }
  else {
    *pcVar2 = '+';
  }
  uVar6 = param_2 + 2;
  *(char *)uVar6 = '0';
  uVar13 = uVar6;
  if (lVar11 < 1000) {
LAB_82f7fbdc:
    if (lVar11 < 100) goto LAB_82f7fc08;
  }
  else {
    lVar9 = lVar11 / 1000;
    lVar11 = lVar11 % 1000;
    *(char *)uVar6 = (char)lVar9 + '0';
    uVar13 = param_2 + 3;
    if ((uVar13 & 0xffffffff) == (uVar6 & 0xffffffff)) goto LAB_82f7fbdc;
  }
  lVar9 = lVar11 / 100;
  lVar11 = lVar11 % 100;
  *(char *)uVar13 = (char)lVar9 + '0';
  uVar13 = uVar13 + 1;
LAB_82f7fc08:
  pcVar2 = (char *)uVar13;
  if (((uVar13 & 0xffffffff) != (uVar6 & 0xffffffff)) || (9 < lVar11)) {
    lVar9 = lVar11 / 10;
    lVar11 = lVar11 % 10;
    *pcVar2 = (char)lVar9 + '0';
    pcVar2 = pcVar2 + 1;
  }
  *pcVar2 = (char)lVar11 + '0';
  pcVar2[1] = '\0';
  return 0;
}

