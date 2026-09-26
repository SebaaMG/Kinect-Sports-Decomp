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
extern int fn_826F6968();


longlong fn_826F6AB0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  undefined4 uVar6;
  
  iVar1 = *(int *)((int)param_1 + 0x7d4);
  uVar5 = 0;
  uVar6 = 0;
  if (iVar1 == 0) {
    uVar7 = 0;
    uVar8 = 1;
    lVar9 = param_1 + 0x7dc;
    do {
      if ((*(uint *)((int)param_1 + 0x7f8) & uVar8) != 0) {
        puVar4 = (undefined4 *)fn_826F6968(param_1);
        *puVar4 = (int)uVar5;
        *(char *)(puVar4 + 4) = (char)uVar7;
        puVar4[1] = ((undefined4 *)lVar9)[-1];
        uVar6 = *(undefined4 *)lVar9;
        *(undefined1 *)((int)puVar4 + 0xf) = 0x40;
        puVar4[2] = uVar6;
        *(short *)(puVar4 + 3) = (short)uVar5;
        *(uint *)((int)param_1 + 0x7f8) = *(uint *)((int)param_1 + 0x7f8) & ~(uint)uVar8;
      }
      uVar6 = (undefined4)uVar5;
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 8;
      uVar8 = (uVar8 & 0x7fffffff) << 1;
    } while ((uVar7 & 0xffffffff) < 4);
    iVar1 = *(int *)((int)param_1 + 0x7d4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar3 = (int)param_1;
  uVar2 = *(uint *)(iVar3 + 2000);
  iVar10 = uVar2 + 1;
  *(int *)(iVar3 + 0x7d4) = iVar1 + -1;
  *(int *)(iVar3 + 2000) = iVar10;
  if (iVar10 == 100) {
    *(undefined4 *)(iVar3 + 2000) = uVar6;
  }
  return (ulonglong)uVar2 * 0x14 + param_1;
}

