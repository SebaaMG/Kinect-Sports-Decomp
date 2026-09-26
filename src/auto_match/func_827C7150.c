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
extern int fn_827C70D0();


void fn_827C7150(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (param_3 == 0) {
    *(undefined4 *)(**(int **)(param_1 + 0x20) + 0x14) = 0x28;
    (**(code **)**(undefined4 **)(param_1 + 0x20))();
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar4 = iVar1 + param_3;
    uVar5 = ((1 << (param_3 & 0x3f)) - 1U & param_2) << (0x18 - uVar4 & 0x3f) |
            *(uint *)(param_1 + 0x18);
    if (7 < (int)uVar4) {
      uVar3 = (ulonglong)(uVar4 >> 3);
      uVar4 = uVar4 - (uVar4 & 0xfffffff8);
      do {
        **(undefined1 **)(param_1 + 0x10) = (char)(uVar5 >> 0x10);
        lVar2 = (ulonglong)*(uint *)(param_1 + 0x14) - 1;
        *(int *)(param_1 + 0x14) = (int)lVar2;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        if (lVar2 == 0) {
          fn_827C70D0(param_1);
        }
        if (((int)uVar5 >> 0x10 & 0xffU) == 0xff) {
          **(undefined1 **)(param_1 + 0x10) = 0;
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          lVar2 = (ulonglong)*(uint *)(param_1 + 0x14) - 1;
          *(int *)(param_1 + 0x14) = (int)lVar2;
          if (lVar2 == 0) {
            fn_827C70D0(param_1);
          }
        }
        uVar3 = uVar3 - 1;
        uVar5 = uVar5 << 8;
      } while (uVar3 != 0);
    }
    *(uint *)(param_1 + 0x18) = uVar5;
    *(uint *)(param_1 + 0x1c) = uVar4;
  }
  return;
}

