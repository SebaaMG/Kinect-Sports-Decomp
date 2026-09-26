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
extern int fn_82D01948();
extern int fn_82D03E40();
extern unsigned int iStack_64;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;


void fn_82CF8848(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  iVar4 = param_1 + 4;
  RtlEnterCriticalSection(iVar4);
  fn_82D03E40(param_1 + 0x2c,param_2);
  iVar3 = 0;
  iVar6 = 0;
  iVar7 = 0;
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x208)) {
    piVar5 = (int *)(param_1 + 0x17c);
    do {
      iStack_70 = 0;
      iStack_6c = 0;
      uStack_68 = 0;
      iStack_64 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      piVar1 = (int *)*piVar5;
      fn_82D01948(piVar1,&iStack_70);
      if ((*piVar1 != 0) || (bVar2 = false, (uint)piVar1[8] < (uint)piVar1[9])) {
        bVar2 = true;
      }
      if ((bVar2) && (*(uint *)(param_2 + 0x14) < (uint)piVar1[1])) {
        *(int *)(param_2 + 0x14) = piVar1[1];
      }
      iVar8 = iVar8 + 1;
      piVar5 = piVar5 + 1;
      iVar7 = iStack_64 + iVar7;
      iVar6 = iStack_6c + iVar6;
      iVar3 = iStack_70 + iVar3;
    } while (iVar8 < *(int *)(param_1 + 0x208));
  }
  *(int *)(param_2 + 4) = (*(int *)(param_2 + 4) - iVar3) + iVar6;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + iVar7;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x24);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x28) + 0x18))();
  if (iVar3 == -1) {
    *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
    RtlLeaveCriticalSection(iVar4);
  }
  else {
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0xc) + iVar3;
    RtlLeaveCriticalSection(iVar4);
  }
  return;
}

