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
extern int fn_82696D38();


int * fn_82697248(int *param_1,char *param_2,int param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  
  if ((*param_2 == '\0') || (bVar2 = false, *param_2 == '\n')) {
    bVar2 = true;
  }
  if (bVar2) {
    if ((param_4 == 0) || (6 < param_4)) {
      iVar1 = *(int *)(*(int *)(param_3 + 0x78) + 0xcc);
    }
    else {
      iVar1 = *(int *)(*(int *)(param_3 + 0x78) + 8);
    }
    *param_1 = iVar1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  else {
    fn_82696D38(param_1,param_2,param_3,0xffffffffffffffff,0);
  }
  return param_1;
}

