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
extern int fn_82CE3488();
extern int fn_82F68CC0();


longlong fn_82CE34D8(undefined8 param_1,undefined8 param_2,int *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ushort *apuStack_20 [4];
  
  lVar2 = fn_82CE3488(param_1,apuStack_20);
  if (-1 < lVar2) {
    if (param_4 == 0) {
      fn_82F68CC0(param_2,apuStack_20[0],*param_3);
    }
    else {
      iVar1 = *param_3;
      puVar3 = (ulonglong *)param_2;
      if (iVar1 == 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)apuStack_20[0];
      }
      else if (iVar1 == 2) {
        *(ushort *)puVar3 = *apuStack_20[0] << 8 | *apuStack_20[0] >> 8;
      }
      else if (iVar1 == 4) {
        *(uint *)puVar3 =
             (uint)*(byte *)((int)apuStack_20[0] + 3) << 0x18 |
             (uint)*(byte *)(apuStack_20[0] + 1) << 0x10 | (uint)(byte)*apuStack_20[0] << 8 |
             (uint)*(byte *)apuStack_20[0];
      }
      else if (iVar1 == 8) {
        *puVar3 = ((ulonglong)*(byte *)((int)apuStack_20[0] + 7) << 0x18 |
                   (ulonglong)*(byte *)(apuStack_20[0] + 3) << 0x10 |
                   (ulonglong)*(byte *)((int)apuStack_20[0] + 5) << 8 |
                  (ulonglong)*(byte *)(apuStack_20[0] + 2)) << 0x20 |
                  (ulonglong)*(byte *)((int)apuStack_20[0] + 3) << 0x18 |
                  (ulonglong)*(byte *)(apuStack_20[0] + 1) << 0x10 |
                  (ulonglong)(byte)*apuStack_20[0] << 8 | (ulonglong)*(byte *)apuStack_20[0];
      }
      else {
        lVar2 = -0x7ff8fff3;
      }
    }
  }
  return lVar2;
}

