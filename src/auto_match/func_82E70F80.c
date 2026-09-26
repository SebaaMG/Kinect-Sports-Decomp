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
extern int fn_82E6FE08();
extern unsigned int lbl_8214C030;
extern unsigned int lbl_8214C040;


undefined8 fn_82E70F80(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar5 = &lbl_8214C030;
  pbVar4 = (byte *)(param_1 + 0xc);
  do {
    bVar1 = *pbVar5;
    bVar2 = *pbVar4;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar5 = pbVar5 + 1;
    pbVar4 = pbVar4 + 1;
  } while (pbVar5 != &lbl_8214C040);
  if (((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) || (param_2 != 0)) {
    if (*(longlong *)(param_1 + 0x48) == 0) {
      if (*(int *)(param_1 + 0x58) == 0) {
        uVar3 = 0xffffffffc00d36bb;
      }
      else {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x58) + 0x54))();
        if (-1 < (int)uVar3) {
          uVar3 = fn_82E6FE08(param_1);
        }
      }
    }
    else {
      uVar3 = 0xffffffffc00d4650;
    }
  }
  else {
    uVar3 = 0xffffffff80070057;
  }
  return uVar3;
}

