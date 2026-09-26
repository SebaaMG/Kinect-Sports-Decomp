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
extern int fn_82A5B680();
extern int fn_82A5C760();


longlong fn_82A5C590(uint param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  uint *puVar2;
  longlong lVar3;
  
  lVar3 = 0;
  iVar1 = fn_82A5B680(param_1,param_3);
  if (iVar1 == 0) {
    puVar2 = (uint *)fn_82A3FF60(0xffffffff83219d50,0x14,0x20970006,0);
    if (puVar2 == (uint *)0x0) {
      lVar3 = -0x7ff8fff2;
    }
    else {
      puVar2[1] = (uint)param_3;
      puVar2[3] = param_1;
      puVar2[2] = 3;
      *puVar2 = (uint)(param_3 != 0);
      puVar2[4] = (uint)param_2;
      lVar3 = fn_82A5C760(*(undefined4 *)(param_1 + 0x10),puVar2);
      if (lVar3 < 0) {
        fn_82A4F4E0(puVar2);
      }
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 4) + 0x20))(*(int **)(param_1 + 4),param_2);
  }
  return lVar3;
}

