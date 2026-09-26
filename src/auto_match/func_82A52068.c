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
extern int fn_82C2B590();


void fn_82A52068(int *param_1,int param_2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_1;
  if (param_1[2] != 0) {
    fn_82C2B590();
    param_1[2] = 0;
  }
  if (((iVar1 != 0) && (param_2 != 0)) && (*(short *)(iVar1 + 0x22) != 0)) {
    iVar3 = 0;
    do {
      iVar4 = iVar3 * 0x6f0 + param_2;
      if (iVar4 != 0) {
        if ((*(int *)(iVar4 + 0x1a8) != 0) && (*(int *)(*(int *)(iVar4 + 0x1a8) + 4) != 0)) {
          fn_82C2B590();
          *(undefined4 *)(*(int *)(iVar4 + 0x1a8) + 4) = 0;
        }
        if (*(int *)(iVar4 + 0x1a8) != 0) {
          fn_82C2B590();
          *(undefined4 *)(iVar4 + 0x1a8) = 0;
        }
      }
      sVar2 = (short)iVar3 + 1;
      iVar3 = (int)sVar2;
    } while ((int)sVar2 < (int)(uint)*(ushort *)(iVar1 + 0x22));
  }
  return;
}

