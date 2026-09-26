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


ulonglong fn_82A21508(int param_1,code *param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  RtlEnterCriticalSection();
  uVar6 = *(uint *)(param_1 + 0x20);
  uVar9 = 0;
  if (uVar6 != 0) {
    iVar8 = 0;
    do {
      uVar10 = 0;
      iVar4 = *(int *)(iVar8 + *(int *)(param_1 + 0x1c));
      if (*(short *)(iVar4 + 8) != 0) {
        do {
          uVar6 = *(uint *)(iVar4 + 4);
          puVar7 = (uint *)((uVar10 - *(ushort *)(iVar4 + 0xc)) * 4 + (uint)*(ushort *)(iVar4 + 4) +
                           iVar4);
          uVar3 = *puVar7;
          bVar1 = *(byte *)puVar7;
          bVar2 = *(byte *)((int)puVar7 + 1);
          RtlLeaveCriticalSection(param_1);
          uVar5 = (*param_2)(param_3,(uVar6 & 0xffff) * (uint)bVar1 + iVar4 + 0x14,
                             (uVar3 & 0xffff) + iVar4 + 1,(ulonglong)bVar2 - 1);
          if ((uVar5 & 0xffffffff) != 0) {
            return uVar5;
          }
          RtlEnterCriticalSection(param_1);
          uVar6 = *(uint *)(param_1 + 0x20);
        } while ((uVar9 < uVar6) && (uVar10 = uVar10 + 1, uVar10 < *(ushort *)(iVar4 + 8)));
      }
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar9 < uVar6);
  }
  RtlLeaveCriticalSection(param_1);
  return 0;
}

