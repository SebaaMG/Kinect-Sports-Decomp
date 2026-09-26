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


void fn_82A45B18(uint *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int in_r0;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  undefined1 in_vs32 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs62 [16];
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  
  RtlEnterCriticalSection(0xffffffff8315d948);
  uVar4 = 0;
  if (*param_1 != 0) {
    iVar5 = 0;
    do {
      puVar8 = (uint *)(param_1[2] + iVar5);
      uVar1 = puVar8[0x10];
      if ((*puVar8 & 0x300000) != 0) {
        uVar3 = *puVar8 >> 0xe;
        lVar6 = 0;
        if ((uVar3 & 0x1f00) != 0) {
          lVar7 = ((((ulonglong)uVar3 & 0x1f00) - 1 & 0xffffffff) >> 7) + 1;
          do {
            dataCacheBlockFlush(lVar6 + (ulonglong)puVar8[0x11]);
            lVar6 = lVar6 + 0x80;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        if (puVar8[0xc] != 0) {
          altv207_13(in_vs32,in_vs43);
          puVar2 = (undefined4 *)(in_r0 + uVar1 & 0xfffffff0);
          *puVar2 = in_register_000103f0;
          puVar2[1] = in_register_000103f4;
          puVar2[2] = in_register_000103f8;
          puVar2[3] = in_vr63;
          puVar8[0xc] = 0;
        }
        if (puVar8[0xd] != 0) {
          altv207_13(in_vs43,in_vs62);
          puVar2 = (undefined4 *)(uVar1 + 0x10 & 0xfffffff0);
          *puVar2 = in_register_000103f0;
          puVar2[1] = in_register_000103f4;
          puVar2[2] = in_register_000103f8;
          puVar2[3] = in_vr63;
          puVar8[0xd] = 0;
        }
        if (puVar8[0xe] != 0) {
          altv207_13(in_vs43,in_vs35);
          puVar2 = (undefined4 *)(uVar1 + 0x20 & 0xfffffff0);
          *puVar2 = in_register_000103f0;
          puVar2[1] = in_register_000103f4;
          puVar2[2] = in_register_000103f8;
          puVar2[3] = in_vr63;
          puVar8[0xe] = 0;
        }
      }
      uVar1 = 1 << (*(ushort *)(puVar8 + 0x14) & 0x1f);
      *(uint *)(((*(ushort *)(puVar8 + 0x14) >> 5) + 0x1ffa8650) * 4) =
           uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
      enforceInOrderExecutionIO();
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x60;
    } while (uVar4 < *param_1);
  }
  param_1[1] = param_1[1] & 0xfffdffff;
  RtlLeaveCriticalSection(0xffffffff8315d948);
  return;
}

