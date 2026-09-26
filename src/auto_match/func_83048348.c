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
extern unsigned int *auStack_50;
extern int fn_83048198();
extern int fn_8304D8A0();
extern unsigned int iStack_60;
extern unsigned int uStack_44;


undefined8 fn_83048348(int param_1)

{
  int iVar1;
  int iVar3;
  undefined8 uVar2;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iStack_60;
  undefined1 auStack_50 [12];
  ushort uStack_44;
  
  iVar6 = *(int *)(*(int *)(param_1 + 8) + 0x138);
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x13c);
  if (iVar6 != 0) {
    piVar7 = (int *)(param_1 + 0x34);
    iVar3 = fn_8304D8A0(iVar6,iVar1,auStack_50,0x12,param_1 + 0x10,(int *)(param_1 + 0x20),
                            (int *)(param_1 + 0x24),piVar7);
    if (iVar3 != 1) {
      return 7;
    }
    iVar3 = *(int *)(param_1 + 0x24);
    *(ushort *)(param_1 + 0x3c) = uStack_44;
    iVar6 = iStack_60 + iVar6;
    uVar4 = (uint)uStack_44 * *(int *)(param_1 + 0x20) + iVar6;
    *(int *)(param_1 + 0x38) = iVar6;
    *(uint *)(param_1 + 0x2c) = uVar4;
    if ((iVar3 == 0) || (*(short *)(*(int *)(param_1 + 8) + 0xd4) == 1)) {
      *(int *)(param_1 + 0x30) = *piVar7 + iVar6;
    }
    else {
      *(uint *)(param_1 + 0x30) = (iVar3 + 1) * (uint)uStack_44 + iVar6;
    }
    if (uVar4 <= *(uint *)(param_1 + 0x30)) {
      uVar5 = *piVar7 + iVar6;
      if (((uVar4 <= uVar5) && (*(uint *)(param_1 + 0x30) <= uVar5)) &&
         (iVar1 == *piVar7 + iStack_60)) {
        *(int *)(param_1 + 0x28) = iVar6;
        if ((*(byte *)(*(int *)(param_1 + 8) + 0xdb) & 0x80) != 0) {
          uVar2 = fn_83048198(param_1);
          return uVar2;
        }
        return 1;
      }
    }
  }
  return 2;
}

