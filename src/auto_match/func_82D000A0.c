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
extern int fn_82CFBBF0();
extern int fn_82D004B8();


void fn_82D000A0(int *param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar4 = 0;
  cVar2 = *param_2;
  pcVar1 = param_2;
  while (cVar2 != '\0') {
    pcVar1 = pcVar1 + 1;
    uVar4 = ((uVar4 & 0x7ffffff) * 0x20 - uVar4) + (longlong)cVar2;
    cVar2 = *pcVar1;
  }
  uVar4 = uVar4 & 0x7fffffff;
  if (param_1[2] < param_1[1] << 1) {
    fn_82D004B8(param_1,(param_1[2] + 1) * 2);
  }
  uVar5 = (ulonglong)(uint)param_1[2];
  uVar8 = uVar4 & uVar5;
  lVar6 = (uVar8 & 0x3fffffff) << 2;
  iVar7 = (int)lVar6;
  iVar3 = *(int *)(iVar7 + *param_1);
  while (iVar3 != -1) {
    iVar7 = (int)lVar6;
    if ((*(uint *)(*param_1 + iVar7) == uVar4) &&
       (iVar3 = fn_82CFBBF0(param_2,*(undefined4 *)
                                      ((int)((uVar5 + uVar8 + 1 & 0xffffffff) << 2) + *param_1)),
       iVar3 == 0)) goto LAB_82d00190;
    uVar5 = (ulonglong)(uint)param_1[2];
    uVar8 = uVar8 + 1 & uVar5;
    lVar6 = (uVar8 & 0x3fffffff) << 2;
    iVar7 = (int)lVar6;
    iVar3 = *(int *)(iVar7 + *param_1);
  }
  param_1[1] = param_1[1] + 1;
LAB_82d00190:
  *(int *)(iVar7 + *param_1) = (int)uVar4;
  *(char **)((int)(((uint)param_1[2] + uVar8 + 1 & 0xffffffff) << 2) + *param_1) = param_2;
  *(undefined4 *)
   ((int)((((ulonglong)(uint)param_1[2] + 1 & 0x7fffffff) * 2 + uVar8 & 0xffffffff) << 2) + *param_1
   ) = param_3;
  return;
}

