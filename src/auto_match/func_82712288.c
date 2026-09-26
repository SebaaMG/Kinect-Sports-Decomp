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
extern int fn_826944C8();
extern int fn_82694548();
extern int fn_82694D70();
extern unsigned int lbl_83156338;


void fn_82712288(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar5;
  longlong lVar4;
  longlong lVar6;
  undefined **ppuVar7;
  
  ppuVar7 = &lbl_83156338;
  lVar6 = 0x93;
  do {
    pcVar2 = *ppuVar7;
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar3 = fn_82694548(param_1 + 0x24c,pcVar2,pcVar5 + (-1 - (int)pcVar2),0xffffffff80000000)
    ;
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    *(int *)(param_1 + 0x7cea9cc8 + (int)ppuVar7) = iVar3;
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    fn_82694D70();
    lVar4 = (ulonglong)*(uint *)(iVar3 + 8) - 1;
    *(int *)(iVar3 + 8) = (int)lVar4;
    if (lVar4 == 0) {
      fn_826944C8(iVar3);
    }
    lVar6 = lVar6 + -1;
    ppuVar7 = ppuVar7 + 1;
  } while (lVar6 != 0);
  return;
}

