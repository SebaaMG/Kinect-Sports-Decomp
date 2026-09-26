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
extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_826E9FE8();
extern int fn_8270D2D8();
extern unsigned int lbl_82005FD0;
extern unsigned int lbl_831E7E64;


undefined8 fn_82693880(int param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  int *piVar2;
  char cVar5;
  ulonglong uVar1;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  piVar2 = (int *)fn_826E9FE8(param_2,param_3,param_4);
  if (*(int *)(param_1 + 8) != 0) {
    fn_8267C4F0();
  }
  *(int **)(param_1 + 8) = piVar2;
  if ((piVar2 != (int *)0x0) && (cVar5 = (**(code **)(*piVar2 + 8))(), cVar5 != '\0')) {
    if ((param_3 & 0x20) != 0) {
      uVar1 = fn_8267B890(lbl_831E7E64,0x28,0);
      if ((uVar1 & 0xffffffff) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = fn_8270D2D8(uVar1,*(undefined4 *)(param_1 + 8));
      }
      if (*(int *)(param_1 + 8) != 0) {
        fn_8267C4F0();
      }
      *(undefined4 *)(param_1 + 8) = uVar3;
    }
    return 1;
  }
  puVar4 = (undefined4 *)fn_8267B890(lbl_831E7E64,8,0);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = 1;
    *puVar4 = &lbl_82005FD0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    fn_8267C4F0();
  }
  *(undefined4 **)(param_1 + 8) = puVar4;
  return 0;
}

