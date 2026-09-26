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
extern unsigned int *auStack_34;
extern unsigned int *auStack_3c;
extern int fn_822462F0();
extern int fn_8265CA20();
extern int fn_8284A218();
extern int fn_8284A910();
extern int fn_8284A940();
extern int fn_82BA02A8();
extern unsigned int iStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


undefined4 * fn_8284B530(undefined4 *param_1,int param_2,uint param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puStack00000014;
  int iStack0000001c;
  uint uStack00000024;
  char cStack0000002f;
  bool bStack_60;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  undefined4 *apuStack_50 [3];
  undefined4 *puStack_44;
  undefined1 uStack_40;
  undefined1 auStack_3c [4];
  undefined1 uStack_38;
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_1c;
  undefined4 *puStack_14;
  
  iVar3 = param_3 + 0xc;
  puStack_58 = *(undefined4 **)(*(int *)(param_2 + 4) + 4);
  puStack_5c = *(undefined4 **)(param_2 + 4);
  bStack_60 = true;
  puStack00000014 = param_1;
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  cStack0000002f = param_4;
  while (*(char *)((int)puStack_58 + 0x2d) == '\0') {
    puStack_5c = puStack_58;
    if (cStack0000002f == '\0') {
      uVar1 = fn_822462F0(iVar3,puStack_58 + 3);
      bStack_60 = (int)LZCOUNT(uVar1) == 0;
    }
    else {
      uVar1 = fn_822462F0(puStack_58 + 3,iVar3);
      bStack_60 = (int)LZCOUNT(uVar1) != 0;
    }
    if (bStack_60 == false) {
      puStack_14 = (undefined4 *)puStack_58[2];
    }
    else {
      puStack_14 = (undefined4 *)*puStack_58;
    }
    puStack_58 = puStack_14;
  }
  apuStack_50[0] = puStack_5c;
  fn_82BA02A8(apuStack_50,iStack0000001c);
  if (bStack_60 != false) {
    puStack_28 = *(undefined4 **)(iStack0000001c + 4);
    puStack_44 = (undefined4 *)*puStack_28;
    puStack_24 = puStack_44;
    fn_82BA02A8(&puStack_44,iStack0000001c);
    if (puStack_44 == apuStack_50[0]) {
      uStack_40 = 1;
      puVar2 = (undefined4 *)fn_8284A940(auStack_3c,iStack0000001c,1,puStack_5c,uStack00000024);
      *puStack00000014 = *puVar2;
      *(undefined1 *)(puStack00000014 + 1) = uStack_40;
      return puStack00000014;
    }
    fn_8284A218(apuStack_50);
  }
  puStack_1c = apuStack_50[0];
  uVar1 = fn_822462F0(apuStack_50[0] + 3,iVar3);
  if ((int)LZCOUNT(uVar1) == 0) {
    uStack_38 = 1;
    puVar2 = (undefined4 *)
             fn_8284A940(auStack_34,iStack0000001c,bStack_60,puStack_5c,uStack00000024);
    *puStack00000014 = *puVar2;
    *(undefined1 *)(puStack00000014 + 1) = uStack_38;
  }
  else {
    fn_8284A910(iStack0000001c + 0xd,(ulonglong)uStack00000024 + 0xc);
    fn_8265CA20(uStack00000024);
    *puStack00000014 = apuStack_50[0];
    *(undefined1 *)(puStack00000014 + 1) = 0;
  }
  return puStack00000014;
}

