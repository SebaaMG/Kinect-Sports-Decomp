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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_827D5070();
extern int fn_827D5078();
extern int fn_827D5088();
extern int fn_827D5090();
extern int fn_827D50A0();
extern int fn_827D50A8();
extern int fn_827D50B8();
extern int fn_827D50C0();
extern int fn_827D9DD8();
extern int fn_827DA588();
extern int fn_827E60D8();
extern int fn_82811438();
extern unsigned int lbl_83156AA0;


ulonglong fn_827E6208(int param_1,int param_2)

{
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar1;
  int *piVar6;
  ulonglong uVar2;
  undefined4 auStack_50 [4];
  undefined1 auStack_40 [64];
  
  if (*(int *)(param_2 + 0x20) == 0) {
    if (*(int *)(param_1 + 0x3c) <= *(int *)(param_1 + 0x4c)) {
      if (*(int *)(param_1 + 0x40) != 0) {
        uVar3 = fn_827D5070(*(undefined4 *)(param_1 + 0x14));
        **(undefined4 **)(param_1 + 0x40) = uVar3;
      }
      iVar4 = fn_827DA588(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x54));
      if (iVar4 == 0) {
        fn_827D5090(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x50));
        fn_827D50A8(*(undefined4 *)(param_1 + 0x14),0);
      }
      if (*(int *)(param_1 + 0x44) != 0) {
        uVar3 = *(undefined4 *)(param_1 + 0x14);
        iVar4 = fn_827D50A0(uVar3);
        iVar5 = fn_827D5088(uVar3);
        **(int **)(param_1 + 0x44) = iVar4 + iVar5;
      }
      fn_827D9DD8(*(undefined4 *)(param_1 + 8));
      iVar4 = fn_827D50B8(*(undefined4 *)(param_1 + 0x14));
      if ((iVar4 != 0x3e5) &&
         (iVar4 = fn_827D50B8(*(undefined4 *)(param_1 + 0x14)), iVar4 != 0x3e4)) {
        lVar1 = fn_827D5070(*(undefined4 *)(param_1 + 0x14));
        if (lVar1 != 0) {
          if (*(int *)(param_1 + 0x5c) == 1) {
            auStack_50[0] = 3;
            fn_82811438(auStack_40,auStack_50,0x10);
            (**(code **)(*(int *)lbl_83156AA0 + 0x18))(lbl_83156AA0,lVar1,auStack_40);
          }
          else if (*(int *)(param_1 + 0x60) == 0) {
            piVar6 = (int *)fn_827DA588(*(undefined4 *)(param_1 + 0x20),
                                         *(undefined4 *)(param_1 + 0x54));
            (**(code **)(*piVar6 + 0x14))(piVar6,lVar1);
          }
          fn_827D5078(*(undefined4 *)(param_1 + 0x14),0);
        }
        uVar2 = fn_827D50B8(*(undefined4 *)(param_1 + 0x14));
        return uVar2;
      }
      return 0;
    }
  }
  else {
    fn_827D50C0(*(undefined4 *)(param_1 + 0x14));
    iVar4 = fn_827E60D8(param_1);
    if (iVar4 != 0) {
      return (ulonglong)*(uint *)(param_2 + 0x20);
    }
  }
  return 0x3e5;
}

