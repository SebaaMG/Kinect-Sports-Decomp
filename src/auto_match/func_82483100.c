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
#define _fStack_38 ((*(U64*)&fStack_38))
#define _fStack_40 ((*(U64*)&fStack_40))
#define _fStack_48 ((*(U64*)&fStack_48))
extern unsigned int *auStack_50;
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_82270220();
extern int fn_82270B70();
extern int fn_8227E638();
extern int fn_8227E790();
extern int fn_8247FF88();


void fn_82483100(int param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_50 [8];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  if (*(int *)(param_1 + 0xec) == 0) {
    iVar1 = fn_82270B70();
    for (iVar3 = **(int **)(iVar1 + 0x5c); iVar3 != (*(int **)(iVar1 + 0x5c))[1];
        iVar3 = iVar3 + 0x30) {
      if (*(int *)(*(int *)(iVar3 + 0x24) + 0x530) == 0) {
        return;
      }
    }
    fn_8247FF88(param_1);
  }
  else {
    lVar2 = 0;
    lVar4 = 0;
    iVar3 = 0;
    do {
      if (*(int *)(iVar3 + *(int *)(param_1 + 0x48) + 0x838) != 4) {
        iVar1 = fn_82270220(&fStack_70,&fStack_60,lVar2);
        if (iVar1 != 0) {
          fStack_68 = fStack_60 - fStack_70;
          fStack_64 = fStack_5c - fStack_6c;
          fn_8227E638(*(undefined4 *)(param_1 + 0xec),lVar4,&fStack_70,&fStack_68);
          _fStack_48 = CONCAT44(fStack_70 + fStack_68,fStack_6c);
          _fStack_38 = CONCAT44(fStack_70,fStack_6c + fStack_64);
          _fStack_40 = CONCAT44(fStack_70 + fStack_68,fStack_6c + fStack_64);
          fn_8227E790(*(undefined4 *)(param_1 + 0xec),lVar4,auStack_50);
        }
        lVar2 = lVar2 + 1;
      }
      iVar3 = iVar3 + 0x420;
      lVar4 = lVar4 + 1;
    } while (iVar3 < 0x1080);
  }
  return;
}

