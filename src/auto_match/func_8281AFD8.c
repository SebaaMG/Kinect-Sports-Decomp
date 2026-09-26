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
extern int fn_8281B938();


void fn_8281AFD8(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  short sVar8;
  
  sVar8 = *(short *)(param_1 + 0x108);
  iVar1 = *(int *)(param_1 + 0x7c);
  if (sVar8 == -1) {
    sVar8 = *(short *)(param_1 + 0x84);
  }
  if (sVar8 != -1) {
    do {
      iVar7 = (int)sVar8;
      sVar8 = *(short *)(iVar7 * 0x40 + iVar1 + 0x2c);
    } while (sVar8 != -1);
    for (; iVar7 != -1; iVar7 = (int)*(short *)(iVar7 + 0x2e)) {
      iVar7 = iVar7 * 0x40 + iVar1;
      bVar4 = (*(byte *)(iVar7 + 0x36) & 1) == 0;
      if (bVar4) {
        uVar2 = *(undefined4 *)(iVar7 + 0x24);
        uVar3 = *(undefined4 *)(iVar7 + 0x20);
        uVar6 = 0;
        uVar5 = param_3;
      }
      else {
        uVar6 = *(undefined4 *)(iVar7 + 0x38);
        uVar2 = *(undefined4 *)(iVar7 + 0x28);
        uVar3 = *(undefined4 *)(iVar7 + 0x3c);
        uVar5 = param_2;
      }
      fn_8281B938(uVar5,param_1,uVar3,uVar2,uVar6,bVar4);
    }
  }
  return;
}

