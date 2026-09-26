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
extern int fn_82A3FF60();
extern int fn_82A4F4E0();
extern int fn_82A5C760();
extern int fn_82A5CBD8();


longlong fn_82A4B588(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  longlong lVar3;
  
  piVar2 = (int *)(param_1 + 0x1c);
  (**(code **)(*(int *)(param_1 + 0x1c) + 8))(piVar2);
  if (*(int *)(*(int *)(param_1 + 0x48) + 0x80) == 2) {
    puVar1 = (undefined4 *)fn_82A3FF60(0xffffffff83219d50,0x10,0x20970006,0);
    if (puVar1 == (undefined4 *)0x0) {
      lVar3 = -0x7ff8fff2;
    }
    else {
      puVar1[1] = (int)param_2;
      puVar1[2] = 0;
      *puVar1 = 3;
      puVar1[3] = 0;
      lVar3 = fn_82A5C760(*(undefined4 *)(param_1 + 0x4c),puVar1);
      if (lVar3 < 0) {
        fn_82A4F4E0(puVar1);
      }
    }
  }
  else {
    lVar3 = fn_82A5CBD8(*(undefined4 *)(param_1 + 0x4c),param_2);
  }
  (**(code **)(*piVar2 + 0x14))(piVar2);
  return lVar3;
}

