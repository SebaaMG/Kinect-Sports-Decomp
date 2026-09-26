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
extern int fn_8265C940();


undefined8 fn_82AA0FC0(char *param_1,int *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  
  if (*param_1 == '\0') {
    uVar3 = *(uint *)(param_1 + 4);
    iVar5 = fn_8265C940((ulonglong)uVar3 * 0x14,0x24870000);
    if (iVar5 == 0) {
      uVar4 = 0xffffffff8007000e;
    }
    else {
      uVar6 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        puVar9 = (undefined4 *)(iVar5 + -4);
        do {
          bVar1 = param_1[uVar6 + 0x148];
          iVar8 = 0;
          bVar2 = param_1[bVar1 + 0x48];
          lVar10 = 4;
          *(undefined2 *)(puVar9 + 1) = 0;
          *(ushort *)((int)puVar9 + 6) = (ushort)bVar2;
          puVar9 = puVar9 + 1;
          do {
            iVar7 = (uint)bVar1 * 4 + 0x92 + iVar8;
            iVar8 = iVar8 + 1;
            puVar9 = puVar9 + 1;
            *puVar9 = *(undefined4 *)(param_1 + iVar7 * 4);
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(param_1 + 4));
      }
      *param_3 = (int)((ulonglong)uVar3 * 0x14);
      uVar4 = 0;
      *param_2 = iVar5;
    }
  }
  else {
    uVar4 = 0xffffffff88760b74;
  }
  return uVar4;
}

