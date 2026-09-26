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
extern int fn_82422E78();
extern unsigned int lbl_82191C98;
extern unsigned int uStack_54;


undefined8 fn_82422D88(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  uint uStack_54;
  int aiStack_50 [20];
  
  puVar3 = &uStack_54;
  lVar2 = param_3 + 0x24;
  lVar6 = 10;
  do {
    lVar2 = lVar2 + 4;
    puVar3 = puVar3 + 1;
    *puVar3 = (uint)LZCOUNT(*(undefined4 *)lVar2) >> 5;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  uVar1 = 1;
  lVar2 = 0;
  *(undefined4 *)((int)aiStack_50 + (int)((param_2 & 0xffffffff) << 2)) = 1;
  do {
    iVar5 = *(int *)(&lbl_82191C98 + (int)((param_2 * 6 + lVar2 & 0xffffffff) << 2));
    if (-1 < iVar5) {
      if ((aiStack_50[iVar5] == 0) && (*(int *)((iVar5 + 10) * 4 + (int)param_3) != 0)) {
        aiStack_50[iVar5] = (int)uVar1;
        fn_82422E78(param_1,iVar5,aiStack_50,param_3);
      }
    }
    lVar2 = lVar2 + 1;
  } while ((int)lVar2 < 6);
  iVar5 = 0;
  piVar4 = aiStack_50;
  do {
    if (*piVar4 == 0) {
      return 0;
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar5 < 10);
  return 1;
}

