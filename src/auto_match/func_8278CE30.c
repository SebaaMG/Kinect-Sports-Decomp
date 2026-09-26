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
extern int fn_826C6368();
extern unsigned int uStack_30;


uint * fn_8278CE30(int param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 uStack_30;
  
  puVar2 = uStack_30;
  puVar7 = (uint *)0x0;
  if ((*(ushort *)(param_1 + 0x2a) >> 0xb & 1) == 0) {
    bVar5 = true;
    bVar4 = false;
    uStack_30 = (uint *)0x0;
    puVar6 = uStack_30;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x1c);
    bVar5 = false;
    bVar4 = true;
    if (piVar1 != (int *)0x0) {
      *piVar1 = *piVar1 + 1;
    }
    puVar2 = *(uint **)(param_1 + 0x1c);
    puVar6 = puVar2;
    puVar7 = uStack_30;
  }
  uStack_30 = puVar6;
  if ((bVar5) && (puVar7 != (uint *)0x0)) {
    uVar3 = *puVar7;
    *puVar7 = (uint)((ulonglong)uVar3 - 1);
    if ((ulonglong)uVar3 - 1 == 0) {
      fn_826C6368(puVar7);
      fn_8267BE38(puVar7);
    }
  }
  if ((bVar4) && (puVar2 != (uint *)0x0)) {
    uVar3 = *puVar2;
    *puVar2 = (uint)((ulonglong)uVar3 - 1);
    if ((ulonglong)uVar3 - 1 == 0) {
      fn_826C6368(puVar2);
      fn_8267BE38(puVar2);
    }
  }
  return uStack_30;
}

