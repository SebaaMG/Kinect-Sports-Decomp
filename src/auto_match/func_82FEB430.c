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
extern int fn_82A1DDC0();
extern int fn_82FA5190();
extern int fn_8301A7B8();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642EC;


undefined8 fn_82FEB430(undefined8 param_1,ulonglong param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = 1;
  if ((*param_3 == 0) || ((param_2 & 0xffffffff) == 0)) {
    uVar7 = 0x1f;
  }
  else {
    RtlEnterCriticalSection(0xffffffff8326434c);
    puVar3 = (undefined4 *)fn_8301A7B8(lbl_832642EC,param_1);
    if (puVar3 == (undefined4 *)0x0) {
      RtlLeaveCriticalSection(0xffffffff8326434c);
      uVar7 = 0xf;
    }
    else {
      uVar1 = puVar3[0x17];
      puVar3[0x17] = (int)((ulonglong)uVar1 - 1);
      uVar2 = lbl_831BC768;
      if ((longlong)((ulonglong)uVar1 - 1) < 1) {
        (**(code **)*puVar3)(puVar3,0);
        fn_82FA5190(uVar2,puVar3);
      }
      uVar5 = 0;
      iVar6 = 0;
      piVar4 = puVar3 + 5;
      do {
        if (*piVar4 == 0) break;
        iVar6 = iVar6 + 1;
        uVar5 = uVar5 + 1;
        piVar4 = piVar4 + 2;
      } while (iVar6 < 4);
      if ((ulonglong)*param_3 < (uVar5 & 0xffffffff)) {
        uVar7 = 3;
        uVar5 = (ulonglong)*param_3;
      }
      *param_3 = (uint)uVar5;
      fn_82A1DDC0(param_2,puVar3 + 5,(uVar5 & 0x1fffffff) << 3);
      RtlLeaveCriticalSection(0xffffffff8326434c);
    }
  }
  return uVar7;
}

