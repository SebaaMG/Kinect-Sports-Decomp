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
extern int fn_82AC8C90();
extern int fn_82AE9578();
extern int fn_82AEBAF8();


void fn_82AED4F0(longlong param_1,int *param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  
  iVar1 = *param_2;
  do {
    if (iVar1 == 0) {
      return;
    }
    uVar2 = *(uint *)(iVar1 + 0xc);
    if ((*(byte *)(uVar2 + 0x10) & 1) == 0) {
      fn_82AC8C90(param_1 + 4,iVar1,param_2,uVar2);
      if (param_3 != '\0') {
        for (uVar3 = *(uint *)(*(int *)(uVar2 + 0x1c) + 0x24); uVar3 = uVar3 & 0xfffffffe,
            uVar3 + 0x24 != *(int *)(uVar2 + 0x1c) + 0x20; uVar3 = *(uint *)(uVar3 + 0x28)) {
          if (uVar2 == uVar3) {
            bVar4 = true;
            goto LAB_82aed574;
          }
        }
        bVar4 = false;
LAB_82aed574:
        if (bVar4) goto LAB_82aed5a0;
      }
      cVar5 = fn_82AE9578(param_1,uVar2,0);
      if (cVar5 != '\0') {
        fn_82AEBAF8(param_1,uVar2);
      }
    }
LAB_82aed5a0:
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}

