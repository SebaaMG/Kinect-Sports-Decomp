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


void fn_82D8EE48(undefined4 *param_1,int *param_2,int param_3,longlong param_4,int *param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (0 < (int)param_4) {
    iVar2 = 0;
    do {
      *(undefined4 *)(iVar2 + *param_5) = 0;
      iVar2 = iVar2 + 4;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  iVar2 = 0;
  if (0 < param_2[1]) {
    iVar3 = 0;
    do {
      uVar1 = *(ushort *)(*(int *)(*param_2 + iVar3) + 0xec);
      uVar4 = (uint)uVar1;
      if ((uint)*(byte *)(param_3 + 0x306) == (int)(uint)uVar1 >> 0xe) {
        uVar4 = (int)(uint)uVar1 >> 7;
      }
      uVar1 = *(ushort *)(*(int *)(*param_2 + iVar3) + 0xea);
      uVar5 = (uint)uVar1;
      if ((uint)*(byte *)(param_3 + 0x305) == (int)(uint)uVar1 >> 0xe) {
        uVar5 = (int)(uint)uVar1 >> 7;
      }
      uVar6 = uVar4 & 0x7f;
      if ((uVar4 & 0x7f) < (uVar5 & 0x7f)) {
        uVar6 = uVar5 & 0x7f;
      }
      if (uVar6 < 6) {
        *(undefined4 *)(*(int *)(*(int *)*param_1 + iVar3) * 4 + *param_5) = 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < param_2[1]);
  }
  return;
}

