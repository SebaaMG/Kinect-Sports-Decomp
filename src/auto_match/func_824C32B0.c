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
extern int fn_822315A0();
extern int fn_824C04E0();
extern int fn_828ACC40();


void fn_824C32B0(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  iVar1 = param_2[1];
  if (*(int *)(iVar1 + 0x44) == 0) {
    if ((((*(int *)(iVar1 + 0x48) != 0) &&
         (iVar2 = *(int *)(*(int *)(iVar1 + 0x48) + 8), *(int *)(iVar2 + 0xa0) != 0)) &&
        (cVar3 = fn_828ACC40(iVar2), cVar3 != '\0')) && (*(int *)(iVar2 + 0xb4) != 1)) {
      *(undefined4 *)(iVar1 + 0x44) = 6;
      iVar2 = *(int *)(iVar1 + 0x6c);
      *(undefined4 *)(iVar1 + 0x6c) = 0;
      *(undefined4 *)(iVar1 + 0x68) = 0;
      if (iVar2 != 0) {
        fn_822315A0();
      }
      fn_824C04E0(iVar1,1);
      return;
    }
  }
  else if (*(int *)(iVar1 + 0x14) != 1) {
    return;
  }
  (**(code **)(*param_2 + 4))(param_1,param_2);
  return;
}

