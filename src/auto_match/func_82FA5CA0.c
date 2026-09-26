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
extern unsigned int lbl_83264218;


void fn_82FA5CA0(uint *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = *(uint *)(param_2 + 4) & 0xfffffffc;
  if (uVar4 < 0x80) {
    uVar6 = 0;
    uVar5 = (ulonglong)(*(uint *)(param_2 + 4) >> 2);
  }
  else {
    uVar6 = -LZCOUNT(uVar4) + 0x19;
    uVar5 = (ulonglong)(uVar4 >> ((int)-LZCOUNT(uVar4) + 0x1aU & 0x3f)) ^ 0x20;
  }
  iVar1 = *(int *)(param_2 + 0xc);
  puVar2 = *(undefined4 **)(param_2 + 8);
  iVar3 = (int)(((uVar6 & 0x7ffffff) * 0x20 + uVar5 + 0x19 & 0xffffffff) << 2);
  puVar2[3] = iVar1;
  *(undefined4 **)(iVar1 + 8) = puVar2;
  if (*(int *)(iVar3 + (int)param_1) != param_2) {
    return;
  }
  *(undefined4 **)(iVar3 + (int)param_1) = puVar2;
  if (puVar2 != &lbl_83264218) {
    return;
  }
  iVar1 = (int)((uVar6 + 1 & 0xffffffff) << 2);
  uVar4 = *(uint *)(iVar1 + (int)param_1) & ~(1 << ((uint)uVar5 & 0x3f));
  *(uint *)(iVar1 + (int)param_1) = uVar4;
  if (uVar4 != 0) {
    return;
  }
  *param_1 = *param_1 & ~(1 << ((uint)uVar6 & 0x3f));
  return;
}

