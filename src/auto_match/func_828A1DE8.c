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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _iStack00000018 ((*(U64*)&iStack00000018))
extern unsigned int iStack00000018;
extern unsigned int uStack0000001c;


void fn_828A1DE8(undefined8 *param_1,undefined8 param_2,uint param_3,int *param_4)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iStack00000018;
  uint uStack0000001c;
  
  uStack0000001c = (uint)param_2;
  if (uStack0000001c == param_3) {
    *param_1 = param_2;
    return;
  }
  iStack00000018 = (int)((ulonglong)param_2 >> 0x20);
  puVar1 = (uint *)(iStack00000018 + 8);
  piVar2 = (int *)(iStack00000018 + 4);
  uVar3 = uStack0000001c;
  _iStack00000018 = param_2;
  do {
    uVar4 = uVar3 >> 2;
    if (*puVar1 <= uVar4) {
      uVar4 = uVar4 - *puVar1;
    }
    if (*(int *)(*(int *)(uVar4 * 4 + *piVar2) + (uVar3 & 3) * 4) == *param_4) break;
    uVar3 = uVar3 + 1;
    _iStack00000018 = CONCAT44(iStack00000018,uVar3);
  } while (uVar3 != param_3);
  *param_1 = _iStack00000018;
  return;
}

