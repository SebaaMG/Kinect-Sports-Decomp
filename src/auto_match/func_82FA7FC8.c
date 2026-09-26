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
extern int fn_82A1E968();
extern unsigned int lbl_8326459C;


undefined8 fn_82FA7FC8(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong lStack_40;
  longlong lStack_38;
  
  puVar5 = param_1 + 3;
  RtlEnterCriticalSection(puVar5);
  for (piVar4 = (int *)*param_1; (piVar4 != (int *)param_1[1] && (*piVar4 != param_2));
      piVar4 = piVar4 + 10) {
  }
  uVar6 = -(uint)((int *)param_1[1] != piVar4) & (uint)(piVar4 + 2);
  if (uVar6 == 0) {
    RtlLeaveCriticalSection(puVar5);
    uVar2 = 2;
  }
  else {
    piVar4 = (int *)(uVar6 - 4);
    piVar3 = param_3 + -1;
    lVar7 = 5;
    do {
      piVar4 = piVar4 + 1;
      piVar3 = piVar3 + 1;
      *piVar3 = *piVar4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    if (((0 < param_3[2]) || (0 < param_3[1])) || (0 < param_3[3])) {
      fn_82A1E968(&lStack_40);
      iVar1 = (int)((float)(lStack_40 - *(longlong *)(uVar6 + 0x18)) / lbl_8326459C);
      lStack_38 = (longlong)iVar1;
      *param_3 = iVar1 + *param_3;
    }
    RtlLeaveCriticalSection(puVar5);
    uVar2 = 1;
  }
  return uVar2;
}

