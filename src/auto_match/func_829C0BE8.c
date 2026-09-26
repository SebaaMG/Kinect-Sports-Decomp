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


void fn_829C0BE8(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  uVar1 = *(ushort *)(param_2 + 2);
  uVar4 = 0xffffffff;
  iVar5 = 0;
  iVar8 = 7;
  iVar6 = 4;
  if (uVar1 == 0) {
    iVar8 = 0x8a;
    iVar6 = 3;
  }
  *(undefined2 *)(param_3 * 4 + param_2 + 6) = 0xffff;
  if (-1 < param_3) {
    param_3 = param_3 + 1;
    puVar3 = (ushort *)(param_2 + 6);
    do {
      uVar2 = *puVar3;
      iVar5 = iVar5 + 1;
      uVar7 = (uint)uVar1;
      if ((iVar8 <= iVar5) || (uVar7 != uVar2)) {
        if (iVar5 < iVar6) {
          iVar6 = (uVar1 + 0x29d) * 4;
          *(short *)(iVar6 + param_1) = *(short *)(iVar6 + param_1) + (short)iVar5;
        }
        else if (uVar7 == 0) {
          if (iVar5 < 0xb) {
            *(short *)(param_1 + 0xab8) = *(short *)(param_1 + 0xab8) + 1;
          }
          else {
            *(short *)(param_1 + 0xabc) = *(short *)(param_1 + 0xabc) + 1;
          }
        }
        else {
          if (uVar7 != uVar4) {
            iVar5 = (uVar1 + 0x29d) * 4;
            *(short *)(iVar5 + param_1) = *(short *)(iVar5 + param_1) + 1;
          }
          *(short *)(param_1 + 0xab4) = *(short *)(param_1 + 0xab4) + 1;
        }
        iVar5 = 0;
        uVar4 = (uint)uVar1;
        if (uVar2 == 0) {
          iVar8 = 0x8a;
        }
        else {
          if (uVar7 != uVar2) {
            iVar8 = 7;
            iVar6 = 4;
            goto code_r0x829c0d00;
          }
          iVar8 = 6;
        }
        iVar6 = 3;
      }
code_r0x829c0d00:
      puVar3 = puVar3 + 2;
      param_3 = param_3 + -1;
      uVar1 = uVar2;
    } while (param_3 != 0);
  }
  return;
}

