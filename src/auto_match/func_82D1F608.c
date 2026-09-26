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
extern unsigned int lbl_821348E4;
extern unsigned int uStack_4c;


undefined8 fn_82D1F608(double param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  double dVar3;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  
  iVar1 = 0;
  if (0 < param_4[1]) {
    iVar2 = 0;
    do {
      uStack_4c = *(undefined4 *)(*param_4 + iVar2);
      ppuStack_50 = &lbl_821348E4;
      dVar3 = (double)(**(code **)(**(int **)(param_2 + 0x38) + 4))
                                (*(int **)(param_2 + 0x38),param_3,&ppuStack_50,1);
      if (dVar3 < param_1) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < param_4[1]);
  }
  return 0;
}

