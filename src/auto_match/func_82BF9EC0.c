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
extern unsigned int *auStack_60;
extern int fn_82BF9620();
extern int fn_82F68CC0();
extern unsigned int lbl_8322BCF8;


ulonglong fn_82BF9EC0(uint *param_1,longlong param_2,ulonglong param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint auStack_60 [24];
  
  RtlEnterCriticalSection(0xffffffff83231d48);
  uVar5 = *param_1;
  uVar4 = (ulonglong)uVar5;
  uVar3 = (uint)*(ushort *)((int)param_1 + 6);
  uVar6 = (ulonglong)*(ushort *)(param_1 + 2);
  uVar7 = param_3 & 0xffffffff;
  while( true ) {
    if ((uVar7 == 0) || (uVar5 = (uint)uVar4, *(char *)((int)param_1 + 0xf) != '\0'))
    goto LAB_82bf9f84;
    if ((uVar6 & 0xffffffff) == 0x2000) {
      uVar6 = 0;
      uVar3 = (uint)(ushort)(&lbl_8322BCF8)[uVar3];
    }
    iVar2 = fn_82BF9620(uVar3,0,0,auStack_60);
    if (iVar2 == 0) break;
    uVar7 = 0x2000 - uVar6;
    if ((param_3 & 0xffffffff) < (0x2000 - uVar6 & 0xffffffff)) {
      uVar7 = param_3;
    }
    fn_82F68CC0(param_2,auStack_60[0] + uVar6,uVar7);
    param_3 = param_3 - uVar7;
    param_2 = uVar7 + param_2;
    uVar6 = uVar7 + uVar6;
    uVar4 = uVar4 - uVar7;
    uVar5 = (uint)uVar4;
    uVar7 = param_3;
  }
  *(undefined1 *)((int)param_1 + 0xf) = 1;
LAB_82bf9f84:
  *param_1 = uVar5;
  *(short *)((int)param_1 + 6) = (short)uVar3;
  *(short *)(param_1 + 2) = (short)uVar6;
  cVar1 = *(char *)((int)param_1 + 0xf);
  RtlLeaveCriticalSection(0xffffffff83231d48);
  return -(ulonglong)(cVar1 != '\0') & 0x8008;
}

