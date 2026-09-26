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
extern int fn_825603C8();
extern int fn_825604A0();


void fn_8245FA50(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_2 == 0x52) {
    iVar2 = *(int *)(param_1 + 0xa0);
    if (*(int *)(iVar2 + 0x180) == 0) {
      return;
    }
    fn_825604A0(iVar2);
    uVar1 = 0;
  }
  else {
    if (*param_2 != 0x53) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0xa0);
    if (*(int *)(iVar2 + 0x180) != 0) {
      return;
    }
    fn_825603C8(0,iVar2,1);
    uVar1 = 1;
  }
  *(undefined4 *)(iVar2 + 0x180) = uVar1;
  return;
}

