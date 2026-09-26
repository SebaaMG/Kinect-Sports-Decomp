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
extern int fn_8242D540();
extern int fn_8255B1E0();
extern int fn_8255B400();
extern unsigned int lbl_821CC160;


void fn_8242D0B8(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(*(int *)(param_1 + 0x174) + 0xb4) != 0) != (bool)param_2) {
    if (param_2 == '\0') {
      fn_8242D540(param_1,1);
      fn_8255B400(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x174) + 0x9c) + 0x844),
                        *(undefined4 *)(*(int *)(param_1 + 0x174) + 0xb4));
      *(undefined4 *)(*(int *)(param_1 + 0x174) + 0xb4) = 0;
    }
    else {
      fn_8242D540(param_1,0);
      iVar1 = *(int *)(param_1 + 0x174);
      uVar2 = fn_8255B1E0((double)lbl_821CC160,*(undefined4 *)(*(int *)(iVar1 + 0x9c) + 0x844)
                                ,iVar1 + 0xb0,1,0,0,0,0);
      *(undefined4 *)(iVar1 + 0xb4) = uVar2;
    }
  }
  return;
}

