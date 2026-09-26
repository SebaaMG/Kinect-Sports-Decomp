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
extern int fn_82359698();
extern int fn_8236B4F0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831D1A54;


void fn_823DF3F0(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 8);
  fVar1 = (float)((double)*(float *)(iVar2 + 0xef0) + param_1);
  *(float *)(iVar2 + 0xef0) = fVar1;
  if (lbl_831D1A54 < fVar1) {
    if (*(char *)(iVar2 + 0x134c) != '\0') {
      *(undefined1 *)(iVar2 + 0x134c) = 0;
    }
    fn_82359698(iVar2,7);
    if (*(int *)(*(int *)(iVar2 + 0x4b0) + 0xd4) == 0) {
      fn_8236B4F0((double)lbl_821CA460,iVar2);
    }
  }
  return;
}

