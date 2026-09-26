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
extern int fn_82A29A38();


longlong fn_82ABAA50(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  byte *pbVar6;
  uint uVar7;
  uint *puVar8;
  
  puVar1 = *(undefined4 **)(param_2 + 0x1c);
  iVar2 = *(int *)(param_2 + 0x18);
  if (puVar1 == (undefined4 *)0x0) {
    fn_82A29A38();
  }
  if (iVar2 == 0) {
    fn_82A29A38();
  }
  lVar5 = 2;
  *puVar1 = 0x100;
  uVar7 = 0;
  puVar8 = puVar1 + 1;
  *puVar8 = 0x100;
  if (*(int *)(param_2 + 0x134) != 0) {
    pbVar6 = (byte *)(param_2 + 0x32);
    do {
      if (0xf < pbVar6[4]) {
        fn_82A29A38();
      }
      puVar8[1] = uVar7 << 0x10 | 0x8000001a;
      uVar3 = *(uint *)(pbVar6 + 2);
      if ((uVar3 & 0xf0) == 0xf0) {
        puVar8[2] = 0x55;
      }
      else {
        uVar4 = (uint)((uVar3 & 0x10) != 0);
        if ((uVar3 & 0x20) != 0) {
          uVar4 = uVar4 | 4;
        }
        if ((uVar3 & 0x40) != 0) {
          uVar4 = uVar4 | 0x10;
        }
        if ((uVar3 & 0x80) != 0) {
          uVar4 = uVar4 | 0x40;
        }
        puVar8[2] = uVar4;
      }
      pbVar6 = pbVar6 + 4;
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 3;
      puVar8 = puVar8 + 3;
      *puVar8 = *pbVar6 | 0x50000;
    } while (uVar7 < *(uint *)(param_2 + 0x134));
  }
  return lVar5;
}

