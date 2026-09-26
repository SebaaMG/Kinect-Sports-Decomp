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
extern unsigned int lbl_82018BA0;
extern unsigned int lbl_82018FA0;
extern unsigned int lbl_820193A0;
extern unsigned int lbl_820197A0;


ulonglong fn_827D46F0(ulonglong param_1,uint *param_2,ulonglong param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  
  param_1 = ~param_1;
  uVar5 = param_3 & 0xffffffff;
  for (; (uVar5 != 0 && (((uint)param_2 & 3) != 0)); param_2 = (uint *)((int)param_2 + 1)) {
    param_3 = param_3 - 1;
    param_1 = (ulonglong)
              *(uint *)(&lbl_82018BA0 +
                       ((uint)(((*(byte *)param_2 ^ param_1) & 0xffffffff) << 2) & 0x3fc)) ^
              (param_1 & 0xffffffff) >> 8;
    uVar5 = param_3;
  }
  if (0x1f < (param_3 & 0xffffffff)) {
    uVar5 = (param_3 & 0xffffffff) >> 5;
    do {
      uVar1 = (uint)(*param_2 ^ param_1);
      uVar1 = *(uint *)(&lbl_82018FA0 + (uVar1 >> 0xe & 0x3fc)) ^
              *(uint *)(&lbl_820193A0 + (uVar1 >> 6 & 0x3fc)) ^
              *(uint *)(&lbl_82018BA0 + (uVar1 >> 0x16 & 0x3fc)) ^
              *(uint *)(&lbl_820197A0 + ((uint)(((*param_2 ^ param_1) & 0xffffffff) << 2) & 0x3fc))
              ^ param_2[1];
      uVar1 = *(uint *)(&lbl_82018FA0 + (uVar1 >> 0xe & 0x3fc)) ^
              *(uint *)(&lbl_820193A0 + (uVar1 >> 6 & 0x3fc)) ^
              *(uint *)(&lbl_82018BA0 + (uVar1 >> 0x16 & 0x3fc)) ^
              *(uint *)(&lbl_820197A0 + (uVar1 & 0xff) * 4) ^ param_2[2];
      uVar1 = *(uint *)(&lbl_82018FA0 + (uVar1 >> 0xe & 0x3fc)) ^
              *(uint *)(&lbl_820193A0 + (uVar1 >> 6 & 0x3fc)) ^
              *(uint *)(&lbl_82018BA0 + (uVar1 >> 0x16 & 0x3fc)) ^
              *(uint *)(&lbl_820197A0 + (uVar1 & 0xff) * 4) ^ param_2[3];
      uVar1 = *(uint *)(&lbl_82018FA0 + (uVar1 >> 0xe & 0x3fc)) ^
              *(uint *)(&lbl_820193A0 + (uVar1 >> 6 & 0x3fc)) ^
              *(uint *)(&lbl_82018BA0 + (uVar1 >> 0x16 & 0x3fc)) ^
              *(uint *)(&lbl_820197A0 + (uVar1 & 0xff) * 4) ^ param_2[4];
      puVar2 = param_2 + 7;
      uVar1 = *(uint *)(&lbl_82018FA0 + (uVar1 >> 0xe & 0x3fc)) ^
              *(uint *)(&lbl_820193A0 + (uVar1 >> 6 & 0x3fc)) ^
              *(uint *)(&lbl_82018BA0 + (uVar1 >> 0x16 & 0x3fc)) ^
              *(uint *)(&lbl_820197A0 + (uVar1 & 0xff) * 4) ^ param_2[5];
      uVar1 = *(uint *)(&lbl_82018FA0 + (uVar1 >> 0xe & 0x3fc)) ^
              *(uint *)(&lbl_820193A0 + (uVar1 >> 6 & 0x3fc)) ^
              *(uint *)(&lbl_82018BA0 + (uVar1 >> 0x16 & 0x3fc)) ^
              *(uint *)(&lbl_820197A0 + (uVar1 & 0xff) * 4) ^ param_2[6];
      param_2 = param_2 + 8;
      param_3 = param_3 - 0x20;
      uVar1 = *(uint *)(&lbl_82018FA0 + (uVar1 >> 0xe & 0x3fc)) ^
              *(uint *)(&lbl_820193A0 + (uVar1 >> 6 & 0x3fc)) ^
              *(uint *)(&lbl_82018BA0 + (uVar1 >> 0x16 & 0x3fc)) ^
              *(uint *)(&lbl_820197A0 + (uVar1 & 0xff) * 4) ^ *puVar2;
      param_1 = (ulonglong)
                (*(uint *)(&lbl_82018FA0 + (uVar1 >> 0xe & 0x3fc)) ^
                 *(uint *)(&lbl_820193A0 + (uVar1 >> 6 & 0x3fc)) ^
                 *(uint *)(&lbl_82018BA0 + (uVar1 >> 0x16 & 0x3fc)) ^
                *(uint *)(&lbl_820197A0 + (uVar1 & 0xff) * 4));
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (3 < (param_3 & 0xffffffff)) {
    uVar5 = (param_3 & 0xffffffff) >> 2;
    do {
      uVar1 = *param_2;
      uVar3 = (uint)(uVar1 ^ param_1);
      param_2 = param_2 + 1;
      param_3 = param_3 - 4;
      param_1 = (ulonglong)
                (*(uint *)(&lbl_82018FA0 + (uVar3 >> 0xe & 0x3fc)) ^
                 *(uint *)(&lbl_820193A0 + (uVar3 >> 6 & 0x3fc)) ^
                 *(uint *)(&lbl_82018BA0 + (uVar3 >> 0x16 & 0x3fc)) ^
                *(uint *)(&lbl_820197A0 + ((uint)(((uVar1 ^ param_1) & 0xffffffff) << 2) & 0x3fc)));
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if ((param_3 & 0xffffffff) != 0) {
    pbVar4 = (byte *)((int)param_2 + -1);
    do {
      pbVar4 = pbVar4 + 1;
      param_3 = param_3 - 1;
      param_1 = (ulonglong)
                *(uint *)(&lbl_82018BA0 + ((uint)(((*pbVar4 ^ param_1) & 0xffffffff) << 2) & 0x3fc))
                ^ (param_1 & 0xffffffff) >> 8;
    } while (param_3 != 0);
  }
  return ~param_1;
}

