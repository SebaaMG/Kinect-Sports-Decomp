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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82904F08();


undefined8 fn_82907D40(int param_1,undefined8 param_2,int param_3,ulonglong param_4)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar5;
  undefined8 uVar4;
  uint *puVar6;
  
  puVar5 = (uint *)fn_8265C940((param_4 & 0x3fffffff) << 2,0x24810000);
  if (puVar5 == (uint *)0x0) {
    uVar4 = 0xffffffff8007000e;
  }
  else {
    fn_82904F08(param_1,param_2,puVar5);
    if ((param_4 & 0xffffffff) != 0) {
      puVar6 = puVar5;
      do {
        piVar3 = (int *)((param_3 - (int)puVar5) + (int)puVar6);
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar2 = *(uint **)(*piVar3 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
        *puVar2 = *puVar2 | uVar1;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    fn_8265C990(puVar5,0x24810000);
    uVar4 = 0;
  }
  return uVar4;
}

