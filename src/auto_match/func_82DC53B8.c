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
extern unsigned int *auStack_40;
extern int fn_830A2398();
extern int fn_830A4688();


void fn_82DC53B8(undefined4 *param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  uint auStack_40 [16];
  
  auStack_40[0] = param_1[3];
  uVar4 = (ulonglong)auStack_40[0];
  iVar1 = param_1[1];
  puVar7 = (uint *)*param_1;
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      iVar6 = iVar6 + 1;
      if (iVar6 < iVar1) {
        uVar3 = (ulonglong)puVar7[7];
        dataCacheBlockTouch(uVar3);
        dataCacheBlockTouch(uVar3 + 0x80);
        dataCacheBlockTouch((ulonglong)puVar7[9]);
        dataCacheBlockTouch(uVar4 + 0x200);
      }
      *(uint *)(param_2 + 0x38) = puVar7[3];
      *(uint *)(param_2 + 0x3c) = puVar7[4];
      *(uint *)(param_2 + 0x30) = (uint)*(ushort *)(puVar7 + 6) * 0x80 + param_1[2];
      *(uint *)(param_2 + 0x34) = (uint)*(ushort *)((int)puVar7 + 0x1a) * 0x80 + param_1[2];
      *(uint *)(param_2 + 0x50) = (uint)*(ushort *)(puVar7 + 6);
      *(uint *)(param_2 + 0x54) = (uint)*(ushort *)((int)puVar7 + 0x1a);
      *(uint *)(param_2 + 0x48) = puVar7[1];
      *(uint *)(param_2 + 0x4c) = puVar7[2];
      *(uint *)(param_2 + 0x58) = puVar7[2];
      psVar2 = (short *)*puVar7;
      if (*psVar2 == 0x16) {
        fn_830A4688(psVar2,param_2,1);
      }
      else {
        fn_830A2398(psVar2,*(undefined2 *)(puVar7 + 5),param_2,auStack_40);
      }
      uVar4 = (ulonglong)auStack_40[0];
      puVar7 = puVar7 + 7;
    } while (iVar6 < iVar1);
  }
  puVar5 = (undefined4 *)uVar4;
  if (*(char *)(param_1 + 6) == '\0') {
    *puVar5 = 0;
  }
  else if (0 < (longlong)((uint)param_1[4] - uVar4)) {
    puVar5[1] = (int)((uint)param_1[4] - uVar4);
    *(undefined1 *)((int)puVar5 + 3) = 2;
  }
  return;
}

