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
extern int fn_825EBE30();


void fn_825EC130(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar1 = *(uint *)((*(int *)(param_1 + 0x10) + 1) * 4 + *(int *)(param_1 + 8));
  uVar6 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    iVar7 = 0;
    do {
      iVar2 = *(int *)((int)(((ulonglong)*(uint *)(param_1 + 0x10) + 3 & 0xffffffff) << 2) +
                      *(int *)(param_1 + 8));
      iVar4 = iVar2 + iVar7;
      iVar2 = *(int *)(iVar2 + iVar7);
      if ((*(uint *)((int)(((ulonglong)*(uint *)(param_1 + 0x10) + 0x1e & 0xffffffff) << 2) + iVar2)
          & 0x400) == 0) {
        if ((param_2 == 2) &&
           ((*(uint *)((*(int *)(param_1 + 0x10) + 0x1e) * 4 + iVar2) & 0x100000) != 0)) {
          *(undefined4 *)(iVar4 + 0x10) = 0;
        }
        else if ((*(uint *)((*(int *)(param_1 + 0x10) + 0x1e) * 4 + iVar2) & 2) == 0) {
          uVar1 = *(uint *)(iVar2 + 0x74);
          lVar5 = -0x7ce403f8;
          if (uVar1 != 0xffffffff) {
            iVar3 = *(int *)(((uVar1 >> 0x18) + 0x129) * 4 + *(int *)(param_1 + 0x30));
            lVar5 = ((longlong)(int)((uVar1 & 0xff) * *(int *)(iVar3 + 0x48) + (uVar1 >> 8 & 0xff))
                     * (longlong)*(int *)(iVar3 + 0x44) + ((ulonglong)(uVar1 >> 0x10) & 0xff) &
                    0xfffffff) * 0x10 + (ulonglong)*(uint *)(iVar3 + 0x50);
          }
          fn_825EBE30((double)*(float *)(iVar2 + 0x20),param_1,iVar4,uVar1,lVar5,iVar2 + 0x10);
        }
        else {
          *(undefined4 *)((param_2 + 2) * 4 + iVar4) = 1;
        }
      }
      else {
        *(undefined4 *)((param_2 + 2) * 4 + iVar4) = 0;
      }
      uVar6 = uVar6 - 1;
      iVar7 = iVar7 + 0x18;
    } while (uVar6 != 0);
  }
  return;
}

