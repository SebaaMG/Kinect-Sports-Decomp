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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82AA66A8();
extern int fn_82B50418();
extern unsigned int uStack_60;


void fn_82B51E30(int param_1,undefined8 param_2,ulonglong param_3,int param_4,uint param_5,
                  int param_6,char param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong *puVar4;
  undefined8 uStack_60;
  
  iVar1 = (int)param_3 * 0x28;
  uVar3 = *(uint *)(*(int *)(param_1 + 0xc) + iVar1 + 4);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c0);
  }
  if ((param_7 != '\0') && ((uVar3 & 4) == 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c0);
  }
  uVar3 = param_5 + param_6;
  if (param_5 < uVar3) {
    puVar4 = (ulonglong *)(param_5 * 8 + param_4);
    do {
      if ((param_4 == 0) || (*(int *)puVar4 == 0)) {
        uStack_60 = CONCAT44((((U64)(uStack_60) >> 0) & 0xFFFFFFFF),
                             (param_5 & 0x3fff) << 2 |
                             (uint)((param_3 & 0xffffffff) << 0x11) | (((U64)(uStack_60) >> 32) & 0xFFFFFFFF) & 0x10000) |
                    0x100000000;
      }
      else if (param_7 == '\0') {
        uStack_60 = *puVar4;
      }
      else {
        iVar2 = *(int *)(param_1 + 0xc) + iVar1;
        uStack_60 = CONCAT44(puVar4,(int)(((ulonglong)param_5 & 0x3fff | (param_3 & 0x1ffff) << 0xf)
                                         << 2)) | 3;
        *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 2;
      }
      fn_82B50418(param_2,uStack_60);
      param_5 = param_5 + 1;
      puVar4 = puVar4 + 1;
    } while (param_5 < uVar3);
  }
  return;
}

