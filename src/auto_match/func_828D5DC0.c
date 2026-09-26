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
#define _iStack00000010 ((*(U64*)&iStack00000010))
#define _iStack00000018 ((*(U64*)&iStack00000018))
extern int fn_828D4E48();
extern unsigned int iStack00000010;
extern unsigned int iStack00000018;


void fn_828D5DC0(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iStack00000010;
  int iStack00000018;
  
  uVar7 = param_1 & 0xffffffff;
  uVar6 = param_2 & 0xffffffff;
  if (uVar7 != uVar6) {
    iStack00000018 = (int)(param_2 >> 0x20);
    iVar2 = iStack00000018;
    iStack00000010 = (int)(param_1 >> 0x20);
    iVar1 = iStack00000010;
    _iStack00000010 = param_1;
    _iStack00000018 = param_2;
    do {
      uVar6 = uVar6 - 1;
      if ((uVar7 & 0xffffffff) == (uVar6 & 0xffffffff)) {
        return;
      }
      uVar5 = (ulonglong)*(uint *)(iVar2 + 8);
      uVar3 = uVar6;
      if (uVar5 <= (uVar6 & 0xffffffff)) {
        uVar3 = uVar6 - uVar5;
      }
      uVar4 = (ulonglong)*(uint *)(iVar1 + 8);
      uVar5 = uVar7;
      if (uVar4 <= (uVar7 & 0xffffffff)) {
        uVar5 = uVar7 - uVar4;
      }
      fn_828D4E48(*(undefined4 *)(*(int *)(iVar1 + 4) + (int)((uVar5 & 0xffffffff) << 2)),
                    *(undefined4 *)(*(int *)(iVar2 + 4) + (int)((uVar3 & 0xffffffff) << 2)));
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xffffffff) != (uVar6 & 0xffffffff));
  }
  return;
}

