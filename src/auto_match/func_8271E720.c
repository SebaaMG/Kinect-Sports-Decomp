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
extern int fn_82695370();
extern int fn_82695608();
extern int fn_826A7398();
extern int fn_826C1BA0();
extern int fn_826FCCF8();


undefined8
fn_8271E720(undefined8 param_1,int param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  char cVar2;
  int iVar4;
  uint uVar5;
  undefined8 uVar3;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
    iVar4 = fn_826A7398(param_2);
    pcVar8 = "disableFocusAutoRelease";
    pcVar10 = *(char **)*param_3;
    pcVar9 = pcVar10;
    do {
      cVar1 = *pcVar9;
      cVar2 = *pcVar8;
      if (cVar1 == '\0') break;
      pcVar9 = pcVar9 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      uVar5 = fn_82695608(param_4,param_2);
      uVar5 = (uVar5 & 3) << 0x16 | *(uint *)(iVar4 + 0xb00) & 0xff3fffff;
    }
    else {
      pcVar8 = "alwaysEnableArrowKeys";
      pcVar9 = pcVar10;
      do {
        cVar1 = *pcVar9;
        cVar2 = *pcVar8;
        if (cVar1 == '\0') break;
        pcVar9 = pcVar9 + 1;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar5 = fn_82695608(param_4,param_2);
        uVar5 = (uVar5 & 3) << 0x18 | *(uint *)(iVar4 + 0xb00) & 0xfcffffff;
      }
      else {
        pcVar8 = "alwaysEnableKeyboardPress";
        pcVar9 = pcVar10;
        do {
          cVar1 = *pcVar9;
          cVar2 = *pcVar8;
          if (cVar1 == '\0') break;
          pcVar9 = pcVar9 + 1;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          uVar5 = fn_82695608(param_4,param_2);
          uVar5 = (uVar5 & 3) << 0x1a | *(uint *)(iVar4 + 0xb00) & 0xf3ffffff;
        }
        else {
          pcVar8 = "disableFocusRolloverEvent";
          pcVar9 = pcVar10;
          do {
            cVar1 = *pcVar9;
            cVar2 = *pcVar8;
            if (cVar1 == '\0') break;
            pcVar9 = pcVar9 + 1;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 != cVar2) {
            pcVar8 = "disableFocusKeys";
            pcVar9 = pcVar10;
            do {
              cVar1 = *pcVar9;
              cVar2 = *pcVar8;
              if (cVar1 == '\0') break;
              pcVar9 = pcVar9 + 1;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 == cVar2);
            if (cVar1 == cVar2) {
              iVar6 = fn_82695608(param_4,param_2);
              *(uint *)(iVar4 + 0xb00) = iVar6 << 0x1e | *(uint *)(iVar4 + 0xb00) & 0x3fffffff;
              return 1;
            }
            pcVar9 = "modalClip";
            do {
              cVar1 = *pcVar10;
              cVar2 = *pcVar9;
              if (cVar1 == '\0') break;
              pcVar10 = pcVar10 + 1;
              pcVar9 = pcVar9 + 1;
            } while (cVar1 == cVar2);
            if (cVar1 == cVar2) {
              piVar7 = (int *)fn_82695370(param_4,param_2);
              if ((piVar7 == (int *)0x0) ||
                 (iVar6 = (**(code **)(*piVar7 + 0x9c))(piVar7), iVar6 != 2)) {
                piVar7 = (int *)0x0;
              }
              fn_826FCCF8(iVar4,piVar7);
              return 1;
            }
            goto LAB_8271e9a8;
          }
          uVar5 = fn_82695608(param_4,param_2);
          uVar5 = (uVar5 & 3) << 0x1c | *(uint *)(iVar4 + 0xb00) & 0xcfffffff;
        }
      }
    }
    uVar3 = 1;
    *(uint *)(iVar4 + 0xb00) = uVar5;
  }
  else {
LAB_8271e9a8:
    uVar3 = fn_826C1BA0(param_1,param_2,param_3,param_4,param_5);
  }
  return uVar3;
}

