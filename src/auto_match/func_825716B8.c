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
extern int fn_8251E5A0();
extern int fn_82572B80();


void fn_825716B8(uint *param_1,ulonglong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (((param_2 & 0xffffffff) == 0) || ((param_2 & 0xffffffff) == (ulonglong)param_3)) {
    *(undefined2 *)(param_1 + 4) = 0;
    param_1[1] = *param_1;
    param_1[6] = param_1[5];
    *(undefined2 *)(param_1 + 9) = 0;
  }
  if (param_1[10] != 0) {
    fn_82572B80(param_1[10],param_2);
  }
  uVar1 = param_1[1];
  for (uVar2 = *param_1; uVar2 < uVar1; uVar2 = uVar2 + 0xd0) {
    if ((*(uint *)(uVar2 + 0x98) != 0) &&
       ((ulonglong)*(uint *)(uVar2 + 0x98) == (param_2 & 0xffffffff))) {
      fn_8251E5A0(param_1 + 5,
                      (longlong)((int)(uVar2 - *param_1) / (int)(uint)*(ushort *)(param_1 + 3)) *
                      (longlong)(int)(uint)*(ushort *)(param_1 + 8) + (ulonglong)param_1[5]);
      fn_8251E5A0(param_1,uVar2);
      uVar2 = uVar2 - 0xd0;
      uVar1 = uVar1 - 0xd0;
    }
  }
  return;
}

