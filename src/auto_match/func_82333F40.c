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
extern int fn_8234E808();
extern int fn_824E4400();
extern int fn_827F57E8();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821CA460;


void fn_82333F40(int *param_1,undefined8 param_2)

{
  int iVar1;
  float *pfVar2;
  
  fn_824E4400(param_1 + 0x1e);
  fn_824E4400(param_1 + 0x20,param_2);
  iVar1 = *param_1;
  fn_827F57E8((double)lbl_821CA460,(double)lbl_8218E8FC,*(undefined4 *)(iVar1 + 0x10));
  iVar1 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)(iVar1 + 0x108) = *(undefined4 *)(iVar1 + 0x10c);
  for (pfVar2 = (float *)(param_1 + 8); pfVar2 != (float *)(param_1 + 0x1a); pfVar2 = pfVar2 + 3) {
    pfVar2[2] = (pfVar2[1] - *pfVar2) + *pfVar2;
  }
  fn_8234E808();
  return;
}

