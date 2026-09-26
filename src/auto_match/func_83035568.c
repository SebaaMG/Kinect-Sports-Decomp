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
extern unsigned int fStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_40;
extern unsigned int uStack_2c;
extern unsigned int uStack_3c;


void fn_83035568(double param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iStack_40;
  uint uStack_3c;
  int iStack_38;
  float fStack_34;
  undefined1 uStack_2c;
  
  if (*(int *)(param_2 + 0x14) != *(int *)(param_2 + 0x10)) {
    iVar1 = *(int *)(param_2 + 0x10);
    fStack_34 = (float)param_1;
    uStack_3c = (uint)(LZCOUNT((int)param_3) << 0x1a) & 0x80000000 | uStack_3c & 0x3fffffff;
    iStack_40 = param_2;
    if (iVar1 != *(int *)(param_2 + 0x14)) {
      do {
        if ((*(int *)(iVar1 + 8) != 0) && (*(short *)(*(int *)(iVar1 + 8) + 0x18) != 0)) {
          iStack_38 = iVar1 + 0xc;
          uStack_2c = 0;
          (**(code **)(**(int **)(iVar1 + 8) + 0x4c))
                    (*(int **)(iVar1 + 8),0xffffffff830354f8,param_3,&iStack_40);
        }
        iVar1 = iVar1 + 0x18;
      } while (iVar1 != *(int *)(param_2 + 0x14));
    }
  }
  return;
}

