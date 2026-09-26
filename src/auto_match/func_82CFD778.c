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
extern int fn_82CEAE80();
extern int fn_82CEAEA8();


longlong fn_82CFD778(int param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  bVar1 = *(byte *)(param_1 + 0xc);
  if ((bVar1 == 0x18) || (bVar1 == 0x1f)) {
    bVar1 = *(byte *)(param_1 + 0xd);
  }
  if (bVar1 == 0x19) {
    lVar3 = 1;
    lVar4 = 0;
    iVar2 = fn_82CEAE80(*(undefined4 *)(param_1 + 4));
    if (0 < iVar2) {
      do {
        fn_82CEAEA8(*(undefined4 *)(param_1 + 4),lVar4);
        iVar2 = ((int (*)())fn_82CFD778)();
        if ((int)lVar3 < iVar2) {
          fn_82CEAEA8(*(undefined4 *)(param_1 + 4),lVar4);
          lVar3 = ((int (*)())fn_82CFD778)();
        }
        lVar4 = lVar4 + 1;
        iVar2 = fn_82CEAE80(*(undefined4 *)(param_1 + 4));
      } while ((int)lVar4 < iVar2);
    }
  }
  else {
    lVar3 = (longlong)*(short *)((uint)bVar1 * 0xc + -0x7ce80976);
  }
  if (((*(ushort *)(param_1 + 0x10) & 0x180) != 0) &&
     (lVar4 = (-(ulonglong)((*(ushort *)(param_1 + 0x10) >> 8 & 1) != 0) & 8) + 8,
     (int)lVar3 < (int)lVar4)) {
    lVar3 = lVar4;
  }
  return lVar3;
}

