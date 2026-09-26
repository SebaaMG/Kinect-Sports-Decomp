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
extern int fn_8265C940();
extern int fn_82F691F0();
extern unsigned int lbl_8315D2EC;


undefined8 fn_82A1FC48(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  trapWord(6,(ulonglong)*(uint *)(param_1 + 4),0);
  if (*(int *)(param_1 + 0x34) != 0) {
    RtlEnterCriticalSection(param_1 + 0x18);
  }
  if (*(int *)(param_1 + 8) == 0) {
    if (*(int *)(param_1 + 0x34) != 0) {
      RtlLeaveCriticalSection(param_1 + 0x18);
    }
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x10) * 0x14;
    puVar2 = (undefined4 *)fn_8265C940(uVar3 + 4,lbl_8315D2EC);
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      RtlEnterCriticalSection(param_1 + 0x18);
    }
    *puVar2 = *(undefined4 *)(param_1 + 0xc);
    trapWord(6,(ulonglong)*(uint *)(param_1 + 0x10),0);
    *(undefined4 **)(param_1 + 0xc) = puVar2;
    lVar4 = (uVar3 & 0xffffffff) / (ulonglong)*(uint *)(param_1 + 0x10) - 1;
    for (lVar5 = lVar4; lVar5 != 0; lVar5 = lVar5 + -1) {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x10) * (int)lVar4 + (int)puVar2);
      lVar4 = lVar4 + -1;
      puVar1[1] = *(undefined4 *)(param_1 + 8);
      *(undefined4 **)(param_1 + 8) = puVar1 + 1;
    }
  }
  puVar2 = *(undefined4 **)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *puVar2;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(puVar2,0,*(undefined4 *)(param_1 + 0x10));
}

