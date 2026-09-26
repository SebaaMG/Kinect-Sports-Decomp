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
extern unsigned int lbl_82019BA0;
extern unsigned int lbl_82019FA0;
extern unsigned int lbl_8201A3A0;
extern unsigned int lbl_8201A7A0;


longlong fn_827D49E8(ulonglong param_1,byte *param_2,ulonglong param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint *puVar5;
  byte *pbVar6;
  ulonglong uVar7;
  
  uVar4 = ~((((param_1 & 0xff00) + (param_1 & 0xffff) * 0x10000) * 0x100 & 0xffffff00) +
            ((param_1 & 0xffffffff) >> 8 & 0xff00) + ((param_1 & 0xffffffff) >> 0x18));
  uVar7 = param_3 & 0xffffffff;
  for (; (uVar7 != 0 && (((uint)param_2 & 3) != 0)); param_2 = param_2 + 1) {
    param_3 = param_3 - 1;
    uVar4 = (ulonglong)
            *(uint *)(&lbl_82019BA0 +
                     (int)(((uVar4 & 0xffffffff) >> 0x18 ^ (ulonglong)*param_2) << 2)) ^
            (uVar4 & 0xffffff) << 8;
    uVar7 = param_3;
  }
  puVar5 = (uint *)(param_2 + -4);
  if (0x1f < (param_3 & 0xffffffff)) {
    uVar7 = (param_3 & 0xffffffff) >> 5;
    do {
      uVar1 = (uint)(puVar5[1] ^ uVar4);
      uVar1 = *(uint *)(&lbl_8201A3A0 + (uVar1 >> 0xe & 0x3fc)) ^
              *(uint *)(&lbl_82019FA0 + (uVar1 >> 6 & 0x3fc)) ^
              *(uint *)(&lbl_8201A7A0 + (uVar1 >> 0x16 & 0x3fc)) ^
              *(uint *)(&lbl_82019BA0 + ((uint)(((puVar5[1] ^ uVar4) & 0xffffffff) << 2) & 0x3fc)) ^
              puVar5[2];
      puVar2 = puVar5 + 6;
      uVar1 = *(uint *)(&lbl_8201A3A0 + (uVar1 >> 0xe & 0x3fc)) ^
              *(uint *)(&lbl_82019FA0 + (uVar1 >> 6 & 0x3fc)) ^
              *(uint *)(&lbl_8201A7A0 + (uVar1 >> 0x16 & 0x3fc)) ^
              *(uint *)(&lbl_82019BA0 + (uVar1 & 0xff) * 4) ^ puVar5[3];
      puVar3 = puVar5 + 7;
      uVar1 = *(uint *)(&lbl_8201A3A0 + (uVar1 >> 0xe & 0x3fc)) ^
              *(uint *)(&lbl_82019FA0 + (uVar1 >> 6 & 0x3fc)) ^
              *(uint *)(&lbl_8201A7A0 + (uVar1 >> 0x16 & 0x3fc)) ^
              *(uint *)(&lbl_82019BA0 + (uVar1 & 0xff) * 4) ^ puVar5[4];
      uVar1 = *(uint *)(&lbl_8201A3A0 + (uVar1 >> 0xe & 0x3fc)) ^
              *(uint *)(&lbl_82019FA0 + (uVar1 >> 6 & 0x3fc)) ^
              *(uint *)(&lbl_8201A7A0 + (uVar1 >> 0x16 & 0x3fc)) ^
              *(uint *)(&lbl_82019BA0 + (uVar1 & 0xff) * 4) ^ puVar5[5];
      puVar5 = puVar5 + 8;
      uVar1 = *(uint *)(&lbl_8201A3A0 + (uVar1 >> 0xe & 0x3fc)) ^
              *(uint *)(&lbl_82019FA0 + (uVar1 >> 6 & 0x3fc)) ^
              *(uint *)(&lbl_8201A7A0 + (uVar1 >> 0x16 & 0x3fc)) ^
              *(uint *)(&lbl_82019BA0 + (uVar1 & 0xff) * 4) ^ *puVar2;
      param_3 = param_3 - 0x20;
      uVar1 = *(uint *)(&lbl_8201A3A0 + (uVar1 >> 0xe & 0x3fc)) ^
              *(uint *)(&lbl_82019FA0 + (uVar1 >> 6 & 0x3fc)) ^
              *(uint *)(&lbl_8201A7A0 + (uVar1 >> 0x16 & 0x3fc)) ^
              *(uint *)(&lbl_82019BA0 + (uVar1 & 0xff) * 4) ^ *puVar3;
      uVar1 = *(uint *)(&lbl_8201A3A0 + (uVar1 >> 0xe & 0x3fc)) ^
              *(uint *)(&lbl_82019FA0 + (uVar1 >> 6 & 0x3fc)) ^
              *(uint *)(&lbl_8201A7A0 + (uVar1 >> 0x16 & 0x3fc)) ^
              *(uint *)(&lbl_82019BA0 + (uVar1 & 0xff) * 4) ^ *puVar5;
      uVar4 = (ulonglong)
              (*(uint *)(&lbl_8201A3A0 + (uVar1 >> 0xe & 0x3fc)) ^
               *(uint *)(&lbl_82019FA0 + (uVar1 >> 6 & 0x3fc)) ^
               *(uint *)(&lbl_8201A7A0 + (uVar1 >> 0x16 & 0x3fc)) ^
              *(uint *)(&lbl_82019BA0 + (uVar1 & 0xff) * 4));
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (3 < (param_3 & 0xffffffff)) {
    uVar7 = (param_3 & 0xffffffff) >> 2;
    do {
      puVar5 = puVar5 + 1;
      uVar1 = (uint)(*puVar5 ^ uVar4);
      param_3 = param_3 - 4;
      uVar4 = (ulonglong)
              (*(uint *)(&lbl_8201A3A0 + (uVar1 >> 0xe & 0x3fc)) ^
               *(uint *)(&lbl_82019FA0 + (uVar1 >> 6 & 0x3fc)) ^
               *(uint *)(&lbl_8201A7A0 + (uVar1 >> 0x16 & 0x3fc)) ^
              *(uint *)(&lbl_82019BA0 + ((uint)(((*puVar5 ^ uVar4) & 0xffffffff) << 2) & 0x3fc)));
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if ((param_3 & 0xffffffff) != 0) {
    pbVar6 = (byte *)((int)puVar5 + 3);
    do {
      pbVar6 = pbVar6 + 1;
      param_3 = param_3 - 1;
      uVar4 = (ulonglong)
              *(uint *)(&lbl_82019BA0 +
                       (int)(((uVar4 & 0xffffffff) >> 0x18 ^ (ulonglong)*pbVar6) << 2)) ^
              (uVar4 & 0xffffff) << 8;
    } while (param_3 != 0);
  }
  uVar4 = ~uVar4;
  return (((uVar4 & 0xff00) + (uVar4 & 0xffff) * 0x10000) * 0x100 & 0xffffff00) +
         ((uVar4 & 0xffffffff) >> 8 & 0xff00) + ((uVar4 & 0xffffffff) >> 0x18);
}

