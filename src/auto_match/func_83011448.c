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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_8300F2C0();
extern int fn_8300F848();
extern int fn_83010658();
extern int fn_83019E38();
extern unsigned int uStack_80;


void fn_83011448(int param_1,int param_2,undefined8 param_3,char param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char cVar7;
  int iVar6;
  undefined8 uStack_80;
  undefined4 *puStack_78;
  undefined4 *puStack_74;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x70); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = puVar1[2];
    iVar6 = *(int *)(iVar2 + 8);
    if (((((*(uint *)(iVar6 + 0x14) & 0xff00000) != 0x300000) || (param_4 != '\0')) &&
        ((param_2 == 0 || (param_2 == *(int *)(iVar2 + 0x34))))) &&
       ((cVar7 = fn_83010658(param_1,iVar6,param_3), cVar7 == '\0' &&
        ((*(uint *)(iVar6 + 0x14) & 0xffffff00) != 0x5010000)))) {
      *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + 1;
    }
  }
  puVar5 = *(undefined4 **)(param_1 + 0x50);
  puVar1 = (undefined4 *)0x0;
  while (puVar4 = puVar5, puVar4 != (undefined4 *)0x0) {
    iVar2 = puVar4[2];
    iVar6 = *(int *)(iVar2 + 8);
    if (((((*(uint *)(iVar6 + 0x14) & 0xff00000) == 0x300000) && (param_4 == '\0')) ||
        ((param_2 != 0 && (param_2 != *(int *)(iVar2 + 0x34))))) ||
       ((cVar7 = fn_83010658(param_1,iVar6,param_3), cVar7 != '\0' ||
        ((*(uint *)(iVar6 + 0x14) & 0xffffff00) == 0x5010000)))) {
      puVar5 = (undefined4 *)*puVar4;
      puVar1 = puVar4;
    }
    else {
      uVar3 = *(undefined4 *)(iVar6 + 0x10);
      uStack_80 = CONCAT44(iVar2,(((U64)(uStack_80) >> 32) & 0xFFFFFFFF));
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x90);
      *(undefined4 *)(iVar2 + 0x30) = 0;
      iVar6 = fn_83019E38(param_1 + 0x70,uVar3,&uStack_80);
      if (iVar6 != 1) {
        fn_8300F848(param_1,iVar2,0);
        fn_8300F2C0(param_1,iVar2);
      }
      puStack_78 = (undefined4 *)*puVar4;
      if (puVar4 == *(undefined4 **)(param_1 + 0x50)) {
        *(undefined4 **)(param_1 + 0x50) = puStack_78;
      }
      else {
        *puVar1 = puStack_78;
      }
      if (puVar4 == *(undefined4 **)(param_1 + 0x54)) {
        *(undefined4 **)(param_1 + 0x54) = puVar1;
      }
      uStack_80 = CONCAT44(puStack_78,puVar1);
      *puVar4 = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 **)(param_1 + 0x58) = puVar4;
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
      puVar5 = puStack_78;
      puStack_74 = puVar1;
    }
  }
  return;
}

