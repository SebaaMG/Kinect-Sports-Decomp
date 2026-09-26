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
extern int fn_826914F8();
extern unsigned int lbl_831E7E60;


undefined4 fn_82692008(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined1 auStack_30 [48];
  
  uVar5 = (ulonglong)lbl_831E7E60;
  RtlEnterCriticalSection(uVar5 + 0x2c4);
  uVar1 = param_2 + 1 << (*(uint *)(param_1 + 0xc) & 0x3f);
  uVar8 = (ulonglong)uVar1;
  uVar6 = ((ulonglong)uVar1 & 0x3fffffff) << 2;
  if (uVar6 < 0x1001) {
    uVar6 = 0x1000;
  }
  iVar3 = fn_826914F8(param_1,param_2,uVar6 + 0xfff & 0xfffff000,0x1000,0,auStack_30);
  if (iVar3 == 0) {
    uVar9 = 0;
  }
  else {
    trapWord(6,uVar8,0);
    uVar7 = (ulonglong)*(uint *)(iVar3 + 0x1c);
    uVar6 = *(uint *)(iVar3 + 0x18) / uVar8;
    piVar4 = (int *)(param_2 * 8 + param_1 + 0x1b4);
    if ((int)uVar6 != 0) {
      do {
        piVar2 = (int *)uVar7;
        piVar2[2] = iVar3;
        *piVar2 = *piVar4;
        piVar2[1] = (int)piVar4;
        *(int **)(*piVar4 + 4) = piVar2;
        *piVar4 = (int)piVar2;
        uVar7 = uVar7 + uVar8;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    *(int *)(param_1 + 0x210) = *(int *)(iVar3 + 0x18) + *(int *)(param_1 + 0x210);
    uVar9 = *(undefined4 *)(iVar3 + 0x1c);
  }
  RtlLeaveCriticalSection(uVar5 + 0x2c4);
  return uVar9;
}

