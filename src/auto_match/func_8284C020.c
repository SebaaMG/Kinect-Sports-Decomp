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
extern unsigned int *auStack_44;
extern int fn_8284A128();
extern int fn_8284ADC8();
extern int fn_8284B810();
extern int fn_82BA02A8();
extern unsigned int iStack0000001c;
extern unsigned int iStack00000024;
extern unsigned int iStack0000002c;
extern unsigned int iStack_10;
extern unsigned int iStack_24;
extern unsigned int iStack_28;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int stack0x00000024;


int * fn_8284C020(int *param_1,int param_2,int param_3,int param_4)

{
  int *piStack00000014;
  int iStack0000001c;
  int iStack00000024;
  int iStack0000002c;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined1 auStack_44 [4];
  int *piStack_40;
  int iStack_3c;
  int iStack_38;
  int *piStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_10;
  
  piStack_40 = *(int **)(param_2 + 4);
  iStack_50 = *piStack_40;
  piStack00000014 = param_1;
  iStack0000001c = param_2;
  iStack00000024 = param_3;
  iStack0000002c = param_4;
  iStack_3c = iStack_50;
  fn_82BA02A8(&iStack_50,param_2);
  if (iStack_50 == iStack00000024) {
    iStack_4c = *(int *)(iStack0000001c + 4);
    iStack_38 = iStack_4c;
    fn_82BA02A8(&iStack_4c,iStack0000001c);
    if (iStack_4c == iStack0000002c) {
      fn_8284B810(iStack0000001c);
      piStack_2c = *(int **)(iStack0000001c + 4);
      iStack_28 = *piStack_2c;
      *piStack00000014 = iStack_28;
      fn_82BA02A8(piStack00000014,iStack0000001c);
      return piStack00000014;
    }
  }
  while (iStack0000002c != iStack00000024) {
    iStack_24 = iStack00000024;
    fn_8284A128(&stack0x00000024);
    iStack_48 = iStack_24;
    fn_8284ADC8(auStack_44,iStack0000001c,iStack_24);
  }
  iStack_10 = iStack00000024;
  *piStack00000014 = iStack00000024;
  fn_82BA02A8(piStack00000014,iStack0000001c);
  return piStack00000014;
}

