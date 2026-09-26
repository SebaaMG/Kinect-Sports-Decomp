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
extern int fn_8265C9E0();
extern int fn_82814B70();
extern int fn_82814BF0();
extern int fn_82814C50();
extern int fn_82815268();
extern int fn_82815630();
extern int fn_82817160();
extern int fn_8281FDF0();
extern int fn_828201D0();
extern int fn_82820880();
extern int fn_82821728();
extern int fn_82822210();
extern int (*lbl_8320A5D4)();
extern unsigned int lbl_8320A5D8;


ulonglong fn_82815798(int param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  char cVar4;
  undefined4 uVar2;
  int iVar3;
  longlong lVar5;
  
  if (param_3 != 0) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x200;
  }
  lVar5 = (ulonglong)*(uint *)(param_2 + 0x68) - 1;
  *(int *)(param_2 + 0x68) = (int)lVar5;
  if (lVar5 == 0) {
    if (*(int *)(param_2 + 0xc) == 0) {
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x400;
      if (*(int *)(param_2 + 0x20) != 0) {
        fn_82820880(param_2);
      }
      fn_82814B70(param_2);
      fn_82821728(param_2,1,1);
      fn_82814C50(param_2);
      fn_82822210(param_2);
      cVar4 = fn_8281FDF0(param_2,0xffffffff8201e0b0);
      if (cVar4 == '\0') {
        fn_82814BF0(param_2);
      }
      cVar4 = fn_8281FDF0(param_2,0xffffffff8201e0bc);
      if (cVar4 != '\0') {
        uVar1 = fn_8265C9E0(0x30);
        if ((uVar1 & 0xffffffff) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = fn_82815630(uVar1,param_2);
        }
        *(undefined4 *)(param_2 + 0x80) = uVar2;
      }
      if ((*(uint *)(param_2 + 0x10) & 2) == 0) {
        if ((lbl_8320A5D4 != (code *)0x0) &&
           (iVar3 = (*lbl_8320A5D4)(*(undefined4 *)(param_2 + 0x18)), iVar3 != 0)) {
          *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x400;
        }
        lbl_8320A5D8 = lbl_8320A5D8 + -1;
      }
      else {
        if (*(code **)(param_1 + 0x10) != (code *)0x0) {
          (**(code **)(param_1 + 0x10))(*(undefined4 *)(param_2 + 0x18));
        }
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      }
      if (*(int *)(param_2 + 0xc) == 0) {
        *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x801;
        fn_82817160(param_2);
        fn_828201D0(param_2);
        if (*(code **)(param_2 + 0x14) != (code *)0x0) {
          (**(code **)(param_2 + 0x14))
                    (param_2,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0xc));
        }
        goto LAB_82815954;
      }
    }
    uVar1 = fn_82815268(param_1,param_2,*(undefined4 *)(param_2 + 0x14));
  }
  else {
LAB_82815954:
    uVar1 = (ulonglong)*(uint *)(param_2 + 0xc);
  }
  return uVar1;
}

