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
extern int fn_827F3A60();
extern int fn_827F3AB0();


longlong fn_827F2460(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 8))();
  uVar8 = (uint)*(byte *)(param_1 + 0x54);
  uVar4 = 0;
  iVar6 = 0;
  while( true ) {
    if ((*(byte *)((uVar8 >> 3) + param_1 + 0x52) >> (uVar8 & 7) & 1) == 0) {
      iVar6 = iVar6 + 1;
      iVar7 = (uVar8 + 8) * 4;
      uVar3 = fn_827F3AB0(*(undefined4 *)(iVar7 + param_1));
      if (uVar4 <= uVar3) {
        uVar4 = fn_827F3AB0(*(undefined4 *)(iVar7 + param_1));
      }
    }
    if (uVar8 == *(byte *)(param_1 + 0x53)) break;
    uVar8 = uVar8 + 1 & 3;
  }
  if (0 < iVar6) {
    bVar1 = 1 < iVar6;
    if (((0 < iVar6) && (iVar6 = 1, bVar1)) ||
       (iVar7 = 1,
       (*(byte *)((uint)(*(byte *)(param_1 + 0x54) >> 3) + param_1 + 0x52) >>
        (*(byte *)(param_1 + 0x54) & 7) & 1) != 0)) {
      iVar7 = 0;
    }
    iVar5 = fn_827F3A60(param_1);
    return (longlong)iVar5 * (longlong)(iVar6 - iVar7) +
           (longlong)(int)(uVar4 + (iVar2 + 0xfU & 0xfffffff0)) * (longlong)iVar6;
  }
  return 0;
}

