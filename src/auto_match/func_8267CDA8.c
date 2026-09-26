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


undefined8 fn_8267CDA8(int param_1,int param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  uVar6 = (ulonglong)*(uint *)(*(int *)(param_2 + 0x10) + 8);
  if (uVar6 == 0) {
    uVar5 = 0;
  }
  else {
    RtlEnterCriticalSection(param_1);
    puVar2 = (undefined4 *)fn_8267CD28(param_1);
    if (*(int *)(param_1 + 0x24) == 0) {
      puVar2[2] = 0;
      puVar2[1] = 0;
      *(undefined4 **)(param_1 + 0x20) = puVar2;
    }
    else {
      puVar2[2] = *(int *)(param_1 + 0x24);
      *(undefined4 **)(*(int *)(param_1 + 0x24) + 4) = puVar2;
      puVar2[1] = 0;
    }
    *(undefined4 **)(param_1 + 0x24) = puVar2;
    RtlLeaveCriticalSection(param_1);
    iVar3 = *(int *)(param_2 + 0x10);
    *(undefined4 *)(iVar3 + 8) = 0;
    uVar1 = uVar6;
    if (*(char *)(iVar3 + 4) == '\0') {
      fn_82A2A618(**(undefined4 **)(param_2 + 0x10),1,0);
    }
    else {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        fn_82A2A790(**(undefined4 **)(param_2 + 0x10));
      }
    }
    fn_8267EE78(param_2);
    uVar4 = 0xffffffffffffffff;
    if ((int)param_3 != -1) {
      uVar4 = param_3;
    }
    iVar3 = fn_82A1E650(*puVar2,uVar4);
    RtlEnterCriticalSection(param_1);
    if ((iVar3 == 0) || (iVar3 == 0x80)) {
      uVar5 = 1;
    }
    else {
      fn_8267C9A0(param_1,puVar2);
    }
    fn_8267C950(param_1,puVar2);
    RtlLeaveCriticalSection(param_1);
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      fn_8267C838(*(undefined4 *)(param_2 + 0x10));
    }
  }
  return uVar5;
}

