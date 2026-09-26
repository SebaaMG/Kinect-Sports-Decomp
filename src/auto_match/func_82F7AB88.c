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
extern int fn_82F68240();
extern int fn_82F7AB20();


void fn_82F7AB88(int param_1,int param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined2 *puVar4;
  
  puVar2 = (undefined4 *)fn_82F68240();
  uVar1 = *puVar2;
  if (((*(uint *)(param_3 + 0xc) & 0x40) == 0) || (*(int *)(param_3 + 8) != 0)) {
    puVar2 = (undefined4 *)fn_82F68240();
    *puVar2 = 0;
    if (0 < param_2) {
      puVar4 = (undefined2 *)(param_1 + -2);
      do {
        puVar4 = puVar4 + 1;
        param_2 = param_2 + -1;
        fn_82F7AB20(*puVar4,param_3,param_4);
        if (*param_4 == -1) {
          piVar3 = (int *)fn_82F68240();
          if (*piVar3 != 0x2a) break;
          fn_82F7AB20(0x3f,param_3,param_4);
        }
      } while (0 < param_2);
    }
    piVar3 = (int *)fn_82F68240();
    if (*piVar3 == 0) {
      puVar2 = (undefined4 *)fn_82F68240();
      *puVar2 = uVar1;
    }
  }
  else {
    *param_4 = *param_4 + param_2;
  }
  return;
}

