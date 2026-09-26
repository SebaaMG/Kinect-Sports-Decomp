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
extern int fn_822315A0();
extern int fn_82509648();
extern int fn_8265C9E0();
extern unsigned int iStack_40;
extern unsigned int lbl_821ADB04;
extern unsigned int uStack_3c;
extern U64 storeWordConditionalIndexed();


void fn_822DB498(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int *piVar8;
  ulonglong uVar9;
  char in_RESERVE;
  byte bVar10;
  double dVar11;
  int iStack_40;
  uint uStack_3c;
  
  puVar5 = (undefined4 *)fn_8265C9E0(0x1c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
    bVar10 = 2;
  }
  else {
    puVar6 = puVar5 + 3;
    bVar10 = (puVar6 == (undefined4 *)0x0) << 1;
    puVar5[1] = 1;
    *puVar5 = &lbl_821ADB04;
    puVar5[2] = 1;
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x154);
  *(undefined4 **)(param_1 + 0x154) = puVar5;
  *(undefined4 **)(param_1 + 0x150) = puVar5 + 3;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  piVar2 = *(int **)(param_1 + 0x144);
  dVar11 = (double)*(float *)(*(int *)(*(int *)(param_1 + 0x9c) + 0x14) + 0x8bc);
  for (piVar8 = *(int **)(param_1 + 0x140); piVar8 != piVar2; piVar8 = piVar8 + 2) {
    uVar3 = piVar8[1];
    uVar9 = (ulonglong)uVar3;
    iStack_40 = *piVar8;
    if (uVar9 != 0) {
      do {
        puVar7 = (uint *)(uVar9 + 4);
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed((ulonglong)*puVar7 + 1,0,uVar9 + 4);
          *puVar7 = uVar4;
          bVar10 = 2;
        }
      } while (!(bool)(bVar10 >> 1 & 1));
    }
    iVar1 = *piVar8;
    uStack_3c = uVar3;
    fn_82509648((double)*(float *)(iVar1 + 0x10),dVar11,(double)*(float *)(iVar1 + 0x18),
                    (double)*(float *)(iVar1 + 0x1c),*(undefined4 *)(param_1 + 0x150),
                    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x9c) + 0x14) + 0x8c0),iVar1 + 4,
                    iVar1 + 8,&iStack_40,*(undefined4 *)(iVar1 + 0x14));
    if (uVar3 != 0) {
      fn_822315A0(uVar9);
    }
  }
  return;
}

