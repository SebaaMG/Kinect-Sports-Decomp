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
extern unsigned int *auStack_50;
extern int fn_827D50C0();
extern int fn_827D5100();
extern int fn_827D5E00();
extern int fn_827E8720();


longlong fn_827D6880(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_50 [80];
  
  iVar7 = param_1 + 0x88;
  lVar6 = 0;
  RtlEnterCriticalSection(iVar7);
  puVar1 = *(undefined4 **)(param_1 + 4);
  puVar5 = (undefined4 *)*puVar1;
  while (puVar5 != puVar1) {
    RtlLeaveCriticalSection(iVar7);
    lVar6 = lVar6 + 1;
    piVar2 = (int *)puVar5[2];
    uVar3 = (**(code **)(*piVar2 + 8))(piVar2,param_1);
    fn_827D50C0(piVar2[3],uVar3);
    iVar4 = fn_827D5100(piVar2[3]);
    if ((((int)uVar3 == 0x3e5) || ((int)uVar3 == 0x3e4)) || (iVar4 == 1)) {
      RtlEnterCriticalSection(iVar7);
      puVar5 = (undefined4 *)*puVar5;
    }
    else {
      fn_827D5E00(param_1,piVar2);
      RtlEnterCriticalSection(iVar7);
      puVar5 = (undefined4 *)fn_827E8720(auStack_50,(undefined4 *)(param_1 + 4),puVar5);
      puVar5 = (undefined4 *)*puVar5;
    }
    puVar1 = *(undefined4 **)(param_1 + 4);
  }
  RtlLeaveCriticalSection(iVar7);
  return lVar6;
}

