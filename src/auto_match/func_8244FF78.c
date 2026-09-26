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
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_8229AE10();
extern int fn_822ABA88();
extern int fn_822B67F8();
extern int fn_822B98A8();
extern int fn_82436240();
extern int fn_82672C20();
extern unsigned int iStack_2c;


void fn_8244FF78(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  uVar7 = 0;
  uVar8 = 0;
  do {
    iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 200);
    if ((ulonglong)(uint)(*(int *)(*(int *)(param_1 + 0x44) + 0xcc) - iVar1 >> 3) <=
        (uVar7 & 0xffffffff)) break;
    piVar3 = *(int **)(**(int **)(**(int **)(param_1 + 0x40) + 8) + *(int *)(uVar8 + iVar1) * 4);
    fn_822ABA88(*(undefined4 *)(piVar3[4] * 4 + *piVar3),0);
    uVar7 = uVar7 + 1;
    uVar2 = *(uint *)(*(int *)(param_1 + 0x44) + 0xb8);
    uVar4 = *(uint *)(*(int *)(*(int *)(param_1 + 0x44) + 200) + uVar8);
    fn_822B67F8();
    uVar5 = fn_822B98A8();
    fn_82436240(param_1,uVar7,(ulonglong)uVar4 * 0x18 + (ulonglong)uVar2 + 0x14,uVar5);
    uVar8 = uVar8 + 8;
  } while (uVar8 < 0x18);
  iVar1 = *(int *)(**(int **)(param_1 + 0x40) + 0xa0);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x40) != 1)) {
    iVar1 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
    if (*(int *)(iVar1 + 0x34) == 0) {
      puVar6 = (undefined4 *)fn_8229AE10(auStack_30,iVar1);
      fn_82672C20(*puVar6,0xffffffff821aa298,0,0);
      if (iStack_2c != 0) {
        fn_822315A0();
      }
      *(undefined4 *)(iVar1 + 0x34) = 1;
    }
  }
  return;
}

