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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_8301AF50();
extern int fn_83030318();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642EC;


undefined8 fn_83030988(int param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar3;
  undefined8 uVar2;
  int *piVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  if (param_3 == 0) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x118);
    if (uVar6 == 0) {
      fn_8301AF50(lbl_832642EC,*(undefined4 *)(param_1 + 0xc),0);
      uVar2 = 1;
    }
    else {
      iVar3 = fn_82FA5060(lbl_831BC768,*(uint *)(param_1 + 0x118) << 2);
      if (iVar3 == 0) {
        uVar2 = 2;
      }
      else {
        piVar1 = *(int **)(param_1 + 0x104);
        if (piVar1 != (int *)0x0) {
          piVar4 = (int *)(iVar3 + -4);
          do {
            piVar4 = piVar4 + 1;
            *piVar4 = piVar1[8];
            piVar1 = (int *)*piVar1;
          } while (piVar1 != (int *)0x0);
        }
        if (uVar6 != 0) {
          puVar5 = (undefined4 *)(iVar3 + -4);
          do {
            puVar5 = puVar5 + 1;
            fn_83030318(param_1,param_2,*puVar5);
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        fn_82FA5190(lbl_831BC768,iVar3);
        uVar2 = 1;
      }
    }
  }
  else {
    fn_83030318(param_1,param_2);
    uVar2 = 1;
  }
  return uVar2;
}

