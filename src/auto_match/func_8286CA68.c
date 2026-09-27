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
extern unsigned int *auStack_30;
extern int fn_82809CB0();
extern int fn_828108B8();
extern int fn_82810BE8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820162A0;
extern unsigned int lbl_82021534;
extern unsigned int lbl_82021538;
extern unsigned int lbl_8202153C;
extern unsigned int lbl_82021540;
extern unsigned int lbl_82021544;
extern unsigned int lbl_82021548;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83211884;
extern unsigned int lbl_83211888;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined8 fn_8286CA68(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 *puVar8;
  double dVar9;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_30 [1];
  
  uVar2 = lbl_821AAD20;
  uVar3 = lbl_82002AE0;
  if (*(char *)(param_1 + 4) == '\0') {
    return 0xffffffffa0300000;
  }
  if ((lbl_83211888 & 1) == 0) {
    lbl_83211888 = lbl_83211888 | 1;
    lbl_83211884 = lbl_82021548;
  }
  if (*(char *)(param_1 + 0x20) == '\x01') {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      puVar8 = (undefined4 *)fn_828108B8(auStack_30,param_1 + 0x24,param_1 + 0x34);
      uStack_40 = *puVar8;
      uStack_3c = puVar8[1];
      uStack_38 = puVar8[2];
      fn_82810BE8(&uStack_40);
      dVar9 = (double)fn_82809CB0();
      fVar7 = lbl_82186E6C;
      fVar6 = lbl_8202153C;
      fVar4 = lbl_820162A0;
      if ((double)lbl_82021544 < dVar9) {
        if ((double)lbl_82021540 < dVar9) {
          dVar9 = (double)lbl_82021540;
        }
        fVar1 = (float)(dVar9 - (double)lbl_82021544) * lbl_83211884;
        *(undefined4 *)(param_1 + 0x4c) = lbl_821AAD20;
        fVar5 = lbl_82021538;
        *(float *)(param_1 + 0x44) = fVar1 * fVar4 + fVar7;
        *(float *)(param_1 + 0x54) = -(fVar1 * fVar6 - fVar5);
        goto LAB_8286cbb8;
      }
    }
    uVar3 = lbl_82021534;
    uVar2 = lbl_82002C5C;
    *(undefined4 *)(param_1 + 0x4c) = lbl_821AAD20;
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = lbl_821AAD20;
  }
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
LAB_8286cbb8:
  *(undefined1 *)(param_1 + 0x58) = 1;
  return 0x20300000;
}

