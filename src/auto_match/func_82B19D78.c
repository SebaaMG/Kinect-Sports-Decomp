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
extern int fn_82B17848();


void fn_82B19D78(undefined8 param_1,int param_2,int param_3,uint *param_4)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_2 + 0x10);
  if (piVar3 != (int *)0x0) {
    do {
      if (*piVar3 == 0) break;
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
    if (piVar3 != (int *)0x0) {
      uVar1 = *(uint *)(*(int *)(param_2 + 0x1c) + 0x30);
      if (((*(uint *)(((int)(((ulonglong)uVar1 & 0x7ffff) >> 5) + 1) * 4 +
                     *(int *)(*(int *)(param_3 + 8) + 0x28)) & 1 << (uVar1 & 0x1f)) != 0) &&
         (cVar2 = fn_82B17848(param_1,param_2,piVar3,param_4), cVar2 != '\0')) {
        uVar1 = *param_4;
        *param_4 = uVar1 | 0x1000;
        if ((piVar3[2] & 0x3fffU) < (uVar1 >> 0xd & 0x3fff)) {
          *param_4 = (piVar3[2] & 0x3fffU) << 0xd | uVar1 & 0xf8001fff | 0x1000;
        }
      }
    }
  }
  return;
}

