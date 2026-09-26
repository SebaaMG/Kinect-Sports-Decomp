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
extern int fn_82B17248();
extern int fn_82B82D28();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;


undefined8 fn_82B17848(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uStack_30;
  int iStack_2c;
  int aiStack_28 [10];
  
  if ((*(uint *)(param_2 + 8) & 0x3f80) == 0x3b00) {
    param_2 = *(int *)(*(int *)(param_2 + 0x30) + 0xc);
  }
  uVar5 = 0;
  uVar6 = 0;
  uVar2 = **(uint **)(param_2 + 0x2c) >> 0x19 & 7;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      uVar6 = uVar6 + 1;
      uVar5 = 1 << ((**(uint **)(param_2 + 0x2c) >> 5 & 0xff) >> (uVar4 & 0x3f) & 3) | uVar5;
      uVar4 = uVar4 + 2;
    } while (uVar6 < uVar2);
    if ((uVar5 != 0) && (bVar1 = true, uVar5 == (uVar5 & ~(uVar5 - 1)))) goto LAB_82b178d8;
  }
  bVar1 = false;
LAB_82b178d8:
  if (bVar1) {
    uStack_30 = 0;
    iStack_2c = param_2;
    do {
      fn_82B82D28(*(undefined4 *)(param_2 + 0x2c),uStack_30,&iStack_2c,&uStack_30,aiStack_28,0
                        ,0,0);
      param_2 = iStack_2c;
      if ((*(uint *)(iStack_2c + 8) & 0x3f80) != 0x3380) break;
      cVar3 = fn_82B17248(iStack_2c,param_1);
    } while (cVar3 != '\0');
    if ((param_2 == *(int *)(param_4 + 0x30)) && (aiStack_28[0] == 0)) {
      return 1;
    }
  }
  return 0;
}

