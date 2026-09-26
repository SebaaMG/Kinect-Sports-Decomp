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
extern int fn_8265CA60();
extern int fn_830619F8();
extern int fn_83061B30();
extern int fn_830677A0();
extern int fn_830678C8();
extern int fn_830679A8();


void fn_830621E8(int param_1,ulonglong param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  if ((param_2 & 0xffffffff) != 0) {
    fn_830677A0(param_2,*(undefined4 *)(param_1 + 0xc),0xffffffff8217e6c0);
  }
  fn_830619F8(param_1);
  lVar1 = -1;
  uVar6 = *(uint *)(param_1 + 0x18);
  uVar7 = (ulonglong)uVar6;
  uVar4 = uVar7 * 0x18;
  if (0xaaaaaaa < uVar7) {
    uVar4 = 0xffffffffffffffff;
  }
  if ((uVar4 & 0xffffffff) < 0xfffffffc) {
    lVar1 = uVar4 + 4;
  }
  puVar2 = (uint *)fn_8265CA60(lVar1);
  if (puVar2 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    *puVar2 = uVar6;
    puVar3 = puVar2 + 1;
    if (-1 < (longlong)(uVar7 - 1)) {
      puVar5 = (undefined1 *)((int)puVar2 + 1);
      do {
        *(undefined4 *)(puVar5 + 7) = 0;
        *(undefined4 *)(puVar5 + 0xb) = 0;
        *(undefined4 *)(puVar5 + 0xf) = 0;
        puVar5[0x17] = 1;
        puVar5 = puVar5 + 0x18;
        *puVar5 = 0;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  uVar6 = 0;
  *(uint **)(param_1 + 0x2c) = puVar3;
  if (0 < *(int *)(param_1 + 0x18)) {
    puVar3 = puVar3 + -6;
    do {
      puVar3 = puVar3 + 6;
      *puVar3 = uVar6;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < *(int *)(param_1 + 0x18));
  }
  iVar8 = *(int *)(param_1 + 4);
  while (iVar8 != 0) {
    fn_83061B30(param_1,iVar8);
    iVar8 = *(int *)(iVar8 + 4);
    if ((param_2 & 0xffffffff) != 0) {
      fn_830679A8(param_2);
    }
  }
  if ((param_2 & 0xffffffff) != 0) {
    fn_830678C8(param_2);
  }
  return;
}

