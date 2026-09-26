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
extern int fn_82E76510();


undefined8 fn_82E77410(int param_1,short param_2,ulonglong param_3,ushort *param_4)

{
  ushort uVar1;
  short *psVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_4 == (ushort *)0x0) {
    return 0xffffffff80070057;
  }
  psVar2 = *(short **)(param_1 + 8);
  while( true ) {
    if (psVar2 == (short *)0x0) {
      return 0xffffffffc00d36b3;
    }
    if (*psVar2 == param_2) break;
    psVar2 = *(short **)(psVar2 + 4);
  }
  iVar3 = *(int *)(psVar2 + 2);
  uVar1 = *(ushort *)(iVar3 + 4);
  uVar5 = (ulonglong)uVar1;
  if ((uVar5 <= *param_4) && ((param_3 & 0xffffffff) != 0)) {
    *param_4 = uVar1;
    if (uVar5 == 0) {
      return 0;
    }
    uVar6 = 0;
    do {
      uVar4 = fn_82E76510(iVar3,uVar6,uVar6 * 0x12 + param_3);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      uVar6 = uVar6 + 1 & 0xffff;
    } while (uVar6 < uVar5);
    return uVar4;
  }
  *param_4 = uVar1;
  return 0xffffffffc00d36b1;
}

