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
extern int fn_82247000();
extern int fn_8224F838();
extern int fn_8224FB78();
extern int fn_8224FD10();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_82520EB0();
extern int fn_82522588();
extern int fn_828ACCE8();
extern unsigned int iStack_24;
extern unsigned int iStack_28;
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int lbl_83297810;


void fn_8224F700(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar5 = (ulonglong)lbl_83297810;
  uVar1 = *(undefined4 *)(*(int *)(param_2 + 0x2c) + 8);
  if (uVar5 == 0) {
    uVar5 = fn_82511928();
  }
  fn_825138E0(&iStack_30,uVar5,uVar1);
  fn_82522588(&iStack_28,&iStack_30);
  if (*(char *)(param_2 + 0x40) == '\0') {
    if (iStack_30 != 0) {
      if (*(int *)(iStack_28 + 0x38) == 0) {
        bVar6 = false;
      }
      else {
        lVar2 = fn_82247000();
        bVar6 = lVar2 != 0;
      }
      if (bVar6) goto LAB_8224f7f8;
    }
    if (*(char *)(*(int *)(param_2 + 0x2c) + 4) == '\0') {
      if ((iStack_30 == 0) || (cVar4 = fn_828ACCE8(*(undefined4 *)(iStack_30 + 8)), cVar4 == '\0'))
      {
        fn_8224FB78(param_2);
      }
      else {
        fn_8224F838(param_1,param_2);
      }
    }
    else {
      iVar3 = fn_82520EB0();
      if (iVar3 == 2) {
        fn_8224FD10(param_2);
      }
    }
  }
LAB_8224f7f8:
  if (iStack_24 != 0) {
    fn_822315A0();
  }
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  return;
}

