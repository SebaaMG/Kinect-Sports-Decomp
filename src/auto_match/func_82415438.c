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
extern int fn_82415550();
extern int fn_82536690();
extern int fn_8265C9E0();


void fn_82415438(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *apuStack_20 [2];
  
  cVar2 = fn_82415550();
  if (cVar2 == '\0') {
    apuStack_20[0] = (undefined4 *)fn_8265C9E0(0xc);
    if (apuStack_20[0] == (undefined4 *)0x0) {
      apuStack_20[0] = (undefined4 *)0x0;
    }
    else {
      *apuStack_20[0] = param_2;
      apuStack_20[0][1] = 0;
      apuStack_20[0][2] = 0;
    }
    iVar1 = param_1[6] - param_1[5] >> 2;
    if (iVar1 != 0) {
      *(undefined4 **)(*(int *)(iVar1 * 4 + param_1[5] + -4) + 8) = apuStack_20[0];
    }
    fn_82536690(param_1 + 5,apuStack_20);
    iVar1 = *(int *)(*param_1 * 4 + param_1[1]);
    if (*(int *)(iVar1 + 4) == 0) {
      *(undefined4 **)(iVar1 + 4) = apuStack_20[0];
    }
    else if (*(int *)(iVar1 + 8) == 0) {
      *(undefined4 **)(iVar1 + 8) = apuStack_20[0];
    }
    cVar2 = (**(code **)**(undefined4 **)(*param_1 * 4 + param_1[1]))();
    if (cVar2 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  return;
}

