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
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_82687270();
extern int fn_82687F98();


void fn_826F3210(undefined4 *param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  ulonglong uVar9;
  
  RtlEnterCriticalSection(param_1 + 3);
  uVar1 = param_2 + 0x10 & 0xfffffff0;
  if ((uint)param_1[1] < uVar1) {
    lVar4 = (param_2 + 0x10 & 0x1ffffff0) << 3;
    if (param_1[2] == 0) {
      uVar2 = fn_8267B890(*param_1,lVar4,0);
      param_1[2] = uVar2;
      puVar5 = (undefined4 *)param_1[2];
      for (uVar9 = uVar1; uVar9 != 0; uVar9 = uVar9 - 1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0;
          puVar5[1] = 0;
        }
        puVar5 = puVar5 + 2;
      }
    }
    else {
      puVar3 = (undefined4 *)fn_8267B890(*param_1,lVar4,0);
      iVar7 = 0;
      puVar5 = puVar3;
      for (uVar9 = uVar1; uVar9 != 0; uVar9 = uVar9 - 1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0;
          puVar5[1] = 0;
        }
        puVar5 = puVar5 + 2;
      }
      uVar6 = 0;
      if (param_1[1] != 0) {
        do {
          fn_82687F98(iVar7 + (int)puVar3,param_1[2] + iVar7);
          uVar6 = uVar6 + 1;
          iVar7 = iVar7 + 8;
        } while (uVar6 < (uint)param_1[1]);
      }
      piVar8 = (int *)param_1[2];
      for (uVar9 = (ulonglong)(uint)param_1[1]; uVar9 != 0; uVar9 = uVar9 - 1) {
        if (*piVar8 != 0) {
          fn_82687270();
        }
        piVar8 = piVar8 + 2;
      }
      fn_8267BE38(param_1[2]);
      param_1[2] = puVar3;
    }
    param_1[1] = (int)uVar1;
  }
  fn_82687F98((ulonglong)(uint)param_1[2] + (param_2 & 0x1fffffff) * 8,param_3);
  RtlLeaveCriticalSection(param_1 + 3);
  return;
}

