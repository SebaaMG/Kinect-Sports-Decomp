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
extern int fn_82FE85A0();
extern int fn_82FF6520();
extern int fn_82FF6678();
extern int fn_82FF8068();
extern int fn_83016110();
extern int fn_8302AE30();
extern unsigned int lbl_832642E0;


undefined8 fn_82FF72A8(int param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar4;
  undefined4 *puVar5;
  ulonglong uVar3;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  if ((param_3 & 0xffffffff) == 0) {
    uVar2 = 0xe;
  }
  else {
    piVar4 = (int *)fn_83016110((ulonglong)lbl_832642E0 + 0x328,param_2);
    if (piVar4 == (int *)0x0) {
      uVar2 = 0x10;
    }
    else {
      for (puVar6 = *(uint **)(param_1 + 4);
          (puVar6 != *(uint **)(param_1 + 8) && ((ulonglong)*puVar6 != (param_2 & 0xffffffff)));
          puVar6 = puVar6 + 2) {
      }
      puVar8 = (uint *)(-(uint)(*(uint **)(param_1 + 8) != puVar6) & (uint)(puVar6 + 1));
      uVar1 = *puVar8;
      puVar6 = *(uint **)(uVar1 + 0x14);
      for (puVar7 = *(uint **)(uVar1 + 0x10);
          (puVar7 != puVar6 && ((ulonglong)*puVar7 != (param_3 & 0xffffffff))); puVar7 = puVar7 + 4)
      {
      }
      uVar1 = (uint)(puVar6 != puVar7);
      if ((-(uint)(uVar1 != 0) & (uint)(puVar7 + 1)) != 0) {
        fn_82FF6678(param_1,param_2,param_3,-uVar1);
      }
      puVar5 = (undefined4 *)fn_82FF8068((ulonglong)*puVar8 + 0x10,param_3);
      if (puVar5 == (undefined4 *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
        uVar2 = 2;
      }
      else {
        *puVar5 = piVar4;
        puVar5[1] = param_4;
        *(byte *)(puVar5 + 2) = *(byte *)(puVar5 + 2) & 0x7f;
        fn_8302AE30(piVar4,0);
        uVar3 = fn_82FF6520(param_1,param_2);
        if ((uVar3 & 0xffffffff) == (param_3 & 0xffffffff)) {
          fn_82FE85A0(param_2,param_3);
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

