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


undefined8 fn_82C12198(undefined8 param_1,int param_2,longlong param_3,undefined4 *param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0;
  *param_4 = 3;
  iVar1 = *(int *)(param_2 + 0x18);
  iVar6 = iVar1;
  if (iVar1 == 0) {
    uVar4 = 0xffffffff8050000b;
  }
  else {
    do {
      if ((*(int *)(iVar6 + 0x30) == 0) && (*(int *)(iVar6 + 0xc) == 0)) {
        uVar4 = 0;
        if (*(longlong *)(iVar6 + 0x20) < param_3) {
          *param_4 = 2;
          return 0;
        }
        if (*(longlong *)(iVar6 + 0x20) != param_3) {
          *param_4 = 3;
          return 0;
        }
        bVar2 = false;
        bVar3 = false;
        iVar5 = iVar1;
        if (iVar1 == 0) {
          uVar4 = 0xffffffff8050000b;
        }
        else {
          do {
            if (*(int *)(iVar5 + 0x30) == 0) {
              if ((*(int *)(iVar5 + 0xc) == 0) && (!bVar2)) {
                bVar2 = true;
              }
              if ((*(int *)(iVar5 + 0x14) + *(int *)(iVar5 + 0xc) == *(int *)(iVar5 + 0x10)) &&
                 (bVar2)) {
                bVar3 = true;
                break;
              }
            }
            iVar5 = *(int *)(iVar5 + 0x3c);
          } while (iVar5 != 0);
        }
        if ((int)uVar4 < 0) {
          return uVar4;
        }
        if (bVar3) {
          *param_4 = 1;
          return 0;
        }
      }
      iVar6 = *(int *)(iVar6 + 0x3c);
    } while (iVar6 != 0);
  }
  return uVar4;
}

