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
extern int fn_827C3A38();


ulonglong fn_827C3B98(int param_1,ulonglong param_2,int param_3,int param_4,uint param_5)

{
  char cVar2;
  ulonglong uVar1;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  if (param_3 < (int)param_5) {
    cVar2 = fn_827C3A38();
    if (cVar2 == '\0') {
      return 0xffffffffffffffff;
    }
    param_2 = (ulonglong)*(uint *)(param_1 + 8);
    param_3 = *(int *)(param_1 + 0xc);
  }
  uVar3 = param_3 - param_5;
  piVar4 = (int *)(param_5 * 4 + param_4);
  uVar5 = (int)param_2 >> (uVar3 & 0x3f) & (1 << (param_5 & 0x3f)) - 1U;
  if (*piVar4 < (int)uVar5) {
    do {
      if ((int)uVar3 < 1) {
        cVar2 = fn_827C3A38(param_1,param_2,uVar3,1);
        if (cVar2 == '\0') {
          return 0xffffffffffffffff;
        }
        param_2 = (ulonglong)*(uint *)(param_1 + 8);
        uVar3 = *(uint *)(param_1 + 0xc);
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 1;
      param_5 = param_5 + 1;
      uVar5 = (int)param_2 >> (uVar3 & 0x3f) & 1U | uVar5 << 1;
    } while (*piVar4 < (int)uVar5);
  }
  *(int *)(param_1 + 8) = (int)param_2;
  *(uint *)(param_1 + 0xc) = uVar3;
  if ((int)param_5 < 0x11) {
    uVar1 = (ulonglong)
            *(byte *)(*(int *)((param_5 + 0x12) * 4 + param_4) + *(int *)(param_4 + 0x8c) + uVar5 +
                     0x11);
  }
  else {
    *(undefined4 *)(**(int **)(param_1 + 0x10) + 0x14) = 0x76;
    (**(code **)(**(int **)(param_1 + 0x10) + 4))(*(int **)(param_1 + 0x10),0xffffffffffffffff);
    uVar1 = 0;
  }
  return uVar1;
}

