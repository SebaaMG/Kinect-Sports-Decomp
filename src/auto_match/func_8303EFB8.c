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
extern int fn_8302BBA8();
extern unsigned int lbl_832642E0;
extern unsigned int uStack_3a;
extern unsigned int uStack_3b;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_8303EFB8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar2;
  undefined8 uVar1;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  
  piVar2 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,*(undefined4 *)(param_1 + 0x10));
  if (piVar2 == (int *)0x0) {
    uVar1 = 0xf;
  }
  else {
    uStack_3a = *(undefined1 *)(param_1 + 0x28);
    uStack_40 = *(uint *)(param_1 + 0x14) >> 3 & 0x1f;
    uStack_3c = 0;
    uStack_3b = 0;
    uStack_48 = 0;
    uStack_50 = param_2;
    uStack_4c = param_3;
    uStack_44 = fn_8302BBA8(param_1);
    uVar1 = (**(code **)(*piVar2 + 0x1c))(piVar2,&uStack_50);
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return uVar1;
}

