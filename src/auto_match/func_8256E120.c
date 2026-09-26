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
extern int fn_8256DF78();
extern int fn_82587028();


void fn_8256E120(int param_1)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong auStack_30 [6];
  
  auStack_30[0] = (ulonglong)*(uint *)(param_1 + 0x24);
  if (*(float *)(param_1 + 0x28) < (float)((double)*(uint *)(param_1 + 8) / (double)auStack_30[0]))
  {
    iVar4 = 0;
    uVar3 = auStack_30[0];
    do {
      if (0x1ffffffe < uVar3) break;
      iVar4 = iVar4 + 1;
      uVar3 = (uVar3 & 0x7fffffff) << 1;
    } while (iVar4 < 3);
    fn_82587028(param_1);
    piVar1 = *(int **)(param_1 + 4);
    if ((int *)*piVar1 != piVar1) {
      uVar2 = piVar1[1];
      do {
        uVar3 = (ulonglong)**(uint **)(param_1 + 4);
        fn_8256DF78(auStack_30,param_1,uVar3 + 8,uVar3);
      } while (uVar3 != uVar2);
    }
  }
  return;
}

