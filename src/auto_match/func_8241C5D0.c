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
extern int fn_82508078();
extern int fn_82526C70();
extern unsigned int lbl_83265A28;


void fn_8241C5D0(int *param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  char acStack_110 [256];
  
  switch(param_2) {
  case 2:
  case 3:
    iVar1 = *(int *)(param_1[6] * 0x1ac + param_1[2] + 0x18);
    if (iVar1 == 1) {
      iVar5 = *param_1;
      if (param_1 != *(int **)(iVar5 + 0x2b20)) {
        return;
      }
      pcVar2 = "bowleroutcomemisspins";
    }
    else {
      iVar5 = *param_1;
      if (iVar1 == 2) {
        if (param_1 != *(int **)(iVar5 + 0x2b20)) {
          return;
        }
        pcVar2 = "bowleroutcomemisssecond";
      }
      else {
        if (param_1 != *(int **)(iVar5 + 0x2b20)) {
          return;
        }
        pcVar2 = "bowleroutcomeconsecbad";
      }
    }
    break;
  case 4:
    iVar5 = *param_1;
    if (param_1 != *(int **)(iVar5 + 0x2b20)) {
      return;
    }
    pcVar2 = "bowleroutcomegutter";
    break;
  default:
    goto switchD_8241c614_caseD_5;
  case 6:
    iVar5 = *param_1;
    if (param_1 != *(int **)(iVar5 + 0x2b20)) {
      return;
    }
    pcVar2 = "bowleroutcomesplit";
    break;
  case 7:
    iVar5 = *param_1;
    if (param_1 != *(int **)(iVar5 + 0x2b20)) {
      return;
    }
    pcVar2 = "bowleroutcomesplit710";
    break;
  case 8:
    iVar5 = *param_1;
    if ((uint)param_1[0x97] < (uint)param_1[0x95] >> 1) {
      if (param_1 != *(int **)(iVar5 + 0x2b20)) {
        return;
      }
      pcVar2 = "bowlerpinsleftpositive";
    }
    else {
      if (param_1 != *(int **)(iVar5 + 0x2b20)) {
        return;
      }
      pcVar2 = "bowlerpinsleftnegative";
    }
    break;
  case 9:
    if (((param_1[0x19] != 0) || (param_1[0x1a] != 0)) && (param_1 == *(int **)(*param_1 + 0x2b20)))
    {
      fn_82508078(*(undefined4 *)(*param_1 + 0xa4),0xffffffff821b8444,0);
    }
    iVar5 = *(int *)(param_1[6] * 0x1ac + param_1[2] + 0x14);
    if (iVar5 == 1) {
      iVar5 = *param_1;
      if (param_1 != *(int **)(iVar5 + 0x2b20)) {
        return;
      }
      pcVar2 = "bowleroutcomestrike";
    }
    else if (iVar5 == 0xc) {
      iVar5 = *param_1;
      if (param_1 != *(int **)(iVar5 + 0x2b20)) {
        return;
      }
      pcVar2 = "bowlersummaryperfectgame";
    }
    else {
      fn_82526C70(acStack_110,0x100,0xffffffff821b8494);
      iVar5 = *param_1;
      if (param_1 != *(int **)(iVar5 + 0x2b20)) {
        return;
      }
      pcVar2 = acStack_110;
    }
    break;
  case 10:
    lVar4 = (longlong)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    lbl_83265A28 = (int)lVar4;
    if (lVar4 < 1) {
      return;
    }
    if (((param_1[0x19] != 0) || (param_1[0x1a] != 0)) && (param_1 == *(int **)(*param_1 + 0x2b20)))
    {
      fn_82508078(*(undefined4 *)(*param_1 + 0xa4),0xffffffff821b8444,0);
    }
    if (param_1 == *(int **)(*param_1 + 0x2b20)) {
      fn_82508078(*(undefined4 *)(*param_1 + 0xa4),0xffffffff821b84ac,0);
    }
    param_1[0x92] = 1;
    return;
  case 0xb:
    uVar3 = (longlong)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    lbl_83265A28 = (int)uVar3;
    uVar3 = (-uVar3 & ~uVar3 & 0xffffffff) >> 0x1f;
    if (uVar3 == 0) goto switchD_8241c614_caseD_d;
    if (uVar3 != 1) {
      return;
    }
    iVar5 = *param_1;
    if (param_1 != *(int **)(iVar5 + 0x2b20)) {
      return;
    }
    pcVar2 = "bowleroutcomesparefail";
    break;
  case 0xd:
switchD_8241c614_caseD_d:
    iVar5 = *param_1;
    if (param_1 != *(int **)(iVar5 + 0x2b20)) {
      return;
    }
    pcVar2 = "bowleroutcomeopenframe";
  }
  fn_82508078(*(undefined4 *)(iVar5 + 0xa4),pcVar2,0);
switchD_8241c614_caseD_5:
  return;
}

