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


undefined8 fn_82DD75C0(byte *param_1,short *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar7;
  undefined8 uVar6;
  byte *pbVar8;
  
  bVar1 = param_1[2];
  uVar7 = (uint)bVar1;
  uVar4 = 0;
  if (uVar7 != 0) {
    pbVar8 = param_1;
    do {
      if ((*(byte *)(param_2 + 4) == pbVar8[4]) && (*(byte *)((int)param_2 + 9) == pbVar8[5])) {
        uVar5 = (uint)*(byte *)((int)param_2 + 9) + (uint)*(byte *)(param_2 + 4);
        iVar3 = (uint)bVar1 * 8;
        if ((((*param_2 == *(short *)(param_1 + (uint)(pbVar8[8] >> 3) + iVar3 + 4)) &&
             (param_2[1] == *(short *)(param_1 + (uint)(pbVar8[9] >> 3) + iVar3 + 4))) &&
            ((uVar5 < 3 || (param_2[2] == *(short *)(param_1 + (uint)(pbVar8[10] >> 3) + iVar3 + 4))
             ))) && ((uVar5 < 4 ||
                     (param_2[3] == *(short *)(param_1 + (uint)(pbVar8[0xb] >> 3) + iVar3 + 4))))) {
          if (uVar4 != 0) {
            uVar6 = *(undefined8 *)(param_1 + uVar4 * 8 + 4);
            *(undefined4 *)(param_1 + uVar4 * 8 + 4) = *(undefined4 *)(param_1 + 4);
            *(undefined4 *)(param_1 + uVar4 * 8 + 8) = *(undefined4 *)(param_1 + 8);
            *(undefined8 *)(param_1 + 4) = uVar6;
          }
          return 1;
        }
      }
      uVar4 = uVar4 + 1;
      pbVar8 = pbVar8 + 8;
    } while (uVar4 < uVar7);
  }
  bVar2 = *(byte *)(param_2 + 4);
  if (((bVar2 == 1) || (*(char *)((int)param_2 + 9) == '\x01')) && (uVar4 = 0, uVar7 != 0)) {
    pbVar8 = param_1 + 4;
    do {
      if ((((bVar2 == 1) && (*pbVar8 == 1)) &&
          (*(short *)(param_1 + (uint)(pbVar8[4] >> 3) + (uint)bVar1 * 8 + 4) == *param_2)) ||
         (((*(char *)((int)param_2 + 9) == '\x01' && (pbVar8[1] == 1)) &&
          (*(short *)(param_1 + (uint)(pbVar8[*pbVar8 + 4] >> 3) + (uint)bVar1 * 8 + 4) ==
           param_2[bVar2])))) {
        pbVar8[1] = 0;
        *pbVar8 = 0;
        return 0;
      }
      uVar4 = uVar4 + 1;
      pbVar8 = pbVar8 + 8;
    } while (uVar4 < uVar7);
  }
  return 0;
}

