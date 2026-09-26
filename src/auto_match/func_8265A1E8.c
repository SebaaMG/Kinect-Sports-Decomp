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
extern int fn_82658A88();
extern int fn_82658B20();
extern int fn_82658B90();
extern int fn_82658F70();
extern int fn_826593D0();
extern int fn_8265AF38();
extern int fn_8265AFA0();
extern int fn_8265B200();
extern int fn_8265B250();
extern int fn_8265B3C8();
extern unsigned int lbl_831BD828;


undefined4 fn_8265A1E8(int param_1,ulonglong param_2,ulonglong param_3,uint *param_4)

{
  uint uVar1;
  bool bVar2;
  char cVar4;
  ulonglong uVar3;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar8 = (uint)param_3;
  if ((param_2 & 1) == 0) {
    if ((param_2 & 6) == 0) goto LAB_8265adc4;
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x2030);
    if ((ulonglong)*(uint *)(param_1 + 0x2030) <= (param_3 & 0xffffffff)) {
      uVar7 = param_3;
    }
    *(int *)(param_1 + 0x2030) = (int)uVar7;
    uVar7 = (param_2 & 0xffffffff) >> 5 & 1;
    if ((param_2 & 2) != 0) {
      fn_8265AFA0(param_1);
      if ((*(uint *)(param_1 + 8) & 0x20) != 0) {
        fn_8265B200(param_1,0xffffffff821ce850,param_3);
      }
      if (uVar7 != 0) {
        fn_8265B200(param_1,0xffffffff821ce66c);
        fn_8265B3C8(param_1,0xffffffff821ce7d4);
        fn_8265AF38(param_1);
        if ((*(uint *)(param_1 + 8) & 0x20) != 0) {
          fn_8265B200(param_1,0xffffffff821ce860);
        }
      }
      fn_8265B200(param_1,0xffffffff821ce66c);
      fn_826593D0(param_1,param_4,(param_2 & 0xffffffff) >> 4 & 1,param_3);
      goto LAB_8265adc4;
    }
    if ((param_2 & 4) == 0) goto LAB_8265adc4;
    cVar4 = fn_82658B20(param_4);
    uVar9 = 0xffffffff821ce808;
    uVar5 = 0xffffffff821ce66c;
    if (cVar4 == '\0') {
LAB_8265abf8:
      fn_8265AFA0(param_1);
      if ((*(uint *)(param_1 + 8) & 0x20) != 0) {
        fn_8265B200(param_1,0xffffffff821ce850,param_3);
      }
      if (uVar7 != 0) {
        fn_8265B200(param_1,0xffffffff821ce66c);
        fn_8265B3C8(param_1,0xffffffff821ce7d4);
        fn_8265AF38(param_1);
        if ((*(uint *)(param_1 + 8) & 0x20) != 0) {
          fn_8265B200(param_1,0xffffffff821ce860);
        }
      }
      fn_8265B200(param_1,0xffffffff821ce66c);
      if (1 < (param_4[1] >> 0x1b & 3)) {
        uVar6 = uVar9;
        if ((param_4[1] >> 0x1b & 1) == 0) {
          uVar6 = 0xffffffff821ce810;
        }
        fn_8265B200(param_1,uVar6);
      }
      fn_82658B90(param_1,param_4);
    }
    else {
      uVar8 = *param_4;
      if ((uVar8 & 0xfc000000) == 0xc8000000) {
        if ((uVar8 & 0x8000) == 0) {
          uVar3 = 1;
          if ((uVar8 & 0xf00000) != 0) goto LAB_8265abec;
        }
        else {
          uVar3 = fn_82658A88(param_4);
          uVar3 = (~uVar3 & 0xffffffff) >> 1 & 1;
        }
      }
      else {
LAB_8265abec:
        uVar3 = 0;
      }
      if (uVar3 != 0) goto LAB_8265abf8;
    }
    uVar8 = *param_4;
    if ((uVar8 & 0xfc000000) == 0xc8000000) {
      if ((uVar8 & 0x8000) == 0) {
        uVar3 = 1;
        if ((uVar8 & 0xf00000) != 0) goto LAB_8265acd8;
      }
      else {
        uVar3 = fn_82658A88(param_4);
        uVar3 = (~uVar3 & 0xffffffff) >> 1 & 1;
      }
    }
    else {
LAB_8265acd8:
      uVar3 = 0;
    }
    if (uVar3 == 0) {
      cVar4 = fn_82658B20(param_4);
      if (cVar4 == '\0') {
        fn_8265AF38();
        if ((*(uint *)(param_1 + 8) & 0x20) != 0) {
          fn_8265B200(param_1,0xffffffff821ce860);
        }
        uVar5 = 0xffffffff821ce784;
      }
      else {
        fn_8265AFA0(param_1);
        if ((*(uint *)(param_1 + 8) & 0x20) != 0) {
          fn_8265B200(param_1,0xffffffff821ce850,param_3);
        }
        if (uVar7 != 0) {
          fn_8265B200(param_1,0xffffffff821ce66c);
          fn_8265B3C8(param_1,0xffffffff821ce7d4);
          fn_8265AF38(param_1);
          if ((*(uint *)(param_1 + 8) & 0x20) != 0) {
            fn_8265B200(param_1,0xffffffff821ce860);
          }
        }
      }
      fn_8265B200(param_1,uVar5);
      if (1 < (param_4[1] >> 0x1b & 3)) {
        if ((param_4[1] >> 0x1b & 1) == 0) {
          uVar9 = 0xffffffff821ce810;
        }
        fn_8265B200(param_1,uVar9);
      }
      fn_82658F70(param_1,param_4);
    }
    goto LAB_8265adc4;
  }
  uVar1 = param_4[1];
  uVar10 = uVar1 >> 0xc & 0xf;
  if (*(char *)(param_1 + 0xc) != '\0') {
    fn_8265AFA0();
    if ((1 << (uVar8 & 0x1f) & *(uint *)(((int)((param_3 & 0xffffffff) >> 5) + 6) * 4 + param_1)) !=
        0) {
      if ((*(uint *)(param_1 + 8) & 0x20) != 0) {
        fn_8265B200(param_1,0xffffffff821ce64c);
      }
      fn_8265B3C8(param_1,0xffffffff821ce654);
      fn_8265B200(param_1,0xffffffff821ce65c,param_3);
      fn_8265AF38(param_1);
    }
    if ((((*(uint *)(param_1 + 8) & 4) != 0) || ((uVar1 >> 0xc & 0xf) != 0)) &&
       ((*(uint *)(param_1 + 8) & 0x20) != 0)) {
      fn_8265B200(param_1,0xffffffff821ce840,
                        (longlong)((int)uVar8 >> 1) +
                        (ulonglong)((int)uVar8 < 0 && (param_3 & 1) != 0),
                        param_3 + ((longlong)((int)uVar8 >> 1) +
                                   (ulonglong)((int)uVar8 < 0 && (param_3 & 1) != 0) & 0x7fffffff) *
                                  -2);
    }
  }
  switch(uVar10) {
  case 0:
    if ((*(char *)(param_1 + 0xc) == '\0') || ((*(uint *)(param_1 + 8) & 4) == 0))
    goto LAB_8265adc4;
    fn_8265B200(param_1,0xffffffff821ce66c);
    uVar5 = 0xffffffff821ce664;
    goto code_r0x8265a334;
  case 1:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    uVar5 = 0xffffffff821ce66c;
    goto code_r0x8265a354;
  case 2:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    uVar5 = 0xffffffff821ce66c;
    goto code_r0x8265a3a0;
  case 3:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    fn_8265B200(param_1,0xffffffff821ce66c);
    uVar5 = 0xffffffff821ce684;
    goto code_r0x8265a3d8;
  case 4:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    fn_8265B200(param_1,0xffffffff821ce66c);
    uVar5 = 0xffffffff821ce694;
code_r0x8265a3d8:
    fn_8265B3C8(param_1,uVar5);
    fn_8265B200(param_1,0xffffffff821aa89c);
    if ((param_4[1] & 0x400) == 0) {
      fn_8265B200(param_1,0xffffffff821ce68c);
    }
    fn_8265B200(param_1,0xffffffff821ce690,param_4[1] >> 2 & 0xff);
    uVar8 = 0;
code_r0x8265a428:
    uVar1 = *param_4;
    uVar5 = 1;
    goto code_r0x8265a380;
  case 5:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    if ((param_4[1] & 0x400) == 0) {
      uVar5 = 0xffffffff821ce810;
    }
    else {
      uVar5 = 0xffffffff821ce808;
    }
code_r0x8265a354:
    fn_8265B200(param_1,uVar5);
    uVar5 = 0xffffffff821ce674;
code_r0x8265a364:
    fn_8265B3C8(param_1,uVar5);
    uVar1 = *param_4;
    uVar5 = 0;
    uVar8 = param_4[1] >> 9 & 1;
code_r0x8265a380:
    fn_8265B250(param_1,uVar1 >> 0xf & 1,uVar8,uVar5);
    goto LAB_8265adc4;
  case 6:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    if ((param_4[1] & 0x400) == 0) {
      uVar5 = 0xffffffff821ce810;
    }
    else {
      uVar5 = 0xffffffff821ce808;
    }
code_r0x8265a3a0:
    fn_8265B200(param_1,uVar5);
    uVar5 = 0xffffffff821ce67c;
    goto code_r0x8265a364;
  case 7:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    fn_8265B200(param_1,0xffffffff821ce66c);
    fn_8265B3C8(param_1,0xffffffff821ce69c);
    fn_8265B200(param_1,0xffffffff821aa89c);
    fn_8265B200(param_1,0xffffffff821ce6a4,*(ushort *)param_4 & 0x1f);
    fn_8265B200(param_1,0xffffffff821ce314,*param_4 & 0x1fff);
    uVar8 = *param_4 >> 0xd & 1;
    if (((*(uint *)(param_1 + 8) >> 6 & 1) != 0) || (uVar8 != 0)) {
      if (uVar8 == 0) {
        uVar5 = 0xffffffff82196f10;
      }
      else {
        uVar5 = 0xffffffff82196f18;
      }
      fn_8265B200(param_1,0xffffffff821ce6ac,uVar5);
    }
    uVar10 = param_4[1] >> 0xb & 1;
    if (uVar10 == 0) goto LAB_8265adc4;
    uVar5 = 0xffffffff821ce6b8;
    break;
  case 8:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    if ((*param_4 & 0x200000) == 0) {
      uVar5 = 0xffffffff821ce66c;
    }
    else if ((param_4[1] & 0x400) == 0) {
      uVar5 = 0xffffffff821ce810;
    }
    else {
      uVar5 = 0xffffffff821ce808;
    }
    fn_8265B200(param_1,uVar5);
    fn_8265B3C8(param_1,0xffffffff821ce6cc);
    fn_8265B200(param_1,0xffffffff821aa89c);
    fn_8265B200(param_1,0xffffffff821ce6a4,*(ushort *)param_4 & 0x1f);
    fn_8265B200(param_1,0xffffffff821ce314,*param_4 & 0x1fff);
    if ((param_4[1] & 0x800) == 0) goto LAB_8265adc4;
    uVar5 = 0xffffffff821ce6d4;
    goto code_r0x8265a63c;
  case 9:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    bVar11 = false;
    if ((*param_4 & 0x4000) == 0) {
      uVar5 = 0xffffffff821ce66c;
    }
    else {
      bVar11 = true;
      if ((param_4[1] & 0x400) == 0) {
        uVar5 = 0xffffffff821ce810;
      }
      else {
        uVar5 = 0xffffffff821ce808;
      }
    }
    fn_8265B200(param_1,uVar5);
    if (((*param_4 & 0x2000) != 0) || (bVar11)) {
      fn_8265B3C8(param_1,0xffffffff821ce6e8);
      fn_8265B200(param_1,0xffffffff821aa89c);
    }
    else {
      fn_8265B3C8(param_1,0xffffffff821ce6f0);
      fn_8265B200(param_1,0xffffffff821aa89c);
      if ((param_4[1] & 0x400) == 0) {
        uVar5 = 0xffffffff821ce68c;
      }
      else {
        uVar5 = 0xffffffff82196582;
      }
      fn_8265B200(param_1,0xffffffff821c4da8,uVar5);
      fn_8265B200(param_1,0xffffffff821ce6f8,param_4[1] >> 2 & 0xff);
    }
    uVar5 = 0xffffffff821ce314;
    uVar10 = *param_4 & 0x1fff;
    break;
  case 10:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    fn_8265B200(param_1,0xffffffff821ce66c);
    uVar5 = 0xffffffff821ce700;
    goto code_r0x8265a334;
  case 0xb:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    bVar11 = false;
    if ((*param_4 & 0x4000) == 0) {
      uVar5 = 0xffffffff821ce66c;
    }
    else {
      bVar11 = true;
      if ((param_4[1] & 0x400) == 0) {
        uVar5 = 0xffffffff821ce810;
      }
      else {
        uVar5 = 0xffffffff821ce808;
      }
    }
    fn_8265B200(param_1,uVar5);
    bVar2 = false;
    if (((*param_4 & 0x2000) != 0) || (bVar11)) {
      bVar2 = true;
    }
    if (bVar2) {
      fn_8265B3C8(param_1,0xffffffff821ce704);
      fn_8265B200(param_1,0xffffffff821aa89c);
    }
    else {
      fn_8265B3C8(param_1,0xffffffff821ce708);
      fn_8265B200(param_1,0xffffffff821aa89c);
      if ((param_4[1] & 0x400) == 0) {
        uVar5 = 0xffffffff821ce68c;
      }
      else {
        uVar5 = 0xffffffff82196582;
      }
      fn_8265B200(param_1,0xffffffff821c4da8,uVar5);
      fn_8265B200(param_1,0xffffffff821ce6f8,param_4[1] >> 2 & 0xff);
    }
    fn_8265B200(param_1,0xffffffff821ce314,*param_4 & 0x1fff);
    if ((*(uint *)(param_1 + 8) & 4) != 0) {
      if ((param_4[1] >> 1 & 1) == 0) {
        if ((*(uint *)(param_1 + 8) >> 6 & 1) == 0) goto code_r0x8265a8c8;
        uVar5 = 0xffffffff82196f10;
      }
      else {
        uVar5 = 0xffffffff82196f18;
      }
      fn_8265B200(param_1,0xffffffff821ce710,uVar5);
    }
code_r0x8265a8c8:
    uVar10 = param_4[1] >> 0xb & 1;
    if (uVar10 == 0) goto LAB_8265adc4;
    uVar5 = 0xffffffff821ce724;
    break;
  case 0xc:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    fn_8265B200(param_1,0xffffffff821ce66c);
    fn_8265B3C8(param_1,0xffffffff821ce738);
    fn_8265B200(param_1,0xffffffff821aa89c);
    uVar8 = param_4[1] >> 9 & 3;
    fn_8265B200(param_1,0xffffffff821c4da8,
                      (&lbl_831BD828)[(*(uint *)(param_1 + 8) >> 3 & 1) + uVar8 * 2]);
    if (uVar8 == 3) {
      fn_8265B200(param_1,0xffffffff821ce740,*param_4 & 7);
    }
    if ((param_4[1] & 0x100) == 0) goto LAB_8265adc4;
    uVar5 = 0xffffffff821ce744;
code_r0x8265a63c:
    fn_8265B200(param_1,uVar5);
    goto LAB_8265adc4;
  case 0xd:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    fn_8265B200(param_1,0xffffffff821ce66c);
    uVar5 = 0xffffffff821ce684;
    goto code_r0x8265a9bc;
  case 0xe:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    fn_8265B200(param_1,0xffffffff821ce66c);
    uVar5 = 0xffffffff821ce694;
code_r0x8265a9bc:
    fn_8265B3C8(param_1,uVar5);
    fn_8265B200(param_1,0xffffffff821aa89c);
    if ((param_4[1] & 0x400) == 0) {
      fn_8265B200(param_1,0xffffffff821ce68c);
    }
    fn_8265B200(param_1,0xffffffff821ce690,param_4[1] >> 2 & 0xff);
    uVar8 = 1;
    goto code_r0x8265a428;
  case 0xf:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    fn_8265B200(param_1,0xffffffff821ce66c);
    uVar5 = 0xffffffff821ce75c;
code_r0x8265a334:
    fn_8265B3C8(param_1,uVar5);
    goto LAB_8265adc4;
  default:
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_8265adc4;
    fn_8265B200(param_1,0xffffffff821ce66c);
    fn_8265B3C8(param_1,0xffffffff821ce764);
    uVar5 = 0xffffffff821ce778;
  }
  fn_8265B200(param_1,uVar5,uVar10);
LAB_8265adc4:
  fn_8265AF38(param_1);
  return *(undefined4 *)(param_1 + 0x202c);
}

