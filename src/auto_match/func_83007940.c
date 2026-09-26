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
extern int fn_82FF6520();
extern int fn_82FF69D0();
extern int fn_82FF6A78();
extern int fn_830069B8();
extern int fn_83006F88();
extern unsigned int lbl_832642E8;


undefined8 fn_83007940(int *param_1,ulonglong param_2)

{
  char cVar3;
  int iVar2;
  undefined8 uVar1;
  ulonglong uVar4;
  
  iVar2 = param_1[8];
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (ulonglong)*(uint *)(iVar2 + 0x30);
  }
  if (uVar4 != (param_2 & 0xffffffff)) {
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x30) != 0)) {
      fn_82FF6A78(lbl_832642E8,*(int *)(iVar2 + 0x30),param_1);
      (**(code **)(*param_1 + 0xd4))(param_1);
      *(undefined4 *)(param_1[8] + 0x30) = 0;
    }
    if ((param_2 & 0xffffffff) != 0) {
      cVar3 = fn_830069B8(param_1);
      if (cVar3 == '\0') {
        return 2;
      }
      iVar2 = fn_82FF69D0(lbl_832642E8,param_2,param_1);
      if (iVar2 == 1) {
        *(int *)(param_1[8] + 0x30) = (int)param_2;
        uVar1 = fn_82FF6520(lbl_832642E8,param_2);
        fn_83006F88(param_1,uVar1);
      }
    }
    (**(code **)(*param_1 + 0xdc))(param_1);
  }
  return 1;
}

