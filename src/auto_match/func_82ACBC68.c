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
extern int fn_82AA66A8();
extern int fn_82ACA4F0();
extern int fn_82ACAD38();
extern int fn_82ACB228();
extern int fn_82ACBB48();


ulonglong fn_82ACBC68(int *param_1,undefined8 param_2,char param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar3 = fn_82ACB228(param_1,0,param_2,4);
  if ((int)uVar3 == -1) {
    puVar1 = (uint *)param_1[1];
    if ((~(uint)puVar1 & 1) == 0) {
      uVar3 = 0x1f;
    }
    else {
      uVar3 = ((ulonglong)*puVar1 & 0x7ffffff) * 0x20 - 1;
    }
    if ((((uVar3 & 0xffffffff) >> 2) - 1 & 0xffffffff) < 0xff) {
      if ((~(uint)puVar1 & 1) == 0) {
        lVar5 = 0x1f;
      }
      else {
        lVar5 = ((ulonglong)*puVar1 & 0x7ffffff) * 0x20 + -1;
      }
      fn_82ACBB48(param_1 + 1,lVar5 + 4);
      uVar3 = fn_82ACB228(param_1,0,param_2,4);
      if ((int)uVar3 != -1) goto LAB_82acbd70;
      if (param_3 != '\0') {
        iVar2 = *param_1;
        if (*(int *)(iVar2 + 0x318) != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(iVar2,0xdbe);
        }
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(iVar2,0xded);
      }
    }
    else if (param_3 != '\0') {
      iVar2 = *param_1;
      if (*(int *)(iVar2 + 0x318) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(iVar2,0xdbe);
      }
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(iVar2,0xded);
    }
    uVar3 = 0xffffffffffffffff;
  }
  else {
LAB_82acbd70:
    uVar6 = (uVar3 & 0xffffffff) >> 2 & 0x3ffffffc;
    uVar4 = fn_82ACA4F0(uVar3 & 0xf,param_2);
    fn_82ACAD38(param_1 + 1,uVar6,uVar6 + 3,uVar4);
    uVar3 = uVar3 & 0xfffffff0 | uVar4 & 0xffffffff0000000f;
  }
  return uVar3;
}

