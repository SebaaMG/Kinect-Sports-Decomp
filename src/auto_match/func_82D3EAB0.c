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


void fn_82D3EAB0(int param_1,ushort *param_2,ulonglong param_3,undefined4 *param_4)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  uint *puVar4;
  ulonglong uVar5;
  
  lVar2 = param_3 - 1;
  if (-1 < (int)lVar2) {
    if (3 < (int)param_3) {
      uVar5 = (param_3 & 0xffffffff) >> 2;
      puVar4 = param_4 + -1;
      lVar2 = lVar2 - (param_3 & 0xfffffffc);
      do {
        uVar1 = *param_2;
        iVar3 = ((int)(uint)uVar1 >> 2) * 0x30 + *(int *)(param_1 + 0x40);
        *param_4 = *(undefined4 *)((uVar1 & 3) * 4 + iVar3);
        puVar4[2] = *(uint *)(((uVar1 & 3) + 4) * 4 + iVar3);
        puVar4[3] = *(uint *)(((uVar1 & 3) + 8) * 4 + iVar3);
        puVar4[4] = uVar1 | 0x3f000000;
        uVar1 = param_2[1];
        iVar3 = ((int)(uint)uVar1 >> 2) * 0x30 + *(int *)(param_1 + 0x40);
        puVar4[5] = *(uint *)((uVar1 & 3) * 4 + iVar3);
        puVar4[6] = *(uint *)(((uVar1 & 3) + 4) * 4 + iVar3);
        puVar4[7] = *(uint *)(((uVar1 & 3) + 8) * 4 + iVar3);
        puVar4[8] = uVar1 | 0x3f000000;
        uVar1 = param_2[2];
        iVar3 = ((int)(uint)uVar1 >> 2) * 0x30 + *(int *)(param_1 + 0x40);
        puVar4[9] = *(uint *)((uVar1 & 3) * 4 + iVar3);
        puVar4[10] = *(uint *)(((uVar1 & 3) + 4) * 4 + iVar3);
        puVar4[0xb] = *(uint *)(((uVar1 & 3) + 8) * 4 + iVar3);
        puVar4[0xc] = uVar1 | 0x3f000000;
        uVar1 = param_2[3];
        iVar3 = ((int)(uint)uVar1 >> 2) * 0x30 + *(int *)(param_1 + 0x40);
        puVar4[0xd] = *(uint *)((uVar1 & 3) * 4 + iVar3);
        puVar4[0xe] = *(uint *)(((uVar1 & 3) + 4) * 4 + iVar3);
        puVar4[0xf] = *(uint *)(((uVar1 & 3) + 8) * 4 + iVar3);
        param_2 = param_2 + 4;
        puVar4 = puVar4 + 0x10;
        *puVar4 = uVar1 | 0x3f000000;
        param_4 = param_4 + 0x10;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (-1 < (int)lVar2) {
      lVar2 = lVar2 + 1;
      param_2 = param_2 + -1;
      puVar4 = param_4 + -1;
      do {
        param_2 = param_2 + 1;
        uVar1 = *param_2;
        iVar3 = ((int)(uint)uVar1 >> 2) * 0x30 + *(int *)(param_1 + 0x40);
        puVar4[1] = *(uint *)((uVar1 & 3) * 4 + iVar3);
        puVar4[2] = *(uint *)(((uVar1 & 3) + 4) * 4 + iVar3);
        puVar4[3] = *(uint *)(((uVar1 & 3) + 8) * 4 + iVar3);
        puVar4 = puVar4 + 4;
        *puVar4 = uVar1 | 0x3f000000;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  return;
}

