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
extern unsigned int *auStack_40;
extern int fn_82695598();
extern int fn_826959C8();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_82696480();
extern int fn_826A7398();
extern int fn_826F7A80();
extern int fn_82713EE8();


undefined8 fn_8271F258(undefined8 param_1,int param_2,undefined4 *param_3,undefined1 *param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  undefined1 auStack_40 [64];
  
  if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) != '\x01') {
LAB_8271f53c:
    uVar4 = fn_82713EE8(param_1,param_2,param_3,param_4);
    return uVar4;
  }
  iVar3 = fn_826A7398(param_2);
  pcVar5 = "captureFocus";
  pcVar7 = *(char **)*param_3;
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    cVar2 = *pcVar5;
    if (cVar1 == '\0') break;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    uVar4 = 0xffffffff8271ed68;
LAB_8271f2d8:
    uVar4 = fn_82695598(auStack_40,param_2 + 0x78,uVar4);
    fn_82695FA0(param_4,uVar4);
    fn_82696330(auStack_40);
    return 1;
  }
  pcVar5 = "disableFocusAutoRelease";
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    cVar2 = *pcVar5;
    if (cVar1 == '\0') break;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    uVar8 = *(uint *)(iVar3 + 0xb00) >> 0x16 & 3;
  }
  else {
    pcVar5 = "alwaysEnableArrowKeys";
    pcVar6 = pcVar7;
    do {
      cVar1 = *pcVar6;
      cVar2 = *pcVar5;
      if (cVar1 == '\0') break;
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      uVar8 = *(byte *)(iVar3 + 0xb00) & 3;
    }
    else {
      pcVar5 = "alwaysEnableKeyboardPress";
      pcVar6 = pcVar7;
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar8 = *(uint *)(iVar3 + 0xb00) >> 0x1a & 3;
      }
      else {
        pcVar5 = "disableFocusRolloverEvent";
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar6;
          cVar2 = *pcVar5;
          if (cVar1 == '\0') break;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          uVar8 = *(uint *)(iVar3 + 0xb00) >> 0x1c & 3;
        }
        else {
          pcVar5 = "disableFocusKeys";
          pcVar6 = pcVar7;
          do {
            cVar1 = *pcVar6;
            cVar2 = *pcVar5;
            if (cVar1 == '\0') break;
            pcVar6 = pcVar6 + 1;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 != cVar2) {
            pcVar5 = "modalClip";
            pcVar6 = pcVar7;
            do {
              cVar1 = *pcVar6;
              cVar2 = *pcVar5;
              if (cVar1 == '\0') break;
              pcVar6 = pcVar6 + 1;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 == cVar2);
            if (cVar1 == cVar2) {
              uVar4 = fn_826F7A80();
              fn_82696480(param_4,uVar4);
              return 1;
            }
            pcVar6 = "moveFocus";
            do {
              cVar1 = *pcVar7;
              cVar2 = *pcVar6;
              if (cVar1 == '\0') break;
              pcVar7 = pcVar7 + 1;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 == cVar2);
            if (cVar1 != cVar2) goto LAB_8271f53c;
            uVar4 = 0xffffffff8271ee88;
            goto LAB_8271f2d8;
          }
          uVar8 = *(uint *)(iVar3 + 0xb00) >> 0x1e;
        }
      }
    }
  }
  if (uVar8 != 3) {
    if (uVar8 == 0) {
      fn_826959C8(param_4);
      *param_4 = 0;
      return 1;
    }
    if (uVar8 != 3) goto LAB_8271f364;
  }
  uVar8 = 0xffffffff;
LAB_8271f364:
  fn_826959C8(param_4);
  *param_4 = 2;
  param_4[4] = uVar8 == 1;
  return 1;
}

