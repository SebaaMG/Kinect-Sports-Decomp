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
extern int fn_8269B718();


void fn_826C7C28(int param_1)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0xac);
  uVar1 = *(uint *)(param_1 + 0x8c);
  if (uVar3 != 0) {
    iVar5 = 0;
    do {
      uVar4 = *(uint *)(*(int *)(param_1 + 0xa8) + iVar5);
      piVar6 = (int *)(-(uint)((*(byte *)(uVar4 + 0x66) & 0x80) != 0) & uVar4);
      if (piVar6 != (int *)0x0) {
        if ((*(uint *)(param_1 + 0x8c) >> 2 & 1) == 0) {
          bVar2 = false;
          if ((uVar1 >> 2 & 1) != 0) goto LAB_826c7c8c;
        }
        else {
LAB_826c7c8c:
          bVar2 = true;
        }
        if (bVar2) {
          uVar4 = piVar6[0x23] | 4;
        }
        else {
          uVar4 = piVar6[0x23] & 0xfffffffb;
        }
        piVar6[0x23] = uVar4;
        (**(code **)(*piVar6 + 0x10c))(piVar6);
        fn_8269B718(piVar6,*(undefined4 *)(param_1 + 0xa0));
      }
      uVar3 = uVar3 - 1;
      iVar5 = iVar5 + 4;
    } while (uVar3 != 0);
  }
  return;
}

