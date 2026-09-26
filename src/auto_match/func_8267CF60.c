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
extern int fn_8267C838();
extern int fn_8267C950();
extern int fn_8267C9A0();
extern int fn_8267CD28();
extern int fn_8267EE78();
extern int fn_82A1E650();
extern int fn_82A2A618();
extern int fn_82A2A790();


undefined8 fn_8267CF60(int *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  
  iVar1 = *param_1;
  uVar6 = 0;
  uVar7 = (ulonglong)*(uint *)(*(int *)(param_2 + 0x10) + 8);
  if (uVar7 == 0) {
    uVar6 = 0;
  }
  else {
    RtlEnterCriticalSection(iVar1);
    puVar3 = (undefined4 *)fn_8267CD28(iVar1);
    if (*(int *)(iVar1 + 0x24) == 0) {
      puVar3[2] = 0;
      puVar3[1] = 0;
      *(undefined4 **)(iVar1 + 0x20) = puVar3;
    }
    else {
      puVar3[2] = *(int *)(iVar1 + 0x24);
      *(undefined4 **)(*(int *)(iVar1 + 0x24) + 4) = puVar3;
      puVar3[1] = 0;
    }
    *(undefined4 **)(iVar1 + 0x24) = puVar3;
    RtlLeaveCriticalSection(iVar1);
    iVar4 = *(int *)(param_2 + 0x10);
    *(undefined4 *)(iVar4 + 8) = 0;
    uVar2 = uVar7;
    if (*(char *)(iVar4 + 4) == '\0') {
      fn_82A2A618(**(undefined4 **)(param_2 + 0x10),1,0);
    }
    else {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        fn_82A2A790(**(undefined4 **)(param_2 + 0x10));
      }
    }
    fn_8267EE78(param_2);
    uVar5 = 0xffffffffffffffff;
    if ((int)param_3 != -1) {
      uVar5 = param_3;
    }
    iVar4 = fn_82A1E650(*puVar3,uVar5);
    RtlEnterCriticalSection(iVar1);
    if ((iVar4 == 0) || (iVar4 == 0x80)) {
      uVar6 = 1;
    }
    else {
      fn_8267C9A0(iVar1,puVar3);
    }
    fn_8267C950(iVar1,puVar3);
    RtlLeaveCriticalSection(iVar1);
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      fn_8267C838(*(undefined4 *)(param_2 + 0x10));
    }
  }
  return uVar6;
}

