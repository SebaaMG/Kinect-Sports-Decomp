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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_827EF888();
extern int fn_82811080();
extern int fn_82811238();
extern int fn_82811438();


void fn_827EFE30(int param_1,ushort param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  short sVar10;
  ushort *puVar9;
  undefined4 auStack_60 [4];
  undefined1 auStack_50 [80];
  
  if (*(short *)(param_1 + 0x124) != 0) {
    sVar10 = *(short *)(param_1 + 0x124) + -1;
    *(short *)(param_1 + 0x124) = sVar10;
    if (sVar10 == 0) {
      iVar5 = *(int *)(param_1 + 0x114);
      *(undefined4 *)(param_1 + 0x11c) = 0;
      auStack_60[0] = 3;
      *(undefined4 *)(param_1 + 0x114) = 0;
      *(undefined4 *)(param_1 + 0x120) = 0;
      uVar3 = fn_82811438(auStack_50,auStack_60,0x10);
    }
    else {
      auStack_60[0] = 0;
      iVar5 = *(int *)(param_1 + 0x114);
      uVar3 = fn_82811438(auStack_50,auStack_60,0x10);
      puVar4 = (undefined4 *)
               fn_82811080(0xffffffff8320a3e0,
                                 (ulonglong)*(ushort *)(param_1 + 0x124) * 0xe + 2,uVar3);
      puVar6 = *(undefined8 **)(param_1 + 0x120);
      *(undefined4 **)(param_1 + 0x114) = puVar4;
      puVar9 = *(ushort **)(param_1 + 0x11c);
      puVar8 = (ushort *)(puVar4 + *(ushort *)(param_1 + 0x124));
      *(ushort **)(param_1 + 0x11c) = puVar8;
      puVar7 = puVar8 + *(ushort *)(param_1 + 0x124) + 1;
      *(ushort **)(param_1 + 0x120) = puVar7;
      if (puVar9 != (ushort *)0x0) {
        uVar1 = *puVar9;
        while (uVar1 < param_2) {
          *puVar4 = fn_827EF888;
          puVar4 = puVar4 + 1;
          *puVar8 = *puVar9;
          puVar8 = puVar8 + 1;
          *(undefined4 *)puVar7 = *(undefined4 *)puVar6;
          puVar2 = (undefined4 *)((int)puVar6 + 4);
          puVar6 = puVar6 + 1;
          *(undefined4 *)(puVar7 + 2) = *puVar2;
          puVar7 = puVar7 + 4;
          puVar9 = puVar9 + 1;
          uVar1 = *puVar9;
        }
        puVar9 = puVar9 + 1;
        if (*puVar9 != 0xffff) {
          puVar7 = puVar7 + -4;
          puVar4 = puVar4 + -1;
          do {
            puVar4 = puVar4 + 1;
            *puVar4 = fn_827EF888;
            *puVar8 = *puVar9;
            puVar8 = puVar8 + 1;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 4;
            *(undefined8 *)puVar7 = *puVar6;
            puVar9 = puVar9 + 1;
          } while (*puVar9 != 0xffff);
        }
      }
      *puVar8 = 0xffff;
      if (iVar5 == 0) {
        return;
      }
      auStack_60[0] = 3;
      uVar3 = fn_82811438(auStack_50,auStack_60,0x10);
    }
    fn_82811238(0xffffffff8320a3e0,iVar5,uVar3);
  }
  return;
}

