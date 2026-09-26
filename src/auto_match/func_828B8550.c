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
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_825170B8();
extern int fn_8265C9E0();
extern int fn_828B6D00();
extern int fn_828B80C8();
extern int fn_828B8F98();
extern int fn_828B9D90();
extern int fn_828B9FC0();
extern int fn_828BA038();
extern int fn_828BAB20();
extern unsigned int iStack_74;
extern unsigned int iStack_7c;
extern unsigned int iStack_84;
extern unsigned int iStack_8c;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_90;


void fn_828B8550(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int *param_7,int *param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  char cVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined4 uStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  uint uStack_78;
  int iStack_74;
  
  fn_828B6D00(&uStack_78,param_1);
  uVar7 = (ulonglong)uStack_78;
  if (uVar7 == 0) {
    uVar7 = fn_8265C9E0(0xd0);
    if ((uVar7 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      iVar1 = param_1[5];
      uVar5 = (**(code **)(*param_1 + 4))(param_1);
      uVar5 = fn_828B9D90(uVar7,iVar1,param_2,param_3,param_4,param_5,uVar5,param_6);
    }
    fn_828BAB20(&uStack_80,uVar5);
    puVar8 = (undefined4 *)*param_7;
    if (puVar8 != (undefined4 *)param_7[1]) {
      do {
        iVar1 = puVar8[3];
        uVar2 = puVar8[2];
        uStack_90 = 0;
        iStack_8c = 0;
        uVar3 = uStack_90;
        iVar4 = iStack_8c;
        if (((iVar1 != 0) &&
            (cVar6 = fn_8223AAC0(iVar1), uVar3 = uStack_90, iVar4 = iStack_8c, cVar6 != '\0')) &&
           (uVar3 = uVar2, iVar4 = iVar1, iStack_8c != 0)) {
          fn_822315A0();
        }
        iStack_8c = iVar4;
        uStack_90 = uVar3;
        iVar1 = puVar8[1];
        uVar2 = *puVar8;
        uStack_88 = 0;
        iStack_84 = 0;
        uVar3 = uStack_88;
        iVar4 = iStack_84;
        if (((iVar1 != 0) &&
            (cVar6 = fn_8223AAC0(iVar1), uVar3 = uStack_88, iVar4 = iStack_84, cVar6 != '\0')) &&
           (uVar3 = uVar2, iVar4 = iVar1, iStack_84 != 0)) {
          fn_822315A0();
        }
        iStack_84 = iVar4;
        uStack_88 = uVar3;
        fn_828B9FC0(uStack_80,&uStack_88,&uStack_90);
        puVar8 = puVar8 + 4;
      } while (puVar8 != (undefined4 *)param_7[1]);
    }
    puVar8 = (undefined4 *)*param_8;
    if (puVar8 != (undefined4 *)param_8[1]) {
      do {
        iVar1 = puVar8[3];
        uVar2 = puVar8[2];
        uStack_88 = 0;
        iStack_84 = 0;
        uVar3 = uStack_88;
        iVar4 = iStack_84;
        if (((iVar1 != 0) &&
            (cVar6 = fn_8223AAC0(iVar1), uVar3 = uStack_88, iVar4 = iStack_84, cVar6 != '\0')) &&
           (uVar3 = uVar2, iVar4 = iVar1, iStack_84 != 0)) {
          fn_822315A0();
        }
        iStack_84 = iVar4;
        uStack_88 = uVar3;
        iVar1 = puVar8[1];
        uVar2 = *puVar8;
        uStack_90 = 0;
        iStack_8c = 0;
        uVar3 = uStack_90;
        iVar4 = iStack_8c;
        if (((iVar1 != 0) &&
            (cVar6 = fn_8223AAC0(iVar1), uVar3 = uStack_90, iVar4 = iStack_8c, cVar6 != '\0')) &&
           (uVar3 = uVar2, iVar4 = iVar1, iStack_8c != 0)) {
          fn_822315A0();
        }
        iStack_8c = iVar4;
        uStack_90 = uVar3;
        fn_828BA038(uStack_80,&uStack_90,&uStack_88);
        puVar8 = puVar8 + 4;
      } while (puVar8 != (undefined4 *)param_8[1]);
    }
    fn_828B80C8(param_1 + 1,&uStack_80);
    if (iStack_7c != 0) {
      fn_822315A0();
    }
  }
  else {
    uVar5 = (**(code **)(*param_1 + 4))(param_1);
    fn_828B8F98(uVar7,param_2,param_3,param_4,param_5,uVar5,param_6);
    fn_825170B8(uVar7 + 8,param_7);
    fn_825170B8(uVar7 + 0x18,param_8);
  }
  if (iStack_74 != 0) {
    fn_822315A0();
  }
  return;
}

