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
#define TBLr 0
extern unsigned int *auStack_60;
extern unsigned int iStack_4c;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


void fn_83089608(int param_1,int *param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = "TtRayCastSimpl";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  *(int *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_5;
  iVar4 = param_4 + 0x14;
  if (param_4 == 0) {
    iVar4 = 0;
  }
  *(int *)(param_1 + 8) = iVar4;
  if (*(char *)(param_3 + 0x20) == '\0') {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    iVar4 = param_4 + 0x10;
    if (param_4 == 0) {
      iVar4 = 0;
    }
    *(int *)(param_1 + 0x34) = iVar4;
  }
  puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  iVar4 = *param_2;
  iStack_4c = param_3 + 0x10;
  puVar3 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  uStack_50 = 1;
  uStack_48 = 0x10;
  uStack_44 = 0;
  (**(code **)(iVar4 + 0x5c))(param_2,auStack_60,param_1,0);
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  return;
}

