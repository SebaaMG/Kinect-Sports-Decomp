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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_68;
extern V16 vectorSubtractFloatingPoint();


char * fn_82D4A0E8(char *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  int in_r0;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 in_register_000100a0;
  undefined4 in_register_000100a4;
  undefined4 in_register_000100a8;
  undefined4 in_vr10;
  undefined4 in_register_000100b0;
  undefined4 in_register_000100b4;
  undefined4 in_register_000100b8;
  undefined4 in_vr11;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = "TtrcConvTransl";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  puVar5 = &uStack_68;
  puVar6 = (undefined8 *)(param_3 + -8);
  lVar7 = 6;
  do {
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
    *puVar5 = *puVar6;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  vectorSubtractFloatingPoint(in_vs44,in_vs45);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  piVar2 = *(int **)(param_2 + 0x18);
  puVar1 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000100b0;
  puVar1[1] = in_register_000100b4;
  puVar1[2] = in_register_000100b8;
  puVar1[3] = in_vr11;
  puVar1 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000100a0;
  puVar1[1] = in_register_000100a4;
  puVar1[2] = in_register_000100a8;
  puVar1[3] = in_vr10;
  (**(code **)(*piVar2 + 0x20))(param_1,piVar2,auStack_60,param_4);
  iVar4 = *(int *)(param_4 + 0x40);
  *(int *)(param_4 + 0x40) = iVar4 + -1;
  if (*param_1 != '\0') {
    *(undefined4 *)((iVar4 + 7) * 4 + param_4) = 0;
  }
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  return param_1;
}

