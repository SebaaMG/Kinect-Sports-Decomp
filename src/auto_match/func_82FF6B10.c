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
extern int fn_82FF81C0();


undefined8
fn_82FF6B10(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,
             char param_6)

{
  uint uVar1;
  int iVar3;
  undefined8 uVar2;
  int *piVar4;
  uint *puVar5;
  
  for (piVar4 = *(int **)(param_1 + 4); (piVar4 != *(int **)(param_1 + 8) && (*piVar4 != param_2));
      piVar4 = piVar4 + 2) {
  }
  uVar1 = (uint)(*(int **)(param_1 + 8) != piVar4);
  puVar5 = (uint *)(-(uint)(uVar1 != 0) & (uint)(piVar4 + 1));
  if (puVar5 == (uint *)0x0) {
    uVar2 = 0x14;
  }
  else {
    iVar3 = fn_82FF81C0((ulonglong)*puVar5 + 0x3c,CONCAT44(param_3,param_4),param_5,-uVar1);
    if ((iVar3 == 0) ||
       ((param_6 != '\0' &&
        (iVar3 = fn_82FF81C0((ulonglong)*puVar5 + 0x3c,CONCAT44(param_4,param_3),param_5),
        iVar3 == 0)))) {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

