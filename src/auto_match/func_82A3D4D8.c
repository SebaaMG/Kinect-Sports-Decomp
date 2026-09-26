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
extern int fn_82A3D430();


void fn_82A3D4D8(undefined8 param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar8;
  ulonglong uVar7;
  
  uVar8 = 0;
  do {
    iVar3 = uVar8 + 0x127a;
    uVar8 = uVar8 + 1 & 0xff;
    *(undefined2 *)(iVar3 * 2 + (int)param_1) = 0;
  } while (uVar8 < 0x11);
  fn_82A3D430(param_1);
  uVar6 = 0;
  uVar8 = 0x10;
  do {
    iVar5 = uVar8 + 0x127a;
    uVar4 = 0x10 - uVar8;
    uVar8 = uVar8 + 0xff & 0xff;
    iVar3 = (int)param_1;
    uVar6 = ((uint)*(ushort *)(iVar5 * 2 + iVar3) << (uVar4 & 0x3f)) + uVar6 & 0xffff;
  } while (uVar8 != 0);
  do {
    if (uVar6 == 0) {
      uVar8 = 0x10;
      do {
        uVar7 = (ulonglong)*(ushort *)((uVar8 + 0x127a) * 2 + iVar3);
        while (uVar7 = (ulonglong)(short)((short)uVar7 + -1), -1 < (longlong)uVar7) {
          *(char *)((uint)**(ushort **)(iVar3 + 0x994) + *(int *)(iVar3 + 0x998)) = (char)uVar8;
          *(int *)(iVar3 + 0x994) = *(int *)(iVar3 + 0x994) + 2;
        }
        uVar8 = uVar8 + 0xff & 0xff;
      } while (uVar8 != 0);
      return;
    }
    uVar8 = 0xf;
    *(short *)(iVar3 + 0x2514) = *(short *)(iVar3 + 0x2514) + -1;
    do {
      iVar5 = (uVar8 + 0x127a) * 2;
      sVar1 = *(short *)(iVar5 + iVar3);
      if (sVar1 != 0) {
        iVar2 = (uVar8 + 0x127b) * 2;
        *(short *)(iVar5 + iVar3) = sVar1 + -1;
        *(short *)(iVar2 + iVar3) = *(short *)(iVar2 + iVar3) + 2;
        break;
      }
      uVar8 = uVar8 + 0xff & 0xff;
    } while (uVar8 != 0);
    uVar6 = uVar6 + 0xffff & 0xffff;
  } while( true );
}

