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
extern int fn_82BD1AA8();


undefined1 fn_82BD1B18(int *param_1,ulonglong param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint *puVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  
  if (*param_1 == 0) {
    uVar5 = 1;
  }
  else {
    uVar6 = (ulonglong)(uint)param_1[1];
    uVar1 = param_1[2];
    uVar2 = uVar6;
    if ((int)uVar1 < param_1[1]) {
      uVar2 = param_2;
    }
    puVar4 = (uint *)fn_82BD1AA8(*param_1,uVar2 * 0xc + param_3);
    uVar5 = 0;
    if (puVar4 != (uint *)0x0) {
      iVar7 = 0;
      lVar8 = ((*puVar4 - uVar6) + (ulonglong)uVar1 + 1) * 0xc + param_3;
      iVar3 = (int)lVar8;
      do {
        if (*(char *)lVar8 != ((char *)lVar8)[((int)param_2 * 0xc + (int)param_3) - iVar3]) {
          return 0;
        }
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 1;
      } while (iVar7 < 0xc);
      uVar5 = 1;
    }
  }
  return uVar5;
}

