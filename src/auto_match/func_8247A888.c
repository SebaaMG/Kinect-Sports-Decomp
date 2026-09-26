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
extern unsigned int *auStack_130;
extern int fn_8225F160();
extern int fn_8247ABF8();
extern int fn_82526C70();
extern int fn_82528BF8();


undefined8
fn_8247A888(int param_1,undefined4 *param_2,char *param_3,undefined8 param_4,undefined8 param_5)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  char cVar6;
  char cVar8;
  undefined4 uVar7;
  undefined1 auStack_130 [304];
  
  cVar3 = *param_3;
  cVar6 = 'g';
  cVar8 = cVar3;
  if (cVar3 == 'g') {
    cVar8 = 'g';
    pcVar5 = param_3;
    do {
      pcVar5 = pcVar5 + 1;
      if (cVar8 == '\0') goto LAB_8247a8f8;
      cVar6 = pcVar5[(int)"gamemode" - (int)param_3];
      cVar8 = *pcVar5;
    } while (cVar8 == cVar6);
  }
  if (cVar8 != cVar6) {
    cVar6 = 's';
    cVar8 = cVar3;
    if (cVar3 == 's') {
      cVar8 = 's';
      pcVar5 = param_3;
      do {
        pcVar5 = pcVar5 + 1;
        if (cVar8 == '\0') goto LAB_8247a980;
        cVar6 = pcVar5[(int)"sportselect" - (int)param_3];
        cVar8 = *pcVar5;
      } while (cVar8 == cVar6);
    }
    if (cVar8 == cVar6) {
LAB_8247a980:
      if ((char *)(param_1 + 0x8ac) == (char *)0x0) {
        return 1;
      }
      if (*(char *)(param_1 + 0x8ac) == '\0') {
        return 1;
      }
      fn_82528BF8(*(undefined4 *)(param_1 + 0x2050),param_1 + 0x8ac,param_4,param_5,0,1);
      uVar7 = *(undefined4 *)(param_1 + 0x788);
      goto LAB_8247abdc;
    }
    cVar6 = 'e';
    cVar8 = cVar3;
    if (cVar3 == 'e') {
      cVar8 = 'e';
      pcVar5 = param_3;
      do {
        pcVar5 = pcVar5 + 1;
        if (cVar8 == '\0') goto LAB_8247a8f8;
        cVar6 = pcVar5[(int)"eventselect" - (int)param_3];
        cVar8 = *pcVar5;
      } while (cVar8 == cVar6);
    }
    if (cVar8 != cVar6) {
      cVar6 = 'c';
      cVar8 = cVar3;
      if (cVar3 == 'c') {
        cVar8 = 'c';
        pcVar5 = param_3;
        do {
          pcVar5 = pcVar5 + 1;
          if (cVar8 == '\0') goto LAB_8247aa54;
          cVar6 = pcVar5[(int)"change_event" - (int)param_3];
          cVar8 = *pcVar5;
        } while (cVar8 == cVar6);
      }
      if (cVar8 == cVar6) {
LAB_8247aa54:
        piVar1 = (int *)fn_8225F160();
        if (*piVar1 == 0) {
          uVar2 = 0xffffffff821bd210;
        }
        else {
          if (*piVar1 != 2) {
            return 0;
          }
          uVar2 = 0xffffffff821bd21c;
        }
        fn_82528BF8(*(undefined4 *)(param_1 + 0x770),uVar2,param_4,param_5,0,1);
        return 2;
      }
      cVar6 = 'r';
      cVar8 = cVar3;
      if (cVar3 == 'r') {
        cVar8 = 'r';
        pcVar5 = param_3;
        do {
          pcVar5 = pcVar5 + 1;
          if (cVar8 == '\0') goto LAB_8247aae8;
          cVar6 = pcVar5[(int)"reviewteam" - (int)param_3];
          cVar8 = *pcVar5;
        } while (cVar8 == cVar6);
      }
      if (cVar8 == cVar6) {
LAB_8247aae8:
        if ((char *)(param_1 + 0xaac) == (char *)0x0) {
          return 1;
        }
        if (*(char *)(param_1 + 0xaac) == '\0') {
          return 1;
        }
        fn_82528BF8(*(undefined4 *)(param_1 + 0x2050),param_1 + 0xaac,param_4,param_5,0,1);
        *param_2 = *(undefined4 *)(param_1 + 0x790);
        fn_8247ABF8(param_1,param_4,param_5);
        return 2;
      }
      cVar8 = cVar3;
      cVar6 = 's';
      if (cVar3 == 's') {
        iVar4 = (int)"startgame" - (int)param_3;
        cVar8 = 's';
        do {
          param_3 = param_3 + 1;
          if (cVar8 == '\0') goto LAB_8247ab84;
          cVar3 = param_3[iVar4];
          cVar8 = *param_3;
          cVar6 = cVar3;
        } while (cVar8 == cVar3);
      }
      if (cVar8 != cVar6) {
        return 0;
      }
LAB_8247ab84:
      if ((char *)(param_1 + 0x9ac) == (char *)0x0) {
        return 1;
      }
      if (*(char *)(param_1 + 0x9ac) == '\0') {
        return 1;
      }
      fn_82526C70(auStack_130,0x100,0xffffffff821bdbc4,param_1 + 0x9ac,cVar3);
      fn_82528BF8(*(undefined4 *)(param_1 + 0x2050),auStack_130,param_4,param_5,0,1);
      if (param_2 == (undefined4 *)0x0) {
        return 2;
      }
      uVar7 = *(undefined4 *)(param_1 + 0x78c);
      goto LAB_8247abdc;
    }
  }
LAB_8247a8f8:
  if (((char *)(param_1 + 0x7ac) == (char *)0x0) || (*(char *)(param_1 + 0x7ac) == '\0')) {
    return 1;
  }
  fn_82528BF8(*(undefined4 *)(param_1 + 0x2050),param_1 + 0x7ac,param_4,param_5,0,1);
  uVar7 = *(undefined4 *)(param_1 + 0x784);
LAB_8247abdc:
  *param_2 = uVar7;
  return 2;
}

