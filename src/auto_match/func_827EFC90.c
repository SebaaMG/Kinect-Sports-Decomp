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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_50;
extern int fn_827EF888();
extern int fn_82811080();
extern int fn_82811238();
extern int fn_82811438();
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_827EFC90(int param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_50 [80];
  
  iVar2 = *(int *)(param_1 + 0x114);
  uStack_60 = 0;
  *(short *)(param_1 + 0x124) = *(short *)(param_1 + 0x124) + 1;
  uVar4 = fn_82811438(auStack_50,&uStack_60,0x10);
  puVar5 = (undefined4 *)
           fn_82811080(0xffffffff8320a3e0,(ulonglong)*(ushort *)(param_1 + 0x124) * 0xe + 2,
                             uVar4);
  puVar10 = *(ushort **)(param_1 + 0x11c);
  puVar6 = *(undefined4 **)(param_1 + 0x120);
  *(undefined4 **)(param_1 + 0x114) = puVar5;
  puVar9 = (ushort *)(puVar5 + *(ushort *)(param_1 + 0x124));
  *(ushort **)(param_1 + 0x11c) = puVar9;
  puVar8 = puVar9 + *(ushort *)(param_1 + 0x124) + 1;
  *(ushort **)(param_1 + 0x120) = puVar8;
  if (puVar10 != (ushort *)0x0) {
    uVar1 = *puVar10;
    while (uVar1 < param_2) {
      *puVar5 = fn_827EF888;
      puVar5 = puVar5 + 1;
      *puVar9 = *puVar10;
      puVar9 = puVar9 + 1;
      *(undefined4 *)puVar8 = *puVar6;
      puVar3 = puVar6 + 1;
      puVar6 = puVar6 + 2;
      *(undefined4 *)(puVar8 + 2) = *puVar3;
      puVar8 = puVar8 + 4;
      puVar10 = puVar10 + 1;
      uVar1 = *puVar10;
    }
  }
  *puVar5 = fn_827EF888;
  *puVar9 = param_2;
  puVar9 = puVar9 + 1;
  *(ulonglong *)puVar8 = CONCAT44(param_3,param_4);
  if ((puVar10 != (ushort *)0x0) && (*puVar10 != 0xffff)) {
    puVar7 = (undefined8 *)(puVar6 + -2);
    do {
      puVar5 = puVar5 + 1;
      *puVar5 = fn_827EF888;
      *puVar9 = *puVar10;
      puVar9 = puVar9 + 1;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 4;
      *(undefined8 *)puVar8 = *puVar7;
      puVar10 = puVar10 + 1;
    } while (*puVar10 != 0xffff);
  }
  *puVar9 = 0xffff;
  if (iVar2 != 0) {
    uStack_60 = 3;
    uStack_5c = param_4;
    uVar4 = fn_82811438(auStack_50,&uStack_60,0x10);
    fn_82811238(0xffffffff8320a3e0,iVar2,uVar4);
  }
  return;
}

