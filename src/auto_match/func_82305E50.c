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
extern int fn_822BD338();
extern int fn_822C8C08();
extern unsigned int lbl_831CC7A0;


undefined8 fn_82305E50(int param_1)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  undefined **ppuVar4;
  
  ppuVar4 = &lbl_831CC7A0;
  uVar3 = 0;
  uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0x20);
  do {
    cVar2 = fn_822BD338((ulonglong)uVar1 + 4,*ppuVar4);
    if (cVar2 != '\0') {
      fn_822C8C08(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x114),0xffffffff821aca8c);
      return 1;
    }
    uVar3 = uVar3 + 4;
    ppuVar4 = ppuVar4 + 1;
  } while ((uVar3 & 0xffffffff) < 8);
  return 0;
}

