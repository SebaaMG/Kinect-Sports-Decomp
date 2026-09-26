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
extern int fn_82A77458();


longlong fn_82A5BB38(int param_1,longlong param_2)

{
  int iVar1;
  uint *puVar2;
  longlong lVar3;
  
  (**(code **)(**(int **)(param_1 + 0xc) + 8))();
  lVar3 = 0;
  iVar1 = fn_82A5B680(param_1 + 4U,param_2);
  if (iVar1 == 0) {
    puVar2 = (uint *)fn_82A3FF60(0xffffffff83219d50,0x10,0x20970006,0);
    if (puVar2 == (uint *)0x0) {
      lVar3 = -0x7ff8fff2;
    }
    else {
      puVar2[1] = (uint)param_2;
      puVar2[3] = param_1 + 4U;
      puVar2[2] = 8;
      *puVar2 = (uint)(param_2 != 0);
      lVar3 = fn_82A5C760(*(undefined4 *)(param_1 + 0x14),puVar2);
      if (lVar3 < 0) {
        fn_82A4F4E0(puVar2);
      }
    }
  }
  else {
    fn_82A77458(*(undefined4 *)(param_1 + 0x94));
  }
  (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
  return lVar3;
}

