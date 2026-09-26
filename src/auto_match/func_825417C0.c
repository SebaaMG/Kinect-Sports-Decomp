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
extern int fn_82631578();
extern int fn_82637B30();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82639380();
extern int fn_82639480();
extern int fn_82639528();
extern int fn_82639628();
extern int fn_826397C8();
extern unsigned int lbl_821CC160;


void fn_825417C0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_2 == 8) {
    fn_82637B30(*param_1,1);
    fn_82637C50(*param_1,6);
    fn_82637CE0(*param_1,7);
    uVar2 = lbl_821CC160;
    iVar5 = *param_1;
    *(uint *)(iVar5 + 0x293c) = *(uint *)(iVar5 + 0x293c) | 8;
    *(ulonglong *)(iVar5 + 0x10) = *(ulonglong *)(iVar5 + 0x10) | 0x40200;
    iVar5 = *param_1;
    *(undefined4 *)(iVar5 + 0x2904) = uVar2;
    *(ulonglong *)(iVar5 + 0x10) = *(ulonglong *)(iVar5 + 0x10) | 0x8000000;
    iVar5 = *param_1;
    *(uint *)(iVar5 + 0x293c) = *(uint *)(iVar5 + 0x293c) & 0xfffffff8 | 4;
    uVar3 = *(ulonglong *)(iVar5 + 0x10);
  }
  else {
    if ((param_2 != 4) && (param_2 != 0x10)) {
      if (((param_2 == 1) || (param_2 == 0x80)) || (param_2 == 0x20)) {
                    /* WARNING: Subroutine does not return */
        fn_82631578(*param_1,0);
      }
      goto LAB_825418f0;
    }
    iVar5 = *param_1;
    *(uint *)(iVar5 + 0x293c) = *(uint *)(iVar5 + 0x293c) & 0xfffffff7;
    uVar3 = *(ulonglong *)(iVar5 + 0x10) | 0x40000;
  }
  *(ulonglong *)(iVar5 + 0x10) = uVar3 | 0x200;
  iVar5 = *param_1;
  *(uint *)(iVar5 + 0x293c) = *(uint *)(iVar5 + 0x293c) & 0xffffffef;
  *(ulonglong *)(iVar5 + 0x10) = *(ulonglong *)(iVar5 + 0x10) | 0x200;
LAB_825418f0:
  lVar6 = 0;
  iVar5 = 0;
  do {
    fn_82639380(*param_1,lVar6,1);
    fn_82639528(*param_1,lVar6);
    iVar1 = *param_1;
    uVar3 = 0x8000000000000000 >> (lVar6 + 0x20U & 0x7f);
    *(uint *)(iVar5 + iVar1 + 0x48c) = *(uint *)(iVar5 + iVar1 + 0x48c) & 0xfe7fffff | 0x800000;
    *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | uVar3;
    fn_826397C8(*param_1,lVar6,2);
    iVar1 = *param_1;
    *(uint *)(iVar5 + iVar1 + 0x480) = *(uint *)(iVar5 + iVar1 + 0x480) & 0xfff8ffff | 0x20000;
    *(ulonglong *)(iVar1 + 0x18) = uVar3 | *(ulonglong *)(iVar1 + 0x18);
    fn_82639628(*param_1);
    fn_82639480(*param_1,lVar6,0);
    iVar1 = *param_1;
    lVar6 = lVar6 + 1;
    iVar4 = iVar5 + iVar1;
    iVar5 = iVar5 + 0x18;
    *(uint *)(iVar4 + 0x494) = *(uint *)(iVar4 + 0x494) | 0x18;
    *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | uVar3;
  } while (iVar5 < 0x180);
  return;
}

