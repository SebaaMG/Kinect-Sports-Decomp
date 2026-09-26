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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82ABF228();
extern int fn_82F66570();
extern int fn_82F68CC0();
extern int fn_82F6E7A8();


undefined8 fn_82ABF580(int param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 *puVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  longlong lVar9;
  
  pcVar8 = (char *)0x0;
  for (pcVar6 = param_2; (pcVar6 < param_2 + param_3 && (*pcVar6 != '\0')); pcVar6 = pcVar6 + 1) {
    pcVar8 = pcVar8 + 1;
  }
  pcVar6 = *(char **)(param_1 + 0x310);
  pcVar7 = pcVar6;
  if (pcVar6 == (char *)0x0) {
    uVar2 = fn_8265C940(pcVar8 + 1,0x24810000);
    *(int *)(param_1 + 0x310) = (int)uVar2;
    if ((uVar2 & 0xffffffff) != 0) {
      fn_82F68CC0(uVar2,param_2,pcVar8);
      pcVar8[*(int *)(param_1 + 0x310)] = '\0';
      pcVar6 = pcVar8;
LAB_82abf694:
      do {
        puVar4 = (undefined1 *)fn_82F66570(*(undefined4 *)(param_1 + 0x310),10);
        if (puVar4 == (undefined1 *)0x0) {
          return 0;
        }
        lVar9 = 0;
        pcVar6 = pcVar6 + (*(int *)(param_1 + 0x310) - (int)puVar4);
        *(int *)(param_1 + 0x308) = *(int *)(param_1 + 0x308) + 1;
        if (pcVar6 + -1 != (char *)0x0) {
          lVar9 = fn_8265C940(pcVar6,0x24810000);
          if (lVar9 == 0) {
            return 0xffffffff8007000e;
          }
          fn_82F68CC0(lVar9,puVar4 + 1,pcVar6);
        }
        uVar1 = *(undefined4 *)(param_1 + 0x310);
        *puVar4 = 0;
        *(int *)(param_1 + 0x310) = (int)lVar9;
        cVar5 = fn_82ABF228(param_1,uVar1);
        if (cVar5 == '\0') {
          fn_82F6E7A8(0xffffffff821cc884,uVar1);
        }
        else {
          *(int *)(param_1 + 0x30c) = *(int *)(param_1 + 0x30c) + 1;
        }
        fn_8265C990(uVar1,0x24810000);
        pcVar6 = pcVar6 + -1;
      } while (*(int *)(param_1 + 0x310) != 0);
      return 0;
    }
  }
  else {
    do {
      cVar5 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar5 != '\0');
    pcVar7 = pcVar7 + (-1 - (int)pcVar6);
    pcVar6 = pcVar7 + (int)pcVar8;
    iVar3 = fn_8265C940(pcVar6 + 1,0x24810000);
    if (iVar3 != 0) {
      fn_82F68CC0(iVar3,*(undefined4 *)(param_1 + 0x310),pcVar7);
      fn_82F68CC0(pcVar7 + iVar3,param_2,pcVar8);
      pcVar6[iVar3] = '\0';
      fn_8265C990(*(undefined4 *)(param_1 + 0x310),0x24810000);
      *(int *)(param_1 + 0x310) = iVar3;
      goto LAB_82abf694;
    }
  }
  *(int *)(param_1 + 0x308) = *(int *)(param_1 + 0x308) + 1;
  return 0xffffffff8007000e;
}

