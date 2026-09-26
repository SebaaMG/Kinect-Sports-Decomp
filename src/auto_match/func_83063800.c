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
extern int fn_8305F770();
extern int fn_830604F0();
extern int fn_83065890();
extern int fn_83065900();
extern int fn_83068418();
extern unsigned int lbl_8217E690;
extern unsigned int lbl_8217E890;
extern unsigned int lbl_8217E8A0;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_58;


void fn_83063800(int param_1,undefined4 *param_2)

{
  undefined4 uVar2;
  uint uVar3;
  longlong lVar1;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  undefined **appuStack_60 [2];
  uint uStack_58;
  undefined *puStack_50;
  uint uStack_4c;
  uint uStack_48;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  *param_2 = *(undefined4 *)(param_1 + 0xc4);
  param_2[1] = *(undefined4 *)(param_1 + 200);
  uVar2 = fn_830604F0(param_1 + 0x34);
  param_2[2] = uVar2;
  uVar2 = fn_8305F770(param_1 + 0x34);
  param_2[3] = uVar2;
  param_2[6] = 0;
  param_2[5] = 0;
  uStack_4c = *(uint *)(param_1 + 0x2c);
  uVar4 = (ulonglong)uStack_4c;
  puStack_50 = &lbl_8217E690;
  uStack_48 = uStack_4c;
  if (uStack_4c != 0) {
    do {
      param_2[5] = param_2[5] + 1;
      uVar3 = fn_83068418(uVar4);
      param_2[6] = (uVar3 & 0xff) + param_2[6];
      uVar4 = (**(code **)(puStack_50 + 4))(&puStack_50,uStack_48);
      uStack_48 = (uint)uVar4;
    } while ((uVar4 & 0xffffffff) != 0);
  }
  param_2[4] = 0;
  uStack_58 = 0;
  appuStack_60[0] = &lbl_8217E890;
  fn_83065890(appuStack_60,*(undefined4 *)(param_1 + 0x2c));
  uVar4 = (ulonglong)uStack_58;
  while (uVar4 != 0) {
    uStack_3c = (undefined4)uVar4;
    iVar5 = 0;
    ppuStack_40 = &lbl_8217E8A0;
    iVar6 = 0;
    uStack_38 = uStack_3c;
    if ((uVar4 & 0xffffffff) != 0) {
      do {
        iVar5 = iVar6 + 1;
        lVar1 = (*(code *)ppuStack_40[1])(&ppuStack_40);
        uStack_38 = (undefined4)lVar1;
        iVar6 = iVar5;
      } while (lVar1 != 0);
      uVar4 = (ulonglong)uStack_58;
      uStack_38 = 0;
    }
    if ((int)param_2[4] < iVar5) {
      param_2[4] = iVar5;
    }
    uVar4 = (*(code *)appuStack_60[0][1])(appuStack_60,uVar4);
    uStack_58 = (uint)uVar4;
  }
  fn_83065900(param_2);
  return;
}

