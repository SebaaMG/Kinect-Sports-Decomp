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
extern unsigned int lbl_832642E0;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack_2f;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_8300FDB8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b0;
  int *piStack_ac;
  undefined4 uStack_a8;
  undefined4 *puStack_a4;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  
  uStack00000038 = param_5;
  uStack00000040 = param_6;
  piVar1 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4);
  if (piVar1 != (int *)0x0) {
    puStack_a4 = &uStack_c0;
    uStack_44 = 0;
    uStack_30 = 0;
    uStack_88 = 0;
    uStack_b0 = 0;
    uStack_98 = uStack00000038;
    uStack_90 = uStack00000040;
    uStack_2f = 1;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_c0 = 0;
    uStack_bc = 4;
    piStack_ac = piVar1;
    uStack_a8 = param_3;
    (**(code **)(*piVar1 + 0x18))(piVar1,&uStack_b0);
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}

