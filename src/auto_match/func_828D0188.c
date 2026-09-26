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
extern unsigned int *auStack_50;
extern int fn_8223B6E0();
extern int fn_828CFCD8();
extern int fn_828E9D28();
extern int fn_82CE07C8();
extern int fn_82F68CC0();
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_828D0188(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  iVar2 = *(int *)(param_1 + 0x7c);
  if (iVar2 < 2) {
    return;
  }
  if (3 < iVar2) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x84);
  bVar1 = *(byte *)(iVar3 + 8);
  bVar5 = bVar1 >> 1 & 1;
  if ((bVar5 == 0) || (bVar4 = true, iVar2 != 2)) {
    bVar4 = false;
  }
  uVar6 = 3;
  if (bVar4) {
    *(undefined4 *)(param_1 + 0x7c) = 3;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x7c) = 4;
  if (bVar5 == 0) {
LAB_828d02d8:
    uVar6 = 2;
  }
  else if ((bVar1 & 4) == 0) {
    bVar4 = false;
    if (((bVar1 & 8) != 0) && (*(ushort *)(iVar3 + 0xe) != 0)) {
      uStack_40 = *(undefined4 *)(iVar3 + 0x10);
      uStack_3c = (uint)*(ushort *)(iVar3 + 0xe);
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      fn_828E9D28(auStack_50);
      fn_828CFCD8(param_1 + 0x58,auStack_50);
      bVar4 = true;
      fn_8223B6E0(auStack_50);
    }
    if ((bVar4) || (*(char *)(param_1 + 8) != '\0')) {
      *(undefined4 *)(param_1 + 0x80) = 1;
      fn_82F68CC0(param_1 + 0x98,(ulonglong)*(uint *)(param_1 + 0x84) + 8,0x18);
      *(undefined4 *)(param_1 + 0xa0) = 0;
      *(undefined2 *)(param_1 + 0x9e) = 0;
      if ((*(ushort *)(param_1 + 0xa6) < 0x14) &&
         (((*(short *)(param_1 + 0x9a) == 9 || (*(short *)(param_1 + 0x9a) == 10)) &&
          (*(short *)(param_1 + 0x9c) == 8)))) {
        *(undefined2 *)(param_1 + 0x9a) = 8;
      }
      goto code_r0x828d02e0;
    }
    goto LAB_828d02d8;
  }
  *(undefined4 *)(param_1 + 0x80) = uVar6;
code_r0x828d02e0:
  if (*(int *)(param_1 + 0x84) != 0) {
    fn_82CE07C8();
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  return;
}

