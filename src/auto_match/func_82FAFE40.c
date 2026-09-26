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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FAF650();
extern int fn_82FAFA90();
extern int fn_82FAFB18();
extern int fn_82FB04A0();
extern int fn_83007AE8();
extern unsigned int lbl_831BC768;
extern unsigned int uStack_3b;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


undefined8 fn_82FAFE40(undefined8 param_1,int *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  
  *param_2 = *param_2 + 4;
  uVar5 = fn_83007AE8();
  if ((int)uVar5 == 1) {
    uVar5 = fn_82FB04A0(param_1,param_2,param_3);
  }
  puVar2 = (undefined8 *)*param_2;
  *param_2 = (int)(puVar2 + 1);
  uStack_50 = *puVar2;
  uStack_48 = puVar2[1];
  uStack_40 = *(undefined4 *)(puVar2 + 2);
  *param_2 = (int)(puVar2 + 2);
  *param_2 = (int)puVar2 + 0x14;
  uStack_3c = *(undefined1 *)((int)puVar2 + 0x14);
  *param_2 = (int)puVar2 + 0x15;
  uStack_3b = *(undefined1 *)((int)puVar2 + 0x15);
  *param_2 = (int)puVar2 + 0x16;
  cVar1 = *(char *)((int)puVar2 + 0x16);
  *param_2 = (int)puVar2 + 0x17;
  if (cVar1 != '\0') {
    fn_82FAF650(param_1,&uStack_50);
  }
  uVar3 = *(uint *)*param_2;
  uVar8 = (ulonglong)uVar3;
  *param_2 = (int)((uint *)*param_2 + 1);
  if (uVar8 == 0) {
    fn_82FAFA90(param_1);
  }
  else {
    iVar6 = fn_82FA5060(lbl_831BC768,
                              (uVar8 + ((ulonglong)uVar3 & 0x3fffffff) * 4 & 0x3fffffff) << 2);
    if (iVar6 == 0) {
      uVar5 = 2;
    }
    else {
      if (uVar8 != 0) {
        puVar7 = (undefined4 *)(iVar6 + -4);
        uVar9 = uVar8;
        do {
          uVar4 = *(undefined4 *)*param_2;
          *param_2 = (int)((undefined4 *)*param_2 + 1);
          puVar7[1] = uVar4;
          uVar4 = *(undefined4 *)*param_2;
          *param_2 = (int)((undefined4 *)*param_2 + 1);
          puVar7[2] = uVar4;
          uVar4 = *(undefined4 *)*param_2;
          *param_2 = (int)((undefined4 *)*param_2 + 1);
          puVar7[3] = uVar4;
          uVar4 = *(undefined4 *)*param_2;
          *param_2 = (int)((undefined4 *)*param_2 + 1);
          puVar7[4] = uVar4;
          uVar4 = *(undefined4 *)*param_2;
          *param_2 = (int)((undefined4 *)*param_2 + 1);
          puVar7 = puVar7 + 5;
          *puVar7 = uVar4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      fn_82FAFB18(param_1,iVar6,uVar8);
      fn_82FA5190(lbl_831BC768,iVar6);
    }
  }
  return uVar5;
}

