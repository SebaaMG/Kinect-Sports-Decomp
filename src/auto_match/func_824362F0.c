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
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_8229AE10();
extern int fn_822ABA88();
extern int fn_822B67F8();
extern int fn_822B98A8();
extern int fn_8242C1B8();
extern int fn_82436240();
extern int fn_82672C20();
extern unsigned int iStack_3c;


void fn_824362F0(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  bVar3 = false;
  uVar7 = 0;
  uVar6 = 0;
  do {
    piVar1 = *(int **)(param_1 + 0x40);
    if ((ulonglong)(uint)((piVar1[0x4a] - piVar1[0x49]) / 0x5c) <= (uVar7 & 0xffffffff)) break;
    piVar8 = (int *)(uVar6 + piVar1[0x49]);
    if (piVar8[0x13] == 1) {
      piVar1 = *(int **)(**(int **)(*piVar1 + 8) + *piVar8 * 4);
      fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),0);
      fn_822B67F8();
      uVar4 = fn_822B98A8();
      fn_82436240(param_1,uVar7 + 1,piVar8 + 0x12,uVar4);
      bVar3 = true;
    }
    uVar6 = uVar6 + 0x5c;
    uVar7 = uVar7 + 1;
  } while (uVar6 < 0x114);
  if ((*(undefined4 **)(param_1 + 0x40))[0x3e] == 0) {
                    /* WARNING: Subroutine does not return */
    fn_8242C1B8(**(undefined4 **)(param_1 + 0x40));
  }
  if (bVar3) {
    iVar2 = *(int *)(**(int **)(param_1 + 0x40) + 0xa0);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x40) != 1)) {
      iVar2 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
      if (*(int *)(iVar2 + 0x34) == 0) {
        puVar5 = (undefined4 *)fn_8229AE10(auStack_40,iVar2);
        fn_82672C20(*puVar5,0xffffffff821aa298,0,0);
        if (iStack_3c != 0) {
          fn_822315A0();
        }
        *(undefined4 *)(iVar2 + 0x34) = 1;
      }
    }
  }
  return;
}

