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
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_82681728();
extern int fn_82681838();
extern int fn_826944C8();
extern int fn_82694B60();
extern unsigned int iStack_20;
extern unsigned int uStack_1c;
extern U64 storeWordConditionalIndexed();


void fn_826A81F8(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  char in_RESERVE;
  byte in_cr0;
  int iStack_20;
  uint uStack_1c;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x74) + 0x40))();
    piVar3 = (int *)(**(code **)(*(int *)(iVar2 + 8) + 0xc))((int *)(iVar2 + 8),0x1b);
    fn_82681728(&iStack_20,(ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                      0xffffffff820071cc);
    if (piVar3 != (int *)0x0) {
      puVar4 = (uint *)(**(code **)(*piVar3 + 0x14))(&uStack_1c,piVar3);
      fn_82694B60(&iStack_20,((ulonglong)*puVar4 & 0xfffffffc) + 8);
      lVar5 = ((ulonglong)uStack_1c & 0xfffffffc) + 4;
      do {
        puVar4 = (uint *)lVar5;
        uVar6 = (ulonglong)*puVar4;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar6 - 1,0,lVar5);
          *puVar4 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if (uVar6 == 1) {
        fn_8267BE38();
      }
    }
    fn_82681838(*(undefined4 *)(param_1 + 4),&iStack_20);
    lVar5 = (ulonglong)*(uint *)(iStack_20 + 8) - 1;
    *(int *)(iStack_20 + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(iStack_20);
    }
    if (piVar3 != (int *)0x0) {
      fn_8267C4F0(piVar3);
    }
  }
  return;
}

