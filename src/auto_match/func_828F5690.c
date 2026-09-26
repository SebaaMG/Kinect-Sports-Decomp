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
extern int fn_828F5390();


bool fn_828F5690(int param_1,longlong param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  longlong lVar7;
  
  iVar4 = fn_828F5390();
  puVar1 = *(undefined4 **)((iVar4 + 0x1e) * 4 + param_1);
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return false;
    }
    pbVar6 = (byte *)*puVar1;
    lVar7 = param_2;
    do {
      uVar3 = (uint)*pbVar6;
      uVar2 = (uint)*(byte *)lVar7;
      if (*(byte *)lVar7 == 0) break;
      lVar7 = lVar7 + 1;
      pbVar6 = pbVar6 + 1;
    } while (uVar2 == uVar3);
    if ((int)(uVar2 - uVar3) < 0) {
      return false;
    }
    if (uVar2 == uVar3) {
      if (puVar1[4] == 0) {
        iVar4 = puVar1[2];
        puVar1[4] = 1;
        while ((iVar4 != 0 &&
               ((*(int *)(iVar4 + 0x10) != 9 ||
                (iVar5 = fn_828F5690(param_1,*(undefined4 *)(iVar4 + 0x18)), iVar5 == 0))))) {
          iVar4 = *(int *)(iVar4 + 0xc);
        }
        puVar1[4] = 0;
        return iVar4 != 0;
      }
      return true;
    }
    puVar1 = (undefined4 *)puVar1[3];
  } while( true );
}

