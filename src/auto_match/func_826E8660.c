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
extern int fn_8268B738();
extern int fn_8268BEA8();
extern int fn_826E7800();
extern unsigned int iStack_1c;
extern unsigned int lbl_8200D6D8;


bool fn_826E8660(int param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined **ppuStack_20;
  int iStack_1c;
  
  *(undefined1 *)(param_1 + 0x15) = 0;
  if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 1) {
    fn_826E7800(param_1,1);
  }
  cVar2 = *(char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  bVar1 = cVar2 != '\0';
  if (bVar1) {
    ppuStack_20 = &lbl_8200D6D8;
    iStack_1c = param_1;
    fn_8268B738(param_2,&ppuStack_20);
  }
  else {
    fn_8268BEA8();
  }
  return bVar1;
}

