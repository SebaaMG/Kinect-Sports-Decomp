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


void fn_827C72A8(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar3 = param_3 * 4;
  if (*(char *)(param_1 + 0xc) != '\0') {
    iVar2 = *(int *)((param_2 + 0x17) * 4 + param_1);
    *(int *)(iVar2 + iVar3) = *(int *)(iVar2 + iVar3) + 1;
    return;
  }
  iVar2 = *(int *)((param_2 + 0x13) * 4 + param_1);
  uVar7 = *(uint *)(iVar3 + iVar2);
  cVar1 = *(char *)(iVar2 + param_3 + 0x400);
  iVar3 = *(int *)(param_1 + 0x1c);
  if (cVar1 == '\0') {
    *(undefined4 *)(**(int **)(param_1 + 0x20) + 0x14) = 0x28;
    (**(code **)**(undefined4 **)(param_1 + 0x20))();
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar6 = iVar3 + cVar1;
    uVar7 = ((1 << ((int)cVar1 & 0x3fU)) - 1U & uVar7) << (0x18 - uVar6 & 0x3f) |
            *(uint *)(param_1 + 0x18);
    if (7 < (int)uVar6) {
      uVar5 = (ulonglong)(uVar6 >> 3);
      uVar6 = uVar6 - (uVar6 & 0xfffffff8);
      do {
        **(undefined1 **)(param_1 + 0x10) = (char)(uVar7 >> 0x10);
        lVar4 = (ulonglong)*(uint *)(param_1 + 0x14) - 1;
        *(int *)(param_1 + 0x14) = (int)lVar4;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        if (lVar4 == 0) {
          fn_827C70D0(param_1);
        }
        if (((int)uVar7 >> 0x10 & 0xffU) == 0xff) {
          **(undefined1 **)(param_1 + 0x10) = 0;
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          lVar4 = (ulonglong)*(uint *)(param_1 + 0x14) - 1;
          *(int *)(param_1 + 0x14) = (int)lVar4;
          if (lVar4 == 0) {
            fn_827C70D0(param_1);
          }
        }
        uVar5 = uVar5 - 1;
        uVar7 = uVar7 << 8;
      } while (uVar5 != 0);
    }
    *(uint *)(param_1 + 0x18) = uVar7;
    *(uint *)(param_1 + 0x1c) = uVar6;
  }
  return;
}

