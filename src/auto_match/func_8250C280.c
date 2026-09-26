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
extern int fn_827F6AB8();
extern int fn_827FA1E8();


void fn_8250C280(int param_1,int param_2,int param_3,int *param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  
  if (*param_4 == 0) {
    uVar1 = *(ushort *)(param_2 + 0x32);
    uVar2 = *(ushort *)(param_3 + 0x32);
    iVar6 = *(int *)(param_2 + 0x84);
    iVar5 = *(int *)(param_3 + 0x84);
    param_4[1] = (uint)*(ushort *)(param_1 + 0x32) * 0x30 + *(int *)(param_1 + 0x84);
    param_4[2] = (uint)uVar1 * 0x30 + iVar6;
    param_4[3] = (uint)uVar2 * 0x30 + iVar5;
    iVar6 = fn_827F6AB8();
    param_4[4] = iVar6;
    iVar6 = fn_827F6AB8(param_2);
    param_4[5] = iVar6;
    iVar6 = fn_827F6AB8(param_3);
  }
  else {
    if (*param_4 != 1) {
      param_4[1] = 0;
      param_4[2] = 0;
      param_4[3] = 0;
      param_4[4] = 0;
      param_4[5] = 0;
      param_4[6] = 0;
      return;
    }
    uVar1 = *(ushort *)(param_2 + 0x32);
    uVar2 = *(ushort *)(param_3 + 0x32);
    uVar3 = *(ushort *)(param_2 + 0x2e);
    uVar4 = *(ushort *)(param_3 + 0x2e);
    iVar6 = *(int *)(param_2 + 0x84);
    iVar5 = *(int *)(param_3 + 0x84);
    param_4[1] = ((uint)*(ushort *)(param_1 + 0x32) * 0xc + (uint)*(ushort *)(param_1 + 0x2e)) * 4 +
                 *(int *)(param_1 + 0x84);
    param_4[2] = ((uint)uVar1 * 0xc + (uint)uVar3) * 4 + iVar6;
    param_4[3] = ((uint)uVar2 * 0xc + (uint)uVar4) * 4 + iVar5;
    iVar6 = fn_827FA1E8();
    param_4[4] = iVar6;
    iVar6 = fn_827FA1E8(param_2);
    param_4[5] = iVar6;
    iVar6 = fn_827FA1E8(param_3);
  }
  param_4[6] = iVar6;
  return;
}

