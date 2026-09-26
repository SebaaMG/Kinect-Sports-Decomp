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
extern int fn_82489D60();
extern int fn_82F63CA0();


void fn_82489928(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int aiStack_40 [16];
  
  piVar1 = (int *)param_1[0x15];
  piVar7 = (int *)param_1[0x14];
  piVar6 = piVar7;
  for (; piVar7 != piVar1; piVar7 = piVar7 + 1) {
    piVar6 = piVar6 + 1;
    if (*piVar7 == param_2) {
      fn_82F63CA0(piVar7,piVar6,(param_1[0x15] - (int)piVar6 >> 2) << 2);
      param_1[0x15] = param_1[0x15] + -4;
    }
  }
  iVar2 = *param_1;
  uVar5 = 0;
  uVar3 = param_1[1] - iVar2 >> 2;
  if (uVar3 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(*(int *)(iVar4 + iVar2) + 0x14) == param_2) {
        iVar2 = *(int *)(uVar5 * 4 + iVar2);
        if ((*(int *)(iVar2 + 4) != 0) && (*(int *)(iVar2 + 4) != 3)) {
          *(undefined4 *)(iVar2 + 0x24) = 1;
          return;
        }
        aiStack_40[0] = *(int *)(iVar2 + 0x14);
        fn_82489D60((ulonglong)*(uint *)(iVar2 + 0x20) + 0x20,aiStack_40);
        *(undefined4 *)(iVar2 + 0x14) = 0xffffffff;
        *(undefined4 *)(iVar2 + 4) = 0;
        return;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar5 < uVar3);
  }
  aiStack_40[0] = param_2;
  fn_82489D60(param_1 + 8,aiStack_40);
  return;
}

