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
extern int fn_822315A0();
extern int fn_82359698();
extern int fn_8236B578();
extern int fn_823C3BA0();
extern int fn_82522588();
extern unsigned int iStack_2c;


void fn_823DEC90(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar2 = fn_8236B578(iVar1);
    if (iVar2 != 0) {
      fn_823C3BA0(iVar1);
      for (uVar4 = (ulonglong)*(uint *)(iVar1 + 0x30);
          (uVar4 & 0xffffffff) != (ulonglong)*(uint *)(iVar1 + 0x34); uVar4 = uVar4 + 8) {
        piVar3 = (int *)fn_82522588(auStack_30,uVar4);
        iVar2 = *(int *)(*piVar3 + 0x260);
        if (iVar2 < 2) {
          iVar2 = 2;
        }
        *(int *)(*piVar3 + 0x260) = iVar2;
        if (iStack_2c != 0) {
          fn_822315A0();
        }
      }
      fn_82359698(iVar1,2);
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
  }
  return;
}

