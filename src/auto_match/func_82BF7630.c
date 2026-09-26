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


void fn_82BF7630(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 8), iVar1 != 0)) &&
     (iVar4 = *param_2, iVar4 != 0)) {
    if (iVar4 == -1) {
      uVar5 = 0;
      if (*(uint *)(param_1 + 0xc) != 0) {
        iVar2 = 0;
        while (iVar4 = *(int *)(iVar2 + iVar1), iVar4 == 0) {
          uVar5 = uVar5 + 1;
          iVar2 = iVar2 + 4;
          if (*(uint *)(param_1 + 0xc) <= uVar5) {
            *param_2 = 0;
            return;
          }
        }
      }
    }
    iVar2 = *(int *)(iVar4 + 0x10);
    if (iVar2 == 0) {
      uVar5 = *(uint *)(param_1 + 0xc);
      trapWord(6,(ulonglong)uVar5,0);
      uVar6 = ((ulonglong)*(uint *)(iVar4 + 0x14) -
              (longlong)(int)(*(uint *)(iVar4 + 0x14) / uVar5) * (longlong)(int)uVar5) + 1;
      if ((uVar6 & 0xffffffff) < (ulonglong)uVar5) {
        lVar3 = (uVar6 & 0x3fffffff) << 2;
        do {
          iVar2 = *(int *)((int)lVar3 + iVar1);
          if (iVar2 != 0) break;
          uVar6 = uVar6 + 1;
          lVar3 = lVar3 + 4;
        } while ((uVar6 & 0xffffffff) < (ulonglong)uVar5);
      }
    }
    *param_2 = iVar2;
    *param_3 = *(undefined4 *)(iVar4 + 8);
    *param_4 = *(undefined4 *)(iVar4 + 0xc);
  }
  return;
}

