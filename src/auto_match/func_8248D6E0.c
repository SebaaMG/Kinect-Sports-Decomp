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
extern int fn_822315A0();
extern int fn_82A1DBD8();
extern unsigned int iStack_20;
extern unsigned int uStack_1c;


undefined8 fn_8248D6E0(int param_1,undefined4 *param_2)

{
  int iVar2;
  undefined8 uVar1;
  int iStack_20;
  undefined4 uStack_1c;
  
  iStack_20 = 0;
  iVar2 = (**(code **)(*(int *)*param_2 + 0x14))((int *)*param_2,&iStack_20,&uStack_1c);
  if (iVar2 == 0) {
    if (param_2[1] != 0) {
      fn_822315A0();
    }
    uVar1 = 0;
  }
  else {
    if (iStack_20 != 0) {
      fn_82A1DBD8(*(undefined4 *)(param_1 + 0xc),iStack_20,uStack_1c);
    }
    if (param_2[1] != 0) {
      fn_822315A0();
    }
    uVar1 = 1;
  }
  return uVar1;
}

