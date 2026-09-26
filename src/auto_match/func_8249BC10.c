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
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_82250A18();
extern int fn_8249B9D0();
extern int fn_825129C8();
extern int fn_8251CDF8();
extern int fn_825200A8();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_828648F0();
extern int (*lbl_83276798)();
extern unsigned int lbl_832960A0;
extern unsigned int lbl_832960A4;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_8249BC10(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 auStack_70 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_50 [80];
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 != 0) {
    if (uVar1 != 1) {
      if (2 < uVar1) {
        return;
      }
      if (*(int *)(param_1 + 0x84) == 0) {
        uStack_60 = 0;
        uStack_5c = 0;
        uStack_58 = 0;
        fn_8251CDF8(*(undefined4 *)(param_1 + 0x70),param_1 + 0xe0,0,&uStack_60);
        *(undefined4 *)(param_1 + 0x84) = 1;
      }
      if ((*(int *)(param_1 + 0x70) != 0) &&
         (iVar2 = fn_825200A8(*(int *)(param_1 + 0x70),param_1 + 0xe0), iVar2 != 0)) {
        if (lbl_83276798 == (code *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (*lbl_83276798)();
        }
        if (iVar2 != 0) goto LAB_8249bda8;
      }
      if (lbl_83276798 == (code *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*lbl_83276798)();
      }
      if (iVar2 == 0) {
        return;
      }
      if (lbl_832960A4 == 2) {
        return;
      }
      if (lbl_832960A0 != 0) {
        return;
      }
      uVar4 = 3;
      goto LAB_8249bdac;
    }
    iVar2 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar2 = fn_82250A18();
    }
    if (*(char *)(iVar2 + 4) == '\0') {
      if (*(int *)(*(int *)(param_1 + 0x110) + 0x24) != 0) {
        return;
      }
      uVar3 = fn_825129C8(0);
      *(undefined4 *)(*(int *)(param_1 + 0x110) + 0x24) = uVar3;
      fn_828648F0(auStack_50,0xffffffff832924b0);
      uVar4 = fn_828647D8();
      auStack_70[0] = *(undefined4 *)(param_1 + 0xd4);
      auStack_70[0] = fn_82535298(auStack_70,uVar4,0xffffffff83296bc0,0xffffffff83296bd0);
      fn_82864898(auStack_50);
      fn_82536288(auStack_70);
      *(undefined4 *)(param_1 + 0x78) = 1;
    }
  }
LAB_8249bda8:
  uVar4 = 2;
LAB_8249bdac:
  fn_8249B9D0(param_1,uVar4);
  return;
}

