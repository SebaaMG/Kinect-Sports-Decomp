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
extern unsigned int *auStack_94;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D9FE88();
extern int fn_82D9FFD0();
extern int fn_82DA00B0();
extern int fn_82DA0380();
extern unsigned int uStack_98;
extern unsigned int uStack_9c;


void fn_82DC8030(undefined8 param_1,int param_2,undefined8 param_3)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 *puStack_a0;
  uint uStack_9c;
  uint uStack_98;
  undefined1 auStack_94 [148];
  
  if (*(int *)(*(int *)(param_2 + 0x24) + 0x10) != 0) {
    puStack_a0 = auStack_94;
    lVar4 = 0;
    uStack_9c = 0;
    uStack_98 = 0x80000010;
    puVar2 = *(ushort **)(*(int *)(param_2 + 0x24) + 0x10);
    uVar1 = *puVar2;
    while (0x16 < uVar1) {
      iVar3 = fn_82CE5410();
      if (uStack_9c == (uStack_98 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar3 + 0x10),&puStack_a0,4);
      }
      *(ushort **)(puStack_a0 + uStack_9c * 4) = puVar2;
      lVar4 = (ulonglong)uStack_9c + 1;
      uStack_9c = (uint)lVar4;
      puVar2 = *(ushort **)(puVar2 + 10);
      uVar1 = *puVar2;
    }
    uVar6 = lVar4 - 1;
    if (-1 < (longlong)uVar6) {
      lVar4 = (uVar6 & 0x3fffffff) << 2;
      do {
        puVar2 = *(ushort **)(puStack_a0 + (int)lVar4);
        uVar5 = (uint)*puVar2;
        if (uVar5 - 0x17 < 6) {
          if (uVar5 == 0x17) {
            fn_82D9FFD0(param_1,puVar2,param_3);
          }
          else if (uVar5 == 0x18) {
            fn_82D9FE88(param_1,puVar2,param_3);
          }
          else if (uVar5 != 0x19) {
            if (uVar5 == 0x1a) {
              fn_82DA00B0(param_1,puVar2,param_3);
            }
            else if (uVar5 != 0x1b) {
              fn_82DA0380(param_1,puVar2,param_3);
            }
          }
        }
        uVar6 = uVar6 - 1;
        lVar4 = lVar4 + -4;
      } while (-1 < (longlong)uVar6);
    }
    iVar3 = fn_82CE5410();
    uStack_9c = 0;
    if ((uStack_98 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar3 + 0x10) + 0x10))
                (*(int **)(iVar3 + 0x10),puStack_a0,uStack_98 & 0x3fffffff,4);
    }
  }
  return;
}

