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
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659CD;
extern unsigned int lbl_832767C8;
extern U64 storeWordConditionalIndexed();


byte fn_8247D628(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  int iVar6;
  char in_RESERVE;
  
  bVar1 = lbl_832659CD == '\0';
  if (!bVar1) {
    uVar4 = (ulonglong)lbl_832767C8;
    do {
      puVar5 = (uint *)(uVar4 + 0xa0);
      uVar2 = *puVar5;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)uVar2,0,uVar4 + 0xa0);
        *puVar5 = uVar3;
        bVar1 = true;
      }
    } while (!bVar1);
    if ((int)uVar2 < 1) {
      iVar6 = *(int *)(param_1 + 0x88);
      goto LAB_8247d680;
    }
  }
  iVar6 = 0;
LAB_8247d680:
  if (iVar6 != 0) {
    return *(byte *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + 8) >> 6 & 1 | 4;
  }
  return 0;
}

