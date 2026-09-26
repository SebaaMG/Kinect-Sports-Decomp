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
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_827D5070();
extern int fn_827D6EF0();
extern int fn_827D9698();
extern int fn_827E2500();
extern int fn_827E2598();
extern int fn_827E2670();
extern int fn_827E26D0();
extern int fn_827E2790();
extern int fn_82F63CA0();
extern unsigned int iStack_64;


longlong fn_827DEF08(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  char cVar6;
  int *piVar4;
  undefined4 *puVar5;
  undefined8 uVar3;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [4];
  int iStack_64;
  
  RtlEnterCriticalSection(param_1 + 400);
  lVar7 = 0;
  piVar9 = *(int **)(param_1 + 0x168);
  if (piVar9 != *(int **)(param_1 + 0x16c)) {
    piVar8 = piVar9 + 1;
    do {
      iVar1 = *piVar9;
      lVar7 = lVar7 + 1;
      cVar6 = fn_827E2670(iVar1);
      if (cVar6 == '\0') {
        fn_827E2598(iVar1);
        fn_827D9698();
        piVar4 = (int *)fn_827D6EF0(param_2,auStack_70);
        puVar5 = (undefined4 *)fn_827E2790(auStack_68,iVar1);
        iVar2 = *piVar4;
        uVar3 = fn_827D5070(*puVar5);
        (**(code **)(iVar2 + 0x10))(piVar4,uVar3);
        if (iStack_64 != 0) {
          fn_822315A0();
        }
        fn_82F63CA0(piVar9,piVar8,(*(int *)(param_1 + 0x16c) - (int)piVar8 >> 2) << 2);
        *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + -4;
        if (iVar1 != 0) {
          fn_827E26D0(iVar1);
          fn_827E2500(iVar1);
        }
        *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + -1;
      }
      else {
        piVar9 = piVar9 + 1;
        piVar8 = piVar8 + 1;
      }
    } while (piVar9 != *(int **)(param_1 + 0x16c));
  }
  RtlLeaveCriticalSection(param_1 + 400);
  return lVar7;
}

