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


longlong fn_82636148(int *param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  uVar4 = (uint)param_2;
  iVar2 = *param_1;
  if (param_1[iVar2 * 0x9b4 + 0x18] < 0) {
    return 0;
  }
  if (param_3 != (uint *)0x0) {
    puVar6 = (uint *)param_1[iVar2 * 0x9b4 + 0x1f];
    puVar5 = puVar6 + param_1[iVar2 * 0x9b4 + 0x20] * 2;
    for (; puVar6 < puVar5; puVar6 = puVar6 + 2) {
      if (((1 << (puVar6[1] >> 0xc & 0xf) & 0x607eU) != 0) && ((puVar6[1] & 0x800) == 0)) {
        uVar1 = *puVar6;
        uVar3 = uVar1 & 0xfff;
        if ((uVar3 <= uVar4) && (uVar4 < (uVar1 >> 0xc & 7) + uVar3)) {
          *param_3 = (uint)((1 << ((uVar4 - uVar3) * 2 & 0x3e) & uVar1 >> 0x10 & 0xfff) != 0);
          break;
        }
      }
    }
  }
  return (ulonglong)(uint)param_1[iVar2 * 0x9b4 + 0x1c] + param_2 * 0xc;
}

