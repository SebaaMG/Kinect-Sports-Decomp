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
extern int fn_8225F160();
extern int fn_82471140();
extern int fn_824BF690();


void fn_824BF150(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  iVar1 = fn_8225F160();
  iVar2 = param_1 + 0x34;
  uVar4 = (ulonglong)*(uint *)(param_1 + 0xac) / (ulonglong)*(uint *)(iVar1 + 0x68);
  fn_824BF690(iVar2);
  if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x28)) {
    if (*(int *)(param_1 + 0xbc) == 0) {
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x24);
      uVar3 = *(uint *)(param_1 + 0x28);
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        fn_82471140(iVar2,uVar5);
        uVar5 = uVar5 + 0x28;
        if ((uVar5 & 0xffffffff) == (ulonglong)uVar3) {
          uVar5 = (ulonglong)*(uint *)(param_1 + 0x24);
        }
      }
    }
    else {
      uVar3 = 0;
      do {
        iVar6 = *(int *)(param_1 + 0x24);
        uVar5 = 0;
        iVar1 = *(int *)(param_1 + 0x28);
        if (uVar4 != 0) {
          do {
            if (iVar6 == iVar1) {
              if ((uVar5 & 0xffffffff) == 0) break;
              iVar6 = *(int *)(param_1 + 0x24);
            }
            if (*(uint *)(iVar6 + 0x20) == uVar3) {
              fn_82471140(iVar2,iVar6);
              uVar5 = uVar5 + 1;
            }
            iVar6 = iVar6 + 0x28;
          } while ((uVar5 & 0xffffffff) < uVar4);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 4);
    }
  }
  return;
}

