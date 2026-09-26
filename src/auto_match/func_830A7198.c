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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_830A7198(byte *param_1,char param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  uVar2 = lbl_821AAD20;
  uVar1 = lbl_82002AE0;
  if (*param_1 == 0) {
    return;
  }
  puVar5 = (undefined4 *)(param_4 + 0x80);
  puVar4 = (undefined4 *)(param_3 + 0x90);
  puVar6 = (undefined4 *)(param_3 + 0x70);
  lVar7 = 3;
  uVar3 = 0;
  do {
    if ((*param_1 >> (uVar3 & 0x3f) & 3) != 0) {
      puVar6[-4] = uVar2;
      *puVar6 = uVar2;
      puVar6[4] = uVar2;
      puVar6[8] = uVar2;
      puVar6[0xc] = uVar2;
      puVar6[0x10] = uVar2;
      *puVar4 = uVar1;
      if (param_2 != '\0') {
        puVar5[-8] = uVar2;
        *(undefined4 *)((param_4 - param_3) + (int)puVar6) = uVar2;
        *puVar5 = uVar2;
        puVar5[4] = uVar2;
        puVar5[8] = uVar2;
        puVar5[0xc] = uVar2;
      }
    }
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
    uVar3 = uVar3 + 2;
    puVar4 = puVar4 + 5;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

