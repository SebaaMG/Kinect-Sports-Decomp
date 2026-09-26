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
extern unsigned int *auStack_38;
extern int fn_824D47E0();
extern int fn_825947B8();
extern int fn_825AA5F8();
extern int fn_825ACD10();
extern int fn_825ACF50();
extern int fn_825AD4B8();
extern int fn_8265CA20();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B5650();
extern unsigned int lbl_821C80A0;
extern unsigned int lbl_821C8110;


void fn_825AA7C8(undefined4 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  undefined4 **ppuVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined1 auStack_38 [56];
  
  *param_1 = &lbl_821C80A0;
  param_1[0x1a] = &lbl_821C8110;
  puStack_40 = *(undefined4 **)(param_1[4] + 0x28);
  uVar1 = fn_825AA5F8();
  iVar2 = fn_825ACD10(uVar1,&puStack_40);
  fn_828B5580(auStack_38,param_1 + 5);
  puVar5 = *(undefined4 **)(iVar2 + 4);
  puVar6 = (undefined4 *)(*(undefined4 **)(iVar2 + 4))[1];
  while (*(char *)((int)puVar6 + 0x19) == '\0') {
    cVar3 = fn_828B5650(puVar6 + 3,auStack_38);
    if (cVar3 == '\0') {
      puVar5 = puVar6;
      puVar6 = (undefined4 *)*puVar6;
    }
    else {
      puVar6 = (undefined4 *)puVar6[2];
    }
  }
  puStack_40 = puVar5;
  if ((puVar5 == *(undefined4 **)(iVar2 + 4)) ||
     (cVar3 = fn_828B5650(auStack_38,puVar5 + 3), cVar3 != '\0')) {
    puStack_3c = *(undefined4 **)(iVar2 + 4);
    ppuVar4 = &puStack_3c;
  }
  else {
    ppuVar4 = &puStack_40;
  }
  puVar5 = *ppuVar4;
  fn_828B55B0(auStack_38);
  fn_825ACF50(&puStack_3c,iVar2,puVar5);
  fn_825AD4B8(param_1 + 0x3f);
  fn_8265CA20(param_1[0x3f]);
  param_1[0x3f] = 0;
  fn_824D47E0(param_1 + 0x39);
  fn_825947B8(param_1);
  return;
}

