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
extern unsigned int lbl_8324E3B0;


void fn_82F00638(int param_1,int param_2,int param_3,int param_4,longlong param_5,longlong param_6
                  )

{
  short sVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x7820);
  if (iVar3 != 0) {
    iVar2 = 0;
    if (0 < (int)param_5) {
      do {
        *(undefined1 *)(iVar2 + param_2) =
             *(undefined1 *)
              ((short)((short)((int)((*(byte *)(iVar2 + param_2) - 0x80) *
                                     (int)(short)((short)iVar3 + 8) + 4) >> 3) + 0x80) +
              lbl_8324E3B0);
        iVar2 = iVar2 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  if (*(int *)(param_1 + 0x7804) != 0) {
    iVar3 = 0;
    sVar1 = (short)*(undefined4 *)(param_1 + 0x7824) + 8;
    lVar4 = param_6;
    if (0 < (int)param_6) {
      do {
        *(undefined1 *)(iVar3 + param_3) =
             *(undefined1 *)
              ((short)((short)((int)((*(byte *)(iVar3 + param_3) - 0x80) * (int)sVar1 + 4) >> 3) +
                      0x80) + lbl_8324E3B0);
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    iVar3 = 0;
    if (0 < (int)param_6) {
      do {
        *(undefined1 *)(iVar3 + param_4) =
             *(undefined1 *)
              ((short)((short)((int)((*(byte *)(iVar3 + param_4) - 0x80) * (int)sVar1 + 4) >> 3) +
                      0x80) + lbl_8324E3B0);
        iVar3 = iVar3 + 1;
        param_6 = param_6 + -1;
      } while (param_6 != 0);
    }
  }
  return;
}

