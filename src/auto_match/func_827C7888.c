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
extern int fn_827C7150();
extern int fn_827C73F8();


undefined8 fn_827C7888(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x15c);
  uVar2 = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(iVar1 + 0x10) = **(undefined4 **)(param_1 + 0x18);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 4);
  if ((*(int *)(param_1 + 0xbc) != 0) && (*(int *)(iVar1 + 0x44) == 0)) {
    fn_827C73F8(iVar1,*(undefined4 *)(iVar1 + 0x48));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x100)) {
    puVar4 = (undefined4 *)(param_2 + -4);
    do {
      puVar4 = puVar4 + 1;
      fn_827C7150(iVar1,(short)((int)*(short *)*puVar4 >> ((int)(short)uVar2 & 0x3fU)),1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x100));
  }
  **(undefined4 **)(param_1 + 0x18) = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = *(undefined4 *)(iVar1 + 0x14);
  if (*(int *)(param_1 + 0xbc) != 0) {
    if (*(int *)(iVar1 + 0x44) == 0) {
      *(int *)(iVar1 + 0x44) = *(int *)(param_1 + 0xbc);
      *(uint *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + 1U & 7;
    }
    *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + -1;
  }
  return 1;
}

