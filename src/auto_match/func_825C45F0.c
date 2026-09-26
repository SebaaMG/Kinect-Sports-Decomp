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
extern int fn_82522ED8();
extern int fn_825FA960();


void fn_825C45F0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = (int *)0x0;
  piVar4 = (int *)*param_1;
  if (*param_2 != 0) {
    while (piVar1 = piVar4, piVar1 != (int *)0x0) {
      if (*piVar1 == *param_2) {
        if (piVar5 == (int *)0x0) {
          *param_1 = piVar1[2];
        }
        else {
          piVar5[2] = piVar1[2];
        }
        fn_825FA960(*piVar1);
        *piVar1 = 0;
        fn_82522ED8(piVar1);
        break;
      }
      piVar5 = piVar1;
      piVar4 = (int *)piVar1[2];
    }
  }
  piVar4 = (int *)param_1[1];
  piVar5 = (int *)0x0;
  while( true ) {
    piVar1 = piVar4;
    if (piVar1 == (int *)0x0) {
      return;
    }
    if ((int *)*piVar1 == param_2) break;
    piVar4 = (int *)piVar1[1];
    piVar5 = piVar1;
  }
  if (piVar5 == (int *)0x0) {
    param_1[1] = piVar1[1];
  }
  else {
    piVar5[1] = piVar1[1];
  }
  iVar2 = *piVar1;
  iVar3 = *(int *)(iVar2 + 4);
  while (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 0x3c);
    fn_82522ED8();
  }
  *(undefined4 *)(iVar2 + 4) = 0;
  fn_82522ED8(iVar2);
  *piVar1 = 0;
  fn_82522ED8(piVar1);
  return;
}

