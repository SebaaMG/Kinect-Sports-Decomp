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
extern int fn_82AA6648();
extern int fn_82AF04D0();
extern int fn_82B1A538();
extern int fn_82B207C8();
extern int fn_82B25248();
extern unsigned int iStack_38;
extern unsigned int uStack_3c;


void fn_82B271F8(int param_1,uint *param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puStack_40;
  uint uStack_3c;
  int iStack_38;
  
  while (((param_2[1] & 1) == 0 && (param_2[1] != 0))) {
    puVar2 = (uint *)(*param_2 & 0xfffffffe);
    puVar5 = puVar2 + -1;
    uVar6 = puVar2[1] - 1;
    puVar1 = (undefined4 *)puVar5[puVar2[1] + 3];
    puVar2[1] = uVar6;
    if (uVar6 == 0) {
      *(uint *)(*puVar2 & 0xfffffffe) = *puVar5;
      *(uint *)(*puVar5 & 0xfffffffe) = *puVar2;
      fn_82AA6648(param_2,puVar5,((ulonglong)puVar2[2] + 4 & 0x3fffffff) << 2);
    }
    iStack_38 = 0;
    uStack_3c = -(uint)((puVar1[1] & 1) == 0) & puVar1[1];
    puStack_40 = puVar1;
    while( true ) {
      if ((uStack_3c == 0) || (bVar3 = false, iStack_38 == *(int *)(uStack_3c + 8))) {
        bVar3 = true;
      }
      if (bVar3) break;
      puVar4 = (undefined4 *)fn_82B1A538(&puStack_40);
      fn_82AF04D0(*puVar4,param_1);
      if ((param_3 & 0xffffffff) != 0) {
        fn_82B25248(param_1,*puVar4,param_3);
      }
    }
    fn_82B207C8(puVar1);
    *puVar1 = *(undefined4 *)(param_1 + 0x3d0);
    *(undefined4 **)(param_1 + 0x3d0) = puVar1;
  }
  *param_2 = *(uint *)(param_1 + 0x3d0);
  *(uint **)(param_1 + 0x3d0) = param_2;
  return;
}

