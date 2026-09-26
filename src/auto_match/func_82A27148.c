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
extern unsigned int *auStack_2c;
extern int fn_82A26BB0();
extern unsigned int uStack_8;


undefined8 fn_82A27148(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puStack_30;
  undefined4 auStack_2c [9];
  undefined4 uStack_8;
  
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x14) & 0x40000) != 0) {
      uVar5 = KeGetCurrentProcessType();
      if (*(byte *)(param_1 + 0x17b) != uVar5) {
        KeBugCheckEx(0xf4,param_1,uStack_8,0x50f,0);
      }
    }
    puVar1 = *(undefined4 **)(param_1 + 0x58);
    while ((undefined4 *)(param_1 + 0x58) != puVar1) {
      puVar2 = (undefined4 *)*puVar1;
      auStack_2c[0] = 0;
      puStack_30 = puVar1;
      NtFreeVirtualMemory(&puStack_30,auStack_2c,0x8000,*(undefined4 *)(param_1 + 0x590));
      puVar1 = puVar2;
    }
    if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
      *(undefined4 *)(param_1 + 0x580) = 0;
    }
    puVar1 = *(undefined4 **)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x48) = 0;
    while (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*puVar1;
      auStack_2c[0] = 0;
      puStack_30 = puVar1;
      NtFreeVirtualMemory(&puStack_30,auStack_2c,0x8000,*(undefined4 *)(param_1 + 0x590));
      puVar1 = puVar2;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x590);
    uVar5 = 0x40;
    do {
      uVar5 = uVar5 + 0xff & 0xff;
      iVar4 = *(int *)((uVar5 + 0x18) * 4 + param_1);
      if (iVar4 != 0) {
        fn_82A26BB0(iVar4,uVar3);
      }
    } while (uVar5 != 0);
  }
  return 0;
}

