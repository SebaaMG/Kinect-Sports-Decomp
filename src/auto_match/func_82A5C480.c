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
extern int fn_82A1BB18();
extern int fn_82A3FF60();
extern int fn_82A4F4E0();
extern int fn_82A5B680();
extern int fn_82A5C760();
extern int fn_82F68CC0();


longlong fn_82A5C480(uint param_1,longlong param_2,longlong param_3,undefined8 param_4,
                      longlong param_5)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  
  lVar4 = 0;
  uVar1 = fn_82A5B680(param_1,param_3);
  iVar2 = fn_82A1BB18();
  if (iVar2 == *(int *)(param_1 + 0x14)) {
    uVar1 = -(uint)(param_2 != 1) & uVar1;
  }
  if (uVar1 == 0) {
    puVar3 = (uint *)fn_82A3FF60(0xffffffff83219d50,param_5 + 0x18,0x20970006,0);
    if (puVar3 == (uint *)0x0) {
      lVar4 = -0x7ff8fff2;
    }
    else {
      puVar3[1] = (uint)param_3;
      puVar3[3] = param_1;
      puVar3[2] = 2;
      *puVar3 = (uint)(param_3 != 0);
      puVar3[4] = (uint)param_2;
      puVar3[5] = (uint)param_5;
      fn_82F68CC0(puVar3 + 6,param_4,param_5);
      lVar4 = fn_82A5C760(*(undefined4 *)(param_1 + 0x10),puVar3);
      if (lVar4 < 0) {
        fn_82A4F4E0(puVar3);
      }
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),param_2,param_4,param_5);
  }
  return lVar4;
}

