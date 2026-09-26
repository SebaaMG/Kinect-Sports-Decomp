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
extern int fn_82B1A538();
extern unsigned int iStack_28;
extern unsigned int iStack_30;
extern unsigned int iStack_38;
extern unsigned int iStack_40;
extern unsigned int uStack_2c;
extern unsigned int uStack_3c;


/* WARNING: Removing unreachable block (ram,0x82b23f64) */
/* WARNING: Removing unreachable block (ram,0x82b23fa0) */

undefined8 fn_82B23E40(undefined8 param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  bool bVar5;
  uint uVar4;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iStack_40;
  uint uStack_3c;
  int iStack_38;
  int iStack_30;
  uint uStack_2c;
  int iStack_28;
  
  iStack_38 = 0;
  iStack_28 = 0;
  uStack_3c = -(uint)((*(uint *)(param_2 + 4) & 1) == 0) & *(uint *)(param_2 + 4);
  uStack_2c = -(uint)((*(uint *)(param_3 + 4) & 1) == 0) & *(uint *)(param_3 + 4);
  iStack_40 = param_2;
  iStack_30 = param_3;
  piVar8 = (int *)0x0;
  while( true ) {
    if ((uStack_3c == 0) || (bVar5 = false, iStack_38 == *(int *)(uStack_3c + 8))) {
      bVar5 = true;
    }
    if (bVar5) break;
    if ((uStack_2c == 0) || (bVar5 = false, iStack_28 == *(int *)(uStack_2c + 8))) {
      bVar5 = true;
    }
    if (bVar5) break;
    piVar2 = (int *)fn_82B1A538(&iStack_40);
    piVar3 = (int *)fn_82B1A538(&iStack_30);
    if (*piVar2 != *piVar3) {
      return 0;
    }
    if (piVar2[1] != piVar3[1]) {
      return 0;
    }
    uVar1 = piVar2[2];
    uVar6 = piVar3[2];
    if (uVar1 != uVar6) {
      if (piVar8 != (int *)0x0) {
        return 0;
      }
      uVar7 = 4;
      uVar4 = uVar1;
      if ((uVar1 & 4) != 0) {
        uVar4 = uVar1 - 4;
        uVar7 = 0;
      }
      piVar8 = piVar3;
      if ((uVar4 | uVar7) != uVar6) {
        uVar4 = 4;
        if ((uVar6 & 4) != 0) {
          uVar6 = uVar6 - 4;
          uVar4 = 0;
        }
        piVar8 = piVar2;
        if ((uVar6 | uVar4) != uVar1) {
          return 0;
        }
      }
    }
  }
  if (piVar8 != (int *)0x0) {
    if ((uStack_3c == 0) || (bVar5 = false, iStack_38 == *(int *)(uStack_3c + 8))) {
      bVar5 = true;
    }
    if (bVar5) {
      if ((uStack_2c == 0) || (bVar5 = false, iStack_28 == *(int *)(uStack_2c + 8))) {
        bVar5 = true;
      }
      if (bVar5) {
        return 1;
      }
    }
  }
  return 0;
}

