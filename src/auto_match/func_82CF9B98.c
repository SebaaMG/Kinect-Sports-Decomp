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
extern int fn_82CE5410();
extern int fn_82CF9B00();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


void fn_82CF9B98(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iStack0000001c;
  
  uVar3 = *param_1;
  uVar1 = param_1[2];
  if (param_2 != uVar1 - uVar3) {
    iStack0000001c = param_2;
    if (param_2 < 1) {
      fn_82CF9B00(param_1);
    }
    else {
      if ((uVar3 != 0) && (*(char *)(param_1 + 4) != '\0')) {
        iVar2 = fn_82CE5410();
        (**(code **)(**(int **)(iVar2 + 0x14) + 0x10))
                  (*(int **)(iVar2 + 0x14),(ulonglong)uVar3,(ulonglong)uVar1 - (ulonglong)uVar3,1);
      }
      *(undefined1 *)(param_1 + 4) = 1;
      iVar2 = fn_82CE5410();
      uVar3 = (**(code **)(**(int **)(iVar2 + 0x14) + 0xc))
                        (*(int **)(iVar2 + 0x14),&stack0x0000001c,1);
      *param_1 = uVar3;
      param_1[1] = uVar3;
      param_1[2] = uVar3 + iStack0000001c;
      param_1[3] = (uVar3 + iStack0000001c) - 0x20;
    }
  }
  return;
}

