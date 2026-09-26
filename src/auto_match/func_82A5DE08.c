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
extern unsigned int lbl_8315F708;


uint fn_82A5DE08(short *param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  
  sVar1 = *param_1;
  uVar3 = 0;
  if (sVar1 == 0x165) {
    iVar5 = 0;
    if ((ushort)param_1[4] == 0) {
      return uVar3;
    }
    puVar4 = (ushort *)(param_1 + 5);
    do {
      puVar4 = puVar4 + 10;
      iVar5 = iVar5 + 1;
      uVar3 = *puVar4 & 0xff | (uint)(*puVar4 >> 8) | uVar3;
    } while (iVar5 < (int)(uint)(ushort)param_1[4]);
    return uVar3;
  }
  if ((sVar1 == 0x166) || (sVar1 == -2)) {
    return *(uint *)(param_1 + 10);
  }
  uVar2 = param_1[1];
  if (uVar2 == 1) {
    return 4;
  }
  if (uVar2 == 2) {
    return 3;
  }
  if (param_2 == 0) {
    return uVar3;
  }
  if (uVar2 == 0) {
    return 0;
  }
  if (8 < uVar2) {
    return 0;
  }
  return *(uint *)(&lbl_8315F708 + (uint)uVar2 * 4);
}

