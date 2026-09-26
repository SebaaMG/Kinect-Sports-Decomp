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
extern int fn_827BCFC0();


undefined8 fn_827BD550(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[0x5f];
  *(undefined4 *)(*param_1 + 0x14) = 0x79;
  *(int *)(*param_1 + 0x18) = iVar2;
  *(int *)(*param_1 + 0x1c) = param_2;
  (**(code **)(*param_1 + 4))(param_1,0xffffffffffffffff);
  do {
    if (iVar2 < 0xc0) {
LAB_827bd608:
      iVar3 = 2;
    }
    else if ((((iVar2 < 0xd0) || (0xd7 < iVar2)) || (iVar2 == (param_2 + 1U & 7) + 0xd0)) ||
            (iVar2 == (param_2 + 2U & 7) + 0xd0)) {
      iVar3 = 3;
    }
    else {
      if ((iVar2 == (param_2 - 1U & 7) + 0xd0) || (iVar2 == (param_2 - 2U & 7) + 0xd0))
      goto LAB_827bd608;
      iVar3 = 1;
    }
    *(undefined4 *)(*param_1 + 0x14) = 0x61;
    *(int *)(*param_1 + 0x18) = iVar2;
    *(int *)(*param_1 + 0x1c) = iVar3;
    (**(code **)(*param_1 + 4))(param_1,4);
    if (iVar3 == 1) {
      param_1[0x5f] = 0;
      return 1;
    }
    if (iVar3 == 2) {
      cVar1 = fn_827BCFC0(param_1);
      if (cVar1 == '\0') {
        return 0;
      }
      iVar2 = param_1[0x5f];
    }
    else if (iVar3 == 3) {
      return 1;
    }
  } while( true );
}

