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
extern unsigned int *auStack_30;
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82D80F08();
extern int fn_82DC9B80();


void fn_82DC3428(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  undefined1 auStack_30 [48];
  
  if (param_2 != 0) {
    iVar2 = (**(code **)(**(int **)(param_2 + 0xc) + 0x20))();
    if (iVar2 != 0xb) {
      iVar2 = *(int *)(param_2 + 0x14);
      if ((((*(int *)(iVar2 + 0x10) != 0) &&
           (iVar1 = *(int *)(param_2 + 0x18), *(int *)(iVar1 + 0x10) != 0)) &&
          (iVar3 = fn_82DC9B80(param_1 + -0x40,iVar2,iVar1), iVar3 < 1)) &&
         ((iVar3 = *(int *)(param_1 + -4), iVar3 == 0 ||
          (pcVar4 = (char *)(**(code **)(*(int *)(iVar3 + 8) + 4))
                                      (auStack_30,iVar3 + 8,iVar2 + 0x10,iVar1 + 0x10),
          *pcVar4 != '\0')))) {
        iVar3 = *(int *)(iVar2 + 8);
        if (iVar3 != 0) {
          *(int *)(iVar3 + 0x94) = *(int *)(iVar3 + 0x94) + 1;
          fn_82D80F08(iVar3,iVar2,iVar1);
          lVar5 = (ulonglong)*(uint *)(iVar3 + 0x94) - 1;
          *(int *)(iVar3 + 0x94) = (int)lVar5;
          if ((lVar5 == 0) && (*(char *)(iVar3 + 0x9c) == '\0')) {
            if (*(int *)(iVar3 + 0x8c) != 0) {
              fn_82D80C18(iVar3);
            }
            if ((*(int *)(iVar3 + 0xa4) == 1) && (*(int *)(iVar3 + 0x90) != 0)) {
              fn_82D80C30(iVar3);
            }
          }
        }
      }
    }
  }
  return;
}

