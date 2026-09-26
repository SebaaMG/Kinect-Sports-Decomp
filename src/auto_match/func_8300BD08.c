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


undefined8 fn_8300BD08(int *param_1,ulonglong param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  
  for (puVar3 = (uint *)param_1[0x12];
      (puVar3 != (uint *)param_1[0x13] && ((ulonglong)*puVar3 != (param_2 & 0xffffffff)));
      puVar3 = puVar3 + 2) {
  }
  uVar2 = (uint)((uint *)param_1[0x13] != puVar3);
  puVar4 = (undefined4 *)(-(uint)(uVar2 != 0) & (uint)(puVar3 + 1));
  if (puVar4 != (undefined4 *)0x0) {
    piVar1 = (int *)*puVar4;
    (**(code **)(*piVar1 + 0x2c))(piVar1,0,param_3,-uVar2);
    fn_82FAF408(param_1 + 0x12,param_2);
    (**(code **)(*param_1 + 8))(param_1);
  }
  return 1;
}

