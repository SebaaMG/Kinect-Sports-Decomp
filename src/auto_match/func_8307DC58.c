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
extern unsigned int lbl_832654D0;


undefined8 fn_8307DC58(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = 0;
  uVar5 = 0;
  if (*param_1 != 0) {
    iVar6 = 0;
    do {
      iVar7 = iVar6 + param_1[2];
      if (*(int *)(iVar7 + 0x40) == 0) {
        uVar4 = XMACreateContext((undefined4 *)(iVar7 + 0x40));
        if ((int)uVar4 < 0) {
          return uVar4;
        }
        iVar3 = MmGetPhysicalAddress(*(undefined4 *)(iVar7 + 0x40));
        uVar2 = iVar3 - lbl_832654D0 >> 6;
        *(short *)(iVar7 + 0x50) = (short)uVar2;
        uVar1 = 1 << (uVar2 & 0x1f);
        *(uint *)(((int)(((ulonglong)uVar2 & 0xffff) >> 5) + 0x1ffa86a0) * 4) =
             uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
        enforceInOrderExecutionIO();
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x60;
    } while (uVar5 < *param_1);
  }
  param_1[1] = param_1[1] | 0x40000;
  return uVar4;
}

