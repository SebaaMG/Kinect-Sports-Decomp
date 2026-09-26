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


undefined8 fn_829AD570(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  
  puVar2 = (undefined4 *)param_1[6];
  pbVar5 = (byte *)*puVar2;
  iVar4 = puVar2[1];
  while( true ) {
    if (iVar4 == 0) {
      iVar4 = (*(code *)puVar2[3])(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      pbVar5 = (byte *)*puVar2;
      iVar4 = puVar2[1];
    }
    bVar1 = *pbVar5;
    while( true ) {
      pbVar5 = pbVar5 + 1;
      iVar4 = iVar4 + -1;
      if (bVar1 == 0xff) break;
      *(int *)(param_1[0x6f] + 0x18) = *(int *)(param_1[0x6f] + 0x18) + 1;
      *puVar2 = pbVar5;
      puVar2[1] = iVar4;
      if (iVar4 == 0) {
        iVar4 = (*(code *)puVar2[3])(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        pbVar5 = (byte *)*puVar2;
        iVar4 = puVar2[1];
      }
      bVar1 = *pbVar5;
    }
    do {
      if (iVar4 == 0) {
        iVar4 = (*(code *)puVar2[3])(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        pbVar5 = (byte *)*puVar2;
        iVar4 = puVar2[1];
      }
      bVar1 = *pbVar5;
      iVar4 = iVar4 + -1;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 == 0xff);
    iVar3 = *(int *)(param_1[0x6f] + 0x18);
    if (bVar1 != 0) break;
    *(int *)(param_1[0x6f] + 0x18) = iVar3 + 2;
    *puVar2 = pbVar5;
    puVar2[1] = iVar4;
  }
  if (iVar3 != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x74;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(param_1[0x6f] + 0x18);
    *(uint *)(*param_1 + 0x1c) = (uint)bVar1;
    (**(code **)(*param_1 + 4))(param_1,0xffffffffffffffff);
    *(undefined4 *)(param_1[0x6f] + 0x18) = 0;
  }
  param_1[0x69] = (uint)bVar1;
  *puVar2 = pbVar5;
  puVar2[1] = iVar4;
  return 1;
}

