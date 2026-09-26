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
extern int fn_82BC0088();
extern int fn_82BD06C0();
extern int fn_82BD0850();
extern int fn_82BD0948();
extern int fn_82BD0998();
extern unsigned int iStack_30;


void fn_82BD0F28(int param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  char cVar3;
  undefined4 *puVar2;
  int iVar4;
  int iVar5;
  int iStack_30;
  int aiStack_2c [11];
  
  iVar5 = (int)param_3;
  iVar4 = (int)param_2;
  if (iVar4 != iVar5) {
    cVar3 = fn_82BD0948();
    if (cVar3 == '\0') {
      fn_82BD0998(param_1,param_2,param_3);
      iVar1 = *(int *)(param_1 + 4);
      if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 4)) {
        puVar2 = (undefined4 *)(*(int *)(iVar1 + 8) + iVar4 * 4);
      }
      else {
        puVar2 = (undefined4 *)fn_82BC0088(iVar1,param_2);
      }
      fn_82BD06C0(*puVar2,&iStack_30,aiStack_2c);
      iVar1 = *(int *)(param_1 + 4);
      if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 4)) {
        puVar2 = (undefined4 *)(*(int *)(iVar1 + 8) + iVar4 * 4);
      }
      else {
        puVar2 = (undefined4 *)fn_82BC0088(iVar1,param_2);
      }
      fn_82BD0850(*puVar2,&iStack_30,aiStack_2c,*(undefined4 *)(param_1 + 8));
      *(int *)(iStack_30 * 4 + aiStack_2c[0]) = iVar5;
      iVar1 = *(int *)(param_1 + 4);
      if ((param_3 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 4)) {
        puVar2 = (undefined4 *)(*(int *)(iVar1 + 8) + iVar5 * 4);
      }
      else {
        puVar2 = (undefined4 *)fn_82BC0088(iVar1,param_3);
      }
      fn_82BD06C0(*puVar2,&iStack_30,aiStack_2c);
      iVar1 = *(int *)(param_1 + 4);
      if ((param_3 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 4)) {
        puVar2 = (undefined4 *)(*(int *)(iVar1 + 8) + iVar5 * 4);
      }
      else {
        puVar2 = (undefined4 *)fn_82BC0088(iVar1,param_3);
      }
      fn_82BD0850(*puVar2,&iStack_30,aiStack_2c,*(undefined4 *)(param_1 + 8));
      *(int *)(iStack_30 * 4 + aiStack_2c[0]) = iVar4;
    }
  }
  return;
}

