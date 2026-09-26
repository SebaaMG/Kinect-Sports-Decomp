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


int fn_82935D80(byte *param_1,byte *param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  
  uVar3 = *param_3;
  uVar8 = 0;
  pbVar5 = param_2;
  if (uVar3 != 0) {
    do {
      pbVar7 = param_1;
      pbVar6 = pbVar5;
      do {
        bVar1 = *pbVar7;
        bVar2 = *pbVar6;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar7 = pbVar7 + 1;
        pbVar6 = pbVar6 + 1;
      } while (pbVar7 != param_1 + 0x10);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        return uVar8 << 4;
      }
      uVar8 = uVar8 + 1;
      pbVar5 = pbVar5 + 0x10;
    } while (uVar8 < uVar3);
  }
  iVar4 = uVar3 * 0x10;
  *(undefined4 *)(param_2 + iVar4) = *(undefined4 *)param_1;
  *(undefined4 *)(param_2 + iVar4 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + iVar4 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_2 + iVar4 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *param_3 = uVar3 + 1;
  return iVar4;
}

