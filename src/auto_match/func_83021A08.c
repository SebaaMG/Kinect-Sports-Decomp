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
extern int fn_82FA5060();
extern int fn_830218F0();
extern unsigned int lbl_831BC768;


undefined8 fn_83021A08(int param_1,int param_2)

{
  uint uVar1;
  int iVar3;
  undefined8 uVar2;
  uint uVar4;
  uint *puVar5;
  
  puVar5 = (uint *)(param_2 + 4);
  uVar1 = *puVar5;
  if (uVar1 != 0) {
    iVar3 = fn_82FA5060(lbl_831BC768,uVar1 << 2);
    *(int *)(param_1 + 0x10) = iVar3;
    *(int *)(param_1 + 0x14) = iVar3;
    if (iVar3 == 0) {
      return 0x34;
    }
    *(uint *)(param_1 + 0x18) = uVar1;
  }
  uVar2 = 1;
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      puVar5 = puVar5 + 1;
      uVar2 = fn_830218F0(param_1,*puVar5);
      if ((int)uVar2 != 1) {
        return uVar2;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return uVar2;
}

