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
extern int fn_82A28568();
extern int fn_82A28E60();
extern int fn_82A29CD8();
extern int fn_82A2A360();
extern int fn_82F68240();
extern int fn_82F68278();
extern int fn_82F7C758();
extern int fn_82F855A8();
extern int fn_82F85D70();
extern int fn_82F88588();


undefined4 fn_82F883F0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  
  iVar9 = 0;
  lVar1 = fn_82F855A8(param_1,0,1);
  if ((lVar1 == -1) || (lVar2 = fn_82F855A8(param_1,0,2), lVar2 == -1)) goto LAB_82f88468;
  lVar2 = param_2 - lVar2;
  if (lVar2 < 1) {
    if (lVar2 < 0) {
      lVar2 = fn_82F855A8(param_1,param_2,0);
      if (lVar2 == -1) goto LAB_82f88468;
      fn_82F85D70(param_1);
      lVar2 = fn_82A29CD8();
      if (lVar2 == 0) {
        puVar5 = (undefined4 *)fn_82F68240();
        *puVar5 = 0xd;
        puVar5 = (undefined4 *)fn_82F68278();
        uVar8 = thunk_FUN_82a2b798();
        *puVar5 = uVar8;
        iVar9 = -1;
        goto LAB_82f8855c;
      }
    }
  }
  else {
    uVar3 = fn_82A2A360();
    lVar4 = fn_82A28568(uVar3,8,0x1000);
    if (lVar4 == 0) {
      puVar5 = (undefined4 *)fn_82F68240();
      *puVar5 = 0xc;
      goto LAB_82f88468;
    }
    uVar3 = fn_82F88588(param_1,0x8000);
    do {
      uVar8 = 0x1000;
      if (lVar2 < 0x1000) {
        uVar8 = (undefined4)lVar2;
      }
      iVar6 = fn_82F7C758(param_1,lVar4,uVar8);
      if (iVar6 == -1) {
        piVar7 = (int *)fn_82F68278();
        if (*piVar7 == 5) {
          puVar5 = (undefined4 *)fn_82F68240();
          *puVar5 = 0xd;
        }
        iVar9 = -1;
        break;
      }
      lVar2 = lVar2 - iVar6;
    } while (0 < lVar2);
    fn_82F88588(param_1,uVar3);
    uVar3 = fn_82A2A360();
    fn_82A28E60(uVar3,0,lVar4);
LAB_82f8855c:
    if (iVar9 == -1) goto LAB_82f88468;
  }
  lVar1 = fn_82F855A8(param_1,lVar1,0);
  if (lVar1 != -1) {
    return 0;
  }
LAB_82f88468:
  puVar5 = (undefined4 *)fn_82F68240();
  return *puVar5;
}

