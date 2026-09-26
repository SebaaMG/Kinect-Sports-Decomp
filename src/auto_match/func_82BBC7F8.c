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
extern int fn_82AB15D0();
extern int fn_82BBC410();


undefined8 fn_82BBC7F8(int *param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  
  if (param_2 == 0x21) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0da8,0xffffffff820e0c10,0x219);
  }
  if (*(char *)(param_1 + 0x1d4) == '\0') {
    iVar2 = 0;
    param_1 = param_1 + 0x104;
    do {
      if ((param_1[-0x10] == param_2) && (*param_1 == param_3)) {
        *param_4 = iVar2;
        return 1;
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
    } while (iVar2 < 0x10);
  }
  else {
    lVar4 = 0;
    piVar3 = param_1;
    do {
      cVar1 = fn_82BBC410(param_1,lVar4);
      if (((cVar1 != '\0') && (*piVar3 == param_2)) && (piVar3[0x10] == param_3)) {
        *param_4 = (int)lVar4;
        return 1;
      }
      lVar4 = lVar4 + 1;
      piVar3 = piVar3 + 1;
    } while ((int)lVar4 < 0x10);
  }
  return 0;
}

