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
extern int fn_82FAB9C0();
extern int fn_83011240();
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642E4;
extern unsigned int uStack_4a;
extern unsigned int uStack_4b;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


undefined8 fn_8302FC98(int param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  
  uVar2 = 1;
  piVar1 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4);
  if (piVar1 != (int *)0x0) {
    fn_83011240(lbl_832642E4,param_2,param_4);
    if ((*(byte *)(param_3 + 2) & 0xe0) == 0x20) {
      uStack_54 = *param_3;
      uStack_5c = (undefined4)param_4;
      uStack_4c = 0;
      uStack_4a = 0;
      uStack_50 = 4;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_4b = 0;
      uVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1,&uStack_60);
    }
    else {
      (**(code **)(*piVar1 + 0x28))(piVar1,param_4,*(undefined4 *)(param_1 + 0xc),0);
    }
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return uVar2;
}

