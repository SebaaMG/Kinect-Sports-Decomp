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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))


undefined8 fn_827664B0(int *param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *param_1;
  bVar1 = *(byte *)(*(int *)((param_2 >> 10 & 0x3ffffc) + *(int *)(iVar2 + 0xc)) + (param_2 & 0xfff)
                   );
  uVar5 = (uint)(bVar1 >> 2);
  if ((bVar1 & 3) == 0) {
    uVar3 = 1;
  }
  else {
    if ((bVar1 & 3) == 1) {
      uVar3 = 2;
      uVar4 = (uint)*(byte *)(*(int *)((param_2 + 1 >> 10 & 0x3ffffc) + *(int *)(iVar2 + 0xc)) +
                             (param_2 + 1 & 0xfff)) << 6;
    }
    else {
      if ((bVar1 & 3) < 3) {
        uVar3 = 3;
        uVar4 = (uint)CONCAT11(*(undefined1 *)
                                (*(int *)((param_2 + 2 >> 10 & 0x3ffffc) + *(int *)(iVar2 + 0xc)) +
                                (param_2 + 2 & 0xfff)),
                               *(undefined1 *)
                                (*(int *)((param_2 + 1 >> 10 & 0x3ffffc) + *(int *)(iVar2 + 0xc)) +
                                (param_2 + 1 & 0xfff)));
      }
      else {
        iVar2 = *(int *)(iVar2 + 0xc);
        uVar3 = 4;
        uVar4 = (uint)CONCAT21(CONCAT11(*(undefined1 *)
                                         (*(int *)((param_2 + 3 >> 10 & 0x3ffffc) + iVar2) +
                                         (param_2 + 3 & 0xfff)),
                                        *(undefined1 *)
                                         (*(int *)((param_2 + 2 >> 10 & 0x3ffffc) + iVar2) +
                                         (param_2 + 2 & 0xfff))),
                               *(undefined1 *)
                                (*(int *)((param_2 + 1 >> 10 & 0x3ffffc) + iVar2) +
                                (param_2 + 1 & 0xfff)));
      }
      uVar4 = uVar4 << 6;
    }
    uVar5 = uVar4 | uVar5;
  }
  *param_3 = uVar5;
  return uVar3;
}

