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
extern int fn_829CFFE0();
extern int fn_829D02F0();
extern unsigned int lbl_8326183C;


void fn_82F4D720(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = 0;
  uVar6 = 0;
  iVar3 = lbl_8326183C;
  do {
    iVar1 = iVar4 + iVar3;
    if (*(int *)(iVar1 + 0x14) != 0) {
      uVar2 = *(int *)(iVar1 + 0x10) + 1;
      iVar5 = uVar2 + (((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0) & 0x7fffffff)
                      * -2;
      iVar1 = fn_829CFFE0(*(undefined4 *)(iVar1 + 4),0,(uVar6 + iVar5 + 2) * 4 + iVar3);
      iVar3 = lbl_8326183C;
      if (-1 < iVar1) {
        iVar3 = *(int *)(iVar4 + lbl_8326183C + 0x10);
        if (iVar3 != -1) {
          fn_829D02F0(*(undefined4 *)(iVar4 + lbl_8326183C + 4),
                            *(undefined4 *)((iVar3 + uVar6 + 2) * 4 + lbl_8326183C));
        }
        iVar3 = lbl_8326183C;
        *(int *)(iVar4 + lbl_8326183C + 0x10) = iVar5;
      }
    }
    uVar6 = uVar6 + 5;
    iVar4 = iVar4 + 0x14;
  } while (uVar6 < 0xf);
  return;
}

