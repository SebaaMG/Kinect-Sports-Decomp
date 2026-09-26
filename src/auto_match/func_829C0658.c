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
extern int fn_829C0080();
extern int fn_829C01A0();
extern int fn_829C01B8();
extern int fn_829C02C0();
extern int fn_829C0330();
extern int fn_829C0650();


void fn_829C0658(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x30);
  *(undefined4 **)(param_1 + 0x1c8) = puVar1;
  puVar1[2] = 0;
  *puVar1 = fn_829C01A0;
  iVar3 = *(int *)(param_1 + 0x78) * *(int *)(param_1 + 0x70);
  puVar1[10] = iVar3;
  if (*(int *)(param_1 + 0x13c) == 2) {
    puVar1[1] = fn_829C01B8;
    puVar1[3] = fn_829C0650;
    uVar2 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,iVar3);
    puVar1[8] = uVar2;
  }
  else {
    puVar1[8] = 0;
    puVar1[1] = fn_829C02C0;
    puVar1[3] = fn_829C0330;
  }
  fn_829C0080(param_1);
  return;
}

