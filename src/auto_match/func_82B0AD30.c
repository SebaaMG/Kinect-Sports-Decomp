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
extern int fn_82B09C40();
extern int fn_82B83718();


undefined8 fn_82B0AD30(undefined8 param_1,int param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
LAB_82b0ad48:
  uVar3 = 0;
  piVar4 = (int *)(param_3 + 0x2c);
  do {
    if ((*(uint *)(param_3 + 8) >> 0x13 & 7) <= uVar3) {
      return 0;
    }
    if (*(int *)(*piVar4 + 0xc) != param_2) {
      iVar2 = fn_82B09C40(param_1,param_2);
      if (iVar2 != 0) {
        fn_82B83718(param_1,*(undefined4 *)(param_2 + 0x1c));
        return 1;
      }
      if ((*(uint *)(param_3 + 8) & 0x3f80) == 0x3980) break;
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 1;
  } while( true );
  for (puVar1 = *(uint **)(param_2 + 4); puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
    param_3 = puVar1[4];
    if (((param_3 != 0) && ((*(uint *)(param_3 + 8) & 0x3f80) == 0x3700)) &&
       ((*puVar1 & 0xe000000) != 0)) goto LAB_82b0ade0;
  }
  param_3 = 0;
LAB_82b0ade0:
  if (param_3 == 0) {
    return 0;
  }
  goto LAB_82b0ad48;
}

