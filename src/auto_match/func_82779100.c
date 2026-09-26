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


void fn_82779100(int param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  bVar1 = *(byte *)(param_1 + 1);
  uVar9 = (ulonglong)bVar1;
  bVar2 = *(byte *)(param_1 + 2);
  uVar7 = (ulonglong)bVar2;
  bVar3 = *(byte *)(param_1 + 3);
  uVar6 = (ulonglong)bVar3;
  bVar4 = uVar9 < uVar7;
  uVar10 = uVar9;
  if ((bool)bVar4) {
    uVar10 = uVar7;
  }
  if (uVar10 < uVar6) {
    bVar4 = 2;
    uVar10 = uVar6;
  }
  uVar11 = uVar9;
  if (uVar7 < uVar9) {
    uVar11 = uVar7;
  }
  if (uVar6 < uVar11) {
    uVar11 = uVar6;
  }
  uVar11 = uVar10 - uVar11;
  *param_4 = (int)uVar10;
  if (uVar10 == 0) {
    iVar5 = 0;
  }
  else {
    trapWord(6,uVar10 << 1,0);
    iVar5 = (int)((uVar11 * 0x1fe + uVar10 & 0xffffffff) / (uVar10 << 1));
  }
  *param_3 = iVar5;
  if (iVar5 == 0) {
    iVar5 = 0;
    goto code_r0x827792b4;
  }
  if (bVar4 == 0) {
    if (bVar3 <= bVar2) {
      uVar10 = (uVar11 & 0x7fffffff) << 1;
      uVar11 = (uVar7 - uVar6) * 0x78 + uVar11;
      trapWord(6,uVar10,0);
      *param_2 = (int)uVar11 / (int)uVar10;
      trapWord(5,uVar10 & ~(((uVar11 & 0x7fffffff) << 1 | (uVar11 & 0xffffffff) >> 0x1f) - 1),0xffff
              );
      return;
    }
    uVar8 = (uVar11 & 0x7fffffff) << 1;
    uVar6 = uVar11 * 0x79 + uVar6 * -0x78 + uVar7 * 0x78;
    uVar10 = (uVar6 & 0xffffffff) << 1 | (uVar6 & 0xffffffff) >> 0x1f;
    iVar5 = (int)uVar6 / (int)uVar8 + 300;
code_r0x827792a4:
    trapWord(6,uVar8,0);
    uVar8 = uVar8 & ~((uVar10 & 0xffffffff) - 1);
  }
  else {
    if (bVar4 == 1) {
      uVar8 = (uVar11 & 0x7fffffff) << 1;
      trapWord(6,uVar8,0);
      if (bVar1 < bVar3) {
        uVar11 = (uVar6 - uVar9) * 0x78 + uVar11;
        uVar10 = (uVar11 & 0x7fffffff) << 1 | (uVar11 & 0xffffffff) >> 0x1f;
        iVar5 = (int)uVar11 / (int)uVar8 + 0x78;
      }
      else {
        uVar6 = uVar11 * 0x79 + uVar9 * -0x78 + uVar6 * 0x78;
        uVar10 = (uVar6 & 0x7fffffff) << 1 | (uVar6 & 0xffffffff) >> 0x1f;
        iVar5 = (int)uVar6 / (int)uVar8 + 0x3c;
      }
    }
    else {
      if (2 < bVar4) {
        return;
      }
      if (bVar1 <= bVar2) {
        uVar8 = (uVar11 & 0x7fffffff) << 1;
        uVar6 = uVar11 * 0x79 + uVar7 * -0x78 + uVar9 * 0x78;
        uVar10 = (uVar6 & 0xffffffff) << 1 | (uVar6 & 0xffffffff) >> 0x1f;
        iVar5 = (int)uVar6 / (int)uVar8 + 0xb4;
        goto code_r0x827792a4;
      }
      uVar8 = (uVar11 & 0x7fffffff) << 1;
      uVar11 = (uVar9 - uVar7) * 0x78 + uVar11;
      trapWord(6,uVar8,0);
      uVar10 = (uVar11 & 0x7fffffff) << 1 | (uVar11 & 0xffffffff) >> 0x1f;
      iVar5 = (int)uVar11 / (int)uVar8 + 0xf0;
    }
    uVar8 = uVar8 & ~(uVar10 - 1);
  }
  trapWord(5,uVar8,0xffff);
code_r0x827792b4:
  *param_2 = iVar5;
  return;
}

