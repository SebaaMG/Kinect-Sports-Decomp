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
extern int fn_82A34678();
extern int fn_82A37B08();
extern U64 storeWordConditionalIndexed();


undefined8 fn_82A37E70(longlong param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int *piVar4;
  uint *puVar5;
  undefined8 uVar6;
  char in_RESERVE;
  byte in_cr0;
  
  puVar2 = (undefined4 *)param_1;
  uVar6 = 0xffffffffffffffff;
  if (puVar2[3] != 0) {
    fn_82A37B08();
    for (piVar4 = (int *)puVar2[1]; (piVar4 != (int *)puVar2[2] && (*piVar4 != param_2));
        piVar4 = piVar4 + *(ushort *)(piVar4 + 1)) {
    }
    if (piVar4 != (int *)puVar2[2]) {
      uVar6 = fn_82A34678(*puVar2,piVar4 + 2,param_3);
    }
    do {
      puVar5 = (uint *)(param_1 + 0x30);
      lVar3 = (ulonglong)*puVar5 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar3,0,param_1 + 0x30);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar3 == 0) {
      NtSetEvent(puVar2[0xb],0);
    }
  }
  return uVar6;
}

