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
extern int fn_828627E0();
extern int fn_82862868();


void fn_828629D8(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar2 = (undefined4 *)(*(int *)(param_2 + 8) + *(int *)(param_1 + 0x54));
  puVar1 = (undefined4 *)(*(int *)(param_3 + 8) + *(int *)(param_1 + 0x54));
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  puVar1[2] = puVar2[2];
  puVar1[3] = puVar2[3];
  puVar1[4] = puVar2[4];
  puVar1[5] = puVar2[5];
  puVar1[6] = puVar2[6];
  if (*(short *)(param_1 + 0x38) != 0) {
    lVar3 = 0;
    do {
      fn_828627E0(lVar3 + (ulonglong)*(uint *)(param_1 + 0x34));
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 0x2c;
    } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 0x38));
  }
  iVar4 = 0;
  if (*(short *)(param_1 + 0x40) != 0) {
    lVar3 = 0;
    do {
      fn_82862868(lVar3 + (ulonglong)*(uint *)(param_1 + 0x3c));
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 0x14;
    } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 0x40));
  }
  return;
}

