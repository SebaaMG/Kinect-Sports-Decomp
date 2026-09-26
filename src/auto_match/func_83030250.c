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
extern int fn_82FAF408();
extern int fn_83031520();


undefined8 fn_83030250(int *param_1,ulonglong param_2,undefined8 param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  
  for (puVar2 = (uint *)param_1[0x1f];
      (puVar2 != (uint *)param_1[0x20] && ((ulonglong)*puVar2 != (param_2 & 0xffffffff)));
      puVar2 = puVar2 + 2) {
  }
  uVar1 = (uint)((uint *)param_1[0x20] != puVar2);
  puVar3 = (undefined4 *)(-(uint)(uVar1 != 0) & (uint)(puVar2 + 1));
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)(*(int *)*puVar3 + 0x2c))((int *)*puVar3,0,param_3,-uVar1);
    fn_82FAF408(param_1 + 0x1f,param_2);
  }
  fn_83031520(param_1 + 0x39,param_2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return 1;
}

