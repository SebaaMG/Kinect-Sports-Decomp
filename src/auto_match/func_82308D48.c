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
extern unsigned int *auStack_38;
extern unsigned int *auStack_3c;
extern unsigned int *auStack_40;
extern int fn_824CD030();


void fn_82308D48(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  if ((*(int *)(*(int *)(param_1 + 0x10) + 0xf98) == 0) && (*(int *)(param_1 + 0x44) == 0)) {
    iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x24);
    iVar2 = fn_824CD030(iVar3);
    if (iVar2 != 0) {
      piVar1 = *(int **)(iVar3 + 0xf4);
      if (piVar1 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar1 + 8))(piVar1,auStack_30,auStack_38,auStack_3c,auStack_40);
        *(int *)(param_1 + 0x44) = iVar3;
        if (iVar3 != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xf98) = 1;
        }
      }
    }
  }
  return;
}

