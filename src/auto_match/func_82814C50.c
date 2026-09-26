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
extern int fn_828142D8();


void fn_82814C50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int aiStack_40 [16];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (*(char *)(iVar1 + 0x51) != '\0') {
    uVar3 = 0;
    do {
      iVar5 = uVar3 * 0x21 + *(int *)(param_1 + 0x30);
      fn_828142D8((ulonglong)*(uint *)(param_1 + 0x34) +
                    (ulonglong)*(uint *)(uVar3 * 0x21 + *(int *)(param_1 + 0x30)),aiStack_40);
      if (*(int *)(aiStack_40[0] + 0x14) != 0) {
        lVar4 = (ulonglong)*(uint *)(iVar5 + 0x11) + (ulonglong)*(uint *)(iVar5 + 9);
        uVar2 = (**(code **)(aiStack_40[0] + 0x14))
                          (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(iVar5 + 0xd),lVar4,4);
        *(undefined4 *)(iVar5 + 0xd) = uVar2;
        *(int *)(iVar5 + 9) = (int)lVar4;
      }
      if (*(int *)(iVar5 + 0xd) == 0) {
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < *(byte *)(iVar1 + 0x51));
  }
  return;
}

