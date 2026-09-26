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
extern int fn_8277BB80();
extern int fn_8277F4F0();
extern int fn_8277F650();
extern unsigned int iStack_74;
extern unsigned int iStack_80;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_84;
extern unsigned int uStack_88;


void fn_8277FDC0(int param_1,int param_2,int param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  uint uStack_7c;
  uint uStack_78;
  int iStack_74;
  char cStack_70;
  
  iVar7 = param_2;
  if (*(int *)(param_3 + 0x18) != -1) {
    iVar7 = *(int *)(param_3 + 0x18) * 0xc + *(int *)(param_1 + 0x128);
  }
  iStack_8c = *(int *)(param_3 + 0x10);
  iStack_90 = param_1 + 0x128;
  uStack_84 = *(undefined4 *)(param_3 + 0xc);
  uStack_7c = *(uint *)(param_3 + 8);
  iStack_74 = *(int *)(param_3 + 4);
  uStack_88 = *(undefined4 *)(param_3 + 0x14);
  iVar1 = *(int *)(*(int *)(param_2 + 4) + 0x10);
  uStack_78 = *(uint *)(iStack_8c * 0xc + *(int *)(param_1 + 0x128) + 8);
  cStack_70 = '\x01';
  iStack_80 = param_2;
  do {
    cVar6 = cStack_70;
    iVar5 = iStack_74;
    uVar4 = uStack_78;
    uVar3 = uStack_7c;
    iVar8 = iStack_80;
    if (cStack_70 == '\0') {
      if (uStack_7c != uStack_78) {
        fn_8277F650(param_1,iStack_80,iVar1);
        uVar2 = *(undefined4 *)(iVar8 + 4);
        if ((int)param_4 != -1) {
          fn_8277F4F0(param_1,uVar2,param_4 | 0x40000000);
          fn_8277F4F0(param_1,uVar2,param_4 << 0x20 | param_4 & 0xbfffffff);
        }
        goto LAB_8277febc;
      }
    }
    else {
LAB_8277febc:
      uVar2 = *(undefined4 *)(iVar8 + 4);
      if (uVar3 != 0xffffffff) {
        fn_8277F4F0(param_1,uVar2,uVar3 | 0x40000000);
      }
      if (uVar4 != 0xffffffff) {
        fn_8277F4F0(param_1,uVar2,CONCAT44(uVar4,uVar4) & 0xffffffffbfffffff);
      }
    }
    if ((iVar5 != iVar1) || (*(int *)(iVar8 + 4) == 0)) {
      if (*(char *)(*(int *)(param_1 + 0x24) + iVar5) == '\0') {
        *(undefined4 *)(iVar8 + 4) = 0;
      }
      else {
        if (cVar6 != '\0') {
          iVar8 = iVar7;
          iStack_80 = iVar7;
        }
        fn_8277F650(param_1,iVar8,iVar5);
        uVar2 = *(undefined4 *)(iVar8 + 4);
        if (uVar3 != 0xffffffff) {
          fn_8277F4F0(param_1,uVar2,uVar3 | 0x40000000);
        }
        if (uVar4 != 0xffffffff) {
          fn_8277F4F0(param_1,uVar2,CONCAT44(uVar4,uVar4) & 0xffffffffbfffffff);
        }
      }
    }
    cVar6 = fn_8277BB80(&iStack_90,0xffffffff8277ba88);
    if (cVar6 == '\0') {
      *(undefined4 *)(param_3 + 0x14) = 0;
      return;
    }
  } while( true );
}

