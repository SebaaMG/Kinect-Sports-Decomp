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
extern unsigned int *auStack_40;
extern int fn_8288CBD8();
extern int fn_82897620();
extern int fn_82897BA8();
extern int fn_8289C078();
extern int fn_8289C128();
extern int fn_8289CB70();


void fn_8288DB98(int *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar5;
  int iVar4;
  ulonglong uVar6;
  undefined4 auStack_40 [16];
  
  iVar2 = (**(code **)(*param_1 + 8))();
  uVar6 = 0;
  uVar1 = *(uint *)(*(int *)(iVar2 + 0x10) + 8);
  if (uVar1 != 0) {
    do {
      iVar3 = fn_82897620(iVar2,uVar6);
      cVar5 = fn_82897BA8(*(undefined4 *)(iVar3 + 0x18));
      if (cVar5 == '\0') {
        auStack_40[0] = fn_8289CB70(iVar3,param_2,1,0);
        fn_8288CBD8(param_3,auStack_40);
        if (((*(int **)(iVar3 + 0x20) == (int *)0x0) ||
            (iVar4 = (**(code **)(**(int **)(iVar3 + 0x20) + 4))(), iVar4 == 0)) &&
           ((*(int **)(iVar3 + 0x20) == (int *)0x0 ||
            (iVar4 = (**(code **)(**(int **)(iVar3 + 0x20) + 0x14))(), iVar4 == 0)))) {
          if ((*(int **)(iVar3 + 0x20) != (int *)0x0) &&
             (iVar4 = (**(code **)(**(int **)(iVar3 + 0x20) + 0xc))(), iVar4 != 0)) {
            fn_8289C128(iVar3);
          }
        }
        else {
          fn_8289C078(iVar3,param_2);
        }
      }
      uVar6 = uVar6 + 1;
    } while ((uVar6 & 0xffffffff) < (ulonglong)uVar1);
  }
  return;
}

