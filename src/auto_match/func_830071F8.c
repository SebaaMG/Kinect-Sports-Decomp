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
extern int fn_82FF7D48();
extern int fn_8302AE48();


undefined8 fn_830071F8(int *param_1,ulonglong param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  iVar1 = param_1[8];
  uVar5 = 1;
  if (iVar1 != 0) {
    for (puVar4 = *(uint **)(iVar1 + 0x24);
        (puVar4 != *(uint **)(iVar1 + 0x28) && ((ulonglong)*puVar4 != (param_2 & 0xffffffff)));
        puVar4 = puVar4 + 4) {
    }
    uVar2 = (uint)(*(uint **)(iVar1 + 0x28) != puVar4);
    uVar3 = -(uint)(uVar2 != 0);
    puVar6 = (undefined4 *)(uVar3 & (uint)(puVar4 + 1));
    if (puVar6 == (undefined4 *)0x0) {
      uVar5 = 0xf;
    }
    else {
      if ((*(byte *)(puVar6 + 2) & 0x80) == 0) {
        fn_8302AE48(*puVar6,uVar3,param_3,-uVar2);
        (**(code **)(*(int *)*puVar6 + 8))();
      }
      fn_82FF7D48((ulonglong)(uint)param_1[8] + 0x24,param_2);
    }
    (**(code **)(*param_1 + 0xdc))(param_1);
  }
  return uVar5;
}

