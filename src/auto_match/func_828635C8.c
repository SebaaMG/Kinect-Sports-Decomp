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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern unsigned int fStack_4c;
extern int fn_827EAAF0();
extern int fn_827EB678();
extern int fn_8285A808();
extern int fn_82863400();
extern unsigned int uRam832116a8;
extern unsigned int uRam832116b0;


undefined8 fn_828635C8(void)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_50 [4];
  float fStack_4c;
  undefined1 auStack_48 [72];
  
  iVar1 = fn_8285A808();
  lVar5 = 0;
  auStack_50[0] = 0;
  if (*(int *)(iVar1 + 0x94) == 0) {
    iVar4 = 0;
    if (uRam832116a8 != 0) {
      do {
        iVar2 = fn_827EB678(lVar5 + (ulonglong)uRam832116b0 + 4,
                             (ulonglong)*(uint *)(iVar1 + 0x90) + 4,
                             (ulonglong)*(uint *)(iVar1 + 0x90) + 0x10,auStack_50);
        if (iVar2 != 0) {
          return 1;
        }
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 0xd4;
      } while (iVar4 < (int)(uint)uRam832116a8);
    }
  }
  else {
    iVar4 = 0;
    if (uRam832116a8 != 0) {
      do {
        uVar3 = (ulonglong)uRam832116b0;
        fn_82863400((ulonglong)*(uint *)(iVar1 + 0x90) + 4,
                      (ulonglong)*(uint *)(iVar1 + 0x90) + 0x10,*(undefined4 *)(iVar1 + 0x94),
                      auStack_48,&fStack_4c);
        iVar2 = fn_827EAAF0((double)fStack_4c,lVar5 + uVar3 + 4,auStack_48);
        if (iVar2 != 0) {
          return 1;
        }
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 0xd4;
      } while (iVar4 < (int)(uint)uRam832116a8);
    }
  }
  return 0;
}

