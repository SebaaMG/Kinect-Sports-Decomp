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
extern int fn_8227E950();
extern int fn_8227F7B8();
extern int fn_824BF8A8();
extern unsigned int iStack_20;
extern unsigned int uStack_1c;


void fn_8227E4B0(int param_1,ulonglong param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iStack_20;
  undefined4 uStack_1c;
  
  iVar8 = (int)param_3;
  if (param_4 == 0) {
    bVar3 = false;
    piVar7 = *(int **)(param_1 + 0x1c);
    for (piVar6 = piVar7; piVar6 != *(int **)(param_1 + 0x20); piVar6 = piVar6 + 2) {
      if (*piVar6 == 5) {
        if ((ulonglong)(uint)piVar6[1] == (param_2 & 0xffffffff)) {
          bVar3 = true;
        }
      }
      else if (*piVar6 == 4) {
        bVar3 = (bool)(param_2 != (uint)piVar6[1] & bVar3);
      }
    }
    for (; piVar7 != *(int **)(param_1 + 0x20); piVar7 = piVar7 + 2) {
      if (((ulonglong)(uint)piVar7[1] == (param_2 & 0xffffffff)) &&
         ((*piVar7 == 5 || (*piVar7 == 4)))) {
        if (iVar8 == 0) {
          if (bVar3) {
            return;
          }
        }
        else if (!bVar3) {
          return;
        }
        break;
      }
    }
    uStack_1c = (undefined4)param_2;
    iStack_20 = ((uint)LZCOUNT(iVar8) >> 5) + 4;
    fn_824BF8A8(param_1 + 0x1c,&iStack_20);
  }
  else {
    uVar4 = 0;
    uVar2 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2;
    if (uVar2 != 0) {
      iVar5 = 0;
      do {
        iVar1 = *(int *)(iVar5 + *(int *)(param_1 + 0xc));
        if ((ulonglong)*(uint *)(iVar1 + 0x14) == (param_2 & 0xffffffff)) {
          if ((iVar8 == 0) && (*(uint *)(param_1 + 0x2c) == uVar4)) {
            fn_8227E950(param_1,0,0xffffffffffffffff);
          }
          fn_8227F7B8(iVar1,param_3);
          return;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar4 < uVar2);
    }
  }
  return;
}

