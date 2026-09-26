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


void fn_82D8EF28(undefined4 *param_1,int *param_2,int *param_3,int *param_4,byte *param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  if (0 < param_2[1]) {
    iVar8 = 0;
    do {
      iVar2 = *(int *)(*param_2 + iVar8);
      uVar1 = *(ushort *)(iVar2 + 0xec);
      uVar4 = (uint)uVar1;
      iVar3 = *(int *)(*(int *)*param_1 + iVar8);
      if ((uint)param_5[1] == (int)(uint)uVar1 >> 0xe) {
        uVar4 = (int)(uint)uVar1 >> 7;
      }
      uVar1 = *(ushort *)(iVar2 + 0xea);
      uVar5 = (uint)uVar1;
      if ((uint)*param_5 == (int)(uint)uVar1 >> 0xe) {
        uVar5 = (int)(uint)uVar1 >> 7;
      }
      uVar6 = uVar4 & 0x7f;
      if ((uVar4 & 0x7f) < (uVar5 & 0x7f)) {
        uVar6 = uVar5 & 0x7f;
      }
      if (uVar6 < 6) {
        *(undefined4 *)(iVar3 * 4 + *param_3) = 1;
      }
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb0);
      if (*(ushort *)(iVar2 + 0xb0) == 0) {
        uVar4 = 1;
      }
      iVar3 = iVar3 * 4;
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 4;
      *(uint *)(iVar3 + *param_4) = *(int *)(iVar3 + *param_4) + uVar4;
    } while (iVar7 < param_2[1]);
  }
  return;
}

