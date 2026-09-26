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
extern unsigned int iStack_c;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8208ED48;
extern unsigned int lbl_8216C698;
extern unsigned int lbl_8216DE58;
extern unsigned int lbl_8216DE5C;
extern unsigned int lbl_821AAD20;


double fn_82FC91D0(double param_1)

{
  float fVar1;
  ulonglong uVar2;
  int iStack_c;
  
  if (param_1 <= (double)lbl_8216C698) {
    return (double)lbl_821AAD20;
  }
  if ((double)lbl_821AAD20 <= param_1) {
    return (double)lbl_82002AE0;
  }
  uVar2 = (ulonglong)(param_1 + (double)lbl_8208ED48);
  iStack_c = (int)uVar2;
  fVar1 = (float)(param_1 + (double)lbl_8208ED48) - (float)(uVar2 & 0xffffffff);
  return (double)(*(float *)(&lbl_8216DE58 + iStack_c * 4) * (lbl_82002AE0 - fVar1) +
                 *(float *)(&lbl_8216DE5C + iStack_c * 4) * fVar1);
}

