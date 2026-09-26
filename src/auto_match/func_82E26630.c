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
extern int fn_82E26138();
extern unsigned int lbl_83187510;
extern unsigned int lbl_83187518;
extern unsigned int lbl_83187524;


longlong fn_82E26630(ulonglong param_1,ulonglong param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  
  lVar1 = fn_82E26138(param_1,0);
  if ((int)lVar1 != 0) {
    iVar5 = 0;
    puVar3 = &lbl_83187510;
    uVar2 = 0;
    do {
      if ((param_1 & 0xffffffff) == (ulonglong)*puVar3) {
        uVar4 = (&lbl_83187524)[iVar5 * 9];
        uVar2 = (ulonglong)uVar4;
        trapWord(6,uVar2,0);
        lVar1 = param_2 - (longlong)(int)((param_2 & 0xffffffff) / uVar2) * (longlong)(int)uVar4;
        if (lVar1 != 0) {
          param_2 = (uVar2 - lVar1) + param_2;
        }
        uVar2 = ((ulonglong)uVar4 & 0x1fffffff) << 3;
        trapWord(6,uVar2,0);
        uVar4 = (uint)(((longlong)*(int *)(iVar5 * 0x24 + -0x7ce78ae4) * (longlong)(int)param_2 &
                       0xffffffffU) / uVar2);
        if (((&lbl_83187518)[iVar5 * 9] == 0) || ((&lbl_83187518)[iVar5 * 9] == 3)) {
          uVar4 = uVar4 + 3 & 0xfffffffc;
        }
        return (longlong)(int)uVar4 * (longlong)param_3;
      }
      uVar2 = uVar2 + 0x24;
      iVar5 = iVar5 + 1;
      puVar3 = puVar3 + 9;
      lVar1 = 0;
    } while ((uVar2 & 0xffffffff) != 0x804);
  }
  return lVar1;
}

