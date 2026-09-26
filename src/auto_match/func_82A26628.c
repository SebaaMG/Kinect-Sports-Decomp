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
extern unsigned int iStack_2c;
extern unsigned int uStack_28;


undefined4 * fn_82A26628(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 *puStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 *apuStack_24 [3];
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(int *)(iVar1 + 0x4c) == 0) {
    puStack_30 = *(undefined4 **)(iVar1 + 0x48);
    if (puStack_30 == (undefined4 *)0x0) {
LAB_82a266d0:
      puStack_30 = (undefined4 *)0x0;
      uStack_28 = 0x100000;
      iVar1 = NtAllocateVirtualMemory
                        (&puStack_30,&uStack_28,0x60002000,4,*(undefined4 *)(iVar1 + 0x590));
      if (-1 < iVar1) {
        iStack_2c = 0x10000;
        iVar1 = NtAllocateVirtualMemory
                          (&puStack_30,&iStack_2c,0x60001000,4,
                           *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x590));
        if (-1 < iVar1) {
          *puStack_30 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48);
          *(undefined4 **)(*(int *)(param_1 + 0x18) + 0x48) = puStack_30;
          puStack_30[1] = uStack_28;
          puStack_30[2] = iStack_2c;
          apuStack_24[0] = puStack_30 + 4;
          goto LAB_82a26794;
        }
        NtFreeVirtualMemory(&puStack_30,&uStack_28,0x8000,
                            *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x590));
      }
    }
    else {
      if (puStack_30[2] == puStack_30[1]) goto LAB_82a266d0;
      iStack_2c = 0x10000;
      apuStack_24[0] = (undefined4 *)(puStack_30[2] + (int)puStack_30);
      iVar1 = NtAllocateVirtualMemory
                        (apuStack_24,&iStack_2c,0x60001000,4,*(undefined4 *)(iVar1 + 0x590));
      if (-1 < iVar1) {
        puStack_30[2] = puStack_30[2] + iStack_2c;
LAB_82a26794:
        puVar2 = (undefined4 *)(*(int *)(param_1 + 0x18) + 0x4c);
        if (apuStack_24[0] < (undefined4 *)(puStack_30[2] + (int)puStack_30)) {
          lVar4 = (ulonglong)
                  ((uint)(puStack_30[2] + (int)puStack_30 + (-1 - (int)apuStack_24[0])) >> 4) + 1;
          puVar3 = puVar2;
          do {
            puVar2 = apuStack_24[0];
            *puVar3 = puVar2;
            lVar4 = lVar4 + -1;
            puVar3 = puVar2;
            apuStack_24[0] = puVar2 + 4;
          } while (lVar4 != 0);
        }
        *puVar2 = 0;
        iVar1 = *(int *)(param_1 + 0x18);
        goto LAB_82a267dc;
      }
    }
    puVar2 = (undefined4 *)0x0;
  }
  else {
LAB_82a267dc:
    puVar2 = *(undefined4 **)(iVar1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x4c) = *puVar2;
  }
  return puVar2;
}

