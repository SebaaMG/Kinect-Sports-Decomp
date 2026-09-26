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


undefined8 fn_829335D0(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 4) == *(int *)(param_1 + 4))) {
    pbVar4 = (byte *)(param_2 + 0x10);
    pbVar5 = (byte *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10)) {
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar4;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar5 = pbVar5 + 1;
        pbVar4 = pbVar4 + 1;
      } while (pbVar5 != (byte *)(param_1 + 0x20));
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        return 1;
      }
      if (*(int *)(param_1 + 0x10) == 4) {
        if (*(undefined4 **)(param_1 + 0x18) == (undefined4 *)0x0) {
          uVar3 = (uint)LZCOUNT(*(undefined4 *)(param_2 + 0x18)) >> 5;
        }
        else {
          uVar3 = (**(code **)**(undefined4 **)(param_1 + 0x18))();
        }
        if (uVar3 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

