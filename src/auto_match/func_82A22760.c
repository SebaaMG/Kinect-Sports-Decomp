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
extern unsigned int *auStack_40;
extern int fn_82A1E228();
extern unsigned int lbl_8315D2F0;
extern unsigned int lbl_83219B94;
extern unsigned int uRam83219cc4;
extern unsigned int uRam83219cc8;


longlong fn_82A22760(longlong param_1,longlong *param_2,byte param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  ulonglong auStack_40 [8];
  
  lVar7 = 0;
  fn_82A1E228(auStack_40);
  uVar3 = lbl_8315D2F0 & 0xffffffff;
  iVar4 = lbl_83219B94;
  if (param_4 == 0) {
    puVar6 = *(undefined4 **)(lbl_83219B94 + 0x30);
  }
  else {
    puVar6 = *(undefined4 **)(lbl_83219B94 + 0x2c);
  }
  do {
    if (puVar6 == (undefined4 *)(iVar4 + 0x2c)) {
      return lVar7;
    }
    uVar1 = puVar6[7];
    if (((((uVar1 & 0x80) == 0) && ((uVar1 & 0x40) != 0)) && ((uVar1 & 1) == 0)) &&
       (((uVar1 & 4) == 0 && (param_3 <= *(byte *)(puVar6 + 6))))) {
      if ((param_5 != 0) ||
         ((0x13 < *(byte *)(puVar6 + 6) &&
          (trapWord(6,(ulonglong)uRam83219cc8,0),
          (ulonglong)(uint)puVar6[2] / (ulonglong)uRam83219cc8 + (ulonglong)(uint)puVar6[4] +
          (ulonglong)uRam83219cc4 <= (auStack_40[0] / 10000000 & 0xffffffff) - uVar3)))) {
        uVar2 = puVar6[2];
        lVar7 = lVar7 + 1;
        puVar6[7] = uVar1 | 1;
        lVar5 = *param_2;
        *param_2 = (ulonglong)uVar2 + lVar5;
        iVar4 = lbl_83219B94;
        if (param_1 <= (longlong)((ulonglong)uVar2 + lVar5)) {
          return lVar7;
        }
      }
    }
    else {
      puVar6[7] = uVar1 & 0xfffffffb;
      iVar4 = lbl_83219B94;
    }
    if (param_4 == 0) {
      puVar6 = (undefined4 *)puVar6[1];
    }
    else {
      puVar6 = (undefined4 *)*puVar6;
    }
  } while( true );
}

