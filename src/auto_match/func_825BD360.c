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
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_8251FA58();
extern int fn_8257A9F0();
extern int fn_8265CA20();
extern unsigned int uStack_48;


void fn_825BD360(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar5;
  undefined4 *puVar6;
  ulonglong uVar4;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  
  uStack_48 = 0;
  puStack_50 = (undefined4 *)0x0;
  puStack_4c = (undefined4 *)0x0;
  RtlEnterCriticalSection(param_1 + 0x234);
  *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) + 1;
  puVar2 = (undefined4 *)0x0;
  puVar1 = (undefined4 *)0x0;
  if ((*(int *)(param_1 + 0x1e4) != 0) &&
     (uVar3 = 0,
     (ulonglong)*(uint *)(*(int *)(param_1 + 0x8c) + 0x24) +
     (ulonglong)*(uint *)(*(int *)(param_1 + 0x8c) + 0x14) != 0)) {
    iVar5 = 0;
    do {
      if (*(int *)(iVar5 + *(int *)(param_1 + 0x1e4)) != 0) {
        fn_8257A9F0(&puStack_50,iVar5 + *(int *)(param_1 + 0x1e4));
      }
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + 4;
      puVar2 = puStack_4c;
      puVar1 = puStack_50;
    } while (uVar3 < (uint)(*(int *)(*(int *)(param_1 + 0x8c) + 0x24) +
                           *(int *)(*(int *)(param_1 + 0x8c) + 0x14)));
  }
  RtlLeaveCriticalSection(param_1 + 0x234);
  for (puVar6 = puVar1; puVar6 != puVar2; puVar6 = puVar6 + 1) {
    fn_8251FA58(*puVar6);
  }
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x21c);
  uVar3 = *(uint *)(param_1 + 0x220);
  while ((uVar4 & 0xffffffff) != (ulonglong)uVar3) {
    fn_82365BD8(&puStack_50,uVar4);
    fn_825BD360(puStack_50);
    uVar4 = uVar4 + 8;
    if (puStack_4c != (undefined4 *)0x0) {
      fn_822315A0();
    }
  }
  if (puVar1 != (undefined4 *)0x0) {
    fn_8265CA20(puVar1);
  }
  return;
}

