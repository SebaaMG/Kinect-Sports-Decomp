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


int fn_8297FA50(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar2 = 0;
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 == 1) {
      do {
        if (*(int *)(param_2 + 4) != 1) break;
        iVar1 = fn_8297FA50(param_1,*(undefined4 *)(param_2 + 8),iVar2 * 0x10 + param_3);
        param_2 = *(int *)(param_2 + 0xc);
        iVar2 = iVar1 + iVar2;
      } while (param_2 != 0);
      if (param_2 != 0) {
        iVar1 = fn_8297FA50(param_1,param_2,iVar2 * 0x10 + param_3);
        iVar2 = iVar1 + iVar2;
      }
    }
    else {
      if (iVar1 == 6) {
        uVar4 = *(undefined4 *)(param_2 + 0x18);
      }
      else {
        if (iVar1 == 8) {
          uVar5 = 0;
          if (*(int *)(param_2 + 0x14) == 0) {
            return 0;
          }
          do {
            iVar1 = fn_8297FA50(param_1,*(undefined4 *)(param_2 + 0x10),iVar2 * 0x10 + param_3);
            uVar5 = uVar5 + 1;
            iVar2 = iVar1 + iVar2;
          } while (uVar5 < *(uint *)(param_2 + 0x14));
          return iVar2;
        }
        if (iVar1 == 9) {
          uVar4 = 3;
          iVar2 = *(int *)(param_2 + 0x20) * *(int *)(param_2 + 0x1c);
          switch(*(undefined4 *)(param_2 + 0x14)) {
          case 0:
            uVar4 = 0;
            break;
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
            uVar4 = 1;
            break;
          case 6:
          case 7:
          case 8:
          case 9:
            uVar4 = 2;
            break;
          case 10:
          case 0xb:
          case 0xc:
          case 0xd:
            uVar4 = 3;
            break;
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1d:
          case 0x1e:
          case 0x27:
          case 0x2a:
          case 0x2b:
          case 0x2c:
          case 0x2d:
          case 0x2e:
            uVar4 = 5;
            break;
          case 0x21:
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x2f:
          case 0x30:
          case 0x31:
          case 0x32:
            uVar4 = 4;
          }
          if (iVar2 == 0) {
            return 0;
          }
          puVar3 = (undefined4 *)(param_3 + -0x10);
          iVar1 = iVar2;
          do {
            puVar3 = puVar3 + 4;
            *puVar3 = uVar4;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          return iVar2;
        }
        if (iVar1 != 0xb) {
          return 0;
        }
        uVar4 = *(undefined4 *)(param_2 + 0x30);
      }
      iVar2 = fn_8297FA50(param_1,uVar4,param_3);
    }
  }
  return iVar2;
}

