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
extern int fn_8223AAC0();
extern int fn_823FCDC8();
extern int fn_8265C9E0();


int * fn_823F81F8(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  
  uVar1 = fn_8265C9E0(0x44);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_823FCDC8(uVar1,param_2,param_3,param_4,param_5);
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 4;
  *(undefined4 *)(iVar2 + 0x1c) = 8;
  *(undefined4 *)(iVar2 + 0x20) = 0x14;
  if (iVar2 != 0) {
    cVar3 = fn_8223AAC0(iVar2);
    if (cVar3 != '\0') {
      if (param_1[1] != 0) {
        fn_822315A0();
      }
      param_1[1] = iVar2;
      *param_1 = iVar2 + 0xc;
    }
    fn_822315A0(iVar2);
  }
  if (*(int *)(param_2 + 4) != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_3 + 4) != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_4 + 4) != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_5 + 4) != 0) {
    fn_822315A0();
  }
  return param_1;
}

