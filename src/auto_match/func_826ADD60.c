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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
extern int fn_826AA290();


void fn_826ADD60(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_3;
  if (0 < iVar3) {
    for (; (*(int *)(param_1 + 0xa8) != 0 && (-1 < iVar3)); iVar3 = iVar3 + -1) {
      iVar2 = *(int *)(param_1 + 0xa8) * 0xc + *(int *)(param_1 + 0xa4);
      uVar1 = *(uint *)(iVar2 + -8);
      if ((uVar1 <= param_2) &&
         (iVar2 = *(int *)(iVar2 + -0xc),
         param_2 < CONCAT11(*(undefined1 *)(iVar2 + 2),*(undefined1 *)(iVar2 + 1)) + uVar1)) {
        return;
      }
      *param_3 = *param_3 + -1;
      fn_826AA290(param_1 + 0xa4,(ulonglong)*(uint *)(param_1 + 0xa8) - 1);
    }
  }
  return;
}

