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
extern int fn_8267C4F0();
extern int fn_82681728();
extern int fn_82681838();
extern int fn_826944C8();
extern int fn_82694B60();
extern int fn_826A7398();


void fn_8274BB58(int param_1)

{
  int iVar2;
  int *piVar3;
  undefined8 uVar1;
  longlong lVar4;
  int aiStack_20 [2];
  
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar2 = fn_826A7398();
    piVar3 = (int *)(**(code **)(*(int *)(iVar2 + 8) + 0xc))((int *)(iVar2 + 8),0x1b);
    fn_82681728(aiStack_20,(ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                      0xffffffff820071cc);
    if (piVar3 != (int *)0x0) {
      uVar1 = (**(code **)(*piVar3 + 8))(piVar3);
      fn_82694B60(aiStack_20,uVar1);
    }
    fn_82681838(*(undefined4 *)(param_1 + 4),aiStack_20);
    lVar4 = (ulonglong)*(uint *)(aiStack_20[0] + 8) - 1;
    *(int *)(aiStack_20[0] + 8) = (int)lVar4;
    if (lVar4 == 0) {
      fn_826944C8(aiStack_20[0]);
    }
    if (piVar3 != (int *)0x0) {
      fn_8267C4F0(piVar3);
    }
  }
  return;
}

